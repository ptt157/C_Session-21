#include <stdio.h>

int main() {
    FILE *inFile = fopen("bt01.txt", "r");
    if (inFile != NULL) {
        char c = fgetc(inFile);
        if (c != EOF) {
            printf("Ky tu dau tien trong file: %c\n", c);
        } else {
            printf("File rong.\n");
        }
        fclose(inFile);
    } else {
        printf("Khong the mo file.\n");
    }

    return 0;
}

