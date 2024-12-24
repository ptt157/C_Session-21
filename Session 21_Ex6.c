#include <stdio.h>

int main() {
    FILE *inFile = fopen("bt01.txt", "r");
    FILE *outFile = fopen("bt06.txt", "w");

    if (inFile == NULL) {
        printf("Khong the mo file bt01.txt de doc.\n");
        return 1;
    }

    if (outFile == NULL) {
        printf("Khong the mo file bt06.txt de ghi.\n");
        fclose(inFile);
        return 1;
    }

    char ch;
    while ((ch = fgetc(inFile)) != EOF) {
        fputc(ch, outFile);
    }

    printf("Sao chep noi dung thanh cong tu bt01.txt sang bt06.txt.\n");

    fclose(inFile);
    fclose(outFile);

    return 0;
}

