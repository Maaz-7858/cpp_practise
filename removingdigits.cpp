// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int>f(n+1,0);
//     int m;
//     cin>>m;
//     vector<int>l(n+1,0);
//     vector<int>r(n+1,0);
//     for(int i=0;i<m;i++){
//         int L,R;
//         cin>>L>>R;
//         l[L]++;
//         r[R]++;
//     }
//     f[1]=l[1];
//     for(int i=2;i<=n;i++)f[i]=l[i]+f[i-1]-r[i-1];

//     vector<int>c(10000005,0);
    // for(int i=0;i<=n;i++){
    //     int coins=f[i];
    //     c[coins]++;
    // }
    // for(int i=c.size()-2;i>=0;i--){
    //     c[i]=c[i+1]+c[i];
    // }
    // int q;
    // cin>>q;
    // while(q--){
    //     int num;
    //     cin>>num;
    //     cout<<c[num]<<endl;
    // }

//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int>f(n+10,0);
//     int m;
//     cin>>m;
//     for(int i=0;i<m;i++){
//         int L,R;
//         cin>>L>>R;
//         f[L]++;
//         f[R+1]--;
//     }
//     for(int i=1;i<=f.size();i++){
//         f[i]=f[i]+f[i-1];
//     }
//     vector<int>c(10000005,0);
//     for(int i=0;i<=n;i++){
//         int coins=f[i];
//         c[coins]++;
//     }
//     for(int i=c.size()-2;i>=0;i--){
//         c[i]=c[i+1]+c[i];
//     }
//     int q;
//     cin>>q;
//     while(q--){
//         int num;
//         cin>>num;
//         cout<<c[num]<<endl;
//     }


//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// vector<vector<int>>dp;
// int f(int i,int j,vector<int>&nums){
//     if(i==j or i+1==j)return 0;
//     if(dp[i][j]!=-1)return dp[i][j];
//     int ans=INT_MAX;
//     for(int k=i+1;k<j;k++){
//         ans = min(ans,f(i,k,nums)+f(k,j,nums)+nums[i]*nums[j]*nums[k]);
//     }
//     return dp[i][j]=ans;
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int>nums(n);
//     dp.clear();
//     dp.resize(1005,vector<int>(1000,0));
//     for(int i=0;i<n;i++)cin>>nums[i];
//     for(int len=3;len<n;len++){
//         for(int i=0;i+len-1<n;i++){
//             int j=i+len-1;
//             dp[i][j]=INT_MAX;
//             for(int k=i+1;k<j;k++)
//             dp[i][j] = min(dp[i][j],dp[i][j]+dp[i][k]+nums[i]*nums[j]*nums[k]);
            
//         }
//     }
//     cout<<dp[n-1][n-1];

//     return 0;
// }
// #include<bits/stdc++.h>
// #include<cstring>
// #define ll long long int
// using namespace std;
// ll dp[105][105];
// ll g(vector<int>&colors,int i,int j){
//     ll result=0;
//     for(int m=i;m<=j;m++){
//         result=(result%100+colors[m]%100)%100;
//     }
//     return result;
// }
// ll f(vector<int>&colors,int i,int j){
//     if(i==j)return dp[i][j]=0;
//     if(dp[i][j]!=-1)return dp[i][j];
//     ll result=INT_MAX;
//     for(int k=i+1;k<j;k++){
//         result=min(result,f(colors,i,k)+f(colors,k+1,j)+g(colors,i,k)*g(colors,k+1,j));
//     }
//     return dp[i][j]=result;
// }
// int main(){
    // int n;
    // while(cin>>n){
    //     vector<int>colors;
    //     for(int i=0;i<n;i++){
    //         int x;
    //         cin>>x;
    //         colors.push_back(x);
    //     }
    //     memset(dp,-1,sizeof dp);
    //     cout<<f(colors,0,colors.size()-1);
    //     colors.clear();
    // }
//     return 0;

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll g(vector<int>&colors,int i,int j){
    ll result=0;
    for(int m=i;m<=j;m++){
        result=(result%100+colors[m]%100)%100;
    }
    return result;
}
ll dp[105][105];
ll fbu(vector<int>&colors){
    memset(dp,0,sizeof dp);
    int n=colors.size();
    for(int len=2;len<=n;len++){
        for(int i=0;i<=n-len;i++){
            int j=i+len-1;
            ll result=INT_MAX;
            for(int k=i+1;k<j;k++){
                result=min(result,dp[i][k]+dp[k+1][j]+g(colors,i,k)*g(colors,k+1,j));
            }
            dp[i][j]=result;
        }
    }
    return dp[0][n-1];
}
int main(){
    int n;
    while(cin>>n){
        vector<int>colors;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            colors.push_back(x);
        }
        //memset(dp,-1,sizeof dp);
        cout<<fbu(colors);
        colors.clear();
    }
    return 0;
}