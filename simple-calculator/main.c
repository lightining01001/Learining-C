
#include <stdio.h>
#define CLS "\033[2J\033[H"

int main() {
    printf("Welcome to the calcuulator!\n"); //welcome message
    int choice, run = 1, num1, num2; //declaring varibales

    while (run == 1) { //while loop the whole program
        printf("please enter the first number tha you want to perform a calculation with: \n ");
        printf("input: ");
        scanf("%d", &num1); //ask the user for first input
        if (num1 > 0) {
            printf(CLS);
        }
        printf("please enter the second number for your calcualtion: \n");
        printf("input: ");
        scanf("%d", &num2); //ask user for second input
        if (num2 > 0) {
            printf(CLS);
        }
        printf("please choose a operator for you calculation\n");
        printf("otptions: \n");
        printf("Type 1 for addition + \n");
        printf("Type 2 for subtraction - \n");
        printf("Type 3 for multiplication *\n");
        printf("Type 4 for division / \n");
        scanf("%d", &choice); //ask user for operator input
        printf(CLS);


        switch (choice) { //switch function for calculating
            case 1:
                printf("The result of the Calculation is: %d\n", num1 + num2);
                break;
            case 2:
                printf("The result of the Calculation is: %d\n", num1 - num2);
                break;
            case 3:
                printf("The result of the Calculation is: %d\n", num1 * num2);
                break;
            case 4:
                if (num2 != 0) {
                    printf("The result of the Calculation is: %d \n", num1 / num2);
                } else {
                    printf("Error: Cannot divide by zero!\n"); // protectin against dividing by zero
                }
                break;
            default:
                printf("Please enter a valid choice");
        }
        printf("Do you want to perform another calcutlaion ?\n");
        printf("Type 1 for yes type 2 for no \n");
        scanf("%d", &run);



        if (run == 2) {
            printf("Goodbye! ");
        } // input to ask the user if they want to exit the program
        num1 = 0;
        num2 = 0;
        if (run == 1) {
            printf(CLS);
        }
        int run = 1; /*set run value to anything above 0 to keep lopping
                       the program until the loop isnt ended by the users input*/
    }
    return 0;
}
