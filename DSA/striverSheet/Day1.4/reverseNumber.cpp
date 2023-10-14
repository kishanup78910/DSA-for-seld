// problem from cn
 //   ----------https://www.codingninjas.com/studio/problems/reverse-bits_2181102?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1&count=25&page=1&search=&sort_entity=order&sort_order=ASC


#include<bits/stdc++.h>
 long reverseBits(long n) {
    // Write your code here.

    int arr[32]={0};
    int bit;
    for(int i=0;i<32;i++){
        bit=n%2;
        arr[i]=bit;
        n=n/2;
    }

    long long int ans=0;
    int cnt=0;
    for(int i=31;i>=0;i--){
        ans =ans +(arr[i]*pow(2,cnt));
        cnt++;
    }
    return ans;
}