//
// Created by 杨诗宇 on 16/7/13.
//

#include <iostream>
#include <string.h>
using namespace std;


int T;
int M;
int ti[101];
int cost[101];
int f[101][1001];

int dp(int n,  int t){
    if(t==0||n==0)  return f[n][t] = 0;
    if(f[n][t]!=-1)  return f[n][t];
    if(t>=ti[n])  return f[n][t] = max(dp(n-1,t),dp(n-1,t-ti[n])+cost[n]);
    else return f[n][t] = dp(n-1,t);
}

int main(){
    memset(f,-1, sizeof(f));
    cin>>T>>M;
    for (int i = 1; i <= M; ++i) {
        cin>>ti[i]>>cost[i];
    }
    cout<<dp(M,T)<<endl;
    return 0;
}
