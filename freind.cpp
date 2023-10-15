#include <iostream>
using namespace std;

// friend function
//      - we know that the private section of class is accessible only and only through the public section of the same class
//      - what if we want to give access to private member a function outside the class, in such curcumstances we use the concept of friend function.
//      -  A friend function is a function that is not a member of the class but is granted the privilege of accessing its private and protected members. This is useful in scenarios where you need external functions to work closely with the internals of a class without exposing those details to the outside world.

// key points
//      - friend function can't be called using the object of the class. it is called like normal general funciton
//      - friend function can use the resources of a class only using an object of the same class
//      - usually a friend function has object as argument

// class demo{
//     friend int sum(demo);
//     int a=4,b=5;
// };


// int sum(demo d){
//     return d.a + d.b;
// }

// int main(){
//     demo d;
//     cout << "Addition = " << sum(d);
//     return 0;
// }

class B;
class A
{
    int a;

public:
    void input()
    {
        cout << "Enter no" << endl;
        cin >> a;
    }
    friend void max(A, B);
};

class B
{
    int b;

public:
    void getdata()
    {
        cout << "Enter NO: " << endl;
        cin >> b;
    }
    friend void max(A, B);
};

void max(A aa, B bb)
{
    if (aa.a > bb.b)
    {
        cout << "Max : " << aa.a << endl;
    }
    else
    {
        cout << " Max : " << bb.b << endl;
    }
}

int main()
{
    A aa;
    B bb;
    aa.input();
    bb.getdata();
    max(aa, bb);

    return 0;
}
