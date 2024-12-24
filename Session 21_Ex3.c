#include <stdio.h>

int main() {
    char data[256];
    printf("Nhap chuoi can ghi them vao file: ");
    fgets(data, sizeof(data), stdin);

    FILE *outFile = fopen("bt01.txt", "a");  // Mo file o che do append
    if (outFile != NULL) {
        fputs(data, outFile);
        fclose(outFile);
        printf("Ghi them vao file thanh cong.\n");
    } else {
        printf("Khong the mo file.\n");
    }

    return 0;
}

