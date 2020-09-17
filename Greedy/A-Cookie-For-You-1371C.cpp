/*
https://codeforces.com/problemset/problem/1371/C
*/

#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b,n,m;
        cin>>a>>b>>n>>m;
        if(min(a,b)<m || (n+m)>(a+b)){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
    
    
}
