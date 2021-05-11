#include <stdio.h>
 
 //simple calculator using switch statement 
 
main()
{
    int first ,second;
    int op;
    
    printf("First Number: ");
    scanf("%d",&first);
    printf("Second Number: ");
    scanf("%d",&second);
    
    printf("\n\n1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Division\n");
    printf("4.Multiplication\n");
    
    printf("\nEnter an: ");
    scanf("%d",&op);
    
    switch(op){
        case 1:
            printf("Addition : %d",first + second);
            break;
        case 2:
            printf("Substraction : %d",first - second);
            break;
        case 3:
            printf("Division : %f", (float) first / (float) second);
            break;
        case 4:
            printf("Multiplication : %d", first * second);
            break;
        default:
            printf("Error..Op is not correct!");
    }
    return 0;
}
