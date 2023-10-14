

int calcGCD(int a, int b){
    // Write your code here.

   
    while (a != 0) {
        int temp = a;
        a = b % a;
        b = temp;
    }
    return b;

}