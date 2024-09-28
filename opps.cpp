/* IT is having four pillars
 1)encapsulation
2)abstraction
3)inheritance
4)polymorphism

==========================================================================================================
Class => it is a collection of data member and member function.
class is also called user defined data types.
class doesn't take any memory without object made.
khali class ka object bna dete hai to wo 1byte space leta hai
=====================================================================================================================

real world entity which  ocuppy space  is called object ;


=> class is a blueprint of an object
=> object is a instance of a class
=====================================================================================================================
 acess specifier  / modifier
1. private
2. public
2.protected
=======================================================================================================================
encapsultion =>rapping up of your data // calling data member is called encapsulation



*/

// #include<iostream>
// using namespace std;
// class bhopal{
// 	public:void show(){   // acess specifier
// 		cout<<"welcome";
// 	}
// };
// int main(){
// 	bhopal b;
// 	b.show();

// }

// #include<iostream>
// using namespace std;
// class bhopal{
// 	public:void show(int s){   // acess specifier
// 		for(int i=1;i<=10;i++){
// 			cout<<s*i<<"\n";
// 		}
// 	}
// };
// int main(){
// 	int t;
// 	cin>> t;
// 	bhopal b;
// 	b.show(t);

// }

// #include<iostream>
// using namespace std;
// class top
// {
//     int c;
//    public:void sum(int a,int b)
//    {

//        c=a+b;
//    }
//    void show()
//    {
//        cout<<"result="<<c;
//    }
// };
// int main()
// {
//    top t;
//    int s,b;
//    cout<<"enter two number\n";
//    cin>>s>>b;
//    t.sum(s,b);
//    t.show();
// }

// #include <iostream>
// using namespace std;
// // function declare & define inside a class
// class top
// {
//   int a, b, c;

// public:
//   void sum(int x, int y);
//   void show();
// };
// void top::sum(int x, int y)
// {
//   c = x + y;
//   cout << c;
// }
// void top::show()
// {
//   cout << "result =";
// }
// int main()
// {
//   top p;
//   int s, b;
//   cout << "enter two number\n";
//   cin >> s >> b;
//   //    p.show();
//  p.sum(s, b);
// }

// #include <iostream>
// using namespace std;
// // here we use this pointer "this->" for same variable and argument.
// //  jab data member and function ka argument same hota hai tab ambiguty create hoti hai to ham log this pointer ka use karte hai.

// class top
// {
//   int a, b, c;

// public:
//   void sum(int a, int b)
//   {
//     this->a = a;
//     this->b = b;
//     c = a + b;
//   }
//   void show()
//   {
//     cout << a << "+" << b << "=" << c;
//   }
// };
// int main()
// {
//   top h;
//   int s, b;
//   cout << "enter two number\n";
//   cin >> s >> b;
//   h.sum(s, b);
//   h.show();
// }

// #include<iostream>
// using namespace std;
// //function declare & define inside a class
// class top
// {
//     int a,b,c;
//     public:void sum(int a,int b)
//     {
//      this->a=a;
//      this->b=b;
//         c=a+b;
//     }
//     void show()
//     {
//         cout<<a<<"+"<<b<<"="<<c;
//     }
// };
// int main()
// {
//     top h;
//     int s,b;
//     cout<<"enter two number\n";
//     cin>>s>>b;
//     h.sum(s,b);
//     h.show();

// }
//===================================================================================================================================

// =====================================================================================================

// #include <iostream>
// using namespace std;
// // funcation overloading  is that a class consist of same name of funcation with different parameters.
// class top
// {
//   int a, b, c;

// public:
//   void show(int a, int b)
//   {
//     cout << "int addition" << a + b << "\n";
//     // same name hai funcation ka but parameter different hai dono ke isliye call ho rha hai ;
//   }
//   void show(float a, float b)
//   {

//     cout << "float addition" << a + b << "\n";
//   }

//   void show(double a, double b)
//   {

//     cout << "double addition" << a + b << "\n"; // double ki priority jada hoti hai isliye points wali value leleta hai

//   }
// };
// int main()
// {
//   top h;
//   int s;
//   cout << " enter two number \n ";
//   cin >> s;
//   h.show(45.59, 44.25);
// }

//  =================================================static ==============================================

// the non static data member and non static memeber function is the attribute of object.
// the static data memeber and static memeber function are the attribute of a class.
// satatic data member shareable hota hai copy nhi banata hai. jisse memory bachti hai
// we can also declare and define static function inside a class.
// we can acces the ststic  member function   of a class with the help of class name using scoperesulation operator and fuction name.
// satatic data member  class ke ander declare hota hai aur bahar initialization hota hai .
// satatic data member static function me hi use hote hai and nonstatic non static me use hote hai vise-versa.
//  ========================================================================================
// #include <iostream>
// using namespace std;

// class cybrom
// {
//   static int a; // Declare the static member variable
// public:
//   static void show(int x)
//   {
//     a = x;
//     cout << a << endl;
//   }

//   static void show1()
//   {
//     cout << a << endl;
//   }
// };

// // Define the static member outside the class
// int cybrom::a = 0;

// int main()
// {
//   // cybrom::show(100); // Calling the static function directly using the class
//   // cybrom::show1();// Calling the second static function to display 'a'

//  cybrom c;
//  c.show(100);
//  cybrom d;
//  d.show(200);
 

//   return 0;
// }




// #include<iostream>
// using namespace std;   
// class atmcard{
//    static int c;
//    public:
//    void static show(int a){
//     c++;
//     cout<<c;
//    }
// };
// int atmcard::c=0;
// int main()
// {
//   atmcard a;
//   atmcard b;
//   a.show(10);
//   a.show(20);
//   b.show(10);


// return 0 ;
// }

// =======================================================================================================

//  #include <iostream>
//  using namespace std;
//  // isme object banane ki jarurat mhi hai direct class or funcation se call karo ============
//  class top
//  {
//  public: static int a, b, c;

// public:
//     void static show(int x,int y)
//     {
//         c=x+y;
//         cout << "double addition"<<c<<"\n";
//     }
// };
// int top::c=0;
// int main()
// {

//     int s,g;
//     cout << "enter two number\n";
//     cin >>s>>g;
//     top::show(s,g);

// }

// ====================// composite class==========================================================
//  composite class is that  whic hold the previous class object  and with the help it can call the member the function of previous class inside a funtion
// composite class is called a has a relationship class
// #include <iostream>
// using namespace std;

// class top
// {
// public:
//     void static show()
//     {

//         cout << " top class" << "\n";
//     }
// };
// class bhopal
// {                // calling one class other class has also come
//     top t;

// public:
//     void sum()
//     {
//         t.show();

//         cout << "bhopal class" << endl;
//     }
// };
// int main()
// {
//     bhopal b;
//     b.sum();
// }

// ============================= friend function==============================================================================
/* friend funcation is used to acess the private data member or member funcation of class outside of it . for that we have to declare a
 friend funcation in both classes */

// #include <iostream>
// using namespace std;
// class tenth;
// class twelve
// {
//   int a;

// public:
//   void twelveresult(int p)
//   {

//     a = p;
//   }
//   friend void show(twelve, tenth);
// };
// class tenth
// {
//   int b;

// public:
//   void tenthresult(int p)
//   {
//     b = p;
//   }
//   friend void show(twelve, tenth);
// };
// void show(twelve t12, tenth t10)
// {
//   if (t12.a > t10.b)
//   {
//     cout << "12th result =" << t12.a;
//   }
//   else
//   {
//     cout << "10th result =" << t10.b;
//   }
// }
// int main()
// {
//   twelve t12;
//   tenth t10;
//   t12.twelveresult(97);
//   t10.tenthresult(87);
//   show(t12, t10);
// }

//===================================================friends class=============================================================
// with the help of friend class we can access the private data memeber and private member function of any class outside of it provided that
// the friend class should be declared inside of it
#include <iostream>
using namespace std;
class sbi
{
  int amount = 1000;
  void info()
  {
    cout << "CUSTOMER OF SBI \n";
  }
  friend class axis;
};
class axis
{
  public: void show (sbi s){
    cout<<"balance = "<<s.amount<<"\n";
    s.info();

  }

};
int main()
{
  sbi s1;
  axis a;
  a.show(s1);

  return 0;
}