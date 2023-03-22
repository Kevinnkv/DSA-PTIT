#include <bits/stdc++.h>

using namespace std;
bool cmp(pair<int,int> a ,pair<int,int> b){
    return a.second < b.second;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <pair<int,int>> v(n);
        for(int i=0;i<n;i++){
            cin >> v[i].first;
        }
        for(int i=0;i<n;i++){
            cin >> v[i].second;
        }
        sort(v.begin(),v.end(),cmp);// sắp xếp tăng dần thời điểm đến hạn
        int tmp = v[0].second;
        int cnt=1;
        for(int i=1;i<n;i++){
            if(v[i].first >= tmp){
                cnt ++;
                tmp = v[i].second;
            }
        }
        cout << cnt << endl;
    }
	system("pause");
	return 0;	
}
