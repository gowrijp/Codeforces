/*
https://codeforces.com/problemset/problem/660/C
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n,k;
    cin>>n>>k;
    ll cnt=0;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    ll mx_len=0;
    ll pos=0;
    ll l=0;
    for(ll i=0;i<n;i++){
        if(a[i]==0) cnt++;
        while(cnt>k){
            if(a[l]==0){
                cnt--;
            }
            l++;
        }
        if((i-l+1)>mx_len){
            mx_len=i-l+1;
            pos=i;
        }
    }
    cout<<mx_len<<endl;
    while(pos>=0 and mx_len>0){
        if(a[pos]==0) a[pos]=1;
        pos--;
        mx_len--;
    }
    for(ll i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
    
}
