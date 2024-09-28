// #include<iostream>
// using namespace std;
// class Top2;
// class Top1{
//     int a=10;

//     friend void show(Top1,Top2);

// };
// class Top2{
//     int b=20;
//     friend void show(Top1,Top2);

// };
// void show(Top1 t1,Top2 t2){
//     int temp;
//     temp=t1.a;
//     t1.a=t2.b;
//     t2.b=temp;
//     cout<<"a="<<t2.b;
//     cout<<"b="<<t1.a;

// }
// int main()

// {
//     Top1 p1;
//     Top2 p2;
//     show(p1,p2);
// return 0 ;
// }

// #include<iostream>
// using namespace std;
// class Top1{
//     static int a;
//     public:
//     void static show(){
//         a++;
//         cout<<a;

//     }

// };
// int Top1::a=0;
// int main()
// {
//     Top1 t1;
//     Top1 t2;
//     Top1::show();

// return 0 ;
// }

// #include<iostream>
// using namespace std;
// class RBI{
//     public:
//     RBI(){
//     cout<<"RBI CONST \n";
//     }
//     ~RBI(){
//         cout<<"RBI DEST\n";
//     }
// };
// class SBI:public RBI{
//     public:
//     SBI(){
//     cout<<"SBI CONST\n";
//     }
//     ~SBI(){
//         cout<<"SBI DEST\n";
//     }

// };
// class AXIS:public RBI{
//     public:
//     AXIS(){
//     cout<<"AXIS CONST\n";
//     }
//     ~AXIS(){
//         cout<<"AXIS DEST\n";
//     }

// };

// int main()
// {
// SBI s;
// AXIS x;
// return 0 ;
// }

// #include<iostream>
// using namespace std;
// class Top{
//     int c;
//     public:
//     Top(int a){
//         c=a;
//     }
//     void operator+(Top obj){
//         cout<<c+obj.c;

//     }
// };
// int main()
// {
// Top obj1(10);
// obj1+obj1;
// return 0 ;
// }

// #include<iostream>
// using namespace std;
// class atm{
//     int amount,*loc;
//     public:
//     atm(atm &t){
//         amount=t.amount;
//         loc=new int;
//         *loc=*(t.loc);
//     }
//     atm(int amt,int adr){
//         amount=amt;
//         loc=new int;
//         loc=&adr;
//     }
//     void transtion(int a){
//         amount=amount+a;
//         *loc=*loc+1;
//     }
//     void show(){
//         cout<<amount<<"\t"<<*loc<<"\n";

//     }

// };
// int main()
// {
// atm mpnagar(1000,1);
// atm bhel(mpnagar);
// mpnagar.transtion(1000);
// mpnagar.show();
// bhel.show();
// return 0 ;
// }

// #include <iostream>
// using namespace std;
// class Vehicle
// {
// public:
//     virtual void speed() = 0;
// };
// class car : public Vehicle
// {
// public:
//     void speed()
//     {
//         cout << "less than 100km/h";
//     }
// };
// class bicycle : public Vehicle
// {
// public:
//     void speed()
//     {
//         cout << "less than 20km/h";
//     }
// };
// int main()
// {
//     Vehicle *v;
//     car c;
//     v=&c;
//     v->speed();
//     bicycle b;
//     v=&b;
//     v->speed();
//     return 0;
// }


// #include<iostream>
// using namespace std;
// class RBI{
//     public:
//     void show(){
//         cout<<"RBI";
//     }
// };
// class SBI{
//     public:
//     void show(){
//         cout<<"SBI";
//     }
// };
// class CUST:public RBI,public SBI{
//     public:
//     void show(){
//         cout<<"CUST";
//     }
// };
// int main()
// {
//     CUST c;
//     c.show();
//     c.SBI::show();
//     c.RBI::show();

// return 0 ;
// }



// #include<iostream>
// using namespace std;
// class RBI{
//     public:
//     void show1(){
//         cout<<"RBI";
//     }
// };
// class SBI: virtual public RBI{
//     public:
//     void show2(){
//         cout<<"SBI";
//     }
// };
// class AXIS: virtual    public RBI{
//     public:
//     void show3(){
//         cout<<"AXIS";
//     }
// };
// class CUST:public SBI,public AXIS{
//     public:
//     void show4(){
//         cout<<"CUST";
//     }
// };
// int main()
// {
//     CUST c;
//     c.show4();
//     c.show3();
//     c.show2();
//     c.show1();

// return 0 ;
// }

// #include<iostream>
// using namespace std;
// class Circle{
//     float radius;
//     public:
//     void circumference(int a){
//         radius=a;
//         cout<<2*3.14*radius<<endl;
//     }
//     void Area(int a){
//         radius=a;
//         cout<<3.14*radius*radius<<endl;
//     }
// };
// int main()
// {
//     Circle c;
//     c.circumference(20);
//     c.Area(20);
// return 0 ;
// }




// #include<iostream>
// using namespace std;
// class Rectangle{
//     float Length,width;
//     public:
//     void perimeter(int a,int b){
//         Length=a;
//         width=b;
//         cout<<2*(Length+width)<<endl;
//     }
//     void Area(int a,int b){
//         Length=a;
//         width=b;
//         cout<<Length*width<<endl;
//     }
// };
// int main()
// {
//     Rectangle c;
//     c.perimeter(20,10);
//     c.Area(20,10);
// return 0 ;
// }


// #include<iostream>
// #include<string.h>
// using namespace std;
// class Person{
//     char name[10];
//     char country[10];
//     int age;
//     public:
//     void setitems(char a[10],char b[10],int c){
//         strcpy(name,a);
//         strcpy(country,b);

//         age=c;


//     }
//     void getitem(){
//         cout<<"name="<<name;
//         cout<<"country"<<country;
//         cout<<"age="<<age;
//     }



// };
// int main()
// {
// Person p;
// p.setitems("anu","usa",18);
// p.getitem();
// return 0 ;
// }


#include<iostream>
using namespace std;
class BankAccount{
    int Accountno,Balance;
    public:
    void Account(int a,int b){
        Accountno=a;
        Balance=b;
        cout<<Accountno<<endl;
        cout<<Balance<<endl;
    }
    void deposite(int a){
        Balance=Balance+a;
        cout<<"balnce="<<Balance;
    }
    void Withdraw(int a){
        if(a>Balance){
            cout<<"insufficent balance";
        }
        else{
            cout<<"reaming balance"<<Balance-a;

        }
    }

};
int main()
{
BankAccount b;
b.Account(101,20000);
b.deposite(2000);
b.Withdraw(10000);
return 0 ;
}