/*
https://codeforces.com/contest/1397/problem/B
*/

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int n;cin>>n;
    vector<ll> a(n);
    ll s=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s+=a[i];
    }
    sort(a.begin(),a.end());
    ll cost=s-n;
    int j=2;
    while(pow(j,n-1)<=s*2){
        ll b=1;
        ll tot=0;
        for(int k=0;k<n;k++){
            tot+=abs(a[k]-b);
            b=b*j;
        }
        //cout<<j<<" ";
        cost=min(cost,tot);
        j+=1;
    }
    cout<<cost<<endl;

}
