/*
https://codeforces.com/problemset/problem/545/C

*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int T; cin >> T;
    vector<int> P(T);
    vector<int> H(T);
    for(int i = 0; i < T; i++){
        cin >> P[i]>>  H[i];
    }

    int leftMost = P[0];
    int res = 1;
    for(int i = 1; i < T; i++){
        int p = P[i], h = H[i];
        
        //Fall left
        if (p - h > leftMost){
            leftMost = p;
            res++;  
        } 
        
        // Fall right
        else if (i + 1 >= T || p + h < P[i+1]){
            leftMost = p + h;
            res++;
        } 
        
        // Stay
        else{
            leftMost = p;
        }
    }
    cout << res << endl;
}
