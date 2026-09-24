// to calculate average marks and percentage
#include <stdio.h>

int main() {
    int numberofsubjects;
    int subject1 = 0, subject2 = 0, subject3 = 0, subject4 = 0, subject5 = 0;
    int subject6 = 0, subject7 = 0, subject8 = 0, subject9 = 0, subject10 = 0;
    float totalmarks, average, percentage;

    printf("How many subjects do you have (1-10): ");
    scanf("%d", &numberofsubjects);

    if (numberofsubjects >= 1) {
        printf("Enter marks for subject 1: ");
        scanf("%d", &subject1);
    }
    if (numberofsubjects >= 2) {
        printf("Enter marks for subject 2: ");
        scanf("%d", &subject2);
    }
    if (numberofsubjects >= 3) {
        printf("Enter marks for subject 3: ");
        scanf("%d", &subject3);
    }
    if (numberofsubjects >= 4) {
        printf("Enter marks for subject 4: ");
        scanf("%d", &subject4);
    }
    if (numberofsubjects >= 5) {
        printf("Enter marks for subject 5: ");
        scanf("%d", &subject5);
    }
    if (numberofsubjects >= 6) {
        printf("Enter marks for subject 6: ");
        scanf("%d", &subject6);
    }
    if (numberofsubjects >= 7) {
        printf("Enter marks for subject 7: ");
        scanf("%d", &subject7);
    }
    if (numberofsubjects >= 8) {
        printf("Enter marks for subject 8: ");
        scanf("%d", &subject8);
    }
    if (numberofsubjects >= 9) {
        printf("Enter marks for subject 9: ");
        scanf("%d", &subject9);
    }
    if (numberofsubjects >= 10) {
        printf("Enter marks for subject 10: ");
        scanf("%d", &subject10);
    }

    totalmarks = subject1 + subject2 + subject3 + subject4 + subject5 + subject6 + subject7 + subject8 + subject9 + subject10;
    average = totalmarks / numberofsubjects;
    percentage = (totalmarks*100 / (numberofsubjects)) / 100;

    printf("\nYour total marks are: %.2f\n", totalmarks);
    printf("Your average marks are: %.2f\n", average);
    printf("Your percentage is: %.1f%%2\n", percentage);

    return 0;
}