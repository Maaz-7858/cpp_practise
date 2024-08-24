// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     int val;
//     Node*left;
//     Node*right;
//     // Node(int val){
//     //     this->val=val;
//     //     this->left=NULL;
//     //     this->right=NULL;
//     // }
//     Node(int x):val(x),left(NULL),right(NULL){}
// };
// void display(Node *root){
//     if(root==NULL)return ;
//     cout<<root->val<<" ";
//     display(root->left);
//     display(root->right);
// }
// int sum(Node *root){
//     if(root==NULL)return 0;
//     return root->val+sum(root->left)+sum(root->right);

// }
// int size(Node *root){
//     if(root==NULL)return 0;
//     return 1+size(root->left)+size(root->right);
// }
// int product(Node *root){
//     if(root==NULL)return 1;
//     return (root->val)*product(root->left)*product(root->right);
// }
// int maxm(Node *root){
//     if(root==NULL)return INT_MIN;
//     return max(root->val,max(maxm(root->left),maxm(root->right)));
// }
// int levels(Node *root){
//     if(root==NULL)return 0;
//     return 1+max(levels(root->left),levels(root->right));
// }
// int main(){
//     Node *a=new Node(1);
//     Node *b=new Node(2);
//     Node *c=new Node(3);
//     Node *d=new Node(4);
//     Node *e=new Node(19);
//     Node *f=new Node(6);
//     Node *g=new Node(7);
//     a->left=b;
//     a->right=c;
//     b->left=d;
//     b->right=e;
//     d->left=f;
//     f->right=g;
//     display(a);
//     cout<<endl<<sum(a)<<endl;
//     cout<<size(a)<<endl<<maxm(a)<<endl<<product(a);
//     cout<<endl<<levels(a);
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     int val;
//     Node *left;
//     Node*right;
    
//     Node(int x):val(x),left(NULL),right(NULL){}
// };
// void display(Node *root){
//     if(root==NULL)return;
//     cout<<root->val<<" ";
//     display(root->left);
//     display(root->right);

// }
// void Display(Node *root){
//     stack<Node*>st;
//     st.push(root);
//     while(st.size()){
//         Node *temp=st.top();
//         st.pop();
//         cout<<temp->val<<" ";
//         if(temp->right!=NULL)st.push(temp->right);
//         if(temp->left!=NULL)st.push(temp->left);
//     }
// }
// int levels(Node *root){
//     if(root==NULL)return 0;
//     return 1+max(levels(root->left),levels(root->right));
// }
// void nthlevel(Node *root,int curr,int n){
//     if(root==NULL)return;
//     // if(curr==n)cout<<root->val<<" ";
//     nthlevel(root->left,curr+1,n);
//     nthlevel(root->right,curr+1,n);
//     if(curr==n)cout<<root->val<<" ";
// }
// void levelOrder(Node *root){
//     queue<Node*>q;
//     q.push(root);
//     while(q.size()){
//         Node *temp=q.front();
//         q.pop();
//         cout<<temp->val<<" ";
//         if(temp->left!=NULL)q.push(temp->left);
//         if(temp->right!=NULL)q.push(temp->right);
//     }
// }
// int main(){
//     Node *a=new Node(1);
//     Node *b=new Node(2);
//     Node *c=new Node(3);
//     Node *d=new Node(4);
//     Node *e=new Node(5);
//     Node *f=new Node(6);
//     Node *g=new Node(7);

//     a->left=b;
//     a->right=e;
//     b->left=c;
//     b->right=d;
//     e->left=f;
//     e->right=g;

//     Display(a);
    
//     // while(i<=n){
//     //     nthlevel(a,1,i++);
//     // }
//     //levelOrder(a);

//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     int val;
//     Node *left;
//     Node *right;
//     Node(int x):val(x),left(NULL),right(NULL){}
// };
// Node *construct(int *nums,int n){
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
// void levelOrder(Node*root){
//     queue<Node*>q;
//     q.push(root);
//     while(q.size()>0){
//         Node *temp=q.front();
//         q.pop();
//         cout<<temp->val<<" ";
//         if(temp->left!=NULL)q.push(temp->left);
//         if(temp->right!=NULL)q.push(temp->right);
//     }
// }
// int main(){
//     int nums[]={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,9};
//     int n=sizeof(nums)/sizeof(nums[0]);
//     Node*root=construct(nums,n);
//     levelOrder(root);
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
// Node*constructor(int *nums,int n){
//     queue<Node*>q;
//     Node *root=new Node(nums[0]);
//     q.push(root);
//     int i=1,j=2;
//     while(q.size()>0 and i<n){
//         Node *temp=q.front();
//         q.pop();
//        Node *l,*r;
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
// void leftBoundary(Node*root){
//     if(root==NULL)return;
//     if(root->left==NULL and root->right==NULL)return;
//     cout<<root->val<<" ";
//     leftBoundary(root->left);
//     if(root->left==NULL)leftBoundary(root->right);
// }
// void bottomBoundary(Node*root){
//     if(root==NULL)return;
//     if(root->left==NULL and root->right==NULL)cout<<root->val<<" ";
//     bottomBoundary(root->left);
//     bottomBoundary(root->right);
// }
// void rightBoundary(Node*root){
//     if(root==NULL)return;
//     if(root->left==NULL and root->right==NULL)return;
//     rightBoundary(root->right);
//     if(root->right==NULL)rightBoundary(root->left);
//     cout<<root->val<<" ";
// }
// int main(){
//     int nums[]={1,2,3,4,5,INT_MIN,6,7,INT_MIN,8,INT_MIN,9,10,INT_MIN,11,INT_MIN,12,INT_MIN,13,INT_MIN,14,15,16,INT_MIN,17,INT_MIN,INT_MIN,18,INT_MIN,19,INT_MIN,INT_MIN,INT_MIN,20,21,22,23,INT_MIN,24,25,26,27,INT_MIN,INT_MIN,28,INT_MIN,INT_MIN};
//     int n=sizeof(nums)/4;
//     Node *root=constructor(nums,n);
//     int i=1;
//     while(i<=levels(root)){
//         nthlevel(root,1,i++);
//         cout<<endl;
//     }
//     cout<<endl;
//     leftBoundary(root);
//     cout<<endl;
//     bottomBoundary(root);
//     cout<<endl;
//     rightBoundary(root->right);
// }
//}
// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     int val;
//     Node*next;
//     Node(int val){
//         this->val=val;
//         this->next=NULL;
//     }
// };
//  void display(Node *head){
//     Node *temp=head;
//     while(temp){
//         cout<<temp->val<<" ";
//         temp=temp->next;
//     }
//     return ;
//  }
//  void recDisplay(Node*head){
//     if(head==NULL)return;
//     // cout<<head->val<<" ";
//     recDisplay(head->next);
//     cout<<head->val<<" ";
//  }
//  int size(Node *head){
//     int count=0;
//     while(head){
//         count++;
//         head=head->next;
//     }
//     return count;
//  }
//     void insertAtTail(Node*head,int val){
//         while(head->next)head=head->next;
//         Node*temp=new Node(val);
//         head->next=temp;
//         temp->next=NULL;
//     }

// int main(){
//     // Node a(10);
//     // Node b(20);
//     // Node c(30);
//     // Node d(40);
//     // Node e(50);

//     // a.next=&b;
//     // b.next=&c;
//     // c.next=&d;
//     // Node temp=a;
//     // while(1){
//     //     cout<<temp.val<<" ";
//     //     if(temp.next==NULL)break;
//     //     temp=*(temp.next);
//     // }
//     Node *a=new Node(10);
//     Node *b=new Node(20);
//     Node *c=new Node(30);
//     Node *d=new Node(40);
//     Node *e=new Node(50);
//     Node *f=new Node(60);

//     a->next=b;
//     b->next=c;
//     c->next=d;
//     d->next=e;
//     e->next=f;
//     insertAtTail(a,57);
//    recDisplay(a);
//    cout<<endl;
//    cout<<size(a);
// }
// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     int val;
//     Node*next;
//     Node(int x):val(x),next(NULL){}
// };
// class LinkedList{
//     public:
//     Node*head;
//     Node*tail;
//     int size;

//     LinkedList():head(NULL),tail(NULL),size(0){}

//     void display(){
//         Node *temp=head;
//         while(temp){

//             cout<<temp->val<<" ";
//             temp=temp->next;
//         }
//         cout<<endl;
//     }

//     void insertAtTail(int val){
//         Node*temp=new Node(val);
//         if(size==0)head=tail=temp;
//         else{
//             tail->next=temp;
//             tail=temp;
//         }
//         size++;
//     }
//     void insertAtHead(int val){
//         Node*temp=new Node(val);
//         if(size==0)head=tail=temp;
//         else{
//             temp->next=head;
//             head=temp;
//         }
//         size++;
//     }
//     void insertAtIdx(int idx,int val);
//     void getAtIdx(int idx);
//     void deleteAtHead();
//     void deleteAtTail();
// };
// void LinkedList::insertAtIdx(int idx,int val){
//     if(idx<0 || idx>size)cout<<"invalid index"<<endl;
//     else if(idx==0)insertAtHead(val);
//     else if(idx==size)insertAtTail(val);
//     else{
//         Node*temp=new Node(val);
//         if(size==0)head=tail=temp;
//         else{
//             Node*tempA=head;
//             for(int i=1;i<idx;i++){
//                 tempA=tempA->next;
//             }
//             temp->next=tempA->next;
//             tempA->next=temp;
//         }
//     }
//     size++;
// }
// void LinkedList::getAtIdx(int idx){
//     if(size==0)cout<<"List is Empty";
//     else{
//         if(idx<0 || idx>=size)cout<<"invalid index"<<endl;
//         else if(idx==0)cout<<head->val<<" ";
//         else if(idx==size-1)cout<<tail->val<<" ";
//         else{
//             Node*tempA=head;
//             for(int i=1;i<=idx;i++){
//                 tempA=tempA->next;
//             }
//             cout<<tempA->val<<" ";
//         }
//     }
    
// }
// void LinkedList::deleteAtHead(){
//     if(size==0)cout<<"List is Empty";
//     else{
//         head=head->next;
//     }
//     size--;
// }
// void LinkedList::deleteAtTail(){
//     if(size==0)cout<<"List is Empty";
//     else if(size==1)head=tail=NULL;
//     else{
//         Node *temp=head;
//         while(temp->next!=tail){
//             temp=temp->next;
//         }
//         temp->next=NULL;
//         tail=temp;
//     }
//     size--;
// }


// int main(){
//     LinkedList ll;
//     ll.insertAtTail(60);
//     // ll.insertAtTail(89);
//     // //ll.display();
//     // ll.insertAtHead(78);
//     // ll.insertAtHead(34);
//     // ll.insertAtIdx(3,54);
//     // ll.display();
//    //cout<<endl<<ll.size<<endl;
//     //ll.getAtIdx(-1);
//     // ll.deleteAtHead();
//     // ll.display() ;
//     ll.deleteAtTail();
//     ll.display();
//        return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int power(int a,int b){
//     if(b==0)return 1;
//     int p=power(a,b/2);
//     if(b%2==0)return p*p;
//     else return p*p*a;
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     cout<<power(a,b);
// }
// #include<bits/stdc++.h>
// using namespace std;
// int stairs(int n){
//     if(n==1 or n==2)return n;
//     return stairs(n-1)+stairs(n-2);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<stairs(n);
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int mazePath(int i,int j){
//     if(i==1 and j==1)return 1;
//     if(i<1 or j<1)return 0;
//     return mazePath(i,j-1)+ mazePath(i-1,j);

// }
// int main(){
//     int m,n;
//     cin>>m>>n;
//     cout<<mazePath(m,n);
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
void pip(int n){
    if(n==0)return;
    cout<<n;
    pip(n-1);
    cout<<n;
    pip(n-1);
    cout<<n;
}
int main(){
    int n;
    cin>>n;
    pip(n);
    return 0;
}