/* destructor is uesd to relased the memory of occupied object and destructor is created tilted (~) symbol 
 using with class name as a funcation */


#include<iostream>
using namespace std;
class top
{

public:top(){
    cout<<"welcome \n";
}
~top(){
    cout<<"memory relased";
}

    
};


int main(){
    top t;
    cout<<"how are you\n";

}