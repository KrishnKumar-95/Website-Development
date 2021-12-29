#include <iostream>
using namespace std;
class complex
{
private:
    int a;

public:
    // void setData(int x = 0)
    // {
    //     a = x;
    // }

    complex(): a(0){}

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
}