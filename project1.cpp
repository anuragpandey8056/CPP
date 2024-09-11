// #include <iostream>
// using namespace std;
// const int m = 50;
// class ITEMS
// {
//     int itemCode[m];
//     float itemprice[m];
//     int count;

// public:
//     void CNT()
//     {
//         count = 0;
//     }
//     void getitem();
//     void displaysum();

//     void remove();
//     void displayItems();
// };
// void ITEMS::getitem()
// {
//     cout << "enter item code";
//     cin >> itemCode[count];
//     cout << "enter Item cost";
//     cin >> itemprice[count];
//     count++;
// }
// void ITEMS ::displaysum()
// {
//     float sum = 0;
//     for (int i = 0; i < count; i++)
//         sum = sum + itemprice[i];
//     cout << "\n total value:" << sum << "\n";
// }
// void ITEMS ::remove()
// {
//     int a;
//     cout << "enter Item code";
//     cin >> a;
//     for (int i = 0; i < count; i++)
//         if (itemCode[i] == a)
//             itemprice[i] = 0;
// }
// void ITEMS ::displayItems()
// {
//     cout << "\n code  price\n";

//     for (int i = 0; i < count; i++)
//     {
//         cout << "\n"
//              << itemCode[i];
//         cout << " \n"
//              << itemprice[i];
//     }
//     cout << "\n";
// };
// int main()
// {
//     ITEMS order;
//     order.CNT();
//     int x;
//     do
//     {
//         cout << "\n Enter appropriate number to execute function\n";
//         cout << "\n1  :Add an Item";
//         cout << "\n2  :Display Total Value";
//         cout << "\n3  :Delete an Item";
//         cout << "\n4  : Display all items";
//         cout << "\n5  : Quit";
//         cout << "\n\n what is your option?";
//         cin >> x;
//         switch (x)
//         {
//         case 1:
//             order.getitem();
//             break;
//         case 2:
//             order.displaysum();
//             break;
//         case 3:
//             order.remove();
//             break;
//         case 4:
//             order.displayItems();
//             break;
//         default:
//             cout << "wrong Choice\n";
//         }

//     } while (x != 5);
//     return 0;
// }

//===================================================question 1=============================================
// #include<iostream>
// using namespace std;
// class head{

//    public : int a,b;
//   public:
//   void sum( ){
//     cout<<"enter a two number  \n";
//     cin>>a>>b;
//   }
// };
// class LESS: public head{
//     public:
//       void hello(){
//         cout<<a+b;
//       }
// };
// int main()

// {
// LESS h;
// h.sum();
// h.hello();

// return 0 ;
// }

//===============================================================QUESTION 2 ========================================================
// #include <iostream>
// using namespace std;
// class A
// {
// public:
//     float sub1, sub2, sub3;

// public:
//     void enter()
//     {
//         cout << "enter marks of three subject \n";
//         cin >> sub1 >> sub2 >> sub3;
//     }
// };
// class B : public A
// {
// public:
//     float sum;

// public:
//     void calc()
//     {
//         sum = sub1 + sub2 + sub3;
//         cout << "total number is = " << sum << endl;
//     }
// };
// class C : public B
// {

// public:
//     void display()
//     {
//         ;
//         cout << "percentage =" << (sum * 100) / 300;
//     }
// };
// int main()
// {
//     C obj;
//     obj.enter();
//     obj.calc();
//     obj.display();

//     return 0;
// }

//============================================================QUESTION 3=================================================================
// #include <iostream>
// #include <string>
// using namespace std;
// class person
// {
// public:
//     int name[5];
//     int address[5];
//     int number[5];

// public:
//     void detail()
//     {
//         for (int i = 0; i < 5; i++)
//         {
//             cout << "enter name of emply \n";
//             cin >> name[i];
//             cout << "enter address of emply \n";
//             cin >> address[i];
//             cout << "enter number of emply \n";
//             cin >> number[i];
//         }

//         cout << " \nNAME   ADDRESS  NUMBER\n";

//         for (int i = 0; i < 5; i++)
//         {
//             cout << "\n"
//                  << name[i];
//             cout << " \t"
//                  << address[i];
//             cout << " \t"
//                  << number[i];
//         }
//         cout << "\n";
//     }
// };
// class empoly : public person
// {
// public:
//     void empolyee()
//     {
//         cout << "name and number of empolyees";
//         cout << " \n empolyee__NAME    empolyee__NUMBER\n";

//         for (int i = 0; i < 5; i++)
//         {
//             cout << "\n"
//                  << name[i];

//             cout << " \t"
//                  << number[i];
//         }
//         cout << "\n";
//     }
// };
// class manager : public empoly

// {
// public:
//     int desgination[5], department_name[5], basic_sallary[5];

// public:
//     void mang()
//     {
//         for (int i = 0; i < 5; i++)
//         {
//             cout << " enter  desgination of empolyee\n";
//             cin >> desgination[i];
//             cout << "enter  department name of emply \n";
//             cin >> department_name[i];
//             cout << "enter basic sallary of emply \n";
//             cin >> basic_sallary[i];
//         }

//         cout << " \n deprtdesign   departname  departsallary\n";

//         for (int i = 0; i < 5; i++)
//         {
//             cout << "\n"
//                  << desgination[i];
//             cout << " \t"
//                  << department_name[i];
//             cout << " \t"
//                  << basic_sallary[i];
//         }
//         cout << "\n";
//     }

//     void grater()
//     {
//         int j = 0;
//          for (int i = 0; i < 5; i++)
//         {
//             if (basic_sallary[i]>j){
//                 j=basic_sallary[i];

//             }
//         }
//         cout<<"grater sallary ="<<j;
//     }
// };
// int main()
// {
//     manager obj;
//     obj.detail();
//     obj.empolyee();
//     obj.mang();
//     obj.grater();

//     return 0;
// }

//===================================================question 4=======================================================

// #include <iostream>
// using namespace std;
// class items
// {
// public:
//     int itemcode[3];
//     int itemname[3];
//     float itemprice[3];

// public:
//     void products()
//     {
//         for (int i = 0; i <= 2; i++)
//         {
//             cout << "enter item code \n";
//             cin >> itemcode[i];
//             cout << "enter item name \n";
//             cin >> itemname[i];
//             cout << "enter item-price \n";
//             cin >> itemprice[i];
//         }
//         cout << "\n item-code  item-name  item-price \n";
//         for (int i = 0; i <= 2; i++)
//         {
//             cout << itemcode[i];
//             cout << "\t" << itemname[i];
//             cout << "\t" << itemprice[i] << endl;
//         }
//     }
// };

// class discount : public items
// {
// public:
//     int itempurchase[2];
//     int discount;

// public:
//     void dis()
//     {
//         cout << "enter item code to purchase item \n";
//         for (int i = 0; i <= 1; i++)
//         {
//             cin >> itempurchase[i];
//         }

//         cout << "enter discout you want \n";
//         cin >> discount;
//         cout << "\n item-code  item-name  discount-amount \n";

//         for (int i = 0; i <= 2; i++)
//         {
//             if (itemcode[i] == itempurchase[i])
//             {
//                 cout << itempurchase[i];
//             }
//             cout << "\t" << itemname[i];

//             cout << "\t" << itemprice[i] * (100 - discount) / 100 << endl;
//         }
//     }
// };
// int main()
// {
//     discount obj;
//     obj.products();
//     obj.dis();
//     return 0;
// }