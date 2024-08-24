// #include<bits/stdc++.h>
// using namespace std;
// float max(float a,float b){
//     if(a>b)return a;
//     else return b;
// }
// float min(float a,float b){
//     if(a<b)return a;
//     else return b;
// }
// int main(){
//     int nums[]={5,3,10,3};
//     int n=sizeof(nums)/4;
//     float kmin=(float)(INT_MIN);
//     float kmax=(float)(INT_MAX);
//     bool flag=true;
//     for(int i=0;i<n-1;i++){
//         if(nums[i]>=nums[i+1]){
//             kmin= max (kmin,(nums[i]+ nums[i+1])/2.0);
//         }
//         else {
//             kmax=min(kmax,(nums[i]+nums[i+1])/2.0);
//         }
//         if(kmin>kmax){
//             flag=false;
//             break;
//         }
//     }
//     if(flag==false)cout<< -1;
//     else if(kmin==kmax){
//         if(kmin-(int)kmin==0)cout<<"There is only one value of k:"<<kmin;
//         else cout<<-1;
//     }
//     else {
//         if(kmin-(int)kmin>0)kmin=(int)kmin+1;
//         cout<<"Range of k is ["<<kmin<<","<<(int)kmax<<"]";

//     }
// // }
// #include<bits\stdc++.h>
// using namespace std;
// int main(){
//     string  nums[]={"7868190130M7522","5303914400F9211","9273338290F4010"};
//     int m=sizeof(nums)/sizeof(nums[0]);
//     vector<string>details(nums,nums+m);
//     int n=details.size();
//     int count=0;
//     for(int i=0;i<n;i++){
//         string str="";
//         string s=details[i];
//         str.push_back(s[11]);
//         str.push_back(s[12]);
//         cout<<str<<endl;
//         if(stoi(str)>60)count++;
//     }
//     cout<<count;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int nums[][3]={1,2,3,4,5,6,7,8,9};
//     int m=3;
//     int n=3;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<nums[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             swap(nums[i][j],nums[j][i]);
//         }
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<nums[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int nums[]={1,2,4,5,9,13,15,18,21,24};
//     int n=sizeof(nums)/4;
//     int x;
//     cin>>x;
//     int lo=0,hi=n-1;
//     bool flag=false;
//     int mid;
//     while(lo<=hi){
//         mid=lo+(hi-lo)/2;
//         if(nums[mid]==x){
//             flag=true;
//             break;
//         }
//         else if(nums[mid]>x)hi=mid-1;
//         else lo=mid+1;
//     }
//     if(flag)cout<<nums[mid+1]<<" ";
//     else cout<<nums[lo];

// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int nums[]={1,2,2,3,3,3,3,3,4,4,5,7,7,8,9};
//     int n=sizeof(nums)/4;
//     int lo=0,hi=n-1;
//     int x;
//     cout<<"Enter the element : ";
//     cin>>x;
//     bool flag=false;
//     while(lo<=hi){
//         int mid=lo+(hi-lo)/2;
//         if(nums[mid]==x){
//             if(mid,n-1 and nums[mid+1]==x)lo=mid+1;
//             else{
//                 cout<<mid;
//                 flag=true;
//                 break;
//             }
//         }
//         else if(nums[mid]<x)lo=mid+14;
//         else hi=mid-1;
//     }
//     if(flag==false)cout<<-1;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int nums[]={0,1,3,4,6,7,8,9,10,11,12};
//     int n=sizeof(nums)/4;
//     int lo=0,hi=n-1;
//     while(lo<=hi){
//         int mid=lo+(hi-lo)/4;
//         if(nums[mid]==mid){
//             if(nums[mid+1]==(mid+1))lo=mid+1;
//             else{
//                 cout<<mid+1;
//                 break;
//             }
//         }
//         else if(mid>0)hi=mid-1;
//         else{
//             cout<<mid;
//             break;
//         }
        
//     }
// }
// #include<bits/stdc++.h>
// using namespace std;
//     int main(){
//         int nums[]={4,5,6,7,0,1,2};
//         int n=sizeof(nums)/4;
//         int idx=-1;
//         int lo=1,hi=n-2;
//         //if(n==1 and nums[0]==target)return 0;
//         //else return -1;
//         while(lo<=hi){
//             int mid=lo+(hi-lo)/2;
//             if(nums[mid]<nums[mid-1] and nums[mid]<nums[mid+1]){
//                 idx=mid;
//                 break;
//             }
//             else if(nums[mid]>nums[mid-1] and nums[mid]>nums[mid+1]){
//                 idx=mid+1;
//                 break;
//             }
//             else{
//                 if(nums[mid]<nums[hi])hi=mid-1;
//                 else lo=mid+1;
//             }
//         }
//         cout<<idx;
//     }
// #include<bits/stdc++.h>
// using namespace std;
// void recDisplay(stack<int>&st){
//     if(st.size()==0)return;
//    int x=st.top();
//     st.pop();
    
//     recDisplay(st);
//     cout<<x<<" ";
//     st.push(x);
// }
// void print(stack<int>&st){
//     stack<int>gt;

//     while(st.size()){
//         gt.push(st.top());
//         st.pop();
//     }
//     while(gt.size()){
//         st.push(gt.top());
//         cout<<gt.top()<<" ";
//         gt.pop();
//     }
//     cout<<endl;
// }
// void pushElement(stack<int>&st,int n){
//     stack<int>gt;
//     while(st.size()!=n){
//         gt.push(st.top());
//         st.pop();
//     }
//     st.push(35);
//     while(gt.size()){
//         st.push(gt.top());
//         gt.pop();
//     }
// }
// void pushAtBottom(stack<int>&st,int val){
//     if(st.size()==0){
//         st.push(val);
//         return;
//     }
//     int x=st.top();
//     st.pop();
//     pushAtBottom(st,val);
//     st.push(x);
// }
// void reverse(stack<int>&st){
//     if(st.size()==0)return;
//     int x=st.top();
//     st.pop();
//     reverse(st); 
//     pushAtBottom(st,x);

// }
// int main(){
//     stack<int>st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     st.push(50);
//     recDisplay(st);
//     cout<<endl;
//     //pushElement(st,0);
//    // pushAtBottom(st,3);
//    reverse(st); 
//     recDisplay(st);
//     return 0;
// }
// #include<bits\stdc++.h>
// using namespace std;
// class Stack{
//     public:
//     int nums[5];
//     int idx,size;
//     Stack(){
//         idx=-1;
//         size=0;
//     }
//     void push(int val){
//         if(idx==4){
//             cout<<"Stack is Full\n";
//             return;
//         }
//         idx++;
//         nums[idx]=val;
//         size++;
//     }
//     void pop(){
//         idx--;
//         size--;
//     }
//     int top(){
//         return nums[idx];
//     }
//     void display(){
//         for(int i=0;i<=idx;i++){
//             cout<<i[nums]<<" ";
//         }
//         cout<<endl;
//     }
// };
// int main(){
    // Stack st;
    // st.push(78);
    // st.push(89);
    // st.push(34);
    // st.push(67);
    // st.push(54);
    // st.push(129);
    // cout<<st.top();cout<<endl;
    // st.display();
// }
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node *next;
    Node(int x):val(x),next(NULL){}
};
class Stack{
    public:
    Node *head;
    int size;
    Stack():size(0),head(NULL){}
    void push(int val){
        Node *temp=new Node(val);
        temp->next=head;
        head=temp;
        size++;
    }
    void pop(){
        if(head==NULL){
            cout<<"Stack is Empty!";
            return;
        }
        head=head->next;
        size--;
    }
    int top(){
        return head->val;
    }
    // void print(Node *temp){
    //     if(temp==NULL)return;
    //     print(temp->next);
    //     cout<<temp->val<<" ";
    // }
    void display(){
        Node *temp=head;
        void print(Node *temp){
            if(temp==NULL)return;
            print(temp->next);
            cout<<temp->val<<" ";
        }
    }
};
int main(){
    Stack st;
    st.push(78);
    st.push(89);
    st.push(34);
    st.push(67);
    st.push(54);
    st.push(129);
    cout<<st.top();cout<<endl;
    st.display();
    st.pop();
    st.display();
}
// #include<bits\stdc++.h>
// using namespace std;
// bool isBalanced(string str){
//     if(str.size()%2!=0)return false;
//     stack<char>st;
//     for(int i=0;i<str.size();i++){
//         if(str[i]=='(')st.push(str[i]);
//         else{
//             if(st.size()==0)return false;
//             else st.pop();
//         }
//     }
//     if(st.size()==0)return true;
//     else return false;
// }
// int main(){
//     string str;
//     cin>>str;
//     if(isBalanced(str))cout<<"Balanced";
//     else cout<<"Not balanced";
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s="aaabbcddaabffg";
//     stack<char>st;
//     int i=0;
//     while(i<s.size()){
//         if(st.size()==0)st.push(s[i]);
//         else{
//             if(st.top()!=s[i])st.push(s[i]);
//             i++;
//         }
//     }
//     string str="";
//     while(st.size()){
//         str=st.top()+str;
//         st.pop();
//     }
//     cout<<str;
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int nums[]={3,1,2,5,4,6,2,3};
//     int n=sizeof(nums)/4;
//     int nge[n];
//     for(int i=0;i<n;i++){
//         nge[i]=-1;
//         for(int j=i+1;j<n;j++){
//             if(nums[j]>nums[i]){
//                 nge[i]=nums[j];
//                 break;
//             }
//         }
//     }
//     for(int i=0;i<n;i++)cout<<nge[i]<<" ";
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int nums[]={3,1,2,7,4,6,2,3};
//     int n=sizeof(nums)/4;
//     int nge[n];
//     nge[0]=-1;
//     stack<int>st;
//     st.push(nums[0]);
//     for(int i=1;i<n;i++){
//         while(st.size()>0 and st.top()<=nums[i])st.pop();
//         if(st.size()!=0)nge[i]=st.top();
//         else nge[i]=-1;
//         st.push(nums[i]);
        
//     }
//     for(int i=0;i<n;i++){
//         cout<<nge[i]<<" ";
//     }
//     return 0;
//}
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int nums[]={100,80,60,81,70,60,75,85};
//     int n=sizeof(nums)/4;
//     int pge[n];
//     pge[0]=-1;
//     stack<int>st;
//     st.push(0);
//     for(int i=1;i<n;i++){
//         while(st.size()>0 and nums[st.top()]<nums[i])st.pop();
//         if(st.size()==0)pge[i]=i+1;
//         else pge[i]=i-st.top();
//         st.push(i);
//     }
//     for(int i=0;i<n;i++)cout<<pge[i]<<" ";
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int height[]={2,1,5,6,2,3};
//     int n=sizeof(height)/4;
//     int maxArea=INT_MIN;
//     for(int i=0;i<n-1;i++){
//         int breadth=1,Area;
//         int j=i+1;
//         while(j<n){
//             if(height[i]<=height[j])breadth++;
//             else {
//                 Area=height[i]*breadth;
//                 break;
//             }
//         }
//         maxArea=max(Area,maxArea);
//     }
//     cout<<maxArea;
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int nums[]={1,3,-1,-3,5,3,6,7};
//     int n=sizeof(nums)/4;
//     int ngi[n];
//     ngi[n-1]=n;
//     stack<int>st;
//     st.push(n-1);
//     for(int i=n-2;i>=0;i--){
//         while(st.size()>0 and nums[st.top()]<=nums[i])st.pop();
//         if(st.size()!=0)ngi[i]=st.top();
//         else ngi[i]=n;
//         st.push(i);
//     }
//     for(int ele:ngi)cout<<ele<<" ";
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// void pip(int n){
//     if(n==0)return ;
//     cout<<n;
//     pip(n-1);
//     cout<<n;
//     pip(n-1);
//     cout<<n;
// }
// int main(){
//     int n;
//     cin>>n;
//     pip(n);
//     return 0;
// }