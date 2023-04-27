#include <bits/stdc++.h>
 
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    queue <int> q;
    while(t--){
        string s; cin >> s;
        if(s=="PUSH"){
            int x; cin >> x;
            q.push(x);
        }
        if(s=="POP"){
            if(!q.empty()){
                q.pop();
            }
        }
        if(s=="PRINTFRONT"){
            if(!q.empty()){
                cout << q.front() << endl;
            }else{
                cout << "NONE\n";
            }
        }
    }
    system("pause");
    return 0;
}