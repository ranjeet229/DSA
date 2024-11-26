//number is PRIME OR Not ..................
#include <iostream>
#include <cmath> // For sqrt()
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) { 
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPrime(n)) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}


// #include<iostream>
// using namespace std;
// // 1 -> even
// // 0 -> odd

// bool isEven(int a ){
//     //odd a%2!=0; ORR a&1 it also give odd
//     if(a&1){ // this is odd number
//         return 0;
//     }
//     else{ //even
//         return 1;
//     }

// }

// int main(){
//     int n;
//     cin>> n;
//     if(isEven(n)){
//         cout<< "Number is even "<<endl;
//     }
//     else{
//         cout<<"Number is odd "<<endl;
//     }

// }
