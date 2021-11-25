// C TUTORIAL PART 2 >> IN THIS PART WE ARE GOING TO LEARN C LANGUAGE FURTHER

// FUNCTIONS IN C PROGRAM
// 1. WE DONT DIRECTLY DEFINE OR CALL THE FUNCTIONS IN THE C LANGUAGE FIRST WE HAVE TO WRITE THE FUNCTION PROTOTYPE WHICH TELLS THAT WE ARE GOING TO USE THE FUNCTIONS IN THIS PROGRAM THEN WE HAVE TO DEFINE THE FUNCTION OUTSIDE THE MAIN FUNCTION
// 2. WE JUST CALL OUR DEFINED FUNCTIONS IN THE MAIN FUNCTION.
// #include <stdio.h>

// // Function Prototype >> Here we are telling that we are going to define and use the function in the below program
// void display();

// int main()
// {
//     // Function Calling >> Here we are going to execute the function
//     display();
//     return 0;
// }

// // Function Definition >> Here we are telling that what will be done in this function.
// void display()
// {
//     printf("This is the function display....\n");
// }

// Multi Purpose Calculator

#include <stdio.h>

void sum(), sub(), div(), mul(), factors(), factorial(), prime();

int main()
{
    int num;

    do
    {
        printf("\n\nEnter the related number which operation you want to perform\n");
        printf("For Addition enter                ( 1 )\n");
        printf("For Subtration enter             ( 2 )\n");
        printf("For Division enter                ( 3 )\n");
        printf("For Multiplication enter          ( 4 )\n");
        printf("To get the factors enter         ( 5 )\n");
        printf("To get the factorial enter       ( 6 )\n");
        printf("To get the Prime Number enter  ( 7 )\n");
        printf("To exit the calculator            ( 8 )\n");

        printf("\nEnter the number : ");
        scanf("%d", &num);

        if (num == 1)
        {
            sum();
        }
        else if (num == 2)
        {
            sub();
        }
        else if (num == 3)
        {
            div();
        }
        else if (num == 4)
        {
            mul();
        }
        else if (num == 5)
        {
            factors();
        }
        else if (num == 6)
        {
            factorial();
        }
        else if (num == 7)
        {
            prime();
        }

    } while (num != 8);

    return 0;
}

void sum()
{
    int a, b, c;
    printf("Joy..! You selected the Addition Operation..\n");
    printf("Enter the first value for Addition operation : ");
    scanf("%d", &a);

    printf("Enter the second number for Addition operation : ");
    scanf("%d", &b);

    c = a + b;
    printf("The result of the Addition Operation is : %d\n\n", c);
}

void sub()
{
    int a, b, c;
    printf("Joy..! You selected the Subtration Operation..\n");
    printf("Enter the first no to perform Subtration operation : ");
    scanf("%d", &a);

    printf("Enter the second number to perform Subtraction operation : ");
    scanf("%d", &b);

    c = a - b;
    printf("The result of the Subtraction operatin : %d\n\n", c);
}

void div()
{
    float a, b, c;

    printf("Joy..! You selected the Division Operatin..\n");
    printf("Enter the number which you want to divide : ");
    scanf("%f", &a);

    printf("Enter the number to divide : ");
    scanf("%f", &b);

    c = a / b;

    printf("The result of the Dividion operation is : %f\n\n", c);
}

void mul()
{
    float a, b, c;

    printf("Joy..! You selected the Multiplication Operation..\n");
    printf("Enter the first number for Multiplication : ");
    scanf("%f", &a);

    printf("Enter the second number for Multiplication : ");
    scanf("%f", &b);

    c = a * b;
    printf("The result of the Multiplication Operation is :- %f\n\n", c);
}

void factors()
{
    int i, num;
    printf("Joy..! You are going to find out the Factors of your given number...\n");
    printf("Enter the number whose Factors you want to get : ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("Factors of %d are/is %d\n", num, i);
        }
    }
}

void factorial()
{
    int i, num, count = 1;

    printf("Joy..! You are going to calculate the Factorial of your given number..\n");
    printf("Enter the number whose factorial you want to calculate : ");
    scanf("%d", &num);

    for (i = num; i >= 1; i--)
    {
        count = count * i;
    }
    printf("The factorial of %d is :- %d", num, count);
}

void prime()
{
    int i, num, count = 0;

    printf("Enter the value which you want to check whether it is Prime number or not : ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        printf("%d is a Prime Number.\n", num);
    }
    else
    {
        printf("%d is not a Prime Number.\n", num);
    }
}