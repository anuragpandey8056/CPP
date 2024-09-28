/* constructor is called special funcation which is used to allocate the memory space of any object at runtime
   there are following types of constructor
1) default constructor
2) parametrized constructor
3) copy constructor
  1) shallow copy
  2) deep copy
4) contructor overloading

destructor: is used to deallocate the memory space of an object



//  bydeafult class having constructor and destructor


// default constructor in cpp if the funcation name is similar to class name without using anyparameter  is class default constructor

constructor doesnt having any return typr
*/
// #include <iostream>
// using namespace std;
// // public:classname(){
// //   statement
// // }
// class student
// {
// public:
//     student()
//     {
//         cout << "memory allocation";
//     }
//     void hello()
//     {
//         cout << "hello";
//     }
// };
// int main()
// {
//     student s; // implicit calling
//     // s.hello();// explicit calling
// }
// =================================================================================================
// #include<iostream>
// using namespace std;
//  int main(){

//  cout<<"hello";
//  }                             // this example shows cpp is have a top down approach

// class student {
//  public: student(){
//     cout<<"memory allocation \n";
//   }

// }s;

// // =========================================constructor overloading================================================================
// we can create a parameterized constructor by using either one parameter or more than one
// if a program contains more than on constructor id called constructor overloding
// #include<iostream>
// using namespace std;

// class student {
//  public: student(int a,int b){ // parametrized constructor
//     cout<<"memory allocation to a and b \n";
//   }
//   student(){  // default constructor
//     cout<<"constructor overloding";
//   }

// };
//  int main(){
//   student s(4,5) ;
//   student r;
//  }

// constructor doesn't have return type

// =======================================================================================================
// cpp contains the shallow copy inside a class

// #include <iostream>
// using namespace std;
// class top
// {
//   int x, y ;
//   public : top(int a, int b)
//   {
//     x = a;
//     y = b;
//   }
//   void show()
//   {
//     cout << "x=" << x<<endl;
//     cout << "y=" << y;
//   }
// };
// int main()
// {
//   top p1(10,20);
//   //top p2 = p1; // implicit assignment copy constructor
//   top p2(p1);  // call shallow copy constructor
//   p2.show();
// }

// =============================deep copy==================================
#include<iostream>
using namespace std;
class atm {
    int amount,*loc;
    public:
    atm(atm &t){
        amount = t.amount;
        loc = new int ;
        *loc = *(t.loc);
    }
    atm(int amt,int adr){
        amount = amt;
        loc = new int ;
        loc = &adr;

    }
    void transction(int a){
        amount = amount+a;
        *loc = *loc+1;
    }
    void show(){
           cout<<"balance="<<amount<<"\t";
           cout<<"location = "<<*loc<<"\n";
    }
};
int main()
{
atm mpnagar(1000,1);
atm bhel (mpnagar);
bhel.show();
mpnagar.transction(1000);
mpnagar.show();
bhel.show();
return 0 ;
}
