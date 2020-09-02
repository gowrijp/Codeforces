/*
https://codeforces.com/problemset/problem/10/B

*/

#include <iostream>
#include <stdlib.h>
using namespace std;
 
int mp[1002][1002];
 
int main() {
 
    int N, K, M, ans = 0;
    cin>>N>>K;
    int xc = (1 + K)/2, yc = (1 + K)/2;
 
    for(int i=0; i<N; i++){
        cin>>M;
        int v = 0, minv = (1<<30);
        int xt = 0, yt = 0;
 
        for(int x=1; x<=K; x++){
            for(int y=1; y<=K-M+1; y++){
                bool ok = true;
                v = M * abs(x - xc);
                for(int m=0; m<M; m++){
                    if(mp[x][y+m]==1){
                        ok = false;
                        break;
                    }else{
                        v += abs(y + m - yc);
                    }
                }
                if(ok && v<minv){
                    minv = v;
                    xt = x, yt = y;
                }
            }
        }
 
        for(int m=0; m<M; m++) mp[xt][yt + m] = 1;
        if(xt == 0)
            cout<<-1<<endl;
        else
            cout<<xt<<" "<<yt<<" "<<yt+M-1<<endl;
    }
    return 0;
}
