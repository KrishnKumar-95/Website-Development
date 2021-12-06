/* 1. Ramesh’s basic salary is input through the keyboard. His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary. Write a program to calculate his gross salary. Hint: Gross Salary = Basic Salary + DA + HRA*/
/*#include <stdio.h>

int main()
{
    int sal, hra, da, grossSal;
    printf("Enter Ramesh basic Salary :- ");
    scanf("%d", &sal);

    da = (sal / 100) * 40;
    hra = (sal / 100) * 20;

    grossSal = sal + hra + da;

    printf("The Gross Salary of Ramesh is :- %d\n", grossSal);
    return 0;
}*/

/* 2. The distance in kilometers between two cities is input through the keyboard. Write a program to convert and print distance in meters, feet, inches and centimeters.
Hint: 1 Km = 3280.84 ft*/

/*#include <stdio.h>

int main()
{
    float km, mt, ft, in, cm;

    printf("Enter the distance between two cities in KiloMeters :- ");
    scanf("%f", &km);

    mt = km * 1000;

    printf("The distance in Meters is :- %f\n", mt);

    ft = km * 3280.84;

    printf("The distance in Feets is :- %f\n", ft);

    in = km * 3280.84 * 12;

    printf("The distance in Inches is :- %f\n", in);

    cm = km * 1000 * 100;
    printf("The distance in Centimeters is :- %f\n", cm);
    return 0;
}*/

/*3. If the marks obtained by a student in three different subjects are input through the keyboard, find out the aggregate marks and percentage marks obtained by the student.Assume that, maximum marks that can be obtained by a student in each subject is 100.
Hint: Use subjects as Hindi, English and Mathematics*/

/*#include <stdio.h>

int main()
{
    float Hindi, English, Maths, Percent, Agg;

    printf("Enter the marks of Subjects Hindi English and Maths by saperating the comma :- ");
    scanf("%f,%f,%f", &Hindi, &English, &Maths);
    Agg = Hindi + English + Maths;
    Percent = Agg / 3;

    printf("The Aggragade marks are :- %f\n", Agg);

    printf("The Result in Percent is :- %f\n", Percent);
    return 0;
}*/

/* 4. Temperature of a city in Fahrenheit degrees is input through the keyboard. Write a program to convert this temperature into Centigrade degrees.
Hint: Centigrade = (Fahrenheit – 32) *5/9 */

/*#include <stdio.h>

int main()
{
    float cel, far;
    printf("Enter the Temprature in Farenheight :- ");
    scanf("%f", &far);

    cel = (far - 32) * 5 / 9;

    printf("The temprature in Centigrade is :- %f\n", cel);
    return 0;
}*/

/*5. The length & breadth of a rectangle and radius of a circle are input through the keyboard. Write a program to calculate the area & perimeter of the rectangle, and the area & circumference of the circle.*/

/*
#include <stdio.h>
#include <math.h>

int main()
{
    double len, wid, rad, arRac, prRac, arCir, crCir, pi = 3.14159265358979323846;
    printf("Enter the length and breadth of the Ractangle (len,wid) :- ");
    scanf("%lf,%lf", &len, &wid);

    printf("Enter the Radius of the Circle :- ");
    scanf("%lf", &rad);

    arRac = len * wid;
    printf("The area of the Ractangle is %lf\n", arRac);

    prRac = (2 * len) + (2 * wid);
    printf("The Primeter of the Ractangle is %lf\n", prRac);

    arCir = pi * pow(rad, 2);
    printf("The Area of the Circle is :- %lf\n", arCir);

    crCir = 2 * pi * rad;
    printf("The Circumference of the Circle is :- %lf\n", crCir);
    return 0;
}
*/

/*6. Two numbers are input through the keyboard into two locations num1 and num2. Write a program to
interchange the contents of num1 and num2.*/

/*#include <stdio.h>

int main()
{
    int num1, num2, change;
    printf("Enter num1 :- ");
    scanf("%d", &num1);

    printf("Enter num2 :- ");
    scanf("%d", &num2);

    change = num1;
    num1 = num2;
    printf("Num1 is :- %d\n", num1);

    num2 = change;
    printf("Num2 is :- %d\n", num2);

    return 0;
}*/

/*#include <stdio.h>
int main()
{
    double a, b;
    printf("Enter a: ");
    scanf("%lf", &a);
    printf("Enter b: ");
    scanf("%lf", &b);

    // swapping

    a = a - b;

    b = a + b;

    a = b - a;

    printf("After swapping, a = %.2lf\n", a);
    printf("After swapping, b = %.2lf\n", b);

    return 0;
}*/
/*7. If a five-digit number is input through the keyboard, write a program to calculate the sum of its digits. Test Case: Num = 12341 Sum = 11*/

/*#include <stdio.h>

int main()
{
    int num = 12341, a, sum = 0;

    // this loop iterates until the num variable becomes 0
    while (num != 0)
    {
        // this will extract the last digit everytime when loop iterates as remainder
        a = num % 10;
        // this will update the value of sum adding remainder everytime
        sum = sum + a;
        // this is the number which will update with the qoutient after every iteration
        num = num / 10;
        // this will give the remainder
        printf("%d\n", a);
    }

    printf("%d\n", sum);

    return 0;
}*/

/*8. If a five-digit number is input through the keyboard, write a program to reverse the number. Test Case: Num = 12341 Reverse = 14321*/

/*#include <stdio.h>

int main()
{
    int num = 0, n = 12341;
    while (n != 0)
    {
        // this will update the num value by x10
        num = num * 10;
        // the num value again updated by the addition of its previous value and the remainder of the value which we want to reverse
        num = n % 10 + num;
        // this is the qoutient of the value which is going to be reversed.
        n = n / 10;
    }
    // here i am printing the reversed value
    printf("The reverse of the number 12341 is : %d\n", num);
    return 0;
    /*Logic :- 
    $$ Lets come to the 2nd line of while loop because initially the value of the num is 0 >> The logic behind this reversal is when we are iterating the loop the value which we want to reverse leaves a remainder as its last value because we are applying modulus function
    $$ Then the remainder value is stored in num variable.
    $$ come to 3rd line here n which is going to reverse is updated with the new value which is its qoutient
    $$ now come to the 1st line because we have the num value now it is multiplying this value with 10 and in 2nd line adding it with remainder of qoutient of n
    $$ This process will continue until the value of n will be empty or 0
}*/

// 9. If a four-digit number is input through the keyboard, write a program to obtain the sum of the first and last digit of this number.

/*#include <stdio.h>

int main()
{
    int num, n, f, l, d = 1;
    printf("Enter the four digit number to add its first and last digit number : ");
    scanf("%d", &num);
    n = num;
    while (num != 0)
    {
        num = num / 10;
        d = d * 10;
    }
    d = d / 10;
    f = n / d;
    l = n % 10;
    printf("The Addition of the First and Last digit number is :- %d\n", f + l);
    return 0;
}*/

/*10. A cashier has currency notes of denominations 10, 50 and 100. If the amount to be withdrawn is input through the keyboard, find the total number of currency notes of each denomination the cashier will have to give to the withdrawer. Test Case: Amount = Rs 570 Hundred_Note = 5 Fifity_Note = 1 Ten_Note = 2*/

/*#include <stdio.h>

int main()
{
    int amt, twoTh, fiveH, twoH, oneH, fifty, twenty, ten, five, two, one;
    printf("Enter the Amount which you want to denominate : ");
    scanf("%d", &amt);

    if (amt >= 2000)
    {
        twoTh = amt / 2000;
        amt = amt - (2000 * twoTh);
        printf("2000 x %d = %d\n", twoTh, 2000 * twoTh);
    }
    if (amt >= 500)
    {
        fiveH = amt / 500;
        amt = amt - (500 * fiveH);
        printf("500 x %d = %d\n", fiveH, 500 * fiveH);
    }
    if (amt >= 200)
    {
        twoH = amt / 200;
        amt = amt - (200 * twoH);
        printf("200 x %d = %d\n", twoH, 200 * twoH);
    }
    if (amt >= 100)
    {
        oneH = amt / 100;
        amt = amt - (100 * oneH);
        printf("100 x %d = %d\n", oneH, 100 * oneH);
    }
    if (amt >= 50)
    {
        fifty = amt / 50;
        amt = amt - (50 * fifty);
        printf("50 x %d = %d\n", fifty, 50 * fifty);
    }
    if (amt >= 20)
    {
        twenty = amt / 20;
        amt = amt - (20 * twenty);
        printf("20 x %d = %d\n", twenty, 20 * twenty);
    }
    if (amt >= 10)
    {
        ten = amt / 10;
        amt = amt - (10 * ten);
        printf("10 x %d = %d\n", ten, 10 * ten);
    }
    if (amt >= 5)
    {
        five = amt / 5;
        amt = amt - (5 * five);
        printf("5 x %d = %d\n", five, 5 * five);
    }
    if (amt >= 2)
    {
        two = amt / 2;
        amt = amt - (50 * two);
        printf("2 x %d = %d\n", two, 2 * two);
    }
    if (amt >= 1)
    {
        one = amt / 1;
        amt = amt - (1 * one);
        printf("1 x %d = %d\n", one, 1 * one);
    }
    return 0;
}*/

// 11. Find the absolute value of a number entered through the keyboard.
// Hint: Absolute value of any negative number id is positive value for example absolute(-5) = 5 and absolute(5) =5.

/*#include <stdio.h>

int main()
{
    int num = 1;
    printf("Enter the value to find its absolute value : ");
    scanf("%d", &num);

    if (num < 0)
    {
        num = num * (-1);
        printf("the abs of number is %d\n", num);
    }
    else
    {
        printf("the abs of number is %d\n", num);
    }
    return 0;
}*/
// 12. If cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made profit or incurred loss.Also determine how much profit he made or loss he incurred.

/*#include <stdio.h>

int main()
{
    int cost, selling, profit, loss;
    printf("Enter the Cost Price of the Artical : ");
    scanf("%d", &cost);
    printf("Enter the Selling Price of the Artical : ");
    scanf("%d", &selling);
    if (selling > cost)
    {
        printf("Joy...! You are in profit\n");
        printf("The profit is :- %d\n", selling - cost);
    }
    else if (cost > selling)
    {
        printf("Alert..!! You are in Loss\n");
        printf("The Loss is :- %d\n", cost - selling);
    }
    else if (cost == selling)
    {
        printf("No-Profit No-Loss\n");
    }
    return 0;
}*/

// 13. Any integer is input through the keyboard.Write a program to find out whether it is an odd number or even number.

/*#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number to check ODD / EVEN : ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("This is the EVEN Number.\n");
    }
    else
    {
        printf("This is ODD Number\n");
    }
    return 0;
}*/

// 14. Three angles of the triangle are entered through the keyboard, write a program to check whether a triangle is valid or not. A triangle is valid if the sum of all the three angles is equal to 180 degrees.

/*#include <stdio.h>

int main()
{
    float a, b, c, sum;
    printf("Enter the Angle a of Triangle : ");
    scanf("%f", &a);
    printf("Enter the Angle b of Triangle : ");
    scanf("%f", &b);
    printf("Enter the Angle c of Triangle : ");
    scanf("%f", &c);
    sum = a + b + c;
    if (sum == 180)
    {
        printf("This triangle is valid...\n");
    }
    else
    {
        printf("This triangle is invalid...\n");
    }
    return 0;
}*/

// 15. A four-digit number is entered through the keyboard. Write a program to obtain the reversed number and to determine whether the original and reversed numbers are equal or not. Such a number is also called palindrome number for example Reverse of 1221 is 1221.

/*#include <stdio.h>

int main()
{
    int num = 0, n, st;

    printf("Enter the number to check is it Palindrome or not: ");
    scanf("%d", &n);
    st = n;
    while (n != 0)
    {
        num = num * 10;
        num = n % 10 + num;
        n = n / 10;
    }
    printf("The Reverse of the number is %d\n", num);
    if (num == st)
    {
        printf("The Entered number is Palindrome\n");
    }
    else
    {
        printf("The Entered Number is not Palindrome\n");
    }
    return 0;
}*/
// 16. If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program to determine the youngest of the three.

/*#include <stdio.h>

int main()
{
    int ram, shyam, ajay;
    printf("Enter the age of Ram : ");
    scanf("%d", &ram);
    printf("Enter the age of Shyam : ");
    scanf("%d", &shyam);
    printf("Enter the age of Ajay : ");
    scanf("%d", &ajay);
    if (ram >= shyam && ram >= ajay)
    {
        if (ram == shyam)
        {
            printf("Ram and Shyam are of same age");
        }
        else if (ram == ajay)
        {
            printf("Ram and ajay are of same age");
        }
        printf("Ram is Oldest...\n");
    }
    if (shyam >= ram && shyam >= ajay)
    {
        if (shyam == ram)
        {
            printf("Shyam and Ram are of same age");
        }
        else if (shyam == ajay)
        {
            printf("Shyam and Ajay are of same age");
        }
        printf("Shyam is Oldest...\n");
    }
    if (ajay >= ram && ajay >= shyam)
    {
        if (ajay == ram)
        {
            printf("Ajay and Ram are of same age");
        }
        else if (ajay == shyam)
        {
            printf("Ajay and Shyam are of same age");
        }
        printf("Ajay is oldest\n");
    }

    return 0;
}*/

// 17. Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not.

/*#include <stdio.h>

int main()
{
    int year;
    printf("Enter the year which you want to check leap year or not :- ");
    scanf("%d", &year);

    // if (year % 4 == 0)
    // {
    //     if (year % 100 == 0)
    //     {
    //         if (year % 400 == 0)
    //         {
    //             printf("The year is leap year...\n");
    //         }
    //         else
    //         {
    //             printf("The year is not leap year\n");
    //         }
    //     }
    //     printf("The year is leap year\n");
    // }

    if (((year % 4 == 0) && (year % 100 != 0)) || year % 400 == 0)
    {
        printf("%d is leap year\n", year);
    }
    else
    {
        printf("%d is not a leap year\n", year);
    }
    return 0;
}*/

/*18. Any character is entered through the keyboard, write a program to determine whether the character
entered is a capital letter, a small case letter, a digit or a special symbol.
The following table shows the range of ASCII values for various characters.
Characters
ASCII Values
A – Z
65 – 90
a –z
97 – 122
0 – 9
48 – 57
Special symbols
0 – 47, 58 – 64, 91 – 96, 123 - 127*/

// #include <stdio.h>
// int main()
// {
//     char ch;
//     printf("Enter a character : ");
//     scanf("%c", &ch);

//     if ((ch >= 65) && (ch <= 90))
//     {
//         printf("Capital Letter\n");
//     }
//     else if ((ch >= 97) && (ch <= 122))
//     {
//         printf("Small Letter\n");
//     }
//     else if ((ch >= 48) && (ch <= 57))
//     {
//         printf("Number\n");
//     }
//     else if (((ch >= 0) && (ch <= 47)) || ((ch >= 58) && (ch <= 64)) || ((ch >= 91) && (ch <= 96)) || ((ch >= 123) && (ch <= 127)))
//     {
//         printf("Special Symbol\n");
//     }
//     return 0;
// }

/*#include <stdio.h>

int main()
{
    char sd;
    printf("Enter the element : ");
    scanf("%c", &sd);

    if (sd >= 65 && sd <= 90)
    {
        printf("This is Capital Letter.\n");
    }
    else if (sd >= 97 && sd <= 122)
    {
        printf("This is Small Case Letter.\n");
    }
    else if (sd >= 48 && sd <= 57)
    {
        printf("This is a Number.\n");
    }
    else if (sd >= 0 && sd <= 47 || sd >= 58 && sd <= 64 || sd >= 91 && sd <= 96 || sd >= 123 && sd <= 127)
    {
        printf("This is Special Symbol\n");
    }
    return 0;
}*/

// 19. Any year is entered through the keyboard, write a program to determine whether the year is leap or not. Use the logical operators && and || operator.

/*#include <stdio.h>

int main()
{
    int year;

    printf("Enter the year to check Leap or Not : ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("%d is Leap year.\n", year);
    }
    else
    {
        printf("%d is not a leap year.\n", year);
    }
    return 0;
}*/

// 20. Write a program which reads a character from keyboard and reports whether it is a vowel, consonant or any other non-alphabet. Use the logical operators && and || operator.

/*#include <stdio.h>

int main()
{
    char sd;

    printf("Enter the element to check is it Alphabet or not : ");
    scanf("%c", &sd);

    if ((sd >= 65 && sd <= 90) || (sd >= 97 && sd <= 122))
    {
        printf("This is Alphabet of ");
        if (sd == 65 || sd == 97 || sd == 101 || sd == 69 || sd == 105 || sd == 73 || sd == 111 || sd == 79 || sd == 117 || sd == 85)
        {
            printf("Vowel type\n");
        }
        else
        {
            printf("Consonant type\n");
        }
    }
    else
    {
        printf("This is not a Alphabet.\n");
    }
    return 0;
}*/

/*21. A library charges per day fine for every book returned late. For first 5 days the fine is 50 paise per day, for 6-10 days fine is one rupee per day and above 10 days and till 30 days fine is 5 rupees per day. If you return the book after 30 days your membership will be cancelled. Write a program to accept the number of days the member is late to return the book and display the fine or appropriate message.
Hint : late_days = 4 fine = Rs 2
late_days = 7 fine = Rs 4.50
late_days = 12 fine = Rs 17.50*/

/*#include <stdio.h>

int main()
{
    float ld, rem;
    printf("Enter the no of Late Days :- ");
    scanf("%f", &ld);
    if (ld > 0 && ld <= 5)
    {
        printf("The Total fine is %f Rs/- of %f days.\n", ld * 0.50, ld);
    }
    if (ld <= 10 && ld >= 6)
    {
        rem = (5 * 0.5) + ((ld - 5) * 1);
        printf("The Total fine is %f Rs/- of %f days.\n", rem, ld);
    }
    if (ld >= 11 && ld <= 30)
    {
        rem = (5 * 0.5) + (10 - 5) + ((ld - 10) * 5);
        printf("The Total fine is %f Rs/- of %f days \n", rem, ld);
    }
    if (ld > 30)
    {
        printf("You membership has been cancelled.");
        rem = (5 * 0.5) + (10 - 5) + (20 * 5) + ((ld - 30) * 10);
        printf("and you have to pay %f Rs/-\n", rem);
    }

    return 0;
}*/

// 22.If the three sides of a triangle are entered through the keyboard, write a program to check whether the triangle is isosceles, equilateral, scalene or right angled triangle.Isosceles:Has two sides equal and third is different.Equilateral:Has all three sides equal.Scalene:None of the tree sides are equal.Right Angled:Pythagoras theorem (H2= B2+ P2) is true

/*#include <stdio.h>

int main()
{
    int base, perpendicular, hypotenuous;
    float pyth1, pyth2;

    printf("Enter the Base of Triangle : ");
    scanf("%d", &base);
    printf("Enter the Perpendicular of Triangle : ");
    scanf("%d", &perpendicular);
    printf("Enter the Hypotenuous of Triangle : ");
    scanf("%d", &hypotenuous);

    pyth1 = hypotenuous * hypotenuous;

    pyth2 = (base * base) + (perpendicular * perpendicular);

    if (base == perpendicular && perpendicular == hypotenuous && base == hypotenuous)
    {
        printf("This is a Equilateral Triangle.\n");
    }
    if ((base == perpendicular && (base != hypotenuous || perpendicular != hypotenuous)) || (base == hypotenuous && (base != perpendicular || base != hypotenuous)) || (perpendicular == hypotenuous && (hypotenuous != base || perpendicular != base)))
    {
        printf("This is Isosceles Triangle.\n");
    }
    if (base != perpendicular && perpendicular != hypotenuous && base != hypotenuous && pyth1 != pyth2)
    {
        printf("This is a Scalene Triangle.\n");
    }
    if (pyth1 == pyth2)
    {
        printf("This is Right Angled Triangle.\n");
    }

    return 0;
}*/
// 23.In a company, worker efficiency is determined on the basis of the time required for a worker to complete a particular job. If the time taken by the worker is between 2-10 hours, then the worker is said to be highly efficient. If the time required by the worker is between 10-20hours, then the worker ordered to improve speed. If the time taken is between 20-30hours, the worker is given training to improve his speed, and if the time taken by the worker is more than 30hours, then the worker has to leave the company. If the time  taken  by  the  worker  is  input  through the  keyboard,  write  a  program to  printthe  efficiency of  the worker.

/*#include <stdio.h>

int main()
{
    int t;
    printf("Enter the time taken by the Worker : ");
    scanf("%d", &t);

    if (t >= 2 && t <= 10)
    {
        printf("Highly Efficient\n");
    }
    else if (t > 10 && t <= 20)
    {
        printf("Improve Speed\n");
    }
    else if (t > 20 && t <= 30)
    {
        printf("Needs Training to Improve Speed\n");
    }
    else if (t > 30)
    {
        printf("You have to leave the company\n");
    }
    return 0;
}*/

// 24.The policy followed by a company to process customer orders is given by the following rules:a)If a customer order quantity is less than or equal to that in stock and his credit rating is OK. Supply his requirement.b)If his credit rating is not OK do notsupply. Send him an intimation that your credit rating in not good.c)If his credit is OK but the item in stock is less than his order, supply what is in stock. Intimate to him the date on which the balance will be shipped.Hint: CreditRating is how honest the customer is while paying his credit.Use 1 for OKcredit and 0 for Not OKcredit

/*#include <stdio.h>

int main()
{
    int cred, ourStock = 100, products, rem;
    printf("Enter the number of Products : ");
    scanf("%d", &products);
    printf("Enter your credit Rating 0/1 : ");
    scanf("%d", &cred);

    if (cred == 1)
    {
        if (ourStock >= products)
        {
            printf("Supply his requirement\n");
        }
        else if (ourStock < products)
        {
            rem = products - ourStock;
            printf("We are shipping %d items and %d will be shipped within 2 days.\n", ourStock, rem);
        }
    }
    else
    {
        printf("Your credit rating is not Good.\n");
    }
    return 0;
}*/

// 25.Write a programto calculate overtime pay of 3employees. Overtime is paid at the rate of Rs. 12.00 per hour for every hour worked above 40 hours. Assume that employees do not work for fractional part of an hour

/*#include <stdio.h>

int main()
{
    int hrs, over, i = 1;
    while (i <= 3)
    {
        printf("Enter the working hours of employee %d : ", i);
        scanf("%d", &hrs);
        if (hrs > 40)
        {
            over = hrs - 40;
            printf("Your overtime pay is %d Rs/-.\n", over * 12);
        }
        else
        {
            printf("You do not work more than 40 Hrs to get over time pay.\n");
        }
        i++;
    }
    return 0;
}*/

// 26.Write a program to fill the entire screen with a smiling face. The smiling face has an ASCII value 1.

/*#include <stdio.h>
int main()
{
    char ch = 1;
    int i;
    for (i = 0; i <= 200; i++)
    {
        printf("%c", ch);
    }

    return 0;
}*/

// 27.Write a program to print all the ASCII values and their equivalent characters using a while loop. The ASCII values vary from 0 to 255.

/*#include <stdio.h>
int main()
{
    int i;

    for (i = 0; i <= 255; i++)
    {
        printf("%c = %d\n", i, i);
    }
}*/
// 28.Write a program to find the factorial value of any number entered through the keyboard

/*#include <stdio.h>

int main()
{
    int i, num = 1, fact;

    printf("Enter the number for Factorial : ");
    scanf("%d", &fact);

    for (i = fact; i >= 1; i--)
    {
        num = num * i;
    }
    printf("The Factorial of %d is :-> %d\n", fact, num);
    return 0;
}*/

// 29.Write a program to reverse a number using while loop

/*#include <stdio.h>

int main()
{
    int num, n = 0;

    printf("Enter the number which is to be reversed : ");
    scanf("%d", &num);

    while (num != 0)
    {
        n = n * 10;
        n = num % 10 + n;
        num = num / 10;
    }
    printf("The number after reversal is :- %d\n", n);
    return 0;
}*/

// 30.Write a program to find is a given number is palindrome or not.

/*#include <stdio.h>

int main()
{
    int num, n = 0, prev;
    printf("/////////////////// IN THIS PROGRAM WE ARE GOING TO CHECK WHETHER THE NUMBER IS A PALINDROME OR NOT ///////////////////\n");
    printf("Enter the number : ");
    scanf("%d", &num);
    prev = num;
    while (num != 0)
    {

        n = n * 10;
        n = num % 10 + n;
        num = num / 10;
    }
    printf("After reversal :- %d\n", n);
    if (prev == n)
    {
        printf("The number is Palindrome\n");
    }
    else
    {
        printf("The number is not a Palindrome\n");
    }
    return 0;
}*/

// 31.Two numbers are entered through the keyboard. Write a program to find the value of one number raised to the power of another

/*#include <stdio.h>

int main()
{
    int num1, num2, n = 0, count = 0, store;
    printf("<<<<<<<<<<<<<<< This program only works for perfect squares >>>>>>>>>>>>>>\n");
    printf("Enter first number : ");
    scanf("%d", &num1);
    printf("Enter second number : ");
    scanf("%d", &num2);
    store = num1;
    while (num1 != 1)
    {
        n = num1 / num2;
        num1 = num1 / num2;
        count++;
    }
    // 1. (8-2) 8/2 > 4/2 > 2/2 >> 3-times
    printf("%d raised to the power %d is %d\n", num2, count, store);
    return 0;
}*/

// 2.Write a program to find if the entered 3 digit number is Armstrong or not.Armstrong number is a number in which sum of cube of digits is equal to number,Ex:153 = (1 * 1 * 1) + (5 * 5 * 5) + (3 * 3 * 3)

/*#include <stdio.h>

int main()
{
    int num, n = 0, st = 0, st2 = 0, store;
    printf("Enter the number : ");
    scanf("%d", &num);
    store = num;
    while (num != 0)
    {
        n = num % 10;
        num = num / 10;
        st = n * n * n;
        st2 = st2 + st;
    }
    printf("Calculated value :- %d\n", st2);
    if (store == st2)
    {
        printf("%d is a Armtrong number.\n", store);
    }
    else
    {
        printf("%d is not a Armstong number.\n", store);
    }
    return 0;
}*/

// 33.Write a program to print outall Armstrong numbers between 1and entered number. For example if entered number is 500 then the program should find allArmstrong numbersbetween 1 and 500

// #include <stdio.h>

// int main()
// {
//     int num, count = 1, rem, sum = 0;

//     while (count <= 500)
//     {
//         num = count;

//         while (num)
//         {
//             rem = num % 10;
//             sum = sum + (rem * rem * rem);
//             num = num / 10;
//         }

//         if (count == sum)
//         {
//             printf("%d is a Armstrong number\n", count);
//         }

//         count++;
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     int num, lastDigit, digits, sum, i, end;

//     /* Input upper limit from user */
//     printf("Enter upper limit: ");
//     scanf("%d", &end);

//     printf("Armstrong number between 1 to %d are: \n", end);

//     for (i = 1; i <= end; i++)
//     {
//         sum = 0;

//         /* Copy the value of num for processing */
//         num = i;

//         /* Find total digits in num */
//         digits = (int)log10(num) + 1;

//         /* Calculate sum of power of digits */
//         while (num > 0)
//         {
//             /* Extract last digit */
//             lastDigit = num % 10;

//             // Find sum of power of digits
//             // Use ceil() function to overcome any rounding errors by pow()
//             sum = sum + ceil(pow(lastDigit, digits));

//             /* Remove the last digit */
//             num = num / 10;
//         }

//         /* Check for Armstrong number */
//         if (i == sum)
//         {
//             printf("%d, ", i);
//         }
//     }

//     return 0;
// }
// 34.Write a program to find if the entered number is prime or not.
/*#include <stdio.h>

int main()
{
    int num, i, count = 0;
    printf("Enter the number : ");
    scanf("%d", &num);
    for (i = num; i >= 1; i--)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        printf("This is Prime number\n");
    }
    else
    {
        printf("This is not a Prime number\n");
    }
    return 0;
}*/

// 35.Write a program to printall prime numbers from 2 the number entered by user.For example if entered number is 100 then the program should find all prime numbers between 1 and 100

// #include <stdio.h>

// int main()
// {
//     int num, i, count = 0, r;
//     printf("Enter the number : ");
//     scanf("%d", &num);
//     for (r = 1; r <= num; r++)
//     {
//         for (i = r; i >= 1; i--)
//         {
//             if (r % i == 0)
//             {
//                 count++;
//             }
//         }
//         if (count == 2)
//         {
//             printf("This is Prime number\n");
//         }
//         else
//         {
//             printf("This is not a Prime number\n");
//         }
//         continue;
//     }
//     return 0;
// }

// 36.Write a program to print first Nprime numbers.For example if entered number is 5 then the program should print first 5 prime numbers as 2, 3, 5, 7, 11

// 37.Write a program to convert decimal number to its binary equivalent

/*#include <stdio.h>

int main()
{
    int num, n = 0, st = 0, nn = 0;
    printf("Enter the number which you want to convert into Binary : ");
    scanf("%d", &num);
    while (num != 0)
    {
        n = n * 10;
        n = num % 2 + n; // remainder
        num = num / 2;   // qoutient
    }
    while (n != 0)
    {
        nn = nn * 10;
        nn = n % 10 + nn;
        n = n / 10;
    }
    printf("%d\n", nn);
    return 0;
}*/

// 38.Write a program to convert decimal number to itsoctal equivalent.
/*#include <stdio.h>

int main()
{
    int num, n = 0, nn = 0;

    printf("Enter the number to check : ");
    scanf("%d", &num);

    while (num != 0)
    {
        n = n * 10;
        n = num % 8 + n;
        num = num / 8;
    }

    while (n != 0)
    {
        nn = nn * 10;
        nn = n % 10 + nn;
        n = n / 10;
    }
    printf("%d\n", nn);
    return 0;
}*/

// 39.Write a program to enter the numbers till the user wants and at the end it should display the count of positive, negative and zero’s entered.

/*#include <stdio.h>

int main()
{
    int pcount = 0, ncount = 0, zcount = 0, num;

    do
    {
        printf("Enter the number : \npress 1 to exit : ");
        scanf("%d", &num);
        printf("////////////////////////////////////////////////////////////////////////////////////\n");

        if (num < 0)
        {
            ncount++;
        }
        else if (num == 0)
        {
            zcount++;
        }
        else if (num > 0 && num != 1)
        {
            pcount++;
        }
    } while (num != 1);

    printf("////////////////////////////////////////////////////////////////////////////////////\n");
    printf("Positive numbers are :- %d \nNegetive numbers are :- %d \nZeros are :- %d\n", pcount, ncount, zcount);
    return 0;
}*/

// 40.Write a program to find the range of a set of numbers entered by user. Range is the difference between the smallest and largestnumber in the list.The user should be able to enter multiple numbers as per choice

/*#include <stdio.h>

int main()
{
    int big, small, range, limit, num;
    printf("Enter the limit :- ");
    scanf("%d", &limit);

    printf("Enter %d numbers\n", limit);
    scanf("%d", &num);

    small = big = num;
    limit = limit - 1;
    while (limit != 0)
    {
        limit--;
        scanf("%d", &num);

        if (num < small)
        {
            small = num;
        }
        if (num > big)
        {
            big = num;
        }
    }
    range = big - small;
    printf("The Smaller Number :- %d\nThe Bigger Number is :- %d\n", small, big);
    printf("The range is :- %d\n", range);
    return 0;
}*/

// 41.Write a c program to find out prime factor of given number.For example prime factors of 12 = 2 x 2 x 3

/*#include <stdio.h>

int main()
{
    int num, n, i, st = 1, st2;

    printf("Enter the number whose Prime Factors you want to get :- ");
    scanf("%d", &num);

    st2 = num;
    for (i = 2; num > 1; i++)
    {
        while (num % i == 0)
        {
            printf("%d\n", i);
            st = st * i;
            num = num / i;
        }
    }
    if (st2 == st)
    {
        printf("These are Prime Factors of %d\n", st2);
    }
    return 0;
}*/

// 42. Write a program to generate all combinations of 1, 2 and 3 using for loop

/*#include <stdio.h>

int main()
{
    int i, j, k;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            for (k = 1; k <= 3; k++)
            {
                printf("%d %d %d\n", i, j, k);
            }
        }
    }
    return 0;
}*/

// 43.Write a program to print Fibonacciseries till anyentered number.For example the number entered id 50 then the series should be 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, if the entered number is 200 then the series should be 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144

/*#include <stdio.h>

int main()
{
    int num, st = 0, i, n1 = 0, n2 = 1, n3;

    printf("Enter the number for Fibonacci Series : ");
    scanf("%d", &num);
    printf("%d\n%d\n", n1, n2);p9iokm, tyghb x[;/.]

    for (i = 2; i <= num; i++)
    {
        n3 = n1 + n2;
        if (n3 > num)
        {
            break;
        }
        printf("%d\n", n3);
        n1 = n2;
        n2 = n3;
    }
    return 0;
}*/

// 44.Write a program to print first N terms of Fibonacci series.For example the number entered id 7 then the series should be 0, 1, 1, 2, 3, 5, 8, if the entered number is 12then the series should be 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89

/*#include <stdio.h>

int main()
{
    int num, n1 = 0, n2 = 1, n3, i;
    printf("Enter the number for fibonacci series : ");
    scanf("%d", &num);
    printf("%d\n%d\n", n1, n2);
    for (i = 2; i <= num; i++)
    {
        n3 = n1 + n2;
        printf("%d\n", n3);
        n1 = n2;
        n2 = n3;
    }
    return 0;
}*/

// 45.Write a program to print the multiplication table of the number entered by the user. For example if the entered number is 29 The table should get displayed in the following from:29 * 1 =2929 * 2 = 58..29 * 10 = 290

/*#include <stdio.h>

int main()
{
    int num, i;
    printf("Enter the number whose table you want :- ");
    scanf("%d", &num);

    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    return 0;
}*/
// 46.Write a program to enter the size of pattern and produce the following patternfor example if entered size is 5.
// *
// *  *
// *  *  *
// *  *  *  *
// *  *  *  *  *

/*#include <stdio.h>

int main()
{
    int num, i, r;
    printf("Enter the size :- ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        for (r = 1; r <= i; r++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}*/

// This will print the Right Angle Triangle Pattern using natural numbers.
/*#include <stdio.h>

int main()
{
    int i, j, num, k, num1;
    printf("Enter the value : ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}*/

// 47. Write a Program to print Equileteral Triangle / Pyramid taking input from user
//          *
//         * *
//        * * *
//       * * * *
//      * * * * *

/*#include <stdio.h>

int main()
{
    int num, i, j, k;
    printf("Enter the number :- ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        for (j = i + 1; j <= num; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}*/

// 48. Write a Program to print the following pattern Dual-Pyramid.
//       *
//      * *
//     * * *
//    * * * *
//   * * * * *
//   * * * * *
//    * * * *
//     * * *
//      * *
//       *

/*#include <stdio.h>

int main()
{
    int num, i, j, k, i1, j1, k1;

    printf("Enter the range :- ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        for (j = i + 1; j <= num; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (i1 = 1; i1 <= num; i1++)
    {
        for (j1 = i1 - 1; j1 >= 1; j1--)
        {
            printf(" ");
        }
        for (k1 = num; k1 >= i1; k1--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}*/
// 48. Write a progrm to print left facing Right Angled Triangle
/*#include <stdio.h>

int main()
{
    int num, i, j, k;
    printf("Enter the number : ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        for (j = i + 1; j <= num; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("$");
        }
        printf("\n");
    }
    return 0;
}*/

// 49.Write a program to enter the size of pattern and produce the following pattern for example if entered size is 5.
// *  *  *  *  *
//   *  *  * *
//     *  * *
//       * *
//        *

/*#include <stdio.h>

int main()
{
    int num, i, j, k;
    printf("Enter the range of :- ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {

        // This will not execute at first run because i=1 > j=1-1=0 > ( j>=1 )
        for (j = i - 1; j >= 1; j--)
        {
            printf(" ");
        }
        // This will print the pattern symbol
        // starts from the current value of i and it will go until value of num
        for (k = i; k <= num; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}*/

// 50.Write a program to enter the size of pattern and produce the following pattern for example if entered size is 5.
// 1
// 1  2  1
// 1  2  3  2  1
// 1  2  3  4  3  2  1

/*#include <stdio.h>

int main()
{
    int num, i, j, k;
    printf("Enter the number :- ");
    scanf("%d", &num);
    for (i = 1; i <= num - 1; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        for (k = i - 1; k >= 1; k--)
        {
            printf("%d ", k);
        }
        printf("\n");
    }
    return 0;
}*/

// 51.Write a program to enter the size of pattern and produce the following pattern for example if entered size is 5
// 1
// 2  1
// 1  2  3
// 4  3  2  1
// 1  2  3  4  5

/*#include <stdio.h>

int main()
{
    int num, i, j, k;
    printf("Enter the number :- ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        if (i % 2 != 0)
        {
            for (j = 1; j <= i; j++)
            {
                printf("%d ", j);
            }
        }
        if (i % 2 == 0)
        {
            for (k = i; k >= 1; k--)
            {
                printf("%d ", k);
            }
        }
        printf("\n");
    }
    return 0;
}*/

// 52.Write a program to enter the size of pattern and produce the following pattern for exampleif entered size is 5.
//           1
//        2  3  2
//      3  4  5  4  3
//    4  5  6  7  6  5  4
// 5  6  7  8  9  8  7  6  5

/*#include <stdio.h>

int main()
{
    int num, i, j, k, l, count = 0;
    printf("Enter the number :- ");
    scanf("%d", &num);

    // This outer for loop will responsible for vertical movement of the pattern
    for (i = 1; i <= num; i++)
    {
        // This will generate the spaces in the pattern
        // which has value lower by 1 from the range given by the user to make pyramid
        // starts from ( i+1 ) and has value until num value given by the user.
        for (j = i + 1; j <= num; j++)
        {
            printf("  ");
        }
        // It starts from 1 and has range until < i >
        // here i am incrementing the value of count which was previously 0
        // here it will increment by 1  i times.
        for (k = 1; k <= i; k++)
        {
            count++;
            printf("%d ", count);
        }
        // this step willnot run at first iteration because value of l will be 0 and the condition is not satisfied
        for (l = i - 1; l >= 1; l--)
        {
            count--;
            printf("%d ", count);
        }
        // this will push the compiler in the next line
        printf("\n");
    }
    return 0;
}*/

// 53.Write a program to enter the size of pattern and produce the following pattern for example if entered size is 5.
// 1
// 0  1
// 1  0  1
// 0  1  0  1
// 1  0  1  0  1

/*#include <stdio.h>

int main()
{
    int num, i, j, count = 0, k;
    printf("Enter the number :- ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        if (i % 2 != 0)
        {
            for (k = 1; k <= i; k++)
            {
                if (k % 2 != 0)
                {
                    printf("1 ");
                }
                else if (k % 2 == 0)
                {
                    printf("0 ");
                }
            }
        }
        if (i % 2 == 0)
        {
            for (j = 1; j <= i; j++)
            {
                if (j % 2 != 0)
                {
                    printf("0 ");
                }
                else if (j % 2 == 0)
                {
                    printf("1 ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}*/

// 54.Write a program to enter the size of pattern and produce the following pattern using only two for loopsfor example if entered size is 5

// *  *  *  *  1
// *  *  *  1  2
// *  *  1  2  3
// *  1  2  3  4
// 1  2  3  4  5

/*#include <stdio.h>

int main()
{
    int num, i, j, k;
    printf("Enter the number :- ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        for (j = i + 1; j <= num; j++)
        {
            printf("* ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("%d ", k);
        }
        printf("\n");
    }
    return 0;
}*/

// 55.Write a program to draw a Fibonacci triangle as below for example if entered size is 7 it should produce following output.
// 0 1
// 0 1 1
// 0 1 1 2
// 0 1 1 2 3
// 0 1 1 2 3 5
// 0 1 1 2 3 5 8
// 0 1 1 2 3 5 8 13

/*#include <stdio.h>

int main()
{
    int num, i, j, f1, f2, f3;
    printf("Enter the number for Fibonacci Triangle :- ");
    scanf("%d", &num);
    for (j = 1; j <= num; j++)
    {
        // here i am reassigning the values 0,1 to f1 and f2 bacause we need to reset the values of f1 and f2 otherwise previous value will increment and print
        // and here we are printing the fibonacci series in each row.
        f1 = f3 = 0;
        f2 = 1;
        // printing first 2 values
        printf("%d ", f1);
        printf("%d ", f2);
        // this will print all the values according to loop
        for (i = 2; i <= j; i++)
        {
            f3 = f1 + f2;
            printf("%d ", f3);
            f1 = f2;
            f2 = f3;
        }
        printf("\n");
    }
    return 0;
}*/

// 56.Write a C program to display the following rhombus symbol structure, for example if entered size is 4 it should produce following output
//       *
//      * *
//     * * *
//    * * * *
//   * * * * *
//  * * * * * *
// * * * * * * *
//  * * * * * *
//   * * * * *
//    * * * *
//     * * *
//      * *
//       *
/*#include <stdio.h>

int main()
{
    int num, i, j, k, i1, j1, k1;

    printf("Enter the number :- ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        for (j = i + 1; j <= num; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (i1 = 2; i1 <= num; i1++)
    {
        for (j1 = i1; j1 >= 2; j1--)
        {
            printf(" ");
        }
        for (k1 = num; k1 >= i1; k1--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}*/

// 57.Write a C program to display the following number rhombus structure, for example if entered size is 4 it should produce following output.
//                 1
//               2 1 2
//             3 2 1 2 3
//           4 3 2 1 2 3 4
//         5 4 3 2 1 2 3 4 5
//       6 5 4 3 2 1 2 3 4 5 6
//     7 6 5 4 3 2 1 2 3 4 5 6 7
//   8 7 6 5 4 3 2 1 2 3 4 5 6 7 8
// 9 8 7 6 5 4 3 2 1 2 3 4 5 6 7 8 9
//   8 7 6 5 4 3 2 1 2 3 4 5 6 7 8
//     7 6 5 4 3 2 1 2 3 4 5 6 7
//       6 5 4 3 2 1 2 3 4 5 6
//         5 4 3 2 1 2 3 4 5
//           4 3 2 1 2 3 4
//             3 2 1 2 3
//               2 1 2
//                 1

/*#include <stdio.h>

int main()
{
    int num, i, j, k, count = 0, l, i1, j1, k1, l1, st = 0;
    printf("Enter the number :- ");
    scanf("%d", &num);
    st = num;
    for (i = 1; i <= num; i++)
    {
        for (j = i + 1; j <= num; j++)
        {
            printf("  ");
        }

        for (k = i; k >= 1; k--)
        {
            printf("%d ", k);
        }

        for (l = 2; (l <= i && i != 1); l++)
        {
            printf("%d ", l);
        }

        printf("\n");
    }

    for (i1 = st - 1; i1 >= 1; i1--)
    {
        for (j1 = i1; j1 <= st - 1; j1++)
        {
            printf("  ");
        }
        for (k1 = i1; k1 >= 1; k1--)
        {
            printf("%d ", k1);
        }
        for (l1 = 2; l1 <= i1; l1++)
        {
            printf("%d ", l1);
        }
        printf("\n");
    }
    return 0;
}*/

// 58.Write a C program to display the following number rhombus structure, for example if entered size is 4 it should produce following output.

//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1
//   1 2 3 2 1
//     1 2 1
//       1

/*#include <stdio.h>

int main()
{
    int num, i, j, k, l, i1, j1, k1, l1;
    printf("Enter the number :- ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        for (j = i + 1; j <= num; j++)
        {
            printf("  ");
        }
        for (k = 1; k <= i; k++)
        {
            printf("%d ", k);
        }
        for (l = i - 1; l >= 1 && i != 1; l--)
        {
            printf("%d ", l);
        }
        printf("\n");
    }
    for (i1 = num - 1; i1 >= 1; i1--)
    {
        for (j1 = i1; j1 <= num - 1; j1++)
        {
            printf("  ");
        }
        for (k1 = 1; k1 <= i1; k1++)
        {
            printf("%d ", k1);
        }
        for (l1 = i1 - 1; l1 >= 1; l1--)
        {
            printf("%d ", l1);
        }
        printf("\n");
    }
    return 0;
}*/

// 59.Write a C program to display the following character rhombus structure, for example if entered size is 4 it should produce following output
//           A
//         A B A
//       A B C B A
//     A B C D C B A
//   A B C D E D C B A
//     A B C D C B A
//       A B C B A
//         A B A
//           A

/*#include <stdio.h>

int main()
{
    int i, j, k, l, i1, j1, k1, l1;
    int num, st;
    printf("Enter the number :- ");
    scanf("%d", &num);
    st = num;
    num = num + 64;

    for (i = 65; i <= num; i++)
    {
        for (k = i; k <= num; k++)
        {
            printf("  ");
        }
        for (j = 65; j <= i; j++)
        {
            printf("%c ", j);
        }
        for (l = i - 1; l >= 65; l--)
        {
            printf("%c ", l);
        }
        printf("\n");
    }
    for (i1 = num - 1; i1 >= 65; i1--)
    {
        for (j1 = i1; j1 <= num; j1++)
        {
            printf("  ");
        }
        for (k1 = 65; k1 <= i1; k1++)
        {
            printf("%c ", k1);
        }
        for (l1 = i1 - 1; l1 >= 65; l1--)
        {
            printf("%c ", l1);
        }
        printf("\n");
    }
    return 0;
}*/

// 60.Write a program to produce the following output
//             1
//         2       3
//     4       5       6
// 7       8       9       10
/*#include <stdio.h>

int main()
{
    int num, i, j, k, count = 0;

    printf("Enter the number :- ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        for (k = i; k <= num - 1; k++)
        {
            printf("    ");
        }
        for (j = 1; j <= i; j++)
        {
            count++;
            printf("%d       ", count);
        }
        printf("\n");
    }
    return 0;
}*/

// 61.Write a program to produce  the following output:
//                 1
//             1       1
//         1       2       1
//     1       3       3       1
// 1       4       6       4       1
// incomplete
/*#include <stdio.h>

int main()
{
    int num, i, j, k, l, count = 1;
    printf("Enter the number :- ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        for (j = i; j <= num - 1; j++)
        {
            printf("   ");
        }

        if (i == 1)
        {
            printf("1");
        }

        for (k = 1; k <= i - 1 && i != 1; k++)
        {
            printf("%d     ", k);
        }

        for (l = 1; l <= i - (i - 1) && l <= i - 1; l++)
        {
            printf("%d     ", l);
        }

        printf("\n");
    }
    return 0;
}*/

// 62.Write a menu driven Program which has following options:
// 1. Factorial of a number.
// 2. Prime or not.
// 3. Odd or even
// 4. Exit

/*#include <stdio.h>

int main()
{
    int num, i, num1, st = 1, count = 0;
    do
    {
        printf("Enter the related number which operation you want to perform:\n");
        printf("1. Factorial of a number.\n2. Prime or not.\n3. Odd or even.\n4. Exit\n");
        printf("Enter the selection :- ");
        scanf("%d", &num);

        switch (num)
        {
        case 1:
            printf("Enter the number to find out Factorail of a number :- ");
            scanf("%d", &num1);
            st = 1;
            for (i = num1; i >= 1; i--)
            {
                st = st * i;
            }
            printf("//////////////////////////////////////////////////////////\n");
            printf(">> The Factorial of %d is :- %d\n", num1, st);
            printf("//////////////////////////////////////////////////////////\n");
            break;
        case 2:
            printf("Enter the number to check Prime or not :- ");
            scanf("%d", &num1);
            // here i am resetting the value of count because it stores the previous value.
            count = 0;
            for (i = num1; i >= 1; i--)
            {
                if (num1 % i == 0)
                {
                    count++;
                }
            }
            printf("//////////////////////////////////////////////////////////\n");
            if (count == 2)
            {
                printf(">> %d is Prime Number.\n", num1);
            }
            else
            {
                printf(">> %d is not a Prime Number.\n", num1);
            }
            printf("//////////////////////////////////////////////////////////\n");
            break;

        case 3:
            printf("Enter the number to check ODD ot EVEN :- ");
            scanf("%d", &num1);
            printf("//////////////////////////////////////////////////////////\n");
            if (num1 % 2 == 0)
            {
                printf(">> %d is Even Number\n", num1);
            }
            else if (num1 % 2 != 0)
            {
                printf(">> %d is ODD Number\n", num1);
            }
            printf("//////////////////////////////////////////////////////////\n");

        default:
            break;
        }
    } while (num < 4 && num != 4);

    return 0;
}*/

// 64.Write a function to calculate the factorial value of any integer entered through the keyboard

/*#include <stdio.h>

// This is Function Declaration
int checkFacto(int num, int count, int i)
{
    printf("Enter the number to find Factorial :- ");
    scanf("%d", &num);
    count = 1;
    for (i = num; i >= 1; i--)
    {
        count = count * i;
    }
    printf("The Factorial of %d is %d\n", num, count);
}

// Here is Function Calling with the desired varibles
int main()
{
    int num, count = 1, i;
    checkFacto(num, count, i);
    return 0;
}*/

// 65.Write a function power(a, b), to calculate the value of araised to b

/*#include <stdio.h>
#include <math.h>

int Cpower(int num, int power)
{
    printf("Enter the number :- ");
    scanf("%d", &num);
    printf("Enter the power :- ");
    scanf("%d", &power);

    printf("%d^%d = %f\n", num, power, pow(num, power));
}
int main()
{
    int num, power;
    Cpower(num, power);

    return 0;
}*/

// 66.Any year is entered through the keyboard. Write a function todetermine whether the year is a leap year or not.Call this function from main() and print the results in main().

/*#include <stdio.h>
int leapCheck(int num)
{
    if ((num % 4 == 0 && num % 100 != 0) || num % 400 == 0)
    {
        printf("%d is a Leap Year.\n", num);
    }
    else
    {
        printf("%d is not a Leap Year.\n", num);
    }
}
int main()
{
    int num, year;
    printf("Enter the number : ");
    scanf("%d", &num);
    leapCheck(num);
    return 0;
}*/

// 67.A positive integer is entered through the keyboard, write a function to calculate sum of digits of the number.

/*#include <stdio.h>

int sum(int num1, int num2)
{
    printf("The Sum of the numbers are %d\n", num1 + num2);
}
int main()
{
    int num1, num2;
    printf("Enter the First Number :- ");
    scanf("%d", &num1);
    printf("Enter the Second Number :- ");
    scanf("%d", &num2);
    sum(num1, num2);
    return 0;
}*/

// 68.Write a function that receives 5 integers and returns the sum, average and standard deviation of these numbers. Call this function from main() and print the results in main().Hint: Use call by reference to return multiple values

/*#include <stdio.h>
#include <math.h>
// here we are using * before the variable whose value we want to print in the main function of the program
int calc(float *sd, int sum, int avg, int n1, int n2, int n3, int n4, int n5, int n11, int n12, int n13, int n14, int n15)
{
    sum = n1 + n2 + n3 + n4 + n5;
    printf("The sum of all numbers is : %d\n", sum);
    avg = (sum) / 5;
    printf("The avg of all numbers is :- %d\n", avg);
    n11 = pow(n1 - avg, 2);
    n12 = pow(n2 - avg, 2);
    n13 = pow(n3 - avg, 2);
    n14 = pow(n4 - avg, 2);
    n15 = pow(n5 - avg, 2);

    // here we are using * before the variable whose value we want to print in the main function of the program
    *sd = sqrt((n11 + n12 + n13 + n14 + n15) / 5);

    // printf("The Standard Deviation is %f\n", sd);
}
int main()
{
    int sum, avg, n1, n2, n3, n4, n5, n11, n12, n13, n14, n15;
    float sd;
    printf("Enter Five Integer vaues : ");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

    // here we have to use & symbol before the variable whose value we want to print in the main function.
    calc(&sd, sum, avg, n1, n2, n3, n4, n5, n11, n12, n13, n14, n15);
    printf("The Standard Deviation is %f\n", sd);
    return 0;
}*/

// 69.Write a function that receives marks obtainedby a student in 3 subjects and returns the average and percentage of these marks. Call this function from main( ) and print the results in main( ).Hint: Use call by reference to return multiple values

/*#include <stdio.h>

// In this function calling we cant use the export variables in calculations with out * symbol.
// Function Definition
int result(float *num, float *avg, float *percent, float sub1, float sub2, float sub3)
{
    *num = (sub1 + sub2 + sub3);
    *avg = (*num / 3);
    *percent = (*num / 3);
}

int main()
{
    float num, avg, percent, sub1, sub2, sub3;

    // Taking input
    printf("Enter Hindi marks :- ");
    scanf("%f", &sub1);
    printf("Enter English marks :- ");
    scanf("%f", &sub2);
    printf("Enter Maths marks :- ");
    scanf("%f", &sub3);

    // Calling Function
    result(&num, &avg, &percent, sub1, sub2, sub3);

    // Printing Result
    printf("The Average Marks is %f\n", avg);
    printf("The percentage of the student is %f\n", percent);
    printf("The percentage of the student is %f\n", num);
    return 0;
}*/

// 70.A positive integer is entered through the keyboard, write a function to calculate sum of digits of thenumber using recursion

/*#include <stdio.h>
int digiSum(int number)
{
    if (number)
    {
        return ((number % 10) + digiSum(number / 10));
    }
    else
    {
        return 0;
    }
}
int main()
{
    int num1;
    printf("Enter the number to calculate the sum of its digits using Recurtion Function :- ");
    scanf("%d", &num1);
    printf("The sum of the digits of %d is :- %d\n", num1, digiSum(num1));
    return 0;
}*/

// 71.A positive integer is entered though the keyboard, write a program to obtain factors of the number. Modify the function to obtainthe prime factors recursively

/*#include <stdio.h>

void primeFacto(int num, int count)
{
    if (num <= 1)
    {
        return;
    }
    else if (num % count == 0)
    {
        printf("%d\n", count);
        primeFacto(num / count, count);
    }
    else
    {
        primeFacto(num, count + 1);
    }
}

int main()
{
    int num;
    printf("Enter the number :- ");
    scanf("%d", &num);
    printf("The prime Factors of %d are.\n", num);
    primeFacto(num, 2);
    return 0;
}*/

// 72.Write a recursive function to obtain the first 25 numbers of a Fibonacci sequence. In a Fibonacci sequence the sum of two successive terms gives the third term. Following are the first few terms of the Fibonacci sequence:1 1  2  3  5  8  13  21  23  55  89..
// , int num1, int num2

// 0
// 1
// 1
// 2
// 3
// 5
// 8
// 13
// 21
// 34
// 55
// 89
// 144
// 233
// 377
// 610
// 987
// 1597
// 2584
// 4181
// 6765
// 10946
// 17711
// 28657
// 46368
/*#include <stdio.h>

int fiboNum(int number)
{
    // here if the value of number is 1
    // this will return 0 as value not as Success Code
    if (number == 1)
    {
        return 0;
    }
    // here if the value of number is 2 or 3 then it will return 1.
    else if (number == 2 || number == 3)
    {
        return 1;
    }
    // here we are using the recursion function
    // we are passing the new values to the function which are previous 2 values because Fibonacci number is addition of the previous 2 numbers.
    else
    {
        return fiboNum(number - 1) + fiboNum(number - 2);
    }
}

int main()
{
    int num, i;
    printf("Enter the number :- ");
    scanf("%d", &num);
    // here we are passing values at the time of calling function.
    for (i = 1; i <= num; i++)
    {
        printf("%d\n", fiboNum(i));
    }
    return 0;
}*/

// 73.A positive integer is entered through the keyboard, write a function to find the binary equivalent of this number using recursion
#include <stdio.h>
int binary(int number)
{
    if (number == 0)
    {
        return 0;
    }
    else
    {
        return ((number % 2) + 10 * binary(number / 2));
    }
}
int main()
{
    int num;
    printf("Enter the number :- ");
    scanf("%d", &num);
    printf("Decimal\t-\tBinary\n- - - - - - - - - - - -\n%d\t-\t%d\n", num, binary(num));
    return 0;
}