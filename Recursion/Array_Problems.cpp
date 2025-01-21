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

// #include<bits/stdc++.h>
// using namespace std;

// int RemoveDuplicate(int arr[], int n){
//     int i=0;
//     for(int j=1;j<n;j++){
//         if(arr[i]!=arr[j]){
//             arr[i+1]=arr[j];
//             i++;
//         }
//     }
//     return i+1;
// }

//left rotate the array by d;

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

// #include<bits/stdc++.h>
// using namespace std;

// int ZeroAtEnd(int arr[], int n ){
//     int j=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]!=0){
//             arr[j++]=arr[i];
//         }
//     }
//     while(j<n){
//         arr[j++]=0;
//     }

// }

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


// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     ZeroAtEnd(arr, n);
//     for(int num: arr){
//         cout<<num<<" ";
//     }

// }

            //Finding missing number in an array ...


// #include<bits/stdc++.h>
// using namespace std;

// int missingNumber(int arr[], int N) {
//     // Write your code here.
//     int sum=N*(N+1)/2;
//     int s2=0;
//     for(int i=0;i<N-1;i++){
//         s2+=arr[i];
//     }
//     return sum-s2;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<< missingNumber(arr, n);

// }

            //Finding maximum conscutive ones...

// #include<bits/stdc++.h>
// using namespace std;

// int maximumConscutive(int arr[], int n){
//     int maxi=0;
//     int cnt=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==1){
//             cnt++;
//             maxi=max(maxi,cnt);
//         }else{
//             cnt=0;
//         }
//     }
//     return maxi;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<< maximumConscutive(arr, n );
// }

        //question find longestsubArraySum in

// #include<bits/stdc++.h>
// using namespace std;

// int longestSubarrayWithSumk(int arr[], int n,int k){
//     int left=0, right=0;
//     int sum=arr[0];
//     int maxLength=0;

//     while(right<n){
//         while(left<=right && sum>k){
//             sum-=arr[left];
//             left++;
//         }
//         if(sum==k){
//             maxLength=max(maxLength, right-left+1);
//         }
//         right++;
//         if(right<n){
//             sum+=arr[right];
//         }
//     }
//     return maxLength;
// }

            //ques 15:- 2 SUM ARRAY...

// int TwoSUM_ARRAY(int arr[],int n, int target){
//     int left=0, right=n-1;
//     sort(arr, arr+n);
//     while(left<right){
//         int sum=arr[left]+arr[right];
//         if(sum==target){
//             return 1;
//         }
//         else if(sum<target){
//             left++;
//         }else{
//             right--;
//         }
//     }
//     return 0;
// }
// int main(){
//     int n, k;
//     cin >> n >> k;

//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     if (TwoSUM_ARRAY(arr, n, k)) {
//         cout << "Yes, there exists a pair with the given target sum." << endl;
//     } else {
//         cout << "No, there does not exist a pair with the given target sum." << endl;
//     }

// }

//ques-16 : sort an array of o's 1's and 2's
// Dutch national flag algorithm

// #include<bits/stdc++.h>
// using namespace std;

// void SortArray(int arr[], int n ){
//     int low=0, mid=0, high=n-1;
//     while(mid<=high){
//         if(arr[mid]==0){
//             swap(arr[low], arr[mid]);
//             low++;
//             mid++;
//         }
//         else if(arr[mid]==1){
//             mid++;
//         }
//         else{
//             swap(arr[mid], arr[high]);
//             high--;
//         }
//     }
// }

// int main(){
//     int n ;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     SortArray(arr, n);
//     for(int num: arr){
//         cout<<num<<" ";
//     }
// }

//Ques 17:- Majority Element (>n/2 times)

// #include<bits/stdc++.h>
// using namespace std;

// int MajorityElement(int arr[], int n){
//     //using hashing

//     // map<int , int> mpp;
//     // for(int i=0;i<n;i++){
//     //     mpp[arr[i]]++;
//     // }
//     // for(auto it : mpp){
//     //     if(it.second> (n/2)){
//     //         return it.first;
//     //     }
//     // }
//     // return -1;

//     //using Moore's voting algorithm...
//     int cnt=0;
//     int el=0;
//     for(int i=0;i<n;i++){
//         if(cnt==0){
//             cnt=1;
//             el=arr[i];
//         }
//         else if(arr[i]==el){
//             cnt++;
//         }else{
//             cnt--;
//         }
//     }
//     int cnt1=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==el){
//             cnt1++;
//         }
//     }
//     if(cnt1>n/2){
//         return el;
//     }
//     return -1;
// }

// int main(){
//     int n ;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<MajorityElement(arr, n)<<endl;
// }


//Ques -18:  Kadane's Algorithm, maximum subarray sum

// #include<bits/stdc++.h>
// using namespace std;

// int maximumSubarraySum(int arr[], int n ){
//     int sum=0, maxi=0;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//         if(sum<0){
//             sum=0;
//         }
//         maxi=max(maxi, sum);
//     }
//     return maxi;
// }

// int main(){
//     int n ;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<maximumSubarraySum(arr,  n )<<endl;
// }

//ques 19: stock BUY and SELL find maximumProfit
// #include<bits/stdc++.h>
// using namespace std;

// int MaximumProfit(int arr[], int n){
//     int maxiProfit=0, mini=arr[0];
//     for(int i=1;i<n;i++){
//         int cost=arr[i]-mini;
//         maxiProfit=max(maxiProfit, cost);
//         mini=min(mini, arr[i]);
//     }
//     return maxiProfit;
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<MaximumProfit(arr, n )<<endl;
// }

//ques 20:-Rearrange the array in alternation positive and negative items..
// #include <bits/stdc++.h>
// using namespace std;

// vector<int> PositiveNegative(int arr[], int n) {
//     vector<int> ans(n, 0);
//     int posIndex = 0, negIndex = 1;

//     for (int i = 0; i < n; i++) {
//         if (arr[i] < 0 && negIndex < n) {
//             ans[negIndex] = arr[i];
//             negIndex += 2;
//         } else if (arr[i] >= 0 && posIndex < n) {
//             ans[posIndex] = arr[i];
//             posIndex += 2;
//         }
//     }
//     return ans;
// }

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     vector<int> result = PositiveNegative(arr, n);

//     for (int i = 0; i < result.size(); i++) {
//         cout << result[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }


//ques 21:- Next permutation...


// #include<bits/stdc++.h>
// using namespace std;

// void NextPermuation(int arr[], int n){
//     next_permutation(arr, arr+n);
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     NextPermuation(arr, n);
//     for(int num: arr){
//         cout<<num<<" ";
//     }
// }

//ques 22:-Ladders in an Array problems...

// #include<bits/stdc++.h>
// using namespace std;


// int main(){
//     pair<int, int> p={1,3};
//     cout<<p.first<<endl;
//     cout<<p.second<<endl;
//     int n ;
//     cin>>n;
//     int arr[n];

// }