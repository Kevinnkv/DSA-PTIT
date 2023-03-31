#include <bits/stdc++.h>

using namespace std;
// Ý tưởng giống bài sắp xếp công việc 1
bool cmp(pair <int,int> a,pair<int,int> b){
    return a.second < b.second;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <pair<int,int>> v(n);
        for(int i=0;i<n;i++){
            cin >> v[i].first >> v[i].second;
        }
        sort(v.begin(),v.end(),cmp);
        int cnt = 1;
        int tmp = v[0].second;
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