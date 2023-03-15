#include<bits/stdc++.h>
using namespace std;

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}

void solve(){
    int n;
    cin>>n;
    while(n--){
        if(n%3==0 and n%2==0){
            cout<<"c"<<endl;
        }
        else if(n%2==0){
            cout<<"o"<<endl;
        }
        else if(n%3==0){
            cout<<"d"<<endl;
        }
        else{
            cout<<n<<endl;
        }
    }

}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
#endif

    fast();
    solve();

    
    return 0;
}