// C LANGUAGE TUTORIAL IN ONE FILE by < https://youtu.be/ZSPZob_1TOk >

// // header file
// #include <stdio.h>
// // this means that this block of code will return Integer output
// int main()
// {

//     // return 0 means Success because exit code 0 is thrown when there is Success of the program.
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int a;
//     int b;

//     printf("Enter the value of a : ");
//     scanf("%d", &a);

//     printf("Enter the value of b : ");
//     scanf("%d", &b);

//     printf("The Addition of the numbers you entered is :-> %d\n", a + b);

//     return 0;
// }

// Area of Ractangle
// #include <stdio.h>
// int main()
// {
//     float length, breadth;

//     printf("Enter the length of the Ractangle : ");
//     scanf("%f", &length);

//     printf("Enter the bredth of the Ractangle : ");
//     scanf("%f", &breadth);

//     printf("The Area of the Ractangle is :-> %f\n", length * breadth);
//     return 0;
// }
// calculate the area of the circle
// #include <stdio.h>
// int main()
// {
//     float radius;
//     float pi = 3.14;

//     printf("Enter the radius of the Circle : ");
//     scanf("%f", &radius);
//     printf("The area of the Circle is : %f\n", pi * radius * radius);
//     return 0;
// }

// calculate the volume of the cylinder
// #include <stdio.h>
// int main()
// {
//     float rad, height;
//     float pi = 3.141592653589793238;

//     printf("Enter the radius of the cylinder : ");
//     scanf("%f", &rad);
//     printf("Enter the height of the cylinder : ");
//     scanf("%f", &height);

//     printf("The volume of the cylinder is :-> %f\n", pi * rad * rad * height);
//     return 0;
// }

// conver from celsius to farenheight
// #include <stdio.h>
// int main()
// {
//     float cel, far;

//     printf("Enter the temprature in the celsius : ");
//     scanf("%f", &cel);
//     far = ((cel * 9 / 5) + 32);

//     printf("The temprature in Farenheight is :-> %f\n", far);
//     return 0;
// }

// Program to calculate the simple interest by using clanguage
// #include <stdio.h>

// int main()
// {
//     float principal, rate, time;

//     printf("Enter the Principal Amount : ");
//     scanf("%f", &principal);

//     printf("Enter the rate : ");
//     scanf("%f", &rate);

//     printf("Enter the total time period : ");
//     scanf("%f", &time);

//     float simple_interest = ((principal * rate * time) / 100);
//     printf("The Simple Interest is :-> %f\n", simple_interest);
//     return 0;
// }

// String Interpolation in C Language

// #include <stdio.h>

// int main()
// {
//     char name;
//     printf("Enter your name :");
//     scanf("%c", &name);

//     printf("Hello %c, How are you?\n", name);
//     return 0;
// }

//  modular division
// #include <stdio.h>

// int main()
// {
//     int a, b;

//     printf("Enter the value of a : ");
//     scanf("%d", &a);

//     printf("Enter the value of b : ");
//     scanf("%d", &b);

//     float divi = a / b; // this will give the dividend when two numbers are divided
//     float rem = a % b;  // this will give the remainder when two numbers are divided
//     printf("The value of a will be divided by b then the dividend will be: %f\n", divi);
//     printf("The value of a will be divided by b then the remainder will be : %f\n", rem);
//     return 0;
// }

// Calculating the powers using C Language

// #include <stdio.h>
// #include <math.h>
// int main()
// {
// POW() FUNCTION CALCULATES THE POWER OF THE PRE-COMMA UNTIL POST-COMMA VALUE IN THE POW FUNCTION
//     printf("The value of the power calculated is :-> %f\n", pow(2, 3));
//     return 0;
// }

// Operator Precedence
// #include <stdio.h>

// int main()
// {
//     int x, y;

//     printf("We are going to calculate the value of 3x - 4y so,\n");

//     printf("Enter the value of x :-> ");
//     scanf("%d", &x);

//     printf("Enter the value of y :-> ");
//     scanf("%d", &y);

//     int val = 3 * x - 4 * y;
//     int val1 = 3 * (x - 4 * y);
//     int val2 = 3 * x / 4 * y;

//     printf("The value of 3x - 4y = %d\n", val);

//     printf("This will calculate the value in round bracketts first then this will perform the operation...\n");
//     printf("The value of 3 * (x - 4 * y) is :-> %d\n", val1);

//     printf("This below expression will give the wrong answer because of associativity.\n");
//     // The reason of the wrong answer

//     // x = 8 , y = 5
//     // 3*8 = 24
//     // 24/4 = 6
//     // 6*5 = 30

//     printf("The value of 3*x / 4*y is :-> %d\n", val2);
//     return 0;
// }

// checking the divisibility of any number
// this program returns 0 if the value is divisible
// #include <stdio.h>

// int main()
// {
//     int num1, num2;
//     printf("Enter the number for divisibility test : ");
//     scanf("%d", &num1);

//     printf("Enter the number whose divisibility will be tested : ");
//     scanf("%d", &num2);

//     int divtest = num2 % num1;
//     printf("Divisibility Test returns :-> %d\n", divtest);
//     return 0;
// }

// Left to Right Approach
// #include <stdio.h>

// int main()
// {
//     int x = 2, y = 3, z = 3, k = 1;

//     int result = 3 * x / y - z + k;
//     // LEFT TO RIGHT approach will be taken in this case
//     // 3 * 2 = 6
//     // 6 / 3 = 2
//     // 2 - 3 + 1 = 0

//     printf("The result of the expresion [ 3 * x / y - z + k ] is :-> %d\n", result);

//     return 0;
// }

// CONTROL INSTRUCTIONS
// if-else Statement

// program to find out greater between two numbers
// #include <stdio.h>

// int main()
// {
//     // int a;
//     int a, b;

//     printf("Enter the first number : ");
//     scanf("%d", &a);

//     printf("Enter the second number : ");
//     scanf("%d", &b);

//     if (a > b)
//     {
//         printf("First number %d is greater than Second number %d", a, b);
//     }
//     else if (b == a)
//     {
//         printf("First number %d is equals to Second number %d", a, b);
//     }
//     else
//     {
//         printf("Second number %d is greater than First number %d\n", b, a);
//     }
//     return 0;
// }

// program to find out odd or even number
// #include <stdio.h>

//     int main()
//     {
//         int a;

//         printf("Enter your age : ");
//         scanf("%d", &a);

//         if (a % 2 == 0)
//         {
//             printf("your entered number %d is even number.", a);
//         }
//         else
//         {
//             printf("your entered number %d is odd number.\n", a);
//         }
//         return 0;
//     }

// #include <stdio.h>

//     int main()
//     {
//         int a;
//         int vipPass;
//         printf("Enter your age : ");
//         scanf("%d", &a);

//         printf("Enter 1 if you have VIP-PASS : ");
//         scanf("%d", &vipPass);

//         // if statement with double expression
//         // here we are using < Logical Operator && AND Operator >
//         // if (a <= 70 && a >= 18)

//         // it checks both statement one statement should be true to print the statement we are using < Logical || OR Operator >
//         if ((a <= 70 && a >= 18) || vipPass == 1)
//         {
//             printf("You can drive.\n");
//         }
//         else
//         {
//             printf("you cannot drive.\n");
//         }

//         return 0;
//     }

// CONDITONAL OPERATORS IN SINGLE LINE

// #include <stdio.h>

// int main()
// {
//     int a;
//     printf("Enter the number : ");
//     scanf("%d", &a);

//     // if the given STATEMENT is true then EXPRESION-1 will be true otherwise EXPRESSION-2 will be true

//     // (STATEMENT) ? EXPRESION-1 : EXPRESSION-2;

//     (a > 2) ? printf("The no is greater than 2.\n") : printf("The no is smaller than 2\n");

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int a;
//     printf("Enter the value of a");
//     scanf("%d", &a);

//     switch (a)
//     {
//     case 1:
//         printf("rating is 1\n");
//         break;
//     case 2:
//         printf("rating is 2\n");
//         break;
//     case 3:
//         printf("rating is 3\n");
//         break;
//     case 4:
//         printf("rating is 4\n");
//         break;
//     case 5:
//         printf("rating is 5\n");
//         break;
//     default:
//         printf("The value is invalid.");
//         break;
//     }
//     return 0;
// }

// if-else with assignment operator assigning new value in the statement condition

// #include <stdio.h>

// int main()
// {
//     int a = 10;

//     // << = >>  is Assignment Operator
//     // << == >> is Comparison Operator

//     // As Assignment Operator is used here so the new value 11 will be assigned to a
//     // thats why statement of << if >> will be executed not of << else >>
//     if (a = 11)
//     {
//         printf("I am 11\n");
//     }
//     else
//     {
//         printf("I am 10\n");
//     }
//     return 0;
// }

// if else statment to find out the result of the test

// #include <stdio.h>

// int main()
// {
//     int phy, chem, mat;

//     printf("Enter Physics marks : ");
//     scanf("%d", &phy);

//     printf("Enter Chemistry marks : ");
//     scanf("%d", &chem);

//     printf("Enter Maths marks : ");
//     scanf("%d", &mat);

//     float result = (phy + chem + mat) / 3;

//     if (result < 40 || phy < 33 || chem < 33 || mat < 33)
//     {
//         printf("Your result is %f percent and you are failed\n", result);
//         // we can also typecast it into integer this will give you integer output
//         // printf("Your result is %d percent and you are failed\n", (int)result);
//     }
//     else
//     {
//         printf("You are pass and your result is %f percent\n", result);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int income;

//     printf("Enter you annual income : ");
//     scanf("%d", &income);

//     if (income >= 250000 && income <= 500000)
//     {
//         printf("you have to pay (5) percent Income Tax\n");
//         float taxPayable = (income - 250000) * 0.05;
//         printf("You have to pay %f rs Income Tax\n", taxPayable);
//     }
//     else if (income > 500000 && income <= 1000000)
//     {
//         printf("Your have to pay (20) percent Income Tax\n");
//         float taxPayable = (income - 500000) * 0.2;
//         printf("You have to pay %f rs Income Tax\n", taxPayable);
//     }
//     else if (income > 1000000)
//     {
//         printf("You have to pay (30) percent Income Tax\n");
//         float taxPayable = (income - 1000000) * 0.3;
//         printf("You have to pay %f rs Income Tax\n", taxPayable);
//     }
//     else
//     {
//         printf("You dont have to pay Income Tax\n");
//     }
//     return 0;
// }

// Program to calculate Leap Year.
// #include <stdio.h>

// int main()
// {
//     int leap;

//     printf("Enter the year which you want to check leap year or not :-> ");
//     scanf("%d", &leap);

//     // --------------------------------------------------------------------------
//     // 1. Leap year is divisible by 4
//     // 2. If it is divisible by 4 then it will goto next step
//     // 3. Now if it is divisible by 100 then goto next step otherwise it will be Leap Year
//     // 4. If the entered year is divisible by 100 then it must be divisible by 400 to be Leap Year.
//     // --------------------------------------------------------------------------

//     if (leap % 4 == 0)
//     {
//         if (leap % 100 == 0)
//         {
//             if (leap % 400 == 0)
//             {
//                 printf("%d is a Leap Year.\n", leap);
//             }
//             else
//             {
//                 printf("%d is not a Leap Year\n", leap);
//             }
//         }
//         else
//         {
//             printf("%d is a Leap Year\n", leap);
//         }
//     }
//     else
//     {
//         printf("%d is not a Leap Year\n", leap);
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int a, b, c, d;

//     printf("Enter the numbers a b c d saperated by comma : ");
//     scanf("%d,%d,%d,%d", &a, &b, &c, &d);

//     if (a > b && a > c && a > d)
//     {
//         printf("a is greatest among all\n");
//     }
//     else if (b > a && b > c && b > d)
//     {
//         printf("b is the greatest among all\n");
//     }
//     else if (c > a && c > b && c > d)
//     {
//         printf("c is the greatest among all\n");
//     }
//     else if (d > a && d > b && d > c)
//     {
//         printf("d is greatest among all\n");
//     }
//     return 0;
// }

// Program to find out either the character entered is lowercase or upper case

// #include <stdio.h>

// int main()
// {
//     char ch;

//     printf("Enter the character : ");
//     scanf("%c", &ch);
//     // type casting a character into int and find out either it is lowe case or upper case
//     if (ch <= 122 && ch >= 97)
//     {
//         printf("The charcter is in lowercase.\n");
//     }
//     else
//     {
//         printf("The character Upper-Case\n");
//     }
//     return 0;
// }

// Itrative Statements with Condition (Loops)

// #include <stdio.h>

// int main()
// {
//     int a;
//     printf("Enter the value : ");
//     scanf("%d", &a);

//     // This is While Loop >> Loop will continue until the condition will meet the the expected.
//     // using below statement the loop will exceute the statement until the value of a is smalle than 11
//     // >> while (a < 11)

//     // Using the below statement loop will execute until the value of a is less than or equal to 11. When it is equal to 11 it will stop its iteration.
//     while (a <= 11)
//     {
//         // This is the statement which will execute again and again until the Condition is true.
//         printf("%d\n", a);
//         // This is increment operator it will increment the value by 1 after each iteration.
//         a++;
//     }
//     return 0;
// }

// while loop with decrement operator
// which decrement the value by 1 after each execution
// #include <stdio.h>

// int main()
// {
//     int a;
//     printf("Enter the value : ");
//     scanf("%d", &a);

//     while (a > 0)
//     {
//         printf("%d\n", a);
//         // Below is the decrement operator
//         a--;
//     }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int i = 0;

//     while (i <= 20)
//     {
//         if (i >= 10)
//         {

//             printf("%d\n", i);
//         }
//         i++;
//     }
//     return 0;
// }

// INCREMENT AND DECREMENT OPERATOR
// #include <stdio.h>

// int main()
// {
//     int a;
//     printf("Enter the value which you want to check :-> ");
//     scanf("%d", &a); // Let we enter the value << 10 >>

//     // printf("The value of a++ is : %d\n", a++); // OUTPUT >> 10
//     // printf("The value of ++a is : %d\n", ++a); // OUTPUT >> 11
//     // printf("The value of a-- is : %d\n", a--); // OUTPUT >> 10
//     // printf("The value of --a is : %d\n", --a); // OUTPUT >> 09
//     return 0;
// }

// DO-WHILE LOOP

// #include <stdio.h>

// int main()
// {
//     int i = 1, a = 0;
//     printf("Enter the value until you want to write conting : ");
//     scanf("%d", &a);

//     // This << Do-While Loop >> first execute the << Do-Statement >> and then check the << While condition >>.

//     // Whether the condition is false it will execute atlease once in using Do-Statement

//     do
//     {
//         printf("The value of i is %d\n", i);
//         i++;
//         // printf("The value of i after increment is : %d\n", i);
//     } while (i <= a);
//     return 0;
// }

// For Loop

// #include <stdio.h>

// int main()
// {
//     // we can also define its dataType inthe For loop
//     int a, b;
//     printf("Enter the no where you want to start the counting : ");
//     scanf("%d", &a);

//     printf("Enter the value until you want to write the Counting : ");
//     scanf("%d", &b);

//     // This is For-Loop this takes the << Assignment > Condition > and Increment >> in single line
//     // here i have defined the data type to i
//     for (int i = a; i <= b; i++)
//     {
//         printf("The value is : %d\n", i);
//     }
//     return 0;
// }

// This program will ask you about maximum number and minimum number then it will generate an output of Back-Counting from Maximum number to Minimum number

// #include <stdio.h>

// int main()
// {
//     int a, b;

//     printf("\nProgram to print Back-Counting\n");
//     printf("Enter the maximum number where you want to start backCounting : ");
//     scanf("%d", &a);

//     printf("Enter the minimum value where you want to stop : ");
//     scanf("%d", &b);

//     for (int i = a; i >= b; i--)
//     {
//         printf("Your counting is reached at : %d\n", i);
//     }
//     return 0;
// }

// Do-While Loop with Break-Statement
// here you have to enter the starting point and ending point as well as the value at which we want to break the loop.

// #include <stdio.h>

// int main()
// {
//     int a, b, br;
//     printf("Enter the starting value : ");
//     scanf("%d", &a);

//     printf("Enter the ending value : ");
//     scanf("%d", &b);

//     printf("Enter the value where you want to break the loop : ");
//     scanf("%d", &br);

//     if (br >= a && br <= b)
//     {

//         do
//         {
//             printf("Reached at :- %d\n", a);

//             if (a == br)
//             {
//                 break;
//             }
//             a++;
//         } while (a <= b);
//     }
//     else
//     {
//         printf("you have entred a wrong break statement value.\nPlease enter the break statement value which lies between starting and ending value\n");
//     }

//     return 0;
// }

// Program with for loop and break statement at the user entred value
// #include <stdio.h>

// int main()
// {
//     // int strt, end, br, i;
//     int end, strt, br;

//     printf("Enter the starting value : ");
//     scanf("%d", &strt);

//     printf("Enter the ending value : ");
//     scanf("%d", &end);

//     printf("Enter the break statement value : ");
//     scanf("%d", &br);

//     for (int i = strt; i <= end; i++)
//     {
//         printf("We are reached at :- %d\n", i);
//         if (i == br)
//         {
//             printf("the statement is broked by break argument at %d.\n", i);
//             break;
//         }
//     }
//     return 0;
// }

// continue statement
// this statement is to continue the statement to the loop

// #include <stdio.h>

// int main()
// {
//     int strt, end, br;

//     printf("Enter the starting value : ");
//     scanf("%d", &strt);

//     printf("Enter the ending value : ");
//     scanf("%d", &end);

//     printf("Enter the value where you want to break the statement : ");
//     scanf("%d", &br);

//     while (strt <= end)
//     {
//         strt++;

//         // If the << strt >> value which is running is not equals to << br >> the << While Loop >> will be pushed by << continue statement >>.

//         // once << strt >> which is our starting value is equal to the << br >> then << else >> statement will return the value of the break << br >> where it is broken.

//         if (strt != br)
//         {
//             continue;
//         }
//         else
//         {
//             printf("The Loop is broken at :- %d\n", strt);
//         }
//     }

//     return 0;
// }

// To understand the Continue Statement previsely we are taking another example
// example : >> WAP to print all odd numbers until the Number Entered

// #include <stdio.h>

// int main()
// {
//     int i, n = 2;

//     // printf("Enter the number until which we want to get all ODD numbers : ");
//     // scanf("%d", &a);

//     for (i == 1; i <= 20; i++)
//     {
//         if (i == n)
//         {
//             n = n + 2;
//             continue;
//         }
//         else
//         {
//             printf("%d\n", i);
//         }
//     }
//     return 0;
// }

// Program to print Multiplication Table
// #include <stdio.h>

// int main()
// {
//     int i, b, c, a;
//     // printf("Enter the number for table :- ");
//     // scanf("%d", &a);

//     // printf("Enter the number at what point the table you want to print : ");
//     // scanf("%d", &b);

//     // using for loop
//     for (i == 0; i <= 11; i++)
//     {
//         printf("15 x %d = %d\n", i, i * 15);
//     }

//     // USING WHILE LOOP
//     // while (i <= 10)
//     // {
//     //     printf("15 x %d = %d\n", i, i * 15);
//     //     i++;
//     // }
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int i = 10;
//     // using for loop
//     // for (i == 10; i >= 1; i--)
//     // {
//     //     printf("10 x %d = %d\n", i, i * 10);
//     // }

//     // using while loop
//     while (i >= 1)
//     {
//         printf("10 x %d = %d\n", i, i * 11);
//         i--;
//     }
//     return 0;
// }

// program to print the sum of n natural numbers
// #include <stdio.h>

// int main()
// {
//     // using while loop we have to assign initial value to i because it doesn't take the initial value as for loop
//     long int i = 0, a, b = 0;

//     printf("Enter the nth natural number at what you want to get the sum : ");
//     scanf("%ld", &a);

//     // using for loop
//     // for (i = 0; i <= a; i++)
//     // {
//     //     b = b + i;
//     // }

//     // using while loop
//     while (i <= a)
//     {
//         b = b + i;
//         i++;
//     }
//     printf("The sum of the numbers from 0-%ld is :> %ld\n", a, b);
//     return 0;
// }

// program to find out sum of all values of desired table until desired number
// #include <stdio.h>

// int main()
// {
//     int a, b, i, c = 0;

//     printf("Enter the number whose table you want to get : ");
//     scanf("%d", &a);

//     printf("number of multiplications : ");
//     scanf("%d", &b);

//     for (i = 1; i <= b; i++)
//     {
//         printf("%d x %d = %d\n", a, i, i * a);
//         c += (i * a);
//     }
//     printf("The sum values from %d x 1 to %d x %d is :- %d\n", a, a, b, c);

//     return 0;
// }

// program to find out the factorial of user entered value

// #include <stdio.h>

// int main()
// {
//     int a, b = 1, i;
//     printf("Enter the number whose factorial you want to get :> ");
//     scanf("%d", &a);

//     for (i = a; i >= 1; i--)
//     {
//         b = b * i;
//     }
//     printf("%d\n", b);
//     return 0;
// }

// program to find out sum of all factorial generated values.

// #include <stdio.h>

// int main()
// {
//     int a, b = 1, c = 0, i;
//     printf("Enter the value whose factorial you want to get : ");
//     scanf("%d", &a);

//     for (i = a; i >= 1; i--)
//     {
//         b = b * i;
//         //b *=i;
//     }
//     printf("The Factorial of %d is :- %d\n", a, b);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int n, prime = 1;

//     printf("Enter the number which you want to check whether it is prime no. or not : ");
//     scanf("%d", &n);

//     for (int i = 2; i < a; i++)
//     {
//         if (n % i == 0)
//         {
//             prime = 0;
//             break;
//         }
//     }

//     if (prime == 0)
//     {
//         printf("%d is not a Prime Number.\n", n);
//     }
//     else
//     {
//         printf("%d is a Prime Number.\n", n);
//     }
// }

// Another Logic to findout that a number is Prime number or not....

// #include <stdio.h>

// int main()
// {
//     int n, count = 0, i;

//     printf("Enter the number that you want to check whether it is Prime no or not : ");
//     scanf("%d", &n);

//     // here we check with each value including itself that by how much numbers it will divisible
//     // Prime number is divisible by just 2 numbers (1, itself)
//     for (i = 1; i <= n; i++)
//     {
//         // here we are checking for divisibility
//         if (n % i == 0)
//         {
//             // here we incremented the count variable after each iteration when it is divisible
//             count++;
//             printf("%d\n", i);
//         }
//     }
//     // here we checked that either the value of count variable is 2 or not
//     // if the value of count is 2 then it is Prime number because Prime number has only Factors
//     // or we can say that Prime number is only divisible by only 2 numbers which are (1 or itself the number.)
//     if (count == 2)
//     {
//         printf("The number is Prime Number.\n");
//     }
//     else
//     {
//         printf("The number is not a Prime Number.\n");
//     }
//     return 0;
// }
