    //Find largest element in an array 
    //Finding second largest element
    //Finding second smallest element
    //find smallest element

// #include<bits/stdc++.h>
// using namespace std;

// int largestElement(vector<int> &arr , int n){
//     int largest=arr[0];
//     for(int i=0;i<n;i++){
//         if(arr[i]>largest){
//             largest=arr[i];
//         }
//     }
//     return largest;
// }

// int secondLargest(vector<int> &arr, int n ){
//     int largest=arr[0];
//     int slargest=-1;
//     for(int i=0;i<n;i++){
//         if(arr[i]> largest){
//             slargest=largest;
//             largest=arr[i];
//         }
//         else if(arr[i]<largest && arr[i] > slargest){
//             slargest=arr[i];
//         }
//     }
//     return slargest;
// }

// int smallestElement(vector<int> &arr, int n){
//     int smallest=arr[0];
//     for(int i=0;i<n;i++){
//         if(arr[i]<smallest){
//             smallest=arr[i];
//         }
//     }
//     return smallest;
// }
// int secondSmallest(vector<int>&arr, int n ){
//     int smallest=arr[0];
//     int ssmallest=INT_MAX;
//     for(int i=0;i<n;i++){
//         if(arr[i]<smallest){
//             ssmallest=smallest;
//             smallest=arr[i];
//         }
//         else if(arr[i]!=smallest && arr[i] < ssmallest){
//             ssmallest=arr[i];
//         }
//     }
//     return ssmallest;
// }



// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<largestElement(arr, n)<<endl;
//     cout<<secondLargest(arr, n)<<endl;

//     cout<<smallestElement(arr, n)<<endl;
//     cout<<secondSmallest(arr, n)<<endl;


// }

               // Left Rotate the array by d places ...

#include<bits/stdc++.h>
using namespace std;

int RemoveDuplicate(int arr[], int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
}
//left rotate the array by d;

// void leftRotate(int arr[], int n , int d){
//     d=d%n;
//     int temp[d];
//     for(int i=0;i<d;i++){
//         temp[i]=arr[i];
//     }
//     for(int i=d;i<n;i++){
//         arr[i-d]=arr[i];
//     }
//     for(int i=n-d;i<n;i++){
//         arr[i]=temp[i-(n-d)];
//     }
// }

    //there is an optimal solution ...second method

// void leftRotate(int arr[], int n, int d){
//     reverse(arr, arr+d);
//     reverse(arr+d, arr+n);
//     reverse(arr, arr+n); //reverse entire array...
// }

// void RightRotate(int arr[], int n , int d){
//     d=d%n;
//     reverse(arr, arr+n-d);
//     reverse(arr+n-d, arr+n);
//     reverse(arr, arr+n);
// }

// int main(){
//     int n ;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int d;
//     cin>>d;
//     //leftRotate(arr, n,d);
//     RightRotate(arr, n, d);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }

// }

            //place all zero at last in an array

#include<bits/stdc++.h>
using namespace std;

int ZeroAtEnd(int arr[], int n ){
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[j++]=arr[i];
        }
    }
    while(j<n){
        arr[j++]=0;
    }

}

// union of two arrays..
//logic..
/*
  int n1=a.size();
        int n2=b.size();

        set<int> st;
        for(int i=0;i<n1;i++){
            st.insert(a[i]);
        }
        for(int i=0;i<n2;i++){
            st.insert(b[i]);
        }
        vector<int> temp;
        for(auto it: st){
            temp.push_back(it);
        }
        return temp;
*/


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ZeroAtEnd(arr, n);
    for(int num: arr){
        cout<<num<<" ";
    }

}