// //  thread is called a task 
// // main is called a thread 


// #include<iostream>
// #include<thread>

// using namespace std;
// void even (int start , int last ){
//     for(int start ; start<= last ; start++){
//         if(start%2==0){
//             cout<<"even ="<<start<<"\t";
//         }
//     }
// }



// void odd (int start , int last ){
//     for(int start ; start<= last ; start++){
//         if(start%2!=0){
//             cout<<"odd ="<<start<<"\t";
//         }
//     }
// }
// int main()
// {
// thread t1(even,1,1000);
// cout<<"\n*********************************************************\n";
// thread t2(odd,1,1000);
// t1.join();
// t2.join();
// cout<<"\n byee byee \n";

// return 0 ;
// }
