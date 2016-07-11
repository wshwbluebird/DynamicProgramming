////
//// Created by bluebird on 16/7/10.
////
////记忆化递归    好久不见  有些想你!
//#include <iostream>
//using namespace std;
//
//int mapT[100][100];
//int f[100][100];//目标函数 //表示当前位置的最大值
//
//int dp(int x ,int y){
//    if(x==0||y==0)  return f[x][y]=0;
//    if(f[x][y]!=-1)  return f[x][y];
//    f[x][y] = mapT[x][y]+max(dp(x-1,y),dp(x,y-1));
//    return f[x][y];
//
//}
//
//
//int main(){
//    memset(f,-1, sizeof(f));
//    int  m,n;//输入行和列
//    cin>>m>>n;
//    for (int i = 1; i <= m; ++i) {
//        for (int j = 1; j <=n  ; ++j) {
//            cin>>mapT[i][j];
//        }
//    }
//    cout<<dp(m,n)<<endl;
//
//
//
//
//    return 0;
//}