////
//// Created by 杨诗宇 on 16/7/12.
////
///*
// * 01背包问题
// * 最基础的动态规划问题
// * 注意: 状态的有序转移    状态的保存方式
// * 建立无后效性的方程
// */
//#include <iostream>
//using namespace std;
//
//int v[10001];//表示第几个物品的价值
//int w[10001];//表示 第几个物品的重量
//
//int c ;//背包的容量
//int f[10001][10001]; //目标函数   把前多少个物品 装入当前多少容量限定中的最大价值
//
//int dp(int num , int cap){
//    if(num==0||cap==0) return f[num][cap] = 0;
//    if(f[num][cap]!=-1)  return f[num][cap];
//    if(cap>=w[num])   return f[num][cap] = max(dp(num-1,cap),dp(num-1,cap-w[num])+v[num]);
//    else return f[num][cap] = dp(num-1,cap);
//}
//
//int main(){
//   memset(f,-1, sizeof(f));
//    int n,m;
//    cin>>n>>m;
//    for (int i = 1; i <=n ; ++i) {
//        cin>>w[i]>>v[i];
//    }
//    cout<<dp(n,m)<<endl;
//    return 0;
//
//}