#include <stdio.h>

int main() {
    int marks[5];
    int i, total = 0;
    float average;
    char grade;

    printf("------ STUDENT MARKS CALCULATOR ------\n");

  
    for (i = 0; i < 5; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    average = total / 5.0;

    
    if (average >= 90)
        grade = 'A';
    else if (average >= 80)
        grade = 'B';
    else if (average >= 70)
        grade = 'C';
    else if (average >= 60)
        grade = 'D';
    else
        grade = 'F';

    printf("\n------------ RESULT ------------\n");
    printf("Total Marks   : %d\n", total);
    printf("Average Marks : %.2f\n", average);
    printf("Grade         : %c\n", grade);
    printf("--------------------------------\n");

    return 0;
}