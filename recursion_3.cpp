// ---------------------------------------------------
// #include<bits/stdc++.h>
// using namespace std;
// int minimum_ele_of_nums(int *nums,int m){
//     if(m==-1)return INT_MAX;
//     return min(nums[m],minimum_ele_of_nums(nums,m-1));
// }
// int main(){
//     int n;
//     cin>>n;
//     int nums[n];
//     for(int i=0;i<n;i++){
//         cin>>nums[i];
//     }
//     cout<<minimum_ele_of_nums(nums,n-1);
//     return 0;
// }

// --------------------------------------------------

// #include<bits/stdc++.h>
// using namespace std;
// int sum_of_ele_of_nums(int *nums,int n){
//     if(n<0)return 0;
//     return nums[n]+sum_of_ele_of_nums(nums,n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     int nums[n];
//     for(int i=0;i<n;i++){
//         cin>>nums[i];
//     }
//     cout<<sum_of_ele_of_nums(nums,n-1);
//     return 0;
// }

// -------------------------------------------------

// #include<bits/stdc++.h>
// using namespace std;
// int index_of_ele(int *nums,int m,int ele){
//     if(m<0)return -1;
//     if(nums[m]==ele)return m;
//     return index_of_ele(nums,m-1,ele);
// }
// int main(){
//     int n;
//     cin>>n;
//     int nums[n];
//     for(int i=0;i<n;i++){
//         cin>>nums[i];
//     }
//     int ele;
//     cout<<"Enter the target element ";
//     cin>>ele;
//     cout<<index_of_ele(nums,n-1,ele);
//     return 0;
// }

// -----------------------------------------------------

// #include<bits/stdc++.h>
// using namespace std;
// void print_rev_of_nums(int *nums,int n){
//     if(n<0)return ;
//     cout<<n[nums]<<" ";
//     print_rev_of_nums(nums,n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     int nums[n];
//     for(int i=0;i<n;i++){
//         cin>>nums[i];
//     }
//     print_rev_of_nums(nums,n-1);
//     return 0;
// }

// ---------------------------------------------

// #include<bits/stdc++.h>
// using namespace std;
// vector<vector<int>>ans;
// void print(vector<int>a,vector<int>&v,int idx){
//     ans.push_back(v);
//     for(int i=idx;i>=0;i--){
//         if(i!=idx && a[i]==a[i+1])continue;
//         v.push_back(a[i]);
//         a.pop_back();
//         print(a,v,i-1);
//         v.pop_back();
//     }

// }
// int main(){
//     int nums[]={1,2,2};
//     int n=sizeof(nums)/4;
//     vector<int>a(nums,nums+n);
//     sort(a.begin(),a.end());
//     vector<int>v;
//     print(a,v,n-1);
//     for(int i=0;i<ans.size();i++){
//         for(int j=0;j<ans[i].size();j++){
//             cout<<ans[i][j];
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// -----------------------------------------------------

           