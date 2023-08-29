#include <iostream>

class Fibonacci{
    public:
    int fibo(int n){
        if (n==1){
            return a;
        }
        else if (n==2){
            return b;
        }
        else {
            for (int i=n-2; i>0; i--){
                c = a+b;
                a = b;
                b = c;
            }
            return c;
        }
    }

    public:
    int a {0};
    int b {1};
    int c {};
};

int main(){
    Fibonacci f;
    
    int n {};
    std::cout << "Enter nth value of series: " << std::endl;
    std::cin >> n;

    int n_value = f.fibo(n);
    std::cout << "The " << n << "th value of series is: " << n_value << std::endl;
    
    return 0;
}