#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b){
    return a.second > b.second;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int x;
        vector <pair<int,int>> v(n);
        for(int i=0;i<n;i++){
            cin >> x;
            cin >> v[i].first;
            cin >> v[i].second;
        }
        sort(v.begin(), v.end(),cmp);
        int check[1005]={0};
        int sum=0,cnt=0;
        for(int i=0;i<n;i++){
            for(int j=min(n,v[i].first);j>0;j--){ // update thoi gian de thoa man hoan thanh cong viec 
                if(check[j]==0){
                    sum += v[i].second;
                    cnt++;
                    check[j]=1;
                    break;
                }
            }
        }
        cout << cnt << " " << sum << endl;
    }
	system("pause");
	return 0;	
}
