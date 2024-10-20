#include <iostream>
using namespace std;
bool isPrime(int num);
long long primorial(int n);


int main() {
    int n;
    cout << "Enter the number of primes for the primorial: ";
    cin >> n;

    long long result = primorial(n);
    cout << "The primorial of the first " << n << " primes is: " << result << endl;

    return 0;
}


bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return false;
    }
    return true;
}


long long primorial(int n) {
    int count = 0;      
    long long product = 1;
    int number = 2;    
    while (count < n) {
        if (isPrime(number)) {
            product *= number;  
            count++;            
        }
        number++;            
    }
    
    return product;
}

