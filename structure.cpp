//c is called a pop
//c++ is aa oops

// acc to c language  structure  is a collection of user defined data types  
// acc to c++ structure is a collection of user-defined data types as well as user defined funcation
//(.) is the member operator  

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
struct cybrom
{
    int age ;
    char name[20];      // it cannot be reasign 
};

struct cybrom d;
d.age = 20;
cout<<d.age;
strcpy(d.name," \nbhopal");
cout<<d.name;

return 0 ;
}