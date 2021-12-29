// 83.Write a c program which deletes the duplicate element of an array.
// This is the deletion process to remove the duplicate entries in the array.

/*#include <stdio.h>

int main()
{
    int i, j, k = 0;
    int arr[11] = {1, 1, 8, 9, 11, 1, 2, 2, 2, 3, 3};
    for (i = 0; i <= 9; i++)
    {
        // this will check the first value with all next values
        for (j = i + 1; j < 10; j++)
        {
            // if any value in the next value is same then this value is replaced by next value and the array values will be left shifted
            if (arr[i] == arr[j])
            {
                // here in this loop we are left shifting the values
                for (k = j; k < 10; k++)
                {
                    arr[k] = arr[k + 1];
                }
                // this will reduce the j value by 1 because we shifted the element to left
                // then the new value is assigned to the previous checked position
                // we have to check again for
                j--;
            }
        }
    }
    // the remaining values of the array after removal and deletion.
    for (int l = 0; l < 10; l++)
    {
        printf("%d\n", arr[l]);
    }

    return 0;
}*/

// 84. Write a c program for bubble sort
/*#include <stdio.h>

int main()
{
    // this is the array we have to sort
    int arr[20] = {5, 4, 3, 2, 1, 7, 8, 9, 10, 11, 12, 13, 14, 15, 21, 20, 19, 18, 17, 16};
    int n = 20, temp;
    int i, j;

    // here we are looping the program after every sort
    for (i = 0; i < n - 1; i++)
    {
        // this loop is sorting the elements in the Array
        for (j = 0; j < n - 1 - i; j++)
        {
            // here we are comparing the value with next value
            if (arr[j] > arr[j + 1])
            {
                // here we are shifting the values
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int k = 0; k <= n - 1; k++)
    {
        printf("%d ", arr[k]);
    }
    printf("\n");
    return 0;
}*/

// 85. Write a c program for insertion sort
/*#include <stdio.h>

int main()
{
    int num;
    // here we are taking the range of Array from the user as input and storing it into the num variable
    printf("Enter the size of the array :- ");
    scanf("%d", &num);
    // Declaring the size of the Array
    int a[num];

    // Here are asking the User to Enter the values of the Array
    printf("Enter the Elements of the Array");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &a[i]);
    }

    int temp, k, l;

    // this loop picks the elements of the array from the 2nd position and check whether is it larger or smaller than previous elements.
    for (int k = 1; k < num; k++)
    {
        // storing the 2nd position value in the temp variable
        temp = a[k];
        // it decides the value of l
        l = k - 1;
        while (l >= 0 && a[l] > temp)
        {
            a[l + 1] = a[l];
            // we are reducing the value by 1 because we are checking the all value of the array
            l = l - 1;
        }
        a[l + 1] = temp;
    }

    printf("\n\n");
    printf("The Array after Insertion Sort Process:\n");
    for (int j = 0; j < num; j++)
    {
        printf("%d ", a[j]);
    }
    printf("\n\n");
    return 0;
}*/

// 86. Write a c program for selection sort.

/*#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the Array :- ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the Array :-\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int temp, l, min;
    for (int j = 0; j < n - 1; j++)
    {
        min = j;
        for (int k = j + 1; k < n; k++)
        {
            if (a[k] < a[min])
            {
                min = k;
            }
        }
        temp = a[j];
        a[j] = a[min];
        a[min] = temp;
    }
    for (l = 0; l < n; l++)
    {
        printf("%d ", a[l]);
    }
    printf("\n");
    return 0;
}*/

// 87. Write a c program for merge sort
/*#include <stdio.h>

// here i have used pointer to print Array Elements which are at the address of a
void printSort(int *a, int n)
{
    // here we are printing the values
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

// this merge function merge the spilled values of the array elements
void merge(int a[], int mid, int lb, int ub)
{
    int i, j, k, b[9];
    i = lb;
    j = mid + 1;
    k = lb;

    while (i <= mid && j <= ub)
    {
        if (a[i] < a[j])
        {
            b[k] = a[i];
            i++;
        }
        else
        {
            b[k] = a[j];
            j++;
        }
        k++;
    }
    if (i > mid)
    {
        while (j <= ub)
        {
            b[k] = a[j];
            k++;
            j++;
        }
    }
    else
    {

        while (i <= mid)
        {
            b[k] = a[i];
            k++;
            i++;
        }
    }
    // here i am reassigning the values to the array << a >> after Sort
    for (int i = lb; i <= ub; i++)
    {
        a[i] = b[i];
    }
}

// This step will break the array into single single Entity
void mergeSort(int a[], int lb, int ub)
{
    int mid;
    if (lb < ub)
    {
        mid = (lb + ub) / 2;
        mergeSort(a, lb, mid);
        mergeSort(a, mid + 1, ub);
        merge(a, mid, lb, ub);
    }
}

int main()
{
    // here is our array
    int a[] = {15, 5, 24, 8, 1, 3, 16, 10, 20};
    // here is the size of the array
    int n = 9;
    // expected output :- [1,3,5,8,10,15,16,20,24]
    // here i am printing the values before sorting
    printSort(a, n);
    // here i am calling the function which will spill the elements of the array and Sort.
    mergeSort(a, 0, 8);
    // here i am printing the values after sorting
    printSort(a, n);
    return 0;
}*/

// 88. Write a c program for linear search.
/*#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int num, i, found = 0;
    printf("Enter the number which you want to search :- ");
    scanf("%d", &num);
    for (i = 0; i <= 5; i++)
    {
        if (arr[i] == num)
        {
            printf("Yes! We found %d at position %d\n", num, i + 1);
            found = 1;
        }
    }
    if (found == 0)
    {
        printf("We can't find %d in the Array\n", num);
    }
    return 0;
}*/

// 89. Write a C program for binary search
// binary search only works in sorted array
/*#include <stdio.h>

int main()
{
    int num;
    // int A[] = {2, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23};
    printf("Enter the size of the Array :- ");
    scanf("%d", &num);
    int A[num];
    // Here we are taking the input from the user as Array Elements
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &A[i]);
    }
    for (int j = 0; j < num; j++)
    {
        printf("%d ", A[j]);
    }
    printf("\nNow we are going to search the element in Above array\n");

    // the element which is to be found
    int ele, found = 0, low, high, mid;
    printf("Enter the number to Search :- ");
    scanf("%d", &ele);

    low = 0;
    high = num - 1;
    mid = (low + high) / 2;
    while (low <= high)
    {
        if (ele < A[mid])
        {
            high = mid - 1;
            mid = (low + high) / 2;
        }
        else if (ele > A[mid])
        {
            low = mid + 1;
            mid = (low + high) / 2;
        }
        // if the element is at mid then this part will be executed
        else if (ele == A[mid])
        {
            printf("The element on location %d in Array.\n", mid);
            found = 1;
            break;
        }
    }
    if (found == 0)
    {
        printf("The Element %d is not found in the Array.\n", ele);
    }
    return 0;
}*/
// 90. Twenty-five number are entered from the keyboard into an array. Write a program to find out how many of them are positive, how many are negative, how many are odd and how many are even.
/*#include <stdio.h>

int main()
{
    int num;
    printf("Enter the size of the Array :- ");
    scanf("%d", &num);
    int A[num];
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &A[i]);
    }

    for (int k = 0; k < num; k++)
    {
        printf("%d ", A[k]);
    }
    printf("\n");

    int j = 0, neg = 0, pos = 0, zero = 0, even = 0, odd = 0;
    while (j < num)
    {

        if (A[j] < 0)
        {
            neg++;
        }
        if (A[j] == 0)
        {
            zero++;
        }
        if (A[j] > 0)
        {
            pos++;
        }
        if (A[j] % 2 == 0)
        {
            if (A[j] > 0)
            {
                even++;
            }
        }
        if (A[j] % 2 != 0)
        {
            if (A[j] > 0)
            {
                odd++;
            }
        }
        j++;
    }

    printf("Negetive are %d\n", neg);
    printf("Positive are %d\n", pos);
    printf("Zeros are %d\n", zero);
    printf("Even are %d\n", even);
    printf("Odd are %d\n", odd);
    return 0;
}*/

// 91. Implement the following procedure to generate prime numbers from 1 to 100 into a program. This
// procedure is called sieve of Eratosthenes.
// Step 1: Fill an array num[100] with numbers from 1 to 100
// Step 2: Starting with the second entry in the array, set all its multiples to zero.
// Step 3: Proceed to the next non-zero element and set all its multiples to zero.
// Step 4: Repeat step 3 till you have set up the multiples of all the non-zero elements to zero
// Step 5: At the conclusion of step 4, all the non-zero entries left in the array would be prime numbers, so print out these numbers

/*#include <stdio.h>
// #define <macro> <value to be replaced >
void sieve(int *A)
{
    for (int i = 1; i <= 10; i++)
    {
        if (A[i] == 0)
        {
            for (int j = i * i; j <= n; j = j + i)
            {
                A[i] = 1;
            }
        }
    }
}
for(int i=1;i<=10;i++){
    if()
}

int main()
{
    int A[100], num = 1;
    for (int i = 0; i < 100; i++)
    {
        A[i] = num;
        num++;
    }
    for (int j = 0; j < num - 1; j++)
    {
        printf("%d\n", A[j]);
    }
    return 0;
}*/

// #include <stdio.h>
// int main()
// {
//     int n, r, sum = 0;
//     printf("Enter the number :- ");
//     scanf("%d", &n);

//     while (n > 0)
//     {
//         r = n % 10;
//         sum += r;
//         n = n / 10;
//     }
//     printf("The Sum of All digits are :- %d\n", sum);
//     return 0;
// }

// write a program to find out a number is a Strong Number or not.
/*#include <stdio.h>

int main()
{
    int n, r, fact, sum;
    printf("Enter the number :- ");
    scanf("%d", &n);
    int st, k;
    for (int j = 1; j <= n; j++)
    {
        // st is to check the number after the execution of the program
        st = j;
        // k is to iterate the number until its all digits will be checked
        k = j;
        // initialize sum to zero everytime otherwise it will add previous value to the next value
        sum = 0;
        while (k > 0)
        {
            fact = 1;
            r = k % 10;
            for (int i = 1; i <= r; i++)
            {
                fact = fact * i;
            }
            sum = sum + fact;
            k = k / 10;
        }
        if (st == sum)
        {
            printf("%d is a Strong Number.\n", st);
        }
    }
    return 0;
}*/

// write a program to find out a number is perfect or not

/*#include <stdio.h>

int main()
{
    int n, st, sum;
    printf("Enter the number :- ");
    scanf("%d", &n);
    for (int j = 1; j <= n; j++)
    {
        sum = 0;
        for (int i = 1; i < j; i++)
        {
            st = j;
            if (j % i == 0)
            {
                sum = sum + i;
            }
        }
        if (sum == st)
        {
            printf("%d is the perfect number.\n", st);
        }
    }
    return 0;
}*/
// write a program to enter the desired element at the desired position in the array.
/*#include <stdio.h>

int main()
{
    int A[50] = {10, 20, 30, 40, 50, 60};
    printf("Before Insert :-\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    int n = 6;
    int loc, ele;
    printf("Enter the element which you want to enter :- ");
    scanf("%d", &ele);

    printf("Enter the location where you want to insert the element :- ");
    scanf("%d", &loc);

    for (int j = n - 1; j >= loc; j--)
    {
        A[j + 1] = A[j];
    }

    A[loc] = ele;
    printf("After Insert\n");
    for (int i = 0; i < n + 1; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    return 0;
}*/

/*#include <stdio.h>

int main()
{
    int A[50] = {10, 20, 30, 40, 50, 60};
    int B[3] = {100, 200, 300};

    // size of the Array in which the elements to be inserted
    int m = 6;
    int n = 3;

    int loc;
    printf("Enter the location :- ");
    scanf("%d", &loc);

    for (int i = m - 1; i >= loc; i--)
    {
        A[i + n] = A[i];
    }
    for (int j = 0; j < n; j++)
    {
        A[j + loc] = B[j];
    }
    printf("[ ");
    for (int k = 0; k < m + n; k++)
    {
        printf("%d ", A[k]);
    }
    printf("]");

    return 0;
}*/

// WAP to find out the length of the string without using library function
/*#include <stdio.h>

int StringLength(char x[])
{
    // we have to initialize two variables count and 2nd is iterative i otherwise they will store garbage values
    int count = 0, i = 0;
    // this while loop will run until it gets \0 which is the last element.
    while (x[i] != '\0')
    {
        i++;
        // this count variable will increment and store the number of element
        count++;
    }
    return count;
}
int main()
{
    // char str[] = {'k', 'r', 'i', 's', 'h', 'n', '\0'};
    // we can also write this.
    // if we write size of the string Array then we have to give atleast (size+1) otherwise it will show garbage value.
    // char str[] = "krishn";
    char str[30];
    // This is the message which prints before user input
    printf("Enter the String :- ");
    // This gets function will take in input
    gets(str);
    int len;
    // calling this function in the variable which stores its length
    len = StringLength(str);
    // printing the length of the string
    printf("Length of the String is :- %d\n", len);
    // printing the string using puts(str);
    puts(str);
    return 0;
}*/

// WAP to swap a string
/*#include <stdio.h>
#include <string.h>

void swapString(char str[])
{
    int i = 0;
    // THIS WILL STORE THE SIZE OF THE STRING ARRAY
    int j = strlen(str) - 1;
    // THIS TEMP VARIABLE WILL STORE THE CHARACTERS WHICH ARE TO BE REPLACED BY NEW ONE.
    char temp;
    // THIS LOOP WILL CONTINUE UNTIL THE i WHICH IS THE STARTING VALUE IS LESS THAN j WHICH IS THE END VALUE
    // BECAUSE WE DONT WANT TO AGAIN REVERSE THE STRING OTHEWISE THIS WILL CONTINUE AND REVERSE AGAIN AND AGAIN.
    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}
int main()
{
    // char str[30] = {'k', 'r', 'i', 's', 'h', 'n'};
    char str[30];
    printf("Enter the string :- ");
    gets(str);
    swapString(str);
    puts(str);
    return 0;
}*/

// WAP to convert the string into LowerCase
// #include <stdio.h>
// #include <string.h>
// void uptoLow(char str[])
// {
//     int i = 0;
//     // LOOP WILL RUN UNTIL THE STRING ENDS
//     while (str[i] != '\0')
//     {
//         // HERE IS THE CONDITION THAT IF THE VALUE IS GREATER THAN OR EQUAL TO A AND LOWER THAN OR EQUAL TO Z THEN THE NEW VALUE WILL BE ASSIGNED WHICH IS (+32) WHICH IS LOWER CASE CHARACTER OF THE SAME ACCORDING TO ASCII
//         if (str[i] >= 'A' && str[i] <= 'Z')
//         {
//             str[i] = str[i] + 32;
//         }
//         i++;
//     }
//     printf("%s\n", str);
// }

// int main()
// {
//     char str[30];
//     printf("Enter the string :- ");
//     gets(str);
//     // HERE WE ARE CALLING THE FUNCTION WHICH IS CONVERT THE STRING INTO LOWER CASE
//     uptoLow(str);
//     return 0;
// }

// WAP to concatenate 2 strings

/*#include <stdio.h>
#include <string.h>

void concatSTR(char str1[], char str2[])
{
    int l1, l2;
    // here we find out the size of the String Array
    l1 = strlen(str1);
    l2 = strlen(str2);
    // here we add space at the end of the str1
    str1[l1] = ' ';
    // here using for loop we put str2 elements in the str1
    for (int i = 0; i <= l2; i++)
    {
        str1[l1 + i + 1] = str2[i];
    }
    // here we are adding the null character which denotes the string is now filled
    str1[l1 + l2 + 1] = '\0';
    // here we are printing the str1 after appending the elements of str2
    printf("%s\n", str1);
}

int main()
{
    char str1[30];
    printf("Enter the String 1:- ");
    gets(str1);
    char str2[30];
    printf("Enter the String 2:- ");
    gets(str2);
    concatSTR(str1, str2);
    return 0;
}*/

// Structure

/*#include <stdio.h>
#include <string.h>
struct Employee
{
    int eno;
    char ename[20];
    float esal;
} e;
int main()
{
    // DataType :- << struct Employee >> [which is User Defined DataType]
    // Variable :- << e >> [Which is of User Defined DataType]
    // struct Employee e = {100, "Krishn Kumar", 10000};
    // struct Employee e;
    e.eno = 100;
    strcpy(e.ename, "Krishn Kumar");
    e.esal = 10000;
    printf("Employee No :- %d\nEmployee Name :- %s\nEmployee Salary :- %f\n", e.eno, e.ename, e.esal);
    printf("The Size of the Structure Employee :- %li bytes\n", sizeof(e));
    return 0;
}*/

// Here is the program of the Employee Data in which we can enter n number of employees data and take the output of the entered data using Struct

/*#include <stdio.h>
#include <string.h>

struct Employee
{
    // String Array
    char name[20];
    int enumber;
    int salary;
    // Array
    int marks[4];
    float weight;
};

int main()
{
    int n;
    printf("Enter the number of Employees :- ");
    scanf("%d", &n);

    struct Employee e[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the name of the Employee %d :- ", i + 1);
        scanf("%s", e[i].name);
        printf("Enter the Employee Number of the Employee %d :- ", i + 1);
        scanf("%d", &e[i].enumber);
        printf("Enter the Salary of the Employee %d :- ", i + 1);
        scanf("%d", &e[i].salary);
        for (int k = 0; k < 4; k++)
        {
            printf("Enter the marks of the Employee %d of Sub %d\n", i + 1, k + 1);
            scanf("%d", &e[i].marks[k]);
        }
        printf("Enter the Weight of the Employee %d :- ", i + 1);
        scanf("%f", &e[i].weight);
    }
    printf("-------------------------------------------------------\n");
    for (int j = 0; j < n; j++)
    {
        printf("Employee Name %d :- ", j + 1);
        puts(e[j].name);
        printf("Employee Number of %d :- %d\n", j + 1, e[j].enumber);
        printf("Employee Salary %d :- %d\n", j + 1, e[j].salary);
        for (int l = 0; l < 4; l++)
        {
            printf("The marks of the employee %d of Sub %d :- %d\n", j + 1, l + 1, e[j].marks[l]);
        }
        printf("Employee Weight %d :- %f\n", j + 1, e[j].weight);
        printf("-------------------------------------------------------\n");
    }
    return 0;
}*/

// Size of the Pointer
/*#include <stdio.h>
struct Employee
{
    char name[20];
    int id;
    int marks;
    float salary;
};
int main()
{
    char *cp;
    int *ip;
    struct Employee *sep;
    int a = 100;
    int *b = &a;

    // printf("size of the Character Pointer :- %ld\n", sizeof(cp));
    // printf("size of the Integer Pointer :- %ld\n", sizeof(ip));
    // printf("size of the Structure Pointer :- %ld\n", sizeof(sep));
    printf("Value of the Variable a :- %d\n", a);
    printf("Address of the Variable a using *Pointer Variable :- %p\n", b);
    printf("Address of the Variable a using &Address Operator:- %p\n", &a);
    printf("Address of Variable b using &Address Operator:- %p\n", &b);
    printf("Accessing the value of a using pointer variable b :- %d\n", *b);
    return 0;
}*/

// Call by Reference

/*#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("(IN UD FUNCTION) The value after swap a=%d and b=%d\n", *x, *y);
}

int main()
{
    int a = 10, b = 20;

    printf("The value of a=%d and b=%d before swap.\n", a, b);
    swap(&a, &b);

    printf("(IN MAIN FUNCTION) The value of the a = %d and b = %d After Swap\n", a, b);

    return 0;
}*/

// Pointer to Function

/*#include <stdio.h>
int add(int x, int y)
{
    int z = x + y;
    return z;
}

int main()
{
    // declaring the integer variable r1
    int r1;

    // declaring the pointer variable which is taking two integer variable as input
    int (*ptr)(int, int);
    // this pointer function will take functions which are only passing 2 values

    // pointer variable storing address of Function add
    ptr = &add;

    // integer variable storing the value returning by the calling of the add function which is pointer function
    r1 = ptr(30, 50);

    // here printing the returned value r1
    printf("The Addition is - %d\n", r1);

    return 0;
}*/

/*#include <stdio.h>
int rajan(int x, int y)
{
    int z;
    z = x + y;
    return z;
}
int arjun(int x, int y, int z)
{
    int w;
    w = x * y * z;
    return w;
}
int main()
{
    int r15, bullet;

    int (*krishn)(int, int);
    krishn = &rajan;
    r15 = krishn(30, 20);

    int (*krishn1)(int, int, int);
    krishn1 = &arjun;
    bullet = krishn1(2, 3, 4);

    printf("the value of the addition is %d\n", r15);
    printf("the value of the multiplication is %d\n", bullet);
    return 0;
}*/

// Dynamic Memory Allocation
// malloc()
/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n, i;

    printf("How many values you want to store :- ");
    scanf("%d", &n);

    // <pointer-variable> = <type casting into pointer datatype>malloc((No of Elements)*sizeof(datatype))
    ptr = (int *)malloc(n * sizeof(int));

    // this checks if the pointer variable is null (in case the memory is allocated or not)
    if (ptr == NULL)
    {
        printf("The Memory has not been Allocated.\n");
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            ptr[i] = i + 1;
        }

        printf("The Elements of the Array are :-\n");
        for (i = 0; i < n; i++)
        {
            printf("%d ", ptr[i]);
        }
        printf("\n");
    }
    return 0;
}*/

// calloc with realloc
// this will create another another stack not expand its size as malloc we have to use realloc() in this case to expand its size
// it initialize value with 0 but malloc initialize value with Garbage Values.

/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int capacity = 5, *stack, n, n1;
    stack = (int *)calloc(capacity, sizeof(int));

    for (int i = 0; i < capacity; i++)
    {
        printf("Enter %d Element:-", i + 1);
        scanf("%d", &n);
        stack[i] = n;
    }

    for (int j = 0; j < capacity; j++)
    {
        printf("%d ", stack[j]);
    }
    printf("\n");

    // Expanding its Size using realloc function

    printf("Enter the size of the new array :- ");
    scanf("%d", &n);

    // <pointer-vatriable> = <type-casting into pointer variable datatype>realloc(pointer-variable<whose size is to be change>, size of new array)

    stack = (int *)realloc(stack, n * sizeof(int));

    // assigning value to the new array
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d Element:-", i + 1);
        scanf("%d", &n1);
        stack[i] = n1;
    }
    // printing the new array values
    for (int j = 0; j < n; j++)
    {
        printf("%d ", stack[j]);
    }
    free(stack);
    printf("\n");
    return 0;
}*/

/*#include <stdio.h>

int main()
{
    // This is file pointer variable
    FILE *fp;
    // assigning file path to file pointer with the mode in which we want to open the file
    fp = fopen("/home/ubkrishn/Desktop/devKrishn/IMPORTANT/mydomain.txt", "r");
    // this checks either the file is opened or not
    if (fp == NULL)
    {
        printf("File not Opened");
    }
    else
    {
        printf("File opened in read mode");
    }
    printf("\n");
    printf("\n");
    int ch;

    // using this we can read the file
    // we read the characters one by one and comparing the value with EOF.
    // by giving fp compiler reads one by one characters from the file path given in << fp >>
    // this will read the value in ASCII form and stored in ch and check is it equal to EOF or not
    // this loop will run when its value is not equal to EOF

    while ((ch = fgetc(fp)) != EOF)
    {
        // here we type cast the ASCII values to their corrosponding Characters using Format Specifier << %c >>
        printf("%c", ch);
    }
    printf("\n");
    return 0;
}*/

// typedef
/*#include <stdio.h>

int main()
{
    // // providing the alias name to a datatype
    // typedef int my_int;

    // my_int a = 10, b = 20, c;

    // c = a + b;
    // printf("%d\n", c);

    // here the Array will act as a Template with the fixed size and Datatype
    typedef int Array[5];

    // We are using the Template with the variable x and values
    Array x = {10, 20, 30, 40, 50};

    printf("The elements are :- ");

    // printing the stored values in the Array
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", x[i]);
    }

    printf("\n");

    return 0;
}*/

// #include <stdio.h>
// #include <stdlib.h>

// typedef char *String;
// String read(void);

// int main(void)
// {
//     String name;
//     name = read();
//     printf("The name is :- %s\n", name);
// }

// String read(void)
// {
//     String name;
//     name=(String)malloc(sizeof(char));
//     printf("Enter the name :- ");
//     gets(name);
//     return name;
// }

/*#include <stdio.h>

typedef struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[30];
} std; // using typedef we give alias-name << std >> to the User Defined Datatype Structure

// we can also use this way
// typedef struct Student std;

int main()
{

    // These are two variables of Student Type
    // here we are using typedef alias-name std
    std s1, s2;
    s1.id = 100;
    s2.id = 200;
    printf("The ID of the Student 1 :- %d\n", s1.id);
    printf("The ID of the Student 2 :- %d\n", s2.id);

    return 0;
}*/

// Automatic (Auto) Variables
/*#include <stdio.h>

int main()
{
    // This assigned with any Garbage Value
    // it is not a Global Type Variable
    // it has its Local Scope
    // its value stored in RAM
    auto int a = 10;
    {
        auto int a;
        printf("a(block) :- %d\n",a);
    }
    printf("a(function) :- %d\n",a);
    return 0;
}*/

/*#include <stdio.h>

int main()
{
    // This is register storage Class
    // This also works locally
    // This is faster than auto variable because its value stored in CPU Register
    // Its value stored in the Registers of the CPU so it dont use switching for the new values
    // Value starts from the Garbage value

    register int i,sum=0;
    int n;

    printf("Enter the value to sum all the natural nos from 0 :- ");
    scanf("%d",&n);

    for(i=0;i<=n;i++){
        sum = sum+i;
        printf("%d\n",sum);
    }

    printf("%d\n",sum);
    return 0;
}*/

// Command Line Arguments

/*#include <stdio.h>
// argc is the count of the arguments we are passing
// argv are the values which we are passing
int main(int argc, char const *argv[])
{
    printf("The value of argc is :- %d\n", argc);

    for (int i = 0; i < argc; i++)
    {
        printf("The Element at the index %d is %s\n", i, argv[i]);
    }
    return 0;
}*/

// printing the arguments which are passed to the program

/*#include <stdio.h>
int main(int argc, char const *argv[])
{
    // Using this if we are passing 2 arguments then this will show 3 arguments
    // because first argument is the file name with path and next two arguments
    printf("Argument Count :- %d\n", argc);
    int i;

    if(argc==1){
        printf("There is no arguments to show....");
    }else{
        printf("list of the elements are :- \n");
    }
    for(i=1;i<argc;i++){
        printf("%s\n",argv[i]);
    }
}*/

// Structure by reading the elements from the Command Line

/*#include <stdio.h>
// Structure
struct Emp
{
    long eno;
    char *ename;
    int esal;
};

int main(int argc, char *argv[])
{
    struct Emp e;

    // here we are assigning the values to the Structure
    // we are using atoi where we have to store integer type value because it is of char type
    e.eno = atoi(argv[1]);
    e.ename = argv[2];
    e.esal = atoi(argv[3]);

    // printing the values of the structure
    printf("Eno:- %ld\n", e.eno);
    printf("Ename:- %s\n", e.ename);
    printf("Esal:- %d\n", e.esal);
    return 0;
}*/

/*#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc > 2)
    {
        char *s1 = argv[1];
        char *s2 = argv[2];
        // << atoi >> function takes string as input and gives integer as output
        int x = atoi(s1);
        int y = atoi(s2);
        printf("The Addition of the 2 number is:- %d\n", x + y);
    }
    else
    {
        printf("Insufficient values...\n");
    }
    return 0;
}*/

// copy one file to another file

/*#include <stdio.h>

int main()
{
    FILE *fp1, *fp2;
    int ch;

    // in this program fp1 file will be copied to fp2 file we just have to open fp1 in read mode
    // and fp2 in write mode in which the content is to be copied
    fp1 = fopen("/home/ubkrishn/Desktop/devKrishn/IMPORTANT/robots.txt", "r");
    fp2 = fopen("/home/ubkrishn/Desktop/devKrishn/IMPORTANT/input.txt", "w");

    // reading elements one by one from the file
    while ((ch = fgetc(fp1)) != EOF)
    {
        // the < ch > characters will be printed one by one to the < fp2 > file (write one file content to another)
        fputc(ch, fp2);
    }
    // Success Message
    printf("Copied\n");
    return 0;
}*/
// C code to illustrate working of
// getch() to accept hidden inputs

#include <stdio.h>
int main()
{
    int x, y, a, b;
    x = 5;
    y = ++x * ++x;

    printf("%d%d", x, y);

    x = 5;
    y = x++ * ++x;

    printf("%d%d", x, y);
}