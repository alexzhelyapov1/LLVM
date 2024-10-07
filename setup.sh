#!/bin/bash


wsl_setup() {
    sudo apt update
    sudo apt upgrade -y
    sudo apt install llvm clang cmake ninja-build libsdl2-dev -y
    sudo apt install x11-apps -y
    sudo apt install python3-pip -y
    pip install -r requirements.txt


    export DISPLAY=$(cat /etc/resolv.conf | grep nameserver | awk '{print $2}'):0.0
}


mac_setup() {
    echo "WARNING! This feature does not testes enough!"
    brew install SDL2
    brew install SDL2_image
    brew install SDL2_ttf
}


cmake_config() {
    build="$(dirname $0)/build"
    mkdir -p "$build"
    cd "$build"
    cmake -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++ -GNinja ../
}


print_help() {
    echo -e "Option:Descripton\
        \n : \n--wsl-setup:Install all requirements for WSL.\
        \n : \n--mac-setup:Install all requirements for Mac OS.\
        \n : \n--cmake:Configure build and default cmake command." |
    column -t -s ":"
}


(( $# == 0 )) && print_help


while (( $# > 0)); do
    if [[ "$1" == "--wsl-setup" ]]; then
        wsl_setup
    elif [[ "$1" == "--mac-setup" ]]; then
        mac_setup
    elif [[ "$1" == "--cmake" ]]; then
        cmake_config
    elif [[ "$1" == "--help" ]]; then
        print_help
    else
        echo "Unknown option: '$1'. See --help for more."
    fi
    
    shift
done