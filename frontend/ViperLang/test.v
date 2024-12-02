function my_foo(int a[5], int b, int c)
    a = 5 + b + my_foo(5);
    if (a > b + 5)
        c[3] = 3;
    end
    for (a; a < 5; a = a + 1)
        my_foo(a);
    end
    simFlush();
end