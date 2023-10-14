int countDigits(int n){
	// Write your code here.	

	int temp = n, count =0;

    while(temp != 0){

        //find each digit

        int digit = temp % 10;

        temp /= 10;

 

        //check if digit > 0 and can divide n

        if(digit > 0  &&  n % digit == 0)

        count++;

    }

    return count;
}