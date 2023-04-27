#include <bits/stdc++.h>
 
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    deque <int> dq; // khai bao hang doi 2 dau
    while(t--){
        string s; cin >> s;
        if(s=="PUSHBACK"){
            int x; cin >> x;
            dq.push_back(x);
        }
        if(s=="PUSHFRONT"){
            int x; cin >> x;
            dq.push_front(x);
        }
        if(s=="POPFRONT"){
            if(!dq.empty()){
                dq.pop_front();
            }
        }
        if(s=="POPBACK"){
            if(!dq.empty()){
                dq.pop_back();
            }
        }
        if(s=="PRINTFRONT"){
            if(!dq.empty()){
                cout << dq.front() << endl;
            }else{
                cout << "NONE\n";
            }
        }
        if(s=="PRINTBACK"){
            if(!dq.empty()){
                cout << dq.back() << endl;
            }else{
                cout << "NONE\n";
            }
        }
    }
    system("pause");
    return 0;
}