// // run time polymorphism
// /* in a run time polymorphism we create a virtual funcation in a top class that belongs to super class and we create a pointer object of super
// class as well as normal object of super class and child class also and we pass the refernce of object to the pointer object regarding calling
//  member funcation of respective object*/

// // this is also called  funaction overrideing ==========================================================
// // a super class having a virtual funcation or isi ka pointer object banega
// // virtual function jo rahega uski ki tarah function me kaam karega non virtual ke liye nhi kamm karega pointer object
// // this is called top to bottom approach

// // #include <iostream>
// // using namespace std;
// // class rbi
// // {
// // public:
// //     virtual void msg()
// //     {
// //         cout << "rbi msg \n";
// //     }
// // };
// // class sbi : public rbi
// // {
// // public:
// //     void msg()
// //     {
// //         cout << "sbi msg \n";
// //     }
// // };
// // int main()
// // {
// //     rbi *p;
// //     rbi r;
// //     sbi s;
// //     p = &r;
// //     p->msg(); //pointer object se call karne ke liye arrow ka use hota hai
// //     p = &s;
// //     p->msg();
// //     return 0;
// // }
// //===========================================abstract class==================================
// #include <iostream>
// using namespace std;
// class rbi // Abstract class //  ka pointer object bnta hai  iska normal object nhi bnta hai   iske funcation direct call nhi hota kyuki isme pointer object bnta hai
// {
// public:
//     virtual void msg() = 0; // puru abstract class
//     virtual void fun()=0;                        // puru virtual function hai to childclass me redefine hona compulsary hai
// };
// class sbi : public rbi
// {
// public:
//     void msg()
//     {
//         cout << "sbi msg \n";
//     }
//     void fun()
//     {
//         cout << "fun\n";
//     }
// };
// int main()
// {
//     rbi *p;
//     sbi s;
//     p = &s;
//     p->msg();
//     p->fun();
// }