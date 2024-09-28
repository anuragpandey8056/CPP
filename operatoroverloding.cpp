/*
operator overloding is used to  solve the problem of complex data type which is basically used for non primitive data type and with the help of it we can change the behviour of any operator.there are two type of overloading
 1.uniary operator overloading
 2.binary operator overloading

*/

// #include <iostream>
// using namespace std;
// class top
// {

//     int a;

// public:
//     top(int x)
//     {
//         a = x;
//     }
//     void operator++()
//     {                                                        // unary operator overloading
//         cout << a + 1 << "\n";
//     }
//     void operator--()
//     {                                                       // unary operator overloading
//         cout << a - 1 << "\n";
//     }

// };

// int main()
// {
//     top obj(200);
//     // ++obj;
//     obj.operator++(); // ++obj; both are same
//     obj.operator--();
//     // --obj;
//     return 0;
// }

//============================Binary operator=========================================================================================
#include <iostream>
using namespace std;
class top
{

    int a;

public:
    top(int x)
    {
        a = x;
    }
    void operator+(top obj2)
    {  
        //binary operator Overloading

        cout << "sum ="<< a * obj2.a << "\n";

    }
};
int main()
{
    top obj1(20);
    top obj2(40);
    obj1 + (obj2);
    return 0;
}