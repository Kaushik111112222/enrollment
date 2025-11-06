// Grade of Student
#include<stdio.h>
#include<conio.h>

int main() {
    int m;
    printf("Enter your marks: ");
    scanf("%d", &m);

    m = m / 10; // Convert marks to tens (e.g., 85 -> 8)

    switch (m) {
        case 10:
        case 9:
            printf("Your grade is A+\n");
            break;
        case 8:
            printf("Your grade is A\n");
            break;
        case 7:
            printf("Your grade is B+\n");
            break;
        case 6:
            printf("Your grade is B\n");
            break;
        case 5:
            printf("Your grade is C\n");
            break;
        default:
            printf("You have failed!\n");
    }

    getch();
    return 0;
}
