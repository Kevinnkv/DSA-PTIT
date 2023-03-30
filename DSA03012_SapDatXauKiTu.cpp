#include <bits/stdc++.h>
 
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n=s.size();
        map <char,int> mp; // <giá trị,số lần xuất hiện>
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        int check = 0;
        for(auto it :mp){
            if(it.second > (n+1)/2){
                check = 1; break;
            }
             
        }
        if(check == 0) cout << "1" << endl;
        else cout << "-1" << endl;
    }
    system("pause");
    return 0;
}