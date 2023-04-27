#include <bits/stdc++.h>
 
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        queue <int> qe;
        int n; cin >> n;
        int y;
        while(n--){
            int x; cin >> x;
            if(x==1){
                cout << qe.size() << endl;
            }
            if(x==2){
                if(qe.empty()) cout << "YES" << endl;
                else cout << "NO" << endl;
            }
            if(x==3){
                cin >> y;
                qe.push(y);
            }
            if(x==4){
                if(!qe.empty()) qe.pop();
            }
            if(x==5){
                if(!qe.empty()){
                    cout << qe.front() << endl;
                }else cout << "-1"<<endl;
            }
            if(x==6){
                if(!qe.empty()){
                    cout << qe.back() << endl;
                }else cout << "-1"<<endl;
            }
        }
        cout << endl;
    }
    system("pause");
    return 0;
}