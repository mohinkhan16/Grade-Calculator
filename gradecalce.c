
#include <stdio.h>

int main() {
    int score;
    char grade;

    printf("Enter your score: ");
    scanf("%d", &score);

    
     grade = (score >= 90) ? 'A' :
             (score >= 80) ? 'B' :
             (score >= 60) ? 'C' :
             (score >= 35) ? 'D' : 'F';

    printf("Your grade is %c\n", grade);


switch(grade){

        case 'A':
        printf("Excellent work!\n");
        break;

        case 'B':
        printf("Well done!\n");
        break;

        case 'C':
        printf("Good job!\n");
        break;

        case 'D':
        printf("You passed, but can improve.\n");
        break;

         default:
        printf("Sorry, you failed.\n");
}


        if(score >= 90)
        printf("You are eligible for the next level.\n");
    else if(score >= 80)
        printf("You are eligible for the next level.\n");
    else if(score >=60)
        printf("You are eligible for the next level.\n");
    else if(score >= 35)
        printf("You are eligible for the next level.\n");
    else
        printf("Not eligible. Try again.\n");

    
    
    return 0;
}