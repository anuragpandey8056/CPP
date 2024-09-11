#include<iostream>
using namespace std;
class RBI{
   public:RBI(){
    cout<<"RBI \n";
   }
   ~RBI(){
    cout<<"RBI RELEASED\n";
   }
};
class SBI:public RBI{
   public:SBI(){
    cout<<"SBI \n";
   }
   ~SBI(){
    cout<<"SBI RELEASED \n";
   }
};
class CUST:public SBI{
   public:CUST(){
    cout<<"Customer \n";
   }
   ~CUST(){
    cout<<"CUST RELEASED \n";
   }
};

int main()
{
CUST c;

return 0 ;
}