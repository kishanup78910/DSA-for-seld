#include<bits/stdc++.h>
using namespace std;


double areaSwitchCase(int ch, vector<double> a) {
	// Write your code here
	double res;
	switch(ch){
		case 1:
		    res=M_PI * pow(a[0],2);
			break;
		case 2:
		    res = a[0]*a[1];
			break;
	}

	return res;
	
}
