#include <stdio.h>

int main() {
    int n;
    printf("Nhap so dong: ");
    scanf("%d", &n);
    getchar();  // Doc ky tu \n con lai

    FILE *outFile = fopen("bt05.txt", "w");
    if (outFile != NULL) {
        char line[256];
        for (int i = 0; i < n; i++) {
            printf("Nhap dong thu %d: ", i + 1);
            fgets(line, sizeof(line), stdin);
            fputs(line, outFile);
        }
        fclose(outFile);
    } else {
        printf("Khong the mo file de ghi.\n");
        return 1;
    }

    // Mo file de doc va hien thi noi dung
    FILE *inFile = fopen("bt05.txt", "r");
    if (inFile != NULL) {
        printf("\nNoi dung file bt05.txt:\n");
        char line[256];
        while (fgets(line, sizeof(line), inFile) != NULL) {
            printf("%s", line);
        }
        fclose(inFile);
    } else {
        printf("Khong the mo file de doc.\n");
    }

    return 0;
}

