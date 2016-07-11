//
// Created by 杨诗宇 on 16/7/11.
//
#include <iostream>
using namespace std;

int v[1000];//建立一位 状态中存储数组
int cost[1000];
int n ;

int dp(int i){  //表示当前 还需要硬币的状态 为i
    if(v[i]!=-1)  return v[i];
    if(i==0)  return v[i] = 0;   //边界条件 和递归出口  细节决定成败
    for (int j = 0; j < n; ++j) {
          if(i>=cost[j]){
              if(v[i]<dp(i-cost[j])+1) v[i] = v[i-cost[j]]+1;
          }
    }
    return v[i];

}

int main (){
   memset(v,-1, sizeof(v));
   cin>>n;
    for (int i = 0; i < n  ; ++i) {
        cin>>cost[i];
    }
    dp(50);
    cout<<v[50]<<endl;
    return 0;
}
