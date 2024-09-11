
#include <iostream>
using namespace std;
 // funcation overloading  is that a class consist of same name of funcation with different parameters
class top
{
    int a, b, c;

public:
    void show(int a)
    {
        cout << "display";
 // same name hai funcation ka but parameter different hai dono ke isliye call ho rha hai ;
    }
    void show()
    {

        cout << "show";
    }
    void show(int a, int b)
    {

        cout << "show";
    }
};
int main()
{
    top h;
    int s,p, r;
    cout << "enter two number\n";
    cin >> s>>p>>r;
    h.show(r,p);
    h.show(s);
    h.show();
}

// ====function overloding ==============================================================================================
// #include <iostream>
// using namespace std;
// // funcation overloading  is that a class consist of same name of funcation with different parameters
// class top
// {
//     int a, b, c;

// public:
//     void show(int a,int b)
//     {
//         cout << "int addition"<<a+b<<"\n";
//         // same name hai funcation ka but parameter different hai dono ke isliye call ho rha hai ;
//     }
//     void show(float a, float b)
//     {

//         cout << "float addition"<<a+b<<"\n";
//     }
// };
// int main()
// {
//     top h;
//     int s;
//     cout << "enter two number\n";
//     cin >> s;
//     h.show(78,68);

// }