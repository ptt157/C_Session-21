#include <stdio.h>

typedef struct {
    int id;
    char name[100];
    int age;
} Student;

int main() {
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    getchar();  // Doc ky tu \n con lai

    Student students[n];
    FILE *outFile = fopen("students.txt", "w");
    if (outFile == NULL) {
        printf("Khong the mo file students.txt de ghi.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("\nNhap thong tin sinh vien thu %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &students[i].id);
        getchar();
        printf("Ten: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        printf("Tuoi: ");
        scanf("%d", &students[i].age);
        getchar();

        // Xoa ky tu \n thua neu co
        size_t len = strlen(students[i].name);
        if (len > 0 && students[i].name[len - 1] == '\n') {
            students[i].name[len - 1] = '\0';
        }

        fprintf(outFile, "%d, %s, %d\n", students[i].id, students[i].name, students[i].age);
    }

    fclose(outFile);
    printf("\nGhi thong tin sinh vien vao file thanh cong.\n");

    return 0;
}

