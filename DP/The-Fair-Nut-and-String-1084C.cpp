/*
https://codeforces.com/problemset/problem/1084/C
*/

#include <bits/stdc++.h>
#define MAX 100005
#define MOD 1000000007
#define ll long long int
using namespace std;
 
int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    string str;
    cin>>str;
    int len = str.length();
 
    ll temp[MAX];
    ll ans = 0, idx = -1;
    for(int i = 0; i < len; i++){
        if(str[i] == 'a'){
            ans++;
            if(idx >= 0){
                ans = (ans + temp[idx]) % MOD;
            }
        }
        else if(str[i] == 'b'){
            idx = i;
            temp[i] = ans;
        }
    }
 
    cout<<ans % MOD<<endl;
 
    return 0;
}
