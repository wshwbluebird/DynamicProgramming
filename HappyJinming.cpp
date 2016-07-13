////
//// Created by 杨诗宇 on 16/7/13.
////
//
//#include <iostream>
//using namespace std; a/\
//
//int N;
//int m;
//int v[26];
//int w[26];
//int f[26][30001];//目标函数
//
//int dp(int num , int cost){
//    if(num==0||cost==0)  return f[num][cost] = 0;
//    if(f[num][cost]!=-1)  return f[num][cost];
//    if(cost>=v[num])   return f[num][cost] = max(dp(num-1,cost),dp(num-1,cost-v[num])+w[num]*v[num]);
//    else return f[num][cost] = dp(num-1,cost);
//}
//
//int main(){
//    memset(f,-1, sizeof(f));
//    cin>>N>>m;
//    for (int i = 1; i <=m ; ++i) {
//        cin>>v[i]>>w[i];
//    }
//     cout<<dp(m,N)<<endl;
//
//  return 0;
//}