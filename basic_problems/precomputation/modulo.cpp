/* 
Modular arithmetics:
(a+b)%M = ((a%M) + (b%M))%M
(a*b)%M = ((a%M) * (b%M))%M
(a-b)%M = ((a%M)-(b%M)+M)%M
(a/b)%M = ((a%M)*((b^-1)%M)%M
where b^-1 is multiplicative inverse
b-inverse is calculated using binary exponentiation or modular exponentiation 

*/

/*
Given a number N. Print its factorial.
Constraints
1<=N<=100
*/

#include<bits/stdc++.h>
using namespace std;
const int M=1e9+7;

void fast(){
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
}

void solve(){
    int n;
    cin>>n;
    long long int fact=1;

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