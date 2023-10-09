#include<bits/stdc++.h>
using namespace std;


int fibb(int n){
    if(n<=1){
        return n;

    }
   return fibb(n-1)+fibb(n-2);

}

int main()
{     
//       int n, first=0, second=1, next;

//         cin>>n;

//         if(n==1){

//                 next=1;

//         }

//         for(int i=1; i<n; i++){

//                 next=first+second;

//                 first=second;

//                 second=next;

//         }

//         cout<<next;
           





///////-------------------------------------First method
        //    int n;
        //    cin>>n;
        //    int first=0;
        //    int second=1;
        //    int next=0;

        //    if(n==1){
        //        next=1;
        //    }else {
        //        for(int i=1;i<n;i++)
        //        {
        //            next=first+second;
        //            first=second;
        //            second=next;
        //        }
        //    }

        //   cout<<next<<endl;




 /////////////////   using recursion
     

     int n;
     cin>>n;
     cout<<fibb(n);

}