Ques1.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}

Ques2.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}

Ques3.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<(char)(j+64)<<" ";
        }
        cout<<endl;
    }
    return 0;
}

Ques4.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i%2!=0)cout<<j<<" ";
            else cout<<(char)(j+64)<<" ";
        }
        cout<<endl;
    }
    return 0;
}

Ques5.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=2*n-1;i++){
        if(i<=n){
            for(int j=1;j<=i;j++)cout<<"*"<<" ";
        }
        else{
            for(int j=1;j<=2*n-i;j++)cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}

Ques6.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    for(int i=1;i<=m;i++){
        if(i==1 || i==m){
            for(int j=1;j<=n;j++)cout<<"*";
        }
        else{
            for(int j=1;j<=n;j++)
            if(j==1|| j==n)cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}

Ques7.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=n;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}

Ques8.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=i;j++){
            cout<<a<<" ";
            a++;
        }
        cout<<endl;
    }
    return 0;
}
Ques9.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){
            cout<<(char)(j+64)<<" ";
        }
        cout<<endl;
    }
    return 0;
}

Ques10.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;5
    for(int i=1;i<=n;i++){
        int a=i;
        for(int j=1;j<=i;j++){
            cout<<a<<" ";
            a--;
        }
        cout<<endl;
    }
    return 0;
}

Ques11.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=2*n-1;i++){
        if(i<=n){
            for(int j=1;j<=n-i;j++){
                cout<<" ";
            }
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
        }
        else{
            for(int j=1;j<=i-n;j++){
                cout<<" ";
            }
            for(int j=1;j<=2*n-i;j++){
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}

