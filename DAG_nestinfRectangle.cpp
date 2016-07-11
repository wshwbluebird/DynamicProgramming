////
//// Created by 杨诗宇 on 16/7/10.
////
//
//#include <iostream>
//using namespace std;
//int n ; //需要输入共有 多少个矩形
//int d[10000];//一维的目标函数
//int G[1000][1000];  //G[i][j]  表示 第i个矩形可以 套着第j个矩形
//int xx[10000];
//int yy[10000];
//int dp(int i){    //到第i号矩形之前 有多少个节点
//    int &ans = d[i];
//    if(ans > 0) return ans;
//    ans = 1;
//    for (int j = 0; j < n ; ++j) {
//        if(G[i][j]) {
//            int temp = dp(j)+1;
//            if(temp>ans)  ans  =temp;
//        }
//    }
//    return ans;
//
//}
//
//int main(){
//     cin>>n;
//    int x,y;//表示 长和宽
//    for (int i = 0; i < n ; ++i) {
//        cin>>x>>y;
//        if(x>y) swap(x,y);
//        xx[i] = x;
//        yy[i] = y;
//        for (int j = 0; j < i; ++j) {
//            if(x<xx[j]&&y<yy[j]) G[j][i] = 1;
//            else if(x>xx[j]&&y>yy[j]) G[i][j] = 1;
//        }
//    }
//
//
//    return 0;
//}