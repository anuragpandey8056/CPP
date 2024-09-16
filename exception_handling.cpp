
//======================================================Exception handling=============================
// Exceotion : Abnormal condition 
// to avoid abnormal situation we use exceptional handling
// there are three types of handler
// 1).TRY
// 2).THROW
// 3).CATCH

#include<iostream>
using namespace std;
int main()
{
int a,b;
try{
    cout<<"enter two number \n";
    cin>>a>>b;
    if(b==0){
        throw b;
    }
    int c= a/b;
    cout<<c;
}
catch(int e){
cout<<"denominator cant be zero\n";

}
cout<<"done";
return 0 ;
}
//======================================================================================
// #include <iostream>
// using namespace std;
// int main()
// {
//     int b;
//     cout << "enter a number\n";
//     cin >> b;
//     try
//     {
//         if (b == 0)
//         {
//             throw b;
//         }
//         if (b == -1)
//         {
//             throw 1.2;
//         }
//         if (b == -2)
//         {
//             throw 'c';
//         }
//     }
//     catch (int d)
//     {
//         cout << "it is  a integer";
//     }
//     catch (double p)
//     {
//         cout << "it is  a float";
//     }
//     catch (char k)
//     {
//         cout << "it is  a character";
//     }
//     catch (...)
//     {
//         cout << "server down\n";
//     }

//     cout<<"done";

//     return 0;
// }