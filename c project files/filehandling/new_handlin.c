#include <stdio.h>

int main() {
    FILE *fileptr = fopen("D:\\C_program\\hello.txt", "r");
    char str[100];

    if (fileptr == NULL) {
        printf("File cannot be opened!\n");
        return 1;
    }

    while (fgets(str, 10, fileptr) != NULL) {
        printf("%s", str);
    }

    fclose(fileptr);
    return 0;
}
