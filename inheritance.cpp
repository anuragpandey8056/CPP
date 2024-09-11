// is used to access the property of parent class .there are 5 types of inheritance

// ===========================================================================//
// 1.single- single inheritance we use only two classes where the lasr class is called a
// child class and previous class a parent class we always create an object of child class
// and with the help of with we can access the data member and member function of both classess

// ===========================================================================//
// 2.multilevel -

// 3.multiple
// 4.hirerical
// 5.hybride
// single

//==============================================single level======================================
// #include <iostream>
// using namespace std;
// class rbi
// {
//     int t;

// public:
//     void show()
//     {
//         cout << "rbi class\n";
//     }
// };
// class sbi : public rbi
// {
//     int a;

// public:
//     void display()
//     {
//         cout << "sbi\n";
//     }
// };
// int main()
// {
//     sbi obj;
//     cout << sizeof(obj) << "\n";
//     obj.display();
//     obj.show();
// }
//================================================== multilevel====================================
// #include<iostream>
// using namespace std;
// class rbi
// {
// int t;
// public:void show()
// {
//     cout<<"rbi class\n";
// }
// };
// class sbi:public rbi{
//     int a;
//     public:void display()
//     {
//         cout<<"sbi\n";
//     }
// };
// class customer:public sbi
// {
//     int b;
//     public:void cust()
//     {
//         cout<<"customer\n";
//     }
// };
// int main()
// {
//     customer obj;
//     cout<<sizeof(obj)<<"\n";
//     obj.display();
//     obj.show();
//     obj.cust();

// }

//======================================================= protected================================
// #include<iostream>
// using namespace std;
// class rbi
// {
// int t;
// protected:void show()
// {
//     cout<<"rbi class\n";
// }
// };
// class sbi:public rbi{
//     int a;
//     public:void display()
//     {
//         show();
//         cout<<"sbi\n";
//     }
// };
// class customer:public sbi
// {
//     int b;
//     public:void cust()
//     {    display();
//         cout<<"customer\n";
//     }
// };
// int main()
// {
//     customer obj;
//     cout<<sizeof(obj)<<"\n";
//     // obj.display();
//     // obj.show();
//     obj.cust();

// }

//==========================================intializer list =============================================================
// jab hame constant value reintialize karte hai  usse intitalizer list kahte hai
// #include<iostream>
// using namespace std;
// class RBI {
//     const int rate,amount;
//     public:RBI(int rate,int amount):rate(rate),amount(amount)
//     {
//           cout<<rate<<"\n";
//         cout<<amount<<"\n";
//     }
// };
// int main(){
//     RBI sbi(8,100000);
//     RBI axis(6,100000);
// }
//=====================================================real=============================================
// #include<iostream>
// using namespace std;
// class RBI {
//     const int rate,amount;
//     public:RBI(int r,int a):rate(r),amount(a)
//     {
//           cout<<rate<<"\n";
//         cout<<amount<<"\n";
//     }
// };
// int main(){
//     RBI sbi(8,100000);
//     RBI axis(6,100000);
// }

//===============================================best question====================================================
// base class ke construction ko intialize  child class se kaise kare
// #include <iostream>
// using namespace std;
// class atm
// {
// public:
//     atm(int cardno)
//     {
//         cout << "card no = " << cardno << "\n";
//     }
// };
// class customer : public atm
// {
// public:
//     customer(int c, int p):atm(c)
//     {
//         cout << "PWD=" << p << "\n";
//     }
// };

// int main()
// {
//   customer paisa(1001, 2025);
//      return 0;
// }


//==================================multilevel inheritance ==================================================================
// In a multilevel inheritance we create more than two classes and each sub-classes inherits the property of previous class  
// #include<iostream>
// using namespace std;
// class RBI{
//    public:void rmsg(){
//     cout<<"RBI \n";
//    }
// };
// class SBI:public RBI{
//    public:void smsg(){
//     cout<<"SBI \n";
//    }
// };
// class CUST:public SBI{
//    public:void cmsg(){
//     cout<<"Customer \n";
//    }
// };

// int main()
// {
// CUST c;
// c.rmsg();
// c.smsg();
// c.cmsg();
// return 0 ;
// }
//===========================INTERVIEW QUESTION===========================================================================
// #include<iostream>
// using namespace std;
// class RBI{
//    public:RBI(){
//     cout<<"RBI \n";
//    }
//    ~RBI(){
//     cout<<"RBI RELEASED\n";
//    }
// };
// class SBI:public RBI{
//    public:SBI(){
//     cout<<"SBI \n";
//    }
//    ~SBI(){
//     cout<<"SBI RELEASED \n";
//    }
// };
// class CUST:public SBI{
//    public:CUST(){
//     cout<<"Customer \n";
//    }
//    ~CUST(){
//     cout<<"CUST RELEASED \n";
//    }
// };

// int main()
// {
// CUST c;

// return 0 ;
// }


//=======================multiple inheritance====================================================================
// in a mutiple inheritance the chid class inherit the properties more than one class at a time

// daimond problem arises in multiple inheritance when the funcation is same in parents class  
//sclicing matalab scope resoultion operator laga ke call karenge
// #include <iostream>
// using namespace std;
// class axis
// {
// public:
//     void msgaxis()
//     {
//         cout << "axis\n";
//     }
// };
// class sbi
// {
// public:
//     void msgsbi()
//     {
//         cout << "sbi\n";
//     }
// };
// class customer:public sbi, public axis
// {
// public:
//     void msgcustomer()
//     {
//         cout << "customer\n";
//     }
// };

// int main()
// {
//    customer c;
//    c.msgcustomer();
//    c.msgaxis();
//    c.msgsbi();

// }

// to overcome the daimond problem
//daimond problem is that when multiple inheritance is that on that there is differnt class have same name of function is called daimond problem 

// #include <iostream>
// using namespace std;
// class axis
// {
// public:
//     void msg()
//     {
//         cout << "axis\n";
//     }
// };
// class sbi
// {
// public:
//     void msg()
//     {
//         cout << "sbi\n";
//     }
// };
// class customer:public sbi, public axis
// {
// public:
//     void msg()
//     {
//         cout << "customer\n";
//     }
// };

// int main()
// {
//    customer c;
//    c.sbi::msg();// this is the way to overcome the daimond problem
//    sbi s = c;  //type casting
//    s.msg();//
//    static_cast<sbi>(c).msg();// this is also a type to overcome daimond problem
    

// }



//===============================example best constructor and destructor ===================================================
// #include <iostream>
// using namespace std;
// class axis
// {
// public:
//      axis()
//     {
//         cout << "axis\n";
//     }
//     ~axis()
//     {
//         cout << "axis destructor\n";
//     }
// };
// class sbi
// {
// public:
//      sbi()
//     {
//         cout << "sbi\n";
//     }
//     ~sbi()
//     {
//         cout << "sbi destructor\n";
//     }
// };
// class customer : public sbi, public axis
// {
// public:
//      customer()
//     {
//         cout << "customer\n";
//     }                             // constructor accesnding order me chlta hai
//                                   // destructor decending order me chlta hai

//     ~customer()
//     {
//         cout << "customer destructor\n";
//     }
// };

// int main()
// {
//     customer c;
// }

//=========================================herirical inheritance===============================
// // in this inheritance each child class inherits the property of root class
// #include <iostream>
// using namespace std;
// class RBI
// {
// public:
//     void msgrbi()
//     {
//         cout << "hello rbi\n";
//     }
// };
// class SBI :  public RBI
// {
// public:
//     void msgsbi()
//     {
//         cout << "hello sbi\n";
//     }
// };
// class AXIS :  public  RBI
// {

// public:
//     void msgaxis()
//     {
//         cout << "hello axis\n";
//     }
// };
// class CUSTOMER : public RBI
// {
// public:
//     void msgcustomer()
//     {
//         cout << "hello customer\n";
//     }
// };

// int main()
// {
//     CUSTOMER c;
//     c.msgcustomer();
//     c.msgrbi();
// }

//=====================================================hybrid inheritance=======================================
#include <iostream>
using namespace std;
class RBI
{
public:
    void msgrbi()
    {
        cout << "hello rbi\n";
    }
};
class SBI : virtual public RBI
{
public:
    void msgsbi()
    {
        cout << "hello sbi\n";
    }
};
class AXIS : virtual public  RBI
{                                            // daimond  problem remove  by virtual keywords

public:
    void msgaxis()
    {
        cout << "hello axis\n";
    }
};
class CUSTOMER : public SBI, public AXIS
{
public:
    void msgcustomer()
    {
        cout << "hello customer\n";
    }
};

int main()
{
    CUSTOMER c;
    c.msgaxis();
    c.msgcustomer();
    c.msgsbi();
    c.msgrbi();

}




