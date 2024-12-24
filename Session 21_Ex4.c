#include <stdio.h>

int main() {
    char line[256];
    FILE *inFile = fopen("bt01.txt", "r");
    if (inFile != NULL) {
        if (fgets(line, sizeof(line), inFile) != NULL) {
            printf("Dong dau tien trong file: %s", line);
        } else {
            printf("File rong hoac khong co dong nao.\n");
        }
        fclose(inFile);
    } else {
        printf("Khong the mo file.\n");
    }

    return 0;
}

