#include <bits/stdc++.h>

using namespace std;
int n;
int c[16][16];
int check[16];
long long res;
void Try(int i, long long sum,int cnt){
    if(cnt == n){
        res = min(res , sum + c[i][1]);
        return;
    }
    for(int j=2;j<=n;j++){
        if(check[j]==0 && sum + c[i][j] < res){// dùng quy tắc nhánh cận , nếu giái trị tổng chi phí đã lớn hơn res thì dừng luôn
            check[j]=1;
            Try(j,sum+c[i][j],cnt+1);
            check[j]=0;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> c[i][j];
        }
    }
    res = INT_MAX;
    Try(1,0,1);
    cout << res << endl;
    system("pause");
    return 0;
}