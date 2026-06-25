#include <stdio.h>

int main() {
    int answer, score = 0;

    printf("***** Welcome to the Quiz *****\n\n");

    printf("1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if(answer == 2)
        score++;

    printf("\n2. Which language is used for C programming?\n");
    printf("1. Compiler\n2. Interpreter\n3. Programming Language\n4. Operating System\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if(answer == 3)
        score++;

    printf("\n3. How many days are there in a leap year?\n");
    printf("1. 365\n2. 366\n3. 364\n4. 367\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if(answer == 2)
        score++;

    printf("\n4. Which symbol is used for comments in C?\n");
    printf("1. //\n2. ##\n3. **\n4. &&\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if(answer == 1)
        score++;

    printf("\n5. Which function is used to display output in C?\n");
    printf("1. scanf()\n2. printf()\n3. gets()\n4. puts()\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if(answer == 2)
        score++;

    printf("\nYour Score = %d/5\n", score);

    if(score == 5)
        printf("Excellent!\n");
    else if(score >= 3)
        printf("Good Job!\n");
    else
        printf("Keep Practicing!\n");

    return 0;
}