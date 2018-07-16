#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[]) {

    char name[40];
    printf("There`re char\n");
    scanf("%s", name);
    printf("%s\n", name);
    int letters = strlen(name);
    int size = sizeof name;
    printf("%d\n%d\n",size ,letters);






    return 0;
}
