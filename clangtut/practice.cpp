// C++ Classes Public Private access modifiers.

// here we know that there is Private and Public Access Modifiers in the Classes in

/*#include <iostream>
using namespace std;

class MyClass
{
private:
    // we cant use the value of y directly because it is private
    int y; // Private attribute

public:    // Public access specifier
    int x; // Public attribute
    // function with Declaration of argument
    void setData(int y1);
    // we can also define the function here
    // {
    //     y = y1;
    // };

    // another function which gives output with the value of y
    void getData()
    {
        cout << "The value of y is " << y << endl;
    }
};

// 1. We use this to define the Class function outside the class using scope resolution operator ::
// 2. We can define the function in the class but due to code readability we should define outside the class following below syntax
// 3. Here MyClass is the class name in which we mentioned the function.

void MyClass ::setData(int y1)
{
    y = y1;
}

// This is the main function which
int main()
{
    int a;
    // here we made an object
    MyClass myObj;

    // printing the public access modifier value mentioned in the class
    myObj.x = 25;

    // Taking input from the user
    cout << "Enter the number for y : ";
    cin >> a;

    // here we called the class function in the object
    myObj.setData(a);
    // this function printing the output of value y
    myObj.getData();
    return 0;
}*/

/*#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a1, int b1, int c1);
    void getData()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
};

void Employee ::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee krishn;
    krishn.d = 33;
    krishn.e = 34;

    // We cannot access a b c directly because these are Private
    krishn.setData(30, 31, 32);
    krishn.getData();

    return 0;
}*/

// OOP >> (Object Oriented Programming)

/*#include <iostream>
using namespace std;

int main()
{
    cout << "Name: Krishan Kumar"<<endl;
    cout << "City: Yamunanagar"<<endl;
    cout << "Country: India"<<endl;
    return 0;
}*/

// Addition of the Two Numbers

/*#include<iostream>
using namespace std;

int main(){
    int num1,num2;

    cout<<"Enter the Number 1 :";
    cin>>num1;

    cout<<"Enter the Number 2 :";
    cin>>num2;

    cout<<"The Addition of the Two Numbers is :- ";
    cout<<num1+num2<<endl;
    return 0;
}*/

/*#include <iostream>
using namespace std;
int main()
{
    int x, y;
    x = 5;
    y = ++x * ++x;

    cout << x << y<<endl;

    x = 5;
    y = x++ * ++x;

    cout << x << y<<endl;
}*/

/*#include <iostream>
using namespace std;
int main()
{
    int a = 5, b = 6;
    (a > b) ? cout<<"A is greater"<<endl : cout<<"B is Greater"<<endl;
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
    int a=8,b=6,c;
    // c=a>>1; // The output will be :- 4 divides the a by 2
    c=a<<1; // The output will be :- 16 multiply the a by 2
    cout<<"output is :- "<<c<<endl;
    return 0;
}*/

/*#include <iostream>
using namespace std;
int m = 10;
int main()
{
    int m = 20; // latest value which will assigned to k
    {
        int k = m;
        int m = 3;
        cout << "We are in inner block" << endl;
        cout << "k = " << k << endl;     // 20
        cout << "m = " << m << endl;     // 3
        cout << "::m = " << ::m << endl; // 10   This is the Global Variable
    }
    cout << "We are in outer Block" << endl;
    cout << "m = " << m << endl;     // 20 
    cout << "::m = " << ::m << endl; // 10   This is the Global Variable
    return 0;
}*/

/*#include <iostream>
using namespace std;

class house
{
    // we have to use private and public access modifiers
private:
    int length = 0, breadth = 0;

public:
    void setData(int x, int y)
    {
        // here we are assigning the values to the length and breadth variable
        // which will be passed in the main function
        length = x;
        breadth = y;
    }
    void area()
    {
        // here in this function we are calculating the area by multiplying the length and breadth
        int ar = length * breadth;
        cout << "Area :- " << ar << endl;
    }
};

int main()
{
    // here a variable is created of house type because house is a User-Defined Datatype
    house h1;
    // here we are passing the values to the setData function
    h1.setData(500, 600);
    // this function will give us the output as area
    h1.area();
    return 0;
}*/

/*#include <iostream>
class A
{
private:
    int age;

public:
// this is constructor with one Argument
// using this we Avoid unwanted function calling 
    A(int x)
    {
        age = x;
    }
    int getData()
    {
        return age;
    }
};
using namespace std;
int main()
{
    A a(26);
    cout << "The age is :- " << a.getData() << endl;
}*/

// PARAMETERIZED CONSTRUCTOR

/*#include <iostream>
#include <string.h>
using namespace std;
class person
{
private:
    string name;
    int age;
    float height;

public:
    person(string x, int y, float z)
    {
        name = x;
        age = y;
        height = z;
    }
    void getData()
    {
        cout << "Name: " << name<<endl;
        cout << "Age: " << age<<endl;
        cout << "Height: " << height<<endl;
    }
};

int main()
{
    // This f defines that this is Float Literal not any other
    person mark("krishn",25,7.5f);
    mark.getData();
    return 0;
}*/

// COPY CONSTRUCTOR
/*#include <iostream>
using namespace std;

class person
{

private:
    int age;

public:
    person(int x)  // Parameterized Constructor
    {
        age = x;
    }

    // person&obj1 >> pass the value of obj1 in the another constructor
    // HERE WE ARE TAKING THE REFERENCE OF ANOTHER CONSTRUCTOR
    person(person &obj1) // Copy Constructor
    {
        age = obj1.age;
    }
    // RETURNING THE AGE
    int getData()
    {
        return age;
    }

};

int main()
{
    int my_age;

    // DECLARING TWO OBJECTS OF PERSON TYPE
    person obj1(26);    // PARAMETERIZED CONSTRUCTOR
    person obj2(obj1);  // COPY CONSTRUCTOR

    // In This variable we are storing the value which is returning by the getData function
    my_age = obj2.getData();

    // here i am printing the value 
    cout<<"The Age of the Person is :- "<<my_age<<endl;

    return 0;
}*/

// COPY CONSTRUCTOR WITH MULTIPLE ARGUMENTS
/*#include <iostream>
#include <string>
using namespace std;
class person
{
private:
    string name;
    int age;
    float height;

public:
    person(string x, int y, float z)
    {
        name = x;
        age = y;
        height = z;
    }
    person(person &obj1)
    {
        name = obj1.name;
        age = obj1.age;
        height = obj1.height;
    }
    void getData()
    {
        cout << "Name: " << name << endl;
        cout << "age: " << age << endl;
        cout << "Height: " << height << endl;
    }
};

// This is the copy Constructor which copies the data ie values from obj1 to obj2

int main()
{
    person obj1("Krishn Kumar", 25, 5.7), obj2(obj1);
    // here we are calling the getData function over obj2
    obj2.getData();
    return 0;
}*/

// CONSTRUCTOR OVERLOADING

/*#include <iostream>
#include <string>

using namespace std;

class person
{

private:
    string name;
    int age;
    float height;

public:
    // In this constructor Garbage values will not be given to the User.
    // If the values passed to the constructor the values will be shown.
    // If not then Default values will be shown to the user not the Garbage Values.
    person(string x = "NULL", int y = 0, float z = 0.0f)
    {
        name = x;
        age = y;
        height = z;
    }
    person(person &obj1)
    {
        name = obj1.name;
        age = obj1.age;
        height = obj1.height;
    }
    void getData()
    {
        cout << "Name: " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Height: " << height << endl;
    }
};

int main()
{
    person obj;
    cout <<"Passing No Values :-"<<endl;
    obj.getData();
    cout << endl;

    person obj1("Krishn_Kumar", 25, 5.7);
    cout <<"Parameterized Constructor :-" <<endl;
    obj1.getData();
    cout << endl;

    person obj2(obj1);
    cout <<"Copy Constructor :-"<<endl;
    obj2.getData();
}*/

// CONSTRUCTOR OVERLOADING

/*#include <iostream>
#include <string>
using namespace std;

class mobile
{

private:
    string name;
    int ram;
    string processor;
    int battery;

public:
    mobile(string name_c = "Null", int ram_c = 0, string processor_c = "Null", int battery_c = 0)
    {
        name = name_c;
        ram = ram_c;
        processor = processor_c;
        battery = battery_c;
    }

    // here we are taking the reference of the object which will pass through it
    // it will copy its values into another object thats why this will called Copy Constructor
    mobile(mobile &mob)
    {
        name = mob.name;
        ram = mob.ram;
        processor = mob.processor;
        battery = mob.battery;
    }
    void getData();
    // {
    //     cout << "Mobile Name :- " << name << endl;
    //     cout << "Ram :- " << ram << endl;
    //     cout << "Processor :- " << processor << endl;
    //     cout << "Battery :- " << battery << endl;
    // }
};

// We also can define the get function outside the class with scope resolution operator.
void mobile::getData()
{
    cout << "Mobile Name :- " << name << endl;
    cout << "Ram :- " << ram << endl;
    cout << "Processor :- " << processor << endl;
    cout << "Battery :- " << battery << endl;
}

int main()
{
    cout << "Default Construcor" << endl;
    mobile realme;
    realme.getData();
    cout << endl;

    cout << "Parameterized Constructor" << endl;
    mobile realme1("RealME XT", 6, "Snapdragon 720", 4000);
    realme1.getData();
    cout << endl;

    cout << "Copy Constructor" << endl;
    mobile realme2(realme1);
    realme2.getData();
    cout << endl;
}*/

// Operator Overloading Polymorphism

/*#include <iostream>
using namespace std;

class complex
{
private:
    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void showData()
    {
        cout << "a :- " << a <<endl;
        cout << "b :- " << b <<endl;
    }

    // <return-type> operator<opr-symbol>(data-type parameter)

    // here we are performing the operator overloading
    complex operator+(complex c2)
    {
        complex temp;     // temp is of complex type
        temp.a = a + c2.a;   // here << a >> is of << c1 >>
        temp.b = b + c2.b;    // here << b >> is of << c1 >>
        return temp;
    }
};

int main()
{
    complex c1, c2, c3;
    c1.setData(3, 4);
    c2.setData(5, 6);
    c3 = c1 + c2;
    c3.showData();
    return 0;
}*/

// OPERATOR OVERLOADING WITH UNARY OPERATOR
/*#include <iostream>
using namespace std;
class person
{
private:
    int weight;

public:
    // parameterized constructor
    person(int w)
    {
        weight = w;
    }
    // printing the value
    void printWeight()
    {
        cout << "Weight :- " << weight << endl;
    }
    // we are overloading an unary operator so it wont take any value
    // PRE-INCREMENT
    void operator++()
    {
        ++weight;
    }

    // POST-INCREMENT
    // we have to pass the int DataType to calculate the post-increment
    void operator++(int)
    {
        weight++;
    }
};

int main()
{
    int wt;
    cout<<"Enter the Weight :- ";
    cin>>wt;

    cout<<"Weight after Pre-Increment and Post-Increment"<<endl;
    person krishn(wt);

    ++krishn;
    krishn++;

    krishn.printWeight();

    return 0;
}*/

// Simple Example of Inheritence
/*#include <iostream>
using namespace std;

class ractangle
{
public:
    int length;
    int breadth;

    void area()
    {
        cout << "Area is :- " << length * breadth;
    }
};
// inheriting class ractangle
// inheriting enables the access to all the variable which is of ractangle class.
class cuboid : public ractangle
{
public:
    int height;

    void volume()
    {
        cout << "The Volume is :- " << length * breadth * height;
    }
};

int main(){
    cuboid c;

    c.length = 10;
    c.breadth = 20;
    c.height = 30;

    c.area();
    c.volume();
}*/

// Constructors with Inheritence

/*#include <iostream>
using namespace std;

class A
{
private:
    int a;

public:
    A(int k)
    {
        a = k;
    }
    void aVal(){
        cout<<"A :- "<<a<<endl;
    }
};

class B:public A
{
private:
    int b;

public:
    B(int x, int y) : A(x)
    {
        b = y;
    }
    void bVal(){
        cout<<"B is :- "<<b<<endl;
    }
};

int main()
{
    B obj(2, 3);
    obj.aVal();
    obj.bVal();
    return 0;
}*/

// Constructor with Inheritence

/*#include <iostream>
using namespace std;
class base
{
public:
    base()
    {
        cout << "Default constructor in base class"<<endl;
    }
    base(int x)
    {
        cout << "Parameterized constructor in base class :- " << x << endl;
    }
};
class derived:public base
{
public:
    derived()
    {
        cout << "Default constructor in derived class" << endl;
    }
    derived(int y)
    {
        cout << "Parameterized constructor in derived class :- " << y << endl;
    }
};

int main()
{
    cout<<endl;
    cout<<"With out any Parameter ( derived r )"<<endl;
    derived r;
    cout<<endl;
    cout<<"With Parameters  ( derived r1(5) )"<<endl;
    derived r1(5);
}*/

// Calling Base class Default and Parameterized Constructor with the Derived class constructor

/*#include <iostream>
using namespace std;
class base
{
public:
    base()
    {
        cout << "Default Constructor of the Base Class" << endl;
    }
    base(int x)
    {
        cout << "Parameterized Constructor of Base Class :- " << x << endl;
    }
};

class derived : public base
{
public:
    derived() : base()out any
    {
        cout << "Defalut Constructor of Derived Class" << endl;
    }
    derived(int y) : base(y)
    {
        cout << "Parameterized Constructor of Derived Class :- " << y << endl;
    }
};

int main()
{
    // cout << "With out any Parameters :- "<<endl;
    // derived r;
    cout << "With Parameters :- "<<endl;
    derived r(10);

    return 0;
}*/

// FUNCTION OVERRIDING
// How to inherit function from the Parent Class.
/*#include <iostream>
using namespace std;
class base
{
public:
    void msg()
    {
        cout << "This is Base Class function." << endl;
    }
};
// inheriting base class from the derived class
class derived : public base
{
public:
    void msg()
    {
        cout << "This is Derived Class function." << endl;
        // inheriting base class function
        // <Parent-Class><scope-resolution-operator(::)><Parent-Class-Function>
        base::msg();
    }
};

int main()
{
    // Object of Derived Class < r >
    derived r;
    // Calling Function using Derived Class object
    r.msg();
}*/

// USING VIRTUAL FUNCTION

/*#include <iostream>
using namespace std;
class base
{
public:
    virtual void msg()
    {
        cout << "This is Base Class"<<endl;
    }
};
class derived1 : public base
{
public:
    void msg()
    {
        cout << "This is Derived Class 1"<<endl;
    }
};
class derived2 : public base
{
public:
    void msg()
    {
        cout << "This is Derived Class 2"<<endl;
    }
};

int main()
{
    base *ptr;
    ptr = new derived1();
    ptr->msg();

    ptr = new derived2();
    ptr->msg();
    return 0;
}*/

// VIRTUAL FUNCTION -> LATE / DYNAMIC BINDING

// WE USE THIS BECAUSE  WE WANT TO DEFER OUR DESCISION WHILE THE PROGRAM IS RUNNING
// WE USE THIS APPROACH WHEN WE DONT KNOW WHAT IS GOING TO HAPPEN NEXT

/*#include <iostream>
using namespace std;

class person
{
public:
    virtual void give()
    {
        cout << "Bun" << endl;
    }
};

class boy : public person
{
public:
    void give()
    {
        cout << "BROWN BUN" << endl;
    }
};

class girl : public person
{
public:
    void give()
    {
        cout << "PINK BUN" << endl;
    }
};

int main()
{
    boy b1;
    // girl g1;

    person *ptr = NULL;

    // BELOW ARE 2 DIFF MATHODS TO DEFINE THE OBJECTS
    // 1 BY MAKING THE OBJECT OF THE DERIVED CLASS
    // 2 BY USING NEW KEYWORD WITH THE RELATED CLASS NAME
    // WE DONT USE (.) DOT OPERATOR HERE BECAUSE WE ARE WORKING WITH POINTERS

    ptr = &b1;
    ptr->give();   // Brown Bun

    ptr = new girl();
    ptr->give();   // Pink Bun

    return 0;
}*/

// HERE WE ARE USING THE POLYMORPHISM BECAUSE IN THIS BELOW PROGRAM WE STORE THE REFERENCE OF THE CLASS IN THE POINTER VARIABLE ACCORDING TO WHICH IT DECIDES WHICH FUNCTION OF WHICH CLASS IS TO BE CALLED
// ABILITY TO PERFORM MORE THAN ONE TASK USING SAME FUNCTION CALLED POLYMORPHISM
/*#include <iostream>
using namespace std;

// HERE THE PARENT CLASS IS JUST ACTING AS THE PARENT AND ITS FUNCTION IS THE PURE VIRTUAL FUNCTION
class parent  // AS THIS CLASS HAS A PURE VIRTUAL FUNCTION THIS CLASS IS KNOWN AS ABSTRACT CLASS
{
public:
    virtual void give() = 0; // pure virtual function and it has no body
};

class boy : public parent
{
public:
    void give()
    {
        cout << "Brown-Bun" << endl;
    }
};

class girl : public parent
{
public:
    void give()
    {
        cout << "Pink-Bun" << endl;
    }
};

int main()
{
    parent *ptr;

    ptr = new boy();
    ptr->give();

    ptr = new girl();
    ptr->give();
    return 0;
}*/

// DESTRUCTOR -> HOW CAN WE DESTROY THE OBJECT COMPLETELY PARENT CLASS AND CHILD CLASS
/*#include <iostream>
using namespace std;
class parent
{
public:
    // using virtual destructor we can destroy both the parent and child class object completely
    // otherwise using simple destructor only parent class object will be destroyed not the child class
    virtual ~parent()
    {
        cout << "Parent Class Destroyed" << endl;
    }
};
class child : public parent
{
public:
    ~child()
    {
        cout << "Child Class Destroyed" << endl;
    }
};  
int main()
{
    parent *ptr = new child;

    delete ptr;
}*/

// FRIEND FUNCTION

/*#include <iostream>
using namespace std;

// class One
class first
{
private:
    int a;

public:
    first(int x = 0)
    {
        a = x;
    }
    // friend function which can access all the access modifiers of the class
    // and has power to connect two classes
    friend void fun();
};

// class Two
class second
{
private:
    int b;

public:
    second(int y = 0)
    {
        b = y;
    }
    // friend function which can access all the access modifiers of the class
    // and has power to connect two classes
    friend void fun();
};

void fun()
{
    // class << First >> with its object << a1 >>
    first a1(10);
    // class << Second >> with its object << a1 >>
    second b1(20);

    // Declaring a variable in which we are adding elements of Objects
    int x = a1.a + b1.b;
    cout << "The Sum of the Two Numbers :- " << x << endl;
}

int main()
{
    fun();
    return 0;
}*/

// FRIEND FUNCTION VOILATING OOP APPROACH CONNECTING TWO CLASSES WITHOUT INHERITENCE AND WE CAN ALSO ACCESS THE PRIVATE, PROTECTED AND PUBLIC ACCESS MODIFIERS DOMAIN

/*#include <iostream>
using namespace std;
class upper
{
private:
    int aVal;

public:
    upper(int x)
    {
        aVal = x;
    }
    friend void fun();
};

class lower
{
private:
    int bVal;

public:
    lower(int y)
    {
        bVal = y;
    }
    friend void fun();
};

void fun()
{
    int ele1, ele2;
    cout << "Enter the value of A :- ";
    cin >> ele1;

    cout << "Enter the value of B :- ";
    cin >> ele2;

    upper obj1(ele1);
    lower obj2(ele2);

    int x = obj1.aVal * obj2.bVal;
    cout << "The Multiplication is :- " << x << endl;
}

int main()
{
    fun();
    return 0;
}*/

// OPERATOR OVERLOADING
/*#include <iostream>
using namespace std;
class complex
{
private:
    int a;

public:
    void setData(int x = 0)
    {
        a = x;
    }

    // complex(): a(0){}

    void showData()
    {
        cout << "Greater is :- " << a << endl;
    }

    complex operator>(complex e2)
    {
        complex temp;
        if (a > e2.a)
        {
            temp.a = a;
        }
        return temp;
    }
    complex operator<(complex e2)
    {
        complex temp;
        if (a < e2.a)
        {
            temp.a = e2.a;
        }
        return temp;
    }
};

int main()
{
    complex e1, e2, e3;
    int m, n;
    cout << "Enter the value of A :- ";
    cin >> m;
    cout << "Enter the value of B :- ";
    cin >> n;
    e1.setData(m);
    e2.setData(n);

    e3 = e1 > e2;
    e3.showData();

    return 0;
}*/

/*#include <iostream>
using namespace std;
class person
{
private:
    int height;

public:
    person(int h)
    {
        height = h;
    }

    // We are Taking Two Arguments but normal member function cannot
    friend bool operator>(person x, person y);
    friend bool operator<(person x, person y);
};

bool operator>(person x, person y)
{
    return x.height > y.height;
}

bool operator<(person x, person y)
{
    return x.height < y.height;
}

int main()
{
    int h1, h2;
    cout << "Enter Height of First Person :- " << endl;
    cin >> h1;

    cout << "Enter Height of Second Person :- " << endl;
    cin >> h2;

    person first(h1);
    person second(h2);

    if (first > second)
    {
        cout << "First is Taller." << endl;
    }

    if (second > first)
    {
        cout << "Second is Taller." << endl;
    }

    return 0;
}*/

// FRIEND CLASS CAN ACCESS PRIVATE DATA OF THE OTHER CLASS

/*#include <iostream>
using namespace std;
class alpha
{
private:
    int a;

public:
    alpha(int x)
    {
        a = x;
    }
    friend class beta;
};

class beta
{
private:
    int b;

public:
    beta(int y)
    {
        b = y;
    }

    int sum()
    {
        int m;
        cout << "Enter the Value of A :- ";
        cin >> m;
        alpha al(m);
        int sum = al.a + b;
        return sum;
    }
};

int main()
{
    int n, result;
    cout << "Enter the Value of B :- ";
    cin >> n;

    beta be(n);
    result = be.sum();

    cout << "The sum is :- " << result << endl;
}*/

// STATIC MEMBER

/*#include <iostream>
using namespace std;
class alpha
{
private:
    int a, b;

public:
    alpha()  // non-parameterized constructor
    {
        int a1, b1;
        cout << "Enter the Value of A :- ";
        cin >> a1;
        cout << "Enter the value of B :- ";
        cin >> b1;
        a = a1;
        b = b1;
        stat++;
    }
    static int stat;
};
int alpha::stat = 0;

int main()
{
    alpha a1;
    alpha a2;
    alpha a3;

    cout << a1.stat << endl;
    cout << a2.stat << endl;
    cout << alpha::stat << endl;
}*/

// static member function with area of Ractangle

#include <iostream>
using namespace std;
class staticFun
{
private:
    int length;
    int breadth;

public:
    staticFun(int x, int y)
    {
        length = x;
        breadth = y;
        count++;
    }
    static int count;


    // Area function to calculate the area of Ractangle with integer type return value
    int area()
    {
        int result = length * breadth;
        return result;
    }
};

// initialize the count with value 0
int staticFun::count = 0;

int main()
{
    int m, n;

    cout << "Enter the length of the Ractangle :- ";
    cin >> m;
    cout << "Enter the breadth of the Ractangle :- ";
    cin >> n;

    staticFun rac1(m, n);

    int m1, n1;

    cout << "Enter the length of the Ractangle :- ";
    cin >> m1;
    cout << "Enter the breadth of the Ractangle :- ";
    cin >> n1;

    staticFun rac2(m1, n1);

    cout << "Area of Ractangle 1 :- " << rac1.area() << endl;
    cout << "Area of Ractangle 2 :- " << rac2.area() << endl;

    cout << "Ractangle 1 :- " << rac1.count << endl;
    cout << "Ractangle 2 :- " << rac2.count << endl;

    return 0;
}