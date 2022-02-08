#include <stdio.h>
#include <stdbool.h>

int main()
{

    /*
    [1]: get 3 inputs from user
    [2]: indicates the operator + - * /
    [3]: do the operation
    [4]: print result
    */
    // two inputs int
    int a, b;
    // operator
    char opt;

    // final result
    int result;

    // flag variable
    int isInvalid = 0;

    // inputs
    printf("Please enter first number: \n");
    scanf("%d", &a);

    // converstion specifier
    // %d -> decimal integer
    // %c -> char
    // %s -> string
    // %f -> float
    printf("Please enter the operator: \n");
    scanf(" %c", &opt);

    printf("Please enter second number: \n");
    scanf("%d", &b);

    // single statement - 1 line
    // compound statement
    // if () {
    //     a = 21;
    //     b = 2;
    //     c = 3;
    // }

    // if () {
    // code - action - flow chart
    // }
    // else {
    // code - action - flow chart
    // }

    // what to do?
    // integral data type: int , char
    switch (opt)
    {
    // if (opt == '+')
    case '+':
        result = a + b;
        // statement
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
        break;
    default:
        isInvalid = 1;
        printf("Invalid operator\n");
    }

    // finally
    //
    // debugging
    // printf("isInvalid- %d", isInvalid);

    if (isInvalid == 0)
    {
        printf("result: %d\n", result);
    }

    return 0;
}