#include <stdio.h>

static FILE *file = NULL;
static int is_opened = 0;

void log_instr(char *out_str) {

    if (!is_opened) {
        // file = fopen("/home/alex/mipt/LLVM/llvm_pass/artefacts/runtime_stat.csv", "w");
        file = fopen(RUNTIME_STAT_CSV_PATH, "w");
        if (file == NULL) {
            printf("ERROR! Can't open log file!\n");
            return;
        }

        is_opened = 1;

        if (fputs("Opcode,Users\n", file) == EOF) {
            printf("ERROR! Can't write to log file!\n");
        }
    }

    if (fputs(out_str, file) == EOF) {
        printf("ERROR! Can't write to log file!\n");
    }

}
