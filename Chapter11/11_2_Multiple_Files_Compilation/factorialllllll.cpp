// Function def
int fact (int n){
    int factorial {1};

    while (n>0){
        factorial = factorial * n;
        n--;
    }
    return factorial;
}


// Func def
int increase_mul(int a, int b){
    int mul = 1;
    mul = (a++) * (++b); // a=21, b=8 --> a++=21 * ++b=9 --> 21*9 = 189
    return mul;
}