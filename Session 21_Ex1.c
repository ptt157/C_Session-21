#include <stdio.h>

int main() {
    char data[256];
    printf("Nhap chuoi can ghi vao file: ");
    fgets(data, sizeof(data), stdin);

    FILE *outFile = fopen("bt01.txt", "w");
    if (outFile != NULL) {
        fputs(data, outFile);
        fclose(outFile);
        printf("Ghi vao file thanh cong.\n");
    } else {
        printf("Khong the mo file.\n");
    }

    return 0;
}

