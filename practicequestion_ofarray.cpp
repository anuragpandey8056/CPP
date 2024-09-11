#include<iostream>
using namespace std;
int main()
{
int c= 0;
int a[8]={10,200,30,40,505,45,89,125};
int temp = a[0];
for(int i = 0;i<=7;i++){
    if (temp<a[i]){
        temp = a[i];
       c=i;
        
    }


    
}
cout<<temp<<"\n";
cout<<c;
return 0 ;
}
//===================================================================================================================