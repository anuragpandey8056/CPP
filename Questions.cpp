#include <iostream>
using namespace std;
#include<iomanip>
int main()
{

// if(0)                  //Expression 
// {
//     cout<<"hello";  
// }
// else{
//     cout<<"bye";
// }


                             //H W



// int num;
// cout<<"Enter the number:";
// cin>>num;




// int p;
// p=a%2;cout<<p;




// if(num%2==0)
// {
//     cout<<"num is even";       

// }
// else
// {
//     cout<<"num is odd";
// }
// int a ,b;
// cout<<"Enter  the 2 numbers:";
// cin>>a>>b;
// if(a>b)
// {
//     cout<<" a is greatest:";

// }
// else{
//     cout<<"b is greatest";
// }

                                           //Type costing


// int a=9,b=5;
// cout<< (float)a/b;  //Explicit 
                                         


                                         //Setprecision

    //   float a,r;
    //  cout<<"enter radius of circule:";
    //  cin>>r;
    //  a=3.14*r*r;//const value 
    //  cout<<"area of circle="<<a;
    //  float cel,far;
    // cout<<"enter the cel..:";
    //  cin>>cel;
    //  far=(cel*9.0/5.0)+32.0;//f=c*1.8+32;//const values hai     
    //  cout<<"farenheight:"<<far;
    //  cout<<"farenheight="<<fixed<<setprecision(2)<<far;


   
    //  Ladder -situation based                                                     nested -condition based  

// -----------------------------------------------------------------------------

    // int a,b,c;
    // cout<<"enter the 3 nos:";
    // cin>>a>>b>>c;
    // if(a>=b && a>=c){
    //     cout<<a<<"is a largest";

    // }
    // else if(b>=a && b>=c){
    //     cout<<b<<"is a largest";

    // }
    // else{
    //     cout<<c<<"is largest";
    // }



    //    Nested   if inside if
    // =================================



    // int pwd,otp;
    // cout<<"enter pwd\n";
    // cin>>pwd;
    // if(pwd==2024)
    // {
    //     cout<<"enter the otp:";
    //     cin>>otp;
    //     if(otp==2025){
    //         cout<<"u r welcome";
    //     }
    //     else{
    //         cout<<"u r fraud";
    //     }   
    // }
    // else{
    //     cout<<"invalid pwd";
    // }


   
//  -------------------------------------------------------------------------------------------------------------  

//    int  r,b;
//    cout<<"enter the meter reading ";
//    cin>>r;
//    if(r<0)
//    {
//     cout<<"invalide reading";
//    }
//    else if(r>=1 && r<=200){
//     cout<<r*5;

//    }
//     else if(r>=201 && r<=500 ){
//     cout<<r*6;

//    }
//     else if(r>=501 && r<=1000){
//     cout<<r*8;

//    }
//     else (r>=1000){
//     cout<<r*10;

//    }

// -----------------------------------------------------------------------------------------------------------------
// int p,c,m,per;
// cout<<"enter the p c & m marks:";
// cin>>p>>c>>m;
// per=(p+c+m)/3;
// if(per>=35 && per<=50){
//     cout<<"3rd division="<<per;
// }
// else if(per>=50 && per<=60){
//     cout<<"2nd division="<<per;
// }
// else if(per>=60 && per<=100){
//     cout<<"1st divion="<<per;
// }
// else{   
//     cout<<" u r Supplimentry";

// }
// -----------------------------------------------------------------------------------------------------------------
// int p,c,m,per,marks;
// cout<<"enter the marks:";
// cin>>marks;
// if(marks>=35 && marks<=100){
// cout<<"enter the p c & m marks:";
// cin>>p>>c>>m;
//  per=(p+c+m)/3;
// if(per>=35 && per<=50){
//     cout<<"3rd division="<<per<<"%";
// }
// else if(per>=50 && per<=60){
//     cout<<"2nd division="<<per<<"%";
// }
// else if(per>=60 && per<=100){
//     cout<<"1st divion="<<per<<"%";
// }

// }
// else{   
//     cout<<" u r Supplimantry";

// }
// -------------------------------------------------------------------------------------------------------

// int p,c,m,tot;
// float per;
// cout<<"enter marks of phy:\n";
// cin>>p;
// cout<<"enter marks of chem:\n";
// cin>>c;
// cout<<"enter marks of math:\n";
// cin>>m;
// tot=p+c+m;
// per=tot/3;
// if(p>100 || c>100 || m>100)
// {
//       cout<<"invalid entry";
// }
// else if(p<35 && c<35 && m>=35)
// {
//       cout<<"fail";
// }
// else if(m<35 && c<35 && p>=35)
// {
//       cout<<"fail";
// }
// else if(m<35 && p<35 && c>=35)
// {
//       cout<<"fail";
// }

// else if(p<35)
// {
//     cout<<"supply in phy\n";
// }
// else if(c<35)
// {
//     cout<<"supply in chem\n";
// }
// else if(m<35)
// {
//     cout<<"supply in math\n";
// }
// else if(per>=60)
// {
//     cout<<"first division="<<per<<"%";
// }
// else if(per<60 && per>=50)
// {
//      cout<<"second division="<<per<<"%";
// }
// else
// {
//     cout<<"third division ="<<per<<"%";
// }
      


   // goto 
// =================================================

// cout<<"Welcome\n";
// goto cybrom;         //o/p Welcome bye
// cout<<"hello\n";       //remaining skip this
// cout<<"hello\n";
// cout<<"hello\n";
// cybrom:
// cout<<"bye\n";

// ----------------------------------------------------------------------------------------------------------
// cout<<"Hello\n";
// cybrom:
// cout<<"Hello\n";
// goto cybrom;
// cout<<"Bye\n";

// --------------------------------------------------------------------------------------------------------

// cout<<"good\n";
// goto bhopal;
// cout<<"go to hell\n";
// bhopal:
// cout<<"ok";

// ---------------------------------------------------------------------------------------------------------

        // int num,count=1,r;
        // cout<<"enter the any number:\n";
        // cin>>num;
        // start:
        // if(count<=10)
        // {
        //     r=num*count;
        //     // cout<< num <<" * " << count <<" = "<<r;
        //     cout<<num * count <<"="<< r ; 
        //     count++;
        //     goto start;
        // }

        //    int a,b=1;
        //    cout<<"enter any no:";
        //    cin>>a;
        //    table:
        //    cout<<a*b<<"\n";
        //    b++;
        //    if(b<=10)
        //    {
        //         goto table;
        //    }
        //    cout<<"\ndone";

//       Leap Year
// --------------------------------------------------------------------------------------------
// int year;
// cout<<"enter year:\n";
// cin>>year;
// if((year%4==0 && year%100!=0) || year%400==0)
// {
//         cout<<"it is leap year";

// }
// else{
//         cout<<"not leap year";
// }
   
// ----------------------------------------------------------------------------------------------------------------
//    char ch;
//    cout<<"enter any charecter \n";
//    cin>>ch;
//    if(ch>='a' && ch<='z')
//    {
//    cout<<"small latter";
//    }

//     else
//    {
//         cout<<"capital latter";
//    }
// 
// ---------------------------------------------------------------------------------------------------------------------
//      char ch;
//      cout<<"enter any  lower character:";
//      cin>>ch;
//      if(ch>='a' && ch<='z')
//      {
//         // cout<<"\n the entered alphabet in lowercharacter";
//         ch=ch-32;
//         cout<<"\nUpper character is:"<<ch;
//      }
//      else 
//      {
//         cout<<"invalide charecter ";
//      }

// --------------------------------------------------------------------------------------------------------------------
        // char ch;
        // cout<<"enter any upper character:";
        // cin>>ch;
        // if(ch>='A' && ch<='Z')
        // {
                
        //         cout<<"\n  the entered alphabet in uppercharacter";
        //         ch=ch+32;
        //         cout<<"\n lower character is:"<<ch;
        // }
        // else
        // {
        //          cout<<"invalide character";
        // }


        // char c;
        // cout<<"enter any character\n";
        // cin>>c;
        // if(c>=97 &&  c<=122)
        // {
        //         cout<<char(c-32)<<"="<<int (c);
        // }
        // else
        // {
        //          cout<<char(c+32)<<"="<<int (c);
        // }


// Switch  Statenment
// -------------------------------------------------------------------------------------
// int a,b,c;
// cout<<"enter two no:";
// cin>>a>>b;
// cout<<"select 1 for +,2 for * and 3 for /";
// cin>>c;
// switch(c)
// {
//         case 1:
//         {
//                 cout<<a+b;
//                 break;





//         }
//         case 2:
//         {
//                 cout<<a*b;
//                 break;
//         }
//         case 3:
//         {
//                 cout<<a/b;
//                 break;
//         }
//         default :
//         {
//                 cout<<"invalide choice";
//         }
        
// }


// --------------------------------------------------------------------------------------------


// --------------------------------------------------------------------------------------------
// char c;
// cout<<"enter any character\n";
// cin>>c;
// if(c>=97 && c<122)
// {
//         // cout<<char(c-32);
//         if(c=='z'){
//         cout<<"";
//         }
//         else
//         {
//          cout<<char(c-32);
//         }



// }


// -------------------------------------------------------------------------------------------------------------------





// -------------------------------------------------------------------------------------------------------------------


//        LOOP
// -----------------------------------------------------------------------------------------------------

// int a=1;
// do{
//         if(a==6) //(a!=6)//cout<<a<<"\n";
//         cout<<"";
//         else
//        cout<<a<<"\n";
//         a++;
// }while(a<=10);
// ---------------------------------------------------------------------
// int a=1;
// do{
//         if(a%2==0){    //(a%2==1)//odd   //(a%2!=0)//odd
//         cout<<a<<"\n";
//         }
//         a++;
//  }while(a<=10);
// -------------------------------------------------------------------------
// int a=2;//even a=1//odd
// do{
//         cout<<a<<"\n";
//         a=a+2;

// }while(a<=10);
// --------------------------------------------------------------------------
// int a=1;
// do{
//         cout<<a<<"\n";
//         if(a==6){
//         break;
//         }
//         a++;
// }while(a<=10);
// -----------------------------------------------------------------------------
//  int a=10;
// do{
//         cout<<a<<"\n";
//         a--;
// }while(a>=1);
// -------------------------------------------------------------------------------
// int a=1;
// int u;
// cout<<"enter no:";
// cin>>u;
// if(u>0){
// do{
//         cout<<u*a<<"\n";
//         a++;
// }while(a<=5);
// }
// else{
//         cout<<"not allowed";
// }
// -------------------------------------------------------------------------------------
// int a=1;
// int pwd;
// cout<<"enter pwd:";
// cin>>pwd;
// do{
//         if(pwd==1024){
//         cout<<"u r welcome!";
//         break;
//         }
//         cout<<"again enter pass.";
//         cin>>pwd;
//         a++;
// }while(a<=5);
// if(a>5){
//         cout<<"ur card is blocks";
// }
// -----------------------------------------------------------------------------------------------
//                                                                   While loop(entry loop)
//  -------------------------------------------------------------------------------------------------------------------------------------------------------------------

// int a=10;
// while(a>=1)
// {
//         cout<<a<<"\n";
//         a--;
// }
        //      checked  Armstrong no or not    use  while loop
// --------------------------------------------------------------------------
// int n, temp ,rem,sum=0;
// cout<<"Enter a three digit  no:";
// cin>>n;
// temp=n;
// while(n>0){
//         rem=n%10;
//         sum=sum+rem*rem*rem;
//         n=n/10;
// }
// if(temp==sum){
//         cout<<"it is armstrong no.";

// }
// else{
//         cout<<"it is not armstrong no.";
// }
                        //    Use Conditional Statement ------------>    Nested Loop
// -----------------------------------------------------------------------------------------------------------------------
// int n,sum;
// cout<<"enter three digit no :";
// cin>>n;//153
// if(n>=100 && n<1000){
//         int b=n/100;//b=1
//         int c=n%100;//c=53
//         int d=c/10;//d=5
//         int e=c%10;//3
//         sum=b*b*b+d*d*d+e*e*e;
//         if(sum==n){
//                 cout<<n <<"Armstrong no.";
//         }
//         else{
//                 cout<<n <<"Not Armstrong no.";
//         }

// }
// else{
//         cout<<"plese enter the valid no:";
// }
                //    Checked  Palindrom No or Not
// -------------------------------------------------------------------------------------------------------------------------------

// int n,sum;
// cout<<"enter three digit no :";
// cin>>n;//234
// if(n>=100 && n<1000){
//         int a=n/100;//2
//         int b=n%100;//34
//         int c=c/10;//3
//         int d=c%10;//4
//         sum=(a)+(c*10)+(d*100);

//         if(sum==n){
//                 cout<<n <<" It Palindrom.";
//         }
//         else{
//                 cout<<n <<"Palindrom.";
//         }

// }
// else{
//         cout<<"plese enter the valid no:";
// }

                                // For Loop(entry loop)
// ------------------------------------------------------------------------------------------------------------

// int i;
// for(int i=1;i<=10;i++);
// {
//         cout<<i<<"\n";
// }
// for(1;1;1){
//         cout<<"bye";   bye print infinite
// }
// for(0,0,1){
//         cout<<"bye";   print blank
// }
// for(; ;){
//         cout<<"bye"; //  bye prit infinite
// }
// -------------------------------------------------------------------------------------------------------------

// int a;
// for(int i=0;i<=255;i++){
//         cout<<i<<"="<<char(i)<<"\t";
// }
// int n,c;
// cout<<"enter any no:";
// cin>>n;
// c=n-1;
// for(c;c>=1;c--){
// n=n*c;
// }
// cout<<n;
// int n ,c,s=0;
// cout<<"enter any no:";
// cin>>n;
// for(int c=1;c<=10;c++){
//     s=s+c;

// }
// cout<<s;
// int v;
// cout<<"enter any no:";
// cin>>v;
// for(int c=1;c<=v/2;c++){
//         if(c*c==v)
//         {
//                 cout<<c;
//                 break;
//         }
// }

// WAP Total count digit 
// -----------------------------------------------------------
//   int n,c=0;
//   cout<<"enter any no:";
//   cin>>n;
//   while(n!=0)
//   {
//    c++;
//    n=n/10;
//   }
//   cout<<"total digit="<<c;
// -------------------------------------------------------------------------
//   int n,last,first;
//   cout<<"enter any no:";
//   cin>>n;//1345
//   last=n%10;
//   while(n!=0)
//   {
//    first=n;
//    n=n/10;
//   }
//   cout<<"sum="<<first+last;
// WAP to find the facter any num
// --------------------------------------------------------------------------------
// int i=1,n;
// cout<<"enter any  no:";
// cin>>n;//10
// for(i=1;i<=n;i++){
//  if(n%i==0){
//         cout<<i<<"\t";
//  }
// WAP to reverse the digit 
// --------------------------------------------------------------------
// int n,s=0,r=0;
//   cout<<"enter any no:";
//   cin>>n;
//   while(n!=0)
//   {
//         r=n%10;
//         s=s*10+r;
//         // s=s+r;//sum of digit no
//         n=n/10;

//   }
//   cout<<s;

// LCM of 2 Nos:
// ----------------------------------------------------------------------------
//  int i=1,n1,n2,max;
// cout<<"enter any  no:";
// cin>>n1>>n2;//12 15
// max=n1>n2?n1:n2;//ternary operaator
// while(true){
//     if(max%n1==0  && max%n2==0){
//         cout<<max;
//         break;
//     }
//     max++;
// }
// HCF of 2 NOS:
// ------------------------------------------------------------------------------
//  int i=1,n1,n2,min;
// cout<<"enter any  no:";
// cin>>n1>>n2;//12 15
// min=n1<n2?n1:n2;//ternary operaator
// while(true){
//     if(n1%min==0  && n2%min==0){
//         cout<<min;
//         break;
//     }
//        min--;
// }
//                                      Pattern 
// ------------------------------------------------------------------------------------
// for(int r=1;r<=3;r++){
//     for(int c=1;c<=r;c++){
//        cout<<"*"<<"\t";
//     }
//     cout<<"\n";
// }

// for(int r=1;r<=3;r++){
//     for(int c=1;c<=r;c++){
//        cout<<r<<"\t";
//     }
//     cout<<"\n";
// }

// for(int r=97;r<=99;r++){
//     for(int c=97;c<=r;c++){
//        cout<<char(r)<<"\t";
//     }
//     cout<<"\n";
// }
// --------------------------------------------------------------------------------

// for(char r='a';r<='c';r++){
//     for(int c='a';c<=r;c++){
//        cout<<r<<"\t";
//     }
//     cout<<"\n";
// }

// -----------------------------------------------
// int n=1;
// for(int r=1;r<=3;r++){
//     for(int c=1;c<=r;c++){
//        cout<<n<<"\t";
//        n++;
//     }
//     cout<<"\n";
// }






}