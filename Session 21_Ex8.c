#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

typedef struct {
    int id;
    char name[100];
    int age;
} Student;

int main() {
    Student students[MAX_STUDENTS];
    int count = 0;

    FILE *inFile = fopen("students.txt", "r");
    if (inFile == NULL) {
        printf("Khong the mo file students.txt de doc.\n");
        return 1;
    }

    while (fscanf(inFile, "%d, %99[^,], %d\n", &students[count].id, students[count].name, &students[count].age) == 3) {
        count++;
        if (count >= MAX_STUDENTS) {
            printf("Vuot qua so luong sinh vien toi da.\n");
            break;
        }
    }
    fclose(inFile);

    printf("\nDanh sach sinh vien tu file:\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d, Ten: %s, Tuoi: %d\n", students[i].id, students[i].name, students[i].age);
    }

    return 0;
}

