// #include<iostream>
// using namespace std;
// void swap(int &a , int &b){     // call by reference  we work with address here is no memory waste
//     int temp ;
//     temp = a;
//     a=b;
//     b=temp;
// }
// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     swap(a,b);
//     cout<<a<<b;

// return 0 ;
// }

// pass array as a argument   int the funcation  ==================================================================

// #include<iostream>
// using namespace std;
// void arr(int a[] , int s){
//   for(int i=1;i<=s;i++){
//     cout<<a[i]<<"\t";
//   }
// }
// int main()
// {
//     int a[]={1,2,3,4,5};
//      int s=sizeof(a)/sizeof(a[0]);
//     arr(a,s);

// return 0 ;
// }

//==============================================

#include <iostream>
using namespace std;
void arr(int a[], int s)
{

    for (int i = 0; i <s; i++)
    {
        a[i] = a[i]+10 ;
    }
}
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int s = sizeof(a) / sizeof(a[0]);
    arr(a, s);
    for (int i = 0; i < s; i++)
    {
        cout << a[i]<<"\t";
    }

    return 0;
}
