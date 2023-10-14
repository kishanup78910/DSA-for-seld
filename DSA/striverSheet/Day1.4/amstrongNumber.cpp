
#include<bits/stdc++.h>
bool checkArmstrong(int n){
	//Write your code here
	 int ans=0,rem=0,num=n;

    int x=log10(n)+1;

    int i=x;

    while(i--)

    {

        rem=num%10;

        num=num/10;

        ans=ans+pow(rem,x);

    }

    if(ans==n)

    {

        return true;

    }

    return false;
}
