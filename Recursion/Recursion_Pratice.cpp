

//Reverse an array

// #include<bits/stdc++.h>
// using namespace std;

// void reverse(int arr[], int n){
//     int i=0, j=n-1;
//     while(i<j){
//         swap(arr[i],arr[j]);
//         i++;
//         j--;
//     }
// }

//using recursion ....>>

// void reverse(int arr[], int l, int r){
//     if(l>=r){
//         return ;
//     }
//     swap(arr[l], arr[r]);
//     reverse(arr, l+1, r-1);
// }
// or we can use single pointer also ...>>

// void reverse(int i, int arr[], int n){
//     if(i>=n/2) return ;
//     swap(arr[i], arr[n-i-1]);
//     reverse(i+1,arr, n);
// }

// //check a given string is palindrome or not .....>>>>>

// bool str(int i, string &s){
//     int n=s.size();
//     if(i>=n/2) return true;
//     if(s[i] != s[n-i-1]){
//         return false;
//     }
//     return str(i+1, s);
// }

// int main(){
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // reverse(0, arr, n);
    // for(int num : arr){
    //     cout<<num<<" ";
    // } 
//     string s;
//     cin>>s;
//     cout<<str(0,s);

// }

///// find fibonacci number using recursion .......>>>>>>>>>>>>>>>>>>

// #include<bits/stdc++.h>
// using namespace std;

// int fib(int n){
//     if(n<=1) return n;
//     return fib(n-1)+fib(n-2);
// }

// //finding factorial ......>>>>

// int fact(int n){
//     if(n==0 || n==1) return 1;
//     return n*fact(n-1);
// }
// int main(){
//     int n;
//     cin>>n;

//     //cout<<fib(n);
//     cout<<fact(n);
// }

//Ques 2:  Print all the subsequences.......>>>>

// #include<bits/stdc++.h>
// using namespace std;

// void subsequence(int ind, vector<int> &ds, int arr[], int n){
//     if(ind==n){
//         for(auto it : ds){
//             cout<<it<<" ";
//         }
//         if(ds.size() == 0){
//             cout << "{}";
//         }
//         cout<<endl;
//         return ;
//     }
//     // take or pick the particular index into the subsequence.....>>>
//     ds.push_back(arr[ind]);
//     subsequence(ind+1, ds, arr, n);
//     ds.pop_back(); // remove element

//     //not pick , or not take condition , this element is not added to your subsequence
//     subsequence(ind+1, ds, arr, n);
// }

// int main(){
//     int arr[]={3,1};
//     int n=2;
//     vector<int> ds;
//     subsequence(0,ds,arr,n);
// }

// Ques 3: printing subsequences whose sum is k......>>>>>>

#include<bits/stdc++.h>
using namespace std;

bool subsequence(int ind, vector<int>&ds, int s, int sum , int arr[], int n){
 if(ind==n){
    // condition satisfaction
        if(s==sum){
            for(auto it: ds){
                cout << it<<" ";
            }
            cout<<endl;
            return true;
        }
        //condition not satisfied....>>>>
        else{
            return false;
        }
    }
    ds.push_back(arr[ind]);
    s+=arr[ind];

    if(subsequence(ind+1, ds, s, sum , arr, n)==true){
        return true;
    }

    s-=arr[ind];
    ds.pop_back();

    //not pick
    if(subsequence(ind+1, ds, s, sum, arr,  n)==true) return true;

    return false;
}

//Ques 4: count the subsequence with sum =k

int Countsubsequence(int ind, int s, int sum , int arr[], int n){
 if(ind==n){
    // condition satisfaction
        if(s==sum){
            return 1;
        }
        //condition not satisfied....>>>>
        else{
            return 0;
        }
    }

    s+=arr[ind];

    int l=Countsubsequence(ind+1, s, sum , arr, n);

    s-=arr[ind];
    //not pick
    int r =Countsubsequence(ind+1, s, sum, arr,  n);

    return l+r;
}

//Ques 5: Combination Sum.................>>>>>>
void findCombination(int ind, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int>&ds){
    if(ind == arr.size()){
        if(target==0){
            ans.push_back(ds);
        }
        return ;
    }
    //pick up the element....>>>
    if(arr[ind]<=target){
        ds.push_back(arr[ind]);
        findCombination(ind, target - arr[ind], arr, ans, ds);
        ds.pop_back();
    }
    findCombination(ind + 1, target, arr, ans, ds);
}
vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> ans;
    vector<int> ds;
    findCombination(0, target, candidates, ans , ds);
    return ans;
}


//Ques 6: Subset Sum...........>>>

void fun(int ind, int sum, vector<int>&arr, int N, vector<int> subsum){
    if(ind==N){
        subsum.push_back(sum);
        return ;
    }
    //pick
    fun(ind+1, sum+arr[ind], arr, N, subsum);
    //not pick
    fun(ind+1, sum, arr, N, subsum);
}
 vector<int> sunsetSums(vector<int> & arr){
    vector<int> subsum;
    int N=arr.size();
    fun(0,0,arr, N, subsum);
    sort(subsum.begin(), subsum.end());
    return subsum;
 }

//ques 7: Print all permutation of a string / Array........>>>>>

void recurPermute(vector<int> &ds, vector<int> &nums, vector<vector<int>> &ans, int freq[]){
    if(ds.size()==nums.size()){
        ans.push_back(ds);
        return ;
    }
    for(int i=0;i<nums.size();i++){
        if(!freq[i]){
            ds.push_back(nums[i]);
            freq[i]=1;
            recurPermute(ds, nums, ans , freq);
            freq[i]=0;
            ds.pop_back();
        }
    }
}
vector<vector<int>> Permute(vector<int>& nums){
    vector<vector<int>> ans;
    vector<int> ds;
    int freq[nums.size()]={0};
    for(int i=0;i<nums.size();i++){
        freq[i]=0;
    }
    recurPermute(ds, nums, ans, freq);
    return ans;
}
int main(){
    int arr[]={1,2,1};
    int n=3;
    int sum=2;
    cout<<Countsubsequence(0, 0, sum, arr, n)<<endl;
    return 0;
}