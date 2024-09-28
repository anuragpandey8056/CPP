// WAP to find the larger number of two using friend fuction
//  #include<iostream>
//  using namespace std;
//  class B;
//  class A{
//      int a=480;
//      friend void show(A,B);
//  };
//  class B{
//       int b=30;
//       friend void show(A,B);
//  };
//  void show(A a,B b){
//       if (a.a > b.b)
//    {
//      cout << "greater =" << a.a;
//    }
//    else
//    {
//      cout << "greater =" << b.b;
//    }
//  }

// int main()
// {
// A a;
// B b;
//   show(a,b);

// return 0 ;
// }

#include <iostream>
using namespace std;
class TCS
{
    char d[7];
    int sallary;

public:
    void show(char a[7], int sall)
    {
        sallary=sall;
        for(int i = 0; i < 7; i++) {
            d[i] = a[i]; 
        }
        cout<<d<<"\n";
        cout<<sallary<<"\n";
    }
};

int main()
{
    TCS t;

    t.show("anu", 1000);

        return 0;
}
