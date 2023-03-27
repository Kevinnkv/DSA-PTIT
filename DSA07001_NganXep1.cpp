#include <bits/stdc++.h>

using namespace std;
vector <int> v;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    while(1){
        string s;
        cin >> s;
        if(s == "push"){
            int x;
            cin >> x;
            v.push_back(x);
        }
        else if(s == "pop"){
            v.pop_back();
        }
        else if(v.size() == 0){
            cout << "empty" ;
            break; // ket thuc
        }
        else{
            for(auto it:v){
                cout << it << " ";
            }
            cout << endl;
        }
    }
    
    system("pause");
    return 0;
}
