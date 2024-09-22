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
// void subset(int *nums,int n,int idx,vector<int>&v){
//     if(idx==n)return;
//     v.push_back(nums[idx]);
//     subset(nums,n,idx+1,v);
//     subset(nums,n,idx+1,v);

// }
// int main(){
//     int n;
//     cout<<"Enter the size of array ";
//     cin>>n;
//     int nums[n];
//     for(int i=0;i<n;i++)cin>>nums[i];
//     vector<int>v;
//     subset(nums,n,0,v);
//     for(int ele: v)cout<<ele<<" ";
//     return 0;
// }

// ----------------------------------------------

// -----leCture_recursion-3

// #include<bits/stdc++.h>
// using namespace std;
// void hanoi(int n,char s,char h,char d){
//     if(n==0)return;
//     hanoi(n-1,s,d,h);
//     cout<<s<<"->"<<d<<endl;
//     hanoi(n-1,h,s,d);
// }
// int main(){
//     int n;
//     cin>>n;
//     hanoi(n,'A','B','C');
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// void print(vector<int>&v){
//     if(v.size()==0)return;
//     int x=v[v.size()-1];
//     v.pop_back();
//     print(v);
//     cout<<x<<" ";
// }
// int main(){
//     int nums[]={1,2,2,3,4,5,6,7,8,6,5,4};
//     int n=sizeof(nums)/4;
//     vector<int>v(nums,nums+n);
//     print(v);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int mx(vector<int>&v){
//     if(v.size()==0)return INT_MIN;
//     int x=v[v.size()-1];
//     v.pop_back();
//     return max(x,mx(v));
// }
// int maxm(int nums[],int m){
//     if(m==-1)return INT_MIN;
//     return max(nums[m],maxm(nums,m-1));
// }
// int main(){
//     int nums[]={1,2,2,3,4,5,6,7,8,6,5,4};
//     int n=sizeof(nums)/4;
//     vector<int>v(nums,nums+n);
//     // cout<<maxm(nums,n-1);
//     cout<<mx(v);
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// string print(string str,string s){
//     if(str=="")return s;
//     if(str[0]=='a')return print(str.substr(1),s);
//     return print(str.substr(1),s+str[0]);
// }
// int main(){
//     string str="saifakramkhanfromandaman";
//     cout<<print(str,"");
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// vector<string> print(string str,string s,vector<string>&v){
//     if(str==""){
//         v.push_back(s);
//         return v;
//     }
//     print(str.substr(1),s,v);
//     print(str.substr(1),s+str[0],v);
//     return v;
// }
// int main(){
//     string str="abcd";
//     vector<string>v;
//     vector<string>ans=print(str,"",v);
//     for(string ele:ans)cout<<ele<<" ";
//     return 0;
// }
// #include<bits\stdc++.h>
// using namespace std;
// vector<string> print(string str,string s,int idx,vector<string>&v){
//     if(idx==str.size()){
//         v.push_back(s);
//         return v;
//     }
//     print(str,s,idx+1,v);
//     print(str,s+str[idx],idx+1,v);
//     return v;
// }
// int main(){
//     string str="abcd";
//     vector<string>v;
//     vector<string>ans=print(str,"",0,v);
//     for(string ele:ans)cout<<ele<<" ";
//     return 0;
// }

// #include<bits\stdc++.h>
// using namespace std;
// vector<string> print(string str,string s,vector<string>&v){
//     if(str==""){
//         v.push_back(s);
//         return v;
//     }
//     char ch=str[str.size()-1];
//     str.pop_back();
//     print(str,s,v);
//     print(str,s+ch,v);
//     return v;
// }
// int main(){
//     string str="abcd";
//     vector<string>v;
//     vector<string>ans=print(str,"",v);
//     for(string ele:ans)cout<<ele<<" ";
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// // vector<vector<int>>ans;
// void print(int *a,int m,int idx,vector<int>v){
//     if(idx==m){
//         for(int ele:v)cout<<ele;
//         cout<<endl;
//         return;
//     }
//     print(a,m,idx+1,v);
//     v.push_back(a[idx]);
//     print(a,m,idx+1,v);
// }
// int main(){
//     int nums[]={1,2,3,4};
//     int n=sizeof(nums)/4;
//     // vector<int>v;
//     print(nums,n,0,{});
//     // for(int i=0;i<ans.size();i++){
//     //     for(int j=0;j<ans[0].size();j++){
//     //         cout<<ans[i][j];
//     //     }
//     //     cout<<endl;
//     // }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// vector<vector<int>>ans;
// void print(int *a,int m,int idx,vector<int>v){
//     if(idx==m){
//         ans.push_back(v);
//         return;
//     }
//     print(a,m,idx+1,v);
//     v.push_back(a[idx]);
//     print(a,m,idx+1,v);
// }
// int main(){
//     int nums[]={1,2,3,4};
//     int n=sizeof(nums)/4;
//     print(nums,n,0,{});
//     for(int i=0;i<ans.size();i++){
//         for(int j=0;j<ans[i].size();j++){
//             cout<<ans[i][j];
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// #include<bits\stdc++.h>
// using namespace std;
// vector<vector<int>>ans;
// void print(vector<int>a,vector<int>v){
//     if(a.size()==0){
//         ans.push_back(v);
//         return;
//     }
//     int x=a[a.size()-1];
//     a.pop_back();
//     print(a,v);
//     v.push_back(x);
//     print(a,v);
//     // v.pop_back();
// }
// int main(){
//     int nums[]={1,2,3,4};
//     int n=sizeof(nums)/4;
//     vector<int>arr(nums,nums+n);
//     // vector<int>v;
//     print(arr,{});
    // for(int i=0;i<ans.size();i++){
    //     for(int j=0;j<ans[i].size();j++){
    //         cout<<ans[i][j];
    //     }
    //     cout<<endl;
    // }
// }
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>ans;
void print(vector<int>a,vector<int>&v,int idx){
    ans.push_back(v);
    for(int i=idx;i>=0;i--){
        if(i!=idx && a[i]==a[i+1])continue;
        v.push_back(a[i]);
        a.pop_back();
        print(a,v,i-1);
        v.pop_back();
    }

}
int main(){
    int nums[]={1,2,2};
    int n=sizeof(nums)/4;
    vector<int>a(nums,nums+n);
    sort(a.begin(),a.end());
    vector<int>v;
    print(a,v,n-1);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j];
        }
        cout<<endl;
    }
    return 0;
}