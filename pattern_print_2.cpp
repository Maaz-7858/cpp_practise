Ques1.
                #include<bits/stdc++.h>
                using namespace std;
                int main(){
                    int n;
                    cin>>n;
                    for(int i=0;i<n;i++){
                        for(int j=0;j<n-i-1;j++){
                            cout<<"  ";
                        }
                        int a=1;
                        for(int j=0;j<2*i+1;j++){
                            cout<<a<<" ";
                            a++;
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
                    for(int i=0;i<n;i++){
                        for(int j=0;j<n-i-1;j++){
                            cout<<"  ";
                        }
                        int a=1;
                        for(int j=0;j<2*i+1;j++){
                            cout<<(char)(a+64)<<" ";
                            a++;
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
                    for(int i=0;i<n;i++){
                        for(int j=0;j<n-i-1;j++){
                            cout<<"  ";
                        }
                        int a=i+1;
                        for(int j=0;j<2*i+1;j++){
                            cout<<(char)(64+a)<<" ";
                            if(j<i)a--;
                            else a++;
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
                    for(int i=0;i<n;i++){
                        int a=1;
                        for(int j=0;j<2*n-1;j++){
                            if(j<n-i || j>=n+i-1)cout<<(char)(64+a)<<" ";
                            else cout<<"  ";
                            a++;
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
                    for(int i=0;i<n;i++){
                        int a=1;
                        for(int j=0;j<2*n-1;j++){
                            if(j<n-i ){
                                cout<<a<<" ";
                                if(a<n)a++;
                            }
                            else if(j>=n+i-1){
                                a--;
                                cout<<a<<" ";
                            }
                            else cout<<"  ";
                        
                        }
                        cout<<endl;
                    }
                    return 0;
                } 

Ques6.
                #include<bits/stdc++.h>
                using namespace std;
                int main(){
                    int n;
                    cin>>n;
                    for(int i=0;i<n;i++){
                        for(int j=0;j<2*n-1;j++){
                            if(i==j or i+j==2*n-2){
                                cout<<"*"<<" ";
                            }
                            else cout<<"  ";
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
                    int a=-1;
                    for(int i=0;i<n;i++){
                        for(int j=0;j<2*n-1;j++){
                            if(i+j==n-1 || i+j==n+a)cout<<"*"<<" ";
                            else cout<<"  ";
                        }
                        a+=2;
                        cout<<endl;
                    }
                    a-=4;
                    for(int i=n-2;i>=0;i--){
                        for(int j=0;j<2*n-1;j++){
                            if(i+j==n-1 || i+j==n+a)cout<<"*"<<" ";
                            else cout<<"  ";
                        }
                        a-=2;
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
                    int a=-1;
                    for(int i=0;i<n;i++){
                        for(int j=0;j<2*n-1;j++){
                            if(i+j==n-1 || i+j==n+a)cout<<i+1<<" ";
                            else cout<<"  ";
                        }
                        a+=2;
                        cout<<endl;
                    }
                }

Ques9.
                #include<bits/stdc++.h>
                using namespace std;
                int main(){
                    int n;
                    cin>>n;
                    int a=0;
                    for(int i=0;i<=n;i++){
                        for(int j=0;j<2*n+1;j++){
                            if(i+j==n || i+j==n+a || j==n ||i==n)cout<<"*";
                            else cout<<" ";
                        }
                        a+=2;
                        cout<<endl;
                    }
                    a-=4;
                    for(int i=n-1;i>=0;i--){
                        for(int j=0;j<2*n+1;j++){
                            if(i+j==n || i+j==n+a || j==n)cout<<"*";
                            else cout<<" ";
                        }
                        a-=2;
                        cout<<endl;
                    }
                    return 0;
                }

Ques10.
                #include<bits/stdc++.h>
                using namespace std;
                int main(){
                    int n;
                    cin>>n;
                    for(int i=0;i<n;i++){
                        for(int j=0;j<2*n-1;j++){
                            if(j<=i ){
                                cout<<"*"<<"";
                            }
                            else if(j>=2*n-i-2){
                                cout<<"*"<<"";
                            }
                            else cout<<" ";
                
                        }
                        cout<<endl;
                    }
                    for(int i=0;i<n;i++){
                        for(int j=0;j<2*n-1;j++){
                            if(j<n-i ){
                                cout<<"*"<<"";
                            }
                            else if(j>=n+i-1){
                                cout<<"*"<<"";
                            }
                            else cout<<" ";
                        
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
                    int a=-1;
                    for(int i=0;i<n;i++){
                        for(int j=0;j<2*n-1;j++){
                            if(j<n-i ){
                                cout<<"*"<<"";
                            }
                            else if(j>=n+i-1){
                                cout<<"*"<<"";
                            }
                            else cout<<" ";
                        
                        }
                        cout<<endl;
                    }
                    for(int i=1;i<n;i++){
                        for(int j=0;j<2*n-1;j++){
                            if(j<=i ){
                                cout<<"*"<<"";
                            }
                            else if(j>=2*n-i-2){
                                cout<<"*"<<"";
                            }
                            else cout<<" ";
                        }
                        cout<<endl;
                    }
                    return 0;
                } 
