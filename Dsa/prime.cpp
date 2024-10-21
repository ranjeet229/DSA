//number is PRIME OR Not ..................
#include<iostream>
using namespace std;

bool isPrime(int n){
    for(int i=2;i<n;i++){
        //divide hogayah..not a prime no .
        if(n%i==0){
            return 0;
        }
    }
    //otherwise
    return 1;
}

int main(){
    int n;
    cin >>  n;

    if(isPrime(n)){
        cout<<"is a prime no "<< endl;
    }
    else{
        cout<<"is not a prime no "<< endl;
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
