// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     unordered_set<int>s;
//     s.insert(5);
//     s.insert(10);
//     s.insert(15);
//     s.insert(25);
//     s.insert(30);
//     s.insert(50);
//     s.insert(85);
//     s.insert(55);
//     s.insert(35);
//     s.erase(5);
//     for(int ele:s)cout<<ele<<" ";
//     int target;
//     cout<<"\nEnter the target:";
//     cin>>target;
//     if(s.find(target)!=s.end())
//     return 0;
// }
// #include<iostream>
// #include<unordered_map>
// using namespace std;
// int main(){
//     unordered_map<string ,int>m;
//     // pair<string ,int>p1;
//     // p1.first="Muhammad(PBUH)";
//     // p1.second=1;

//     // pair<string ,int>p2;
//     // p2.first="Ibrahim(PBUH)";
//     // p2.second=2;

//     // pair<string ,int>p3;
//     // p3.first="Abubakr(RA)";
//     // p3.second=3;

//     // m.insert(p1);
//     // m.insert(p2);
//     // m.insert(p3);
//     m["Muhammad"]=1;
//     m["Ibrahim"]=2;
//     m["Abubkr"]=3;

//     // for(pair<string,int>p:m)cout<<p.first<<" "<<p.second<<endl;
//     for(auto p:m)cout<<p.first<<" "<<p.second<<endl;
// }
// #include<bits\stdc++.h>
// using namespace std;
// int main(){
//     int nums[]={2,3,4};
//     int n=sizeof(nums)/4;
//     int target;
//     cout<<"Enter the target : ";
//     cin>>target;
//     unordered_set<int>s;
//     vector<int>v;
//     for(int i=0;i<n;i++){
//         if(s.find(target-nums[i])!=s.end()){
//             v.push_back(nums[i]);
//             v.push_back(abs(target-nums[i]));
//         }
//         else s.insert(nums[i]);
//     }
//     for(int ele:v)cout<<ele<<" ";
// }
  
// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     int val;
//     Node*left;
//     Node*right;
//     Node(int x):val(x),left(NULL),right(NULL){}
// };
// int levels(Node *root){
//     if(root==NULL)return 0;
//     return 1+max(levels(root->left),levels(root->right));
// }
// void nthlevel(Node *root,int curr,int n){
//     if(root==NULL)return;
//     if(curr==n){
//         cout<<root->val<<" ";
//         return;
//     }
//     nthlevel(root->left,curr+1,n);
//     nthlevel(root->right,curr+1,n);
    
// }
// Node*construct(int *nums,int n){
//     queue<Node*>q;
//     Node *root=new Node(nums[0]);
//     q.push(root);
//     int i=1,j=2;
//     while(q.size()>0 and i<n){
//         Node *temp=q.front();
//         q.pop();
//         Node *l,*r;
//         if(nums[i]!=INT_MIN)l=new Node(nums[i]);
//         else l=NULL;
//         if(j!=n and nums[j]!=INT_MIN)r=new Node(nums[j]);
//         else r=NULL;
//         temp->left=l;
//         temp->right=r;
//         if(l!=NULL)q.push(l);
//         if(r!=NULL)q.push(r);
//         i+=2,j+=2;
//     }
//     return root;
// }
// void topView(Node*root){
//     unordered_map<int,int>m;
//     queue< pair<Node*,int> > q;
//     pair<Node*,int> r;
//     r.first=root;
//     r.second=0;
//     q.push(r);
//     while(q.size()>0){
//         Node*temp=(q.front()).first;
//         int level=(q.front()).second;
//         q.pop();
//         if(m.find(level)==m.end()){
//             m[level]=temp->val;
//         }
//         if(temp->left!=NULL){
//             pair<Node*,int>p;
//             p.first=temp->left;
//             p.second=level-1;
//             q.push(p);
//         }
//         if(temp->right!=NULL){
//             pair<Node*,int>p;
//             p.first=temp->right;
//             p.second=level+1;
//             q.push(p);
//         }
//     }
//     int minLevel=INT_MAX;
//     int maxLevel=INT_MIN;
//     for(auto x:m){
//         int level=x.first;
//         minLevel=min(minLevel,level);
//         maxLevel=max(maxLevel,level);
//     }
//     for(int i=minLevel;i<=maxLevel;i++){
//         cout<<m[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int nums[]={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8};
//     int n=sizeof(nums)/4;
//     Node*root=construct(nums,n);
//     int i=1;
//     while(i<=levels(root)){
//         nthlevel(root,1,i++);
//         cout<<endl;
//     }
//     topView(root);
//     return 0;
//
