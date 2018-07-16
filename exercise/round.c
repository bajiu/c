#include <stdio.h>



int main(int argc, char const *argv[]) {

    int a = 1;
    int b = 1;
    while (a <= 10) {
        b *= a;
        a++;
    }

    printf("%d\n", b);

    return 0;
}
