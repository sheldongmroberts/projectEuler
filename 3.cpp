#include <iostream>

bool isPrime(int64_t num) {
    bool isPrime = true;
    
    // loop to check if n is prime
    for (int64_t i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }
    
    return isPrime;
}

int64_t findHighestFactor(int64_t n) {
    int64_t i;
    for (i = 2; i < n; i++) {
        // if i is a factor of n
        if (n % i == 0) {
            // check if i is prime
            if (isPrime(n / i)) {
                return n / i;
            }
        }
    }
    
    return n / i;
}

void func() {
    
    int64_t num = 600851475143;
    
    printf("highestPrimeFactor: %d\n", findHighestFactor(num));
}


int main()
{
    func();
    
    return 0;
}
