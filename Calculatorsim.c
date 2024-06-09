#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double arithmetic();
double trig();
double theorems();
double advanced();

int main()
{

    char operator;
    int select;
    int terminate;
    int index;
    int result;

        printf("Welcome to Christie's Calculator\n");

    char operation[4][12]={
    "arithmetic",
    "trig",
    "theorems",
    "advanced"
    };


    do{
            for (index = 0; index < 4; index++){


            printf("%d. %s \n", index+1, operation[index]);

        }

        printf("\nSelect operator: ");
            scanf("%d", &select);


        switch(select){
            case 1:
                result = arithmetic();
                break;
            case 2:
                result = trig();
                break;

            case 3:
                result = theorems();
                break;

            case 4:
                result = advanced();
                break;

            default:
                printf("Invalid function \n");
                break;
        }


        //case 'pow':
        //    result = pow(number1,number2);
        //    printf ("\nresult: %lf", result);
         //   break;

        //case 'sqrt':
        //    result = sqrt (number1,number2);
        //    printf ("\nresult: %lf", result);
         //   break;


    printf("\nPress 1 to continue program or press 0 to end program: ");
    scanf("%d", &terminate );

    }

    while(terminate != 0);
    printf("\n End of Program");



    return 0;

}
double arithmetic(){

    char operator;
    int number1;
    int number2;
    double result;

    printf("Enter an operator(+ - * / %): ");
    scanf(" %c", &operator);

     printf("Enter value 1: ");
    scanf(" %d", &number1);


    printf("Enter value 2: ");
    scanf(" %d", &number2);

    switch( operator ){
        case '+':
        result = number1 + number2;
        printf("\nresult: %f",result);
        break;

        case '-':
        result = number1 - number2;
        printf("\nresult: %f", result);
        break;

        case '*':
        result = number1 * number2;
        printf("\nresult: %f", result);
        break;

        case '/':
         //here put a condition
         if (result = number1 / number2){

            if(number1 == 0){
                printf("result: Undefined ", result);
            }

            else if(number2 == 0){
                printf("result: Infinity \n", result);
            }

            else{
                result = number1 / number2;
                printf("\nresult: %lf", result); }

                }
        case '%':
            result = number1 % number2;
            printf("\nresult: %lf", result);
            break;

         default:
            printf("%c Use a valid operator\n", operator );
             break;

             }

    return result;
}
double trig(){

    int function;
    double Rad;
    double result;
    int index;

    char operation [6][6]=
{
    "cos",
    "sin",
    "tan"
};

   for (index = 0; index < 3; index++){


        printf("%d. %s \n", index+1, operation[index]);

    }

     printf ("Enter an operator: ");
        scanf (" %d. %s", &function);

    printf("Enter angle: ");
    scanf("%lf", &Rad);


    switch(function){
        case 1:
            result = cos (Rad);
            printf ("\nresult: %lf", result);
            break;

        case 2:
            result = sin (Rad);
            printf ("\nresult: %lf", result);
            break;

        case 3:
            result = tan(Rad);
            printf ("\nresult: %lf", result);
            break;

    default:
            printf("%c Use a valid operator\n", function);
             break;



}
 return result;

}
double theorems(){

    printf("Pythagorean Theorem\n");

    double a,b,c;

    printf  ("Enter side a: ");
    scanf("%lf", &a);

    printf  ("Enter side b: ");
    scanf("%lf", &b);

    c = sqrt(a*a + b*b);

    printf("Side c: %lf\n", c);


    return 0;



}
double advanced(){

    int function,number,number2;
    double result;
    int index;

    char operation[6][6] = // in [4], it should be five 5 or above
    {
        "log",
        "pow",
        "sqrt",
        "ln",
        "e"
    };

    for (index = 0; index <5; index ++){

    printf(" %d. %s \n", index + 1, operation [index]);

    }

    // provide a way to select the type of operation i.e function variable passed into switch has not been used in scanf.
    printf("Select operation: ");
    scanf("%d", &function);

    printf("Enter value: ");
    scanf(" %d", &number);

switch(function){

    case 1:
        result = log10 (number);
         printf ("\nresult: %.6lf",result);
        break;

    case 2:
        printf ("Enter power: ");
        scanf("%d", &number2);

        result = pow(number,number2);
            printf("\nresult: %.6lf", result);
        break;


   case 3:
        result = sqrt (number);
         printf ("\nresult: %.6lf", result);
        break;

   case 4:
        result = log (number);
        printf("\nresult: %.6lf", result);
        break;

   case 5:
        result = exp (number);
        printf("\nresult: %lf", result);
        break;

    default:
            printf("%c Use a valid operator\n", function );
             break;



}

    return result;

}
