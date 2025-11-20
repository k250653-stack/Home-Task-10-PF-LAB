#include <stdio.h>
#include <string.h>

int main() {
    char names[5][20];
    int marks[5];
    int total = 0, topIndex = 0;

    for(int i = 0; i < 5; i++) {
    	printf("ENter Name: ");
        scanf("%s", names[i]);
        printf("Enter Marks: ");
        scanf("%d", &marks[i]);
        total += marks[i];
        if(marks[i] > marks[topIndex]) topIndex = i;
    }

    printf("Student Marks:\n");
    for(int i = 0; i < 5; i++) printf("%s %d\n", names[i], marks[i]);

    printf("Top Student: %s %d\n", names[topIndex], marks[topIndex]);
    printf("Class Average: %.2f\n", (float)total / 5);

    return 0;
}

