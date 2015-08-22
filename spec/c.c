#include <stdio.h>
#include "my.h"

int ok() {
        return 0;
}
int ko() {
        return -1;
}

int main(int argc, char const *argv[]) {
        /* code */
        if (argc >= 0) {
                for (size_t i = 0; i < argc; i++) {
                        printf("%s,\n", argv[] );
                }
                return ok();
        }
        else if (argc <= 0) {
                return ko();
        }
}
