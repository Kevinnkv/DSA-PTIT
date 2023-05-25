#include <bits/stdc++.h>
using namespace std;

int n,k,s, a[1005],cnt;
void check(){
    int sum = 0;
    for(int i=1;i<=k;i++){
       sum += a[i];
    }
    if(sum == s) cnt ++;
}
void Try(int i)
{
    for (int j = a[i - 1] + 1; j <= n - k + i; j++)
    {
        a[i] = j;
        if (i == k)
            check();
        else
            Try(i + 1);
    }
}
int main(){
    while(1){
        cnt = 0;
        cin >> n >> k >> s;
        if(n == 0 && s == 0 && k == 0) break;
        Try(1);
        cout << cnt << endl;
    }
}