//  funcation calling itself called a recursion
// head recursion  ========(pahle call ho rha phir print ho rha hai)

// #include <iostream>
// using namespace std;
// int disc(int a)
// {
//     if (a == 0)
//     {
//         return 0;
//     }
//     disc(a - 1);
//     cout<< a << "\t";
// }
// int main()
// {
//     disc(5);
//     return 0;
// }

// tail recursion===(pahle print kar rha phir call ho rha hai)

// #include <iostream>
// using namespace std;
// int disc(int a)
// {
//     if (a == 0)
//     {
//         return 0;
//     }
//     cout<< a << "\t";
//     disc(a -1);
// }
// int main()
// {
//     disc(5);
//     return 0;
// }

// using recurion  factorial   // recursive tree==============================================================================
// #include <iostream>
// using namespace std;
// int fact(int a)
// {
//     if (a == 0)
//     {
//         return 1;
//     }
//   int k =a* fact(a -1);
//   return k;
// }
// int main()
// {
//  cout<<fact(5);
//     return 0;
// }

//===============================================================================================================

// #include <iostream>
// using namespace std;
// int fact(int base, int power)
// {
//     if (power != 0)
//     {
//         return (base * fact(base, power - 1));
//     }       

//     return 1;
// }
// int main()
// {
//     int base, power;
//     cout<<"enter base and power \n ";
//     cin >> base >> power;
//     cout << fact(base, power);
// }



// =============================================fibonacci series===========================================
// #include <iostream>
// using namespace std;
// int fibo(int term){
// if(term<=1){
//     return term;
// }

//   return  fibo(term-1)+fibo(term-2);
// }
// int main()
// {
//     int term;
//     cout<<"enter term  \n ";
//     cin >> term ;
//     cout << fibo(term);
// }


//========fibonacie series send method ======================================================================================================


#include <iostream>
using namespace std;
int fibo(int term){
if(term==0){
    return 0;
}

if(term==1){
    return 1;
}

  return  fibo(term-1)+fibo(term-2);
}
int main()
{
    int term;
    cout<<"enter term  \n ";
    cin >> term ;
    cout << fibo(term);
}