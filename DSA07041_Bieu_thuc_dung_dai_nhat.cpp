#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack <char> st;
        int cnt = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(s[i]);
            }else{
                if(!st.empty()){
                    if(st.top()=='('){
                        cnt ++;
                        st.pop();
                    }
                }
            }
        }
        cout << cnt*2 << endl;
    }
    
    system("pause");
    return 0;
}
