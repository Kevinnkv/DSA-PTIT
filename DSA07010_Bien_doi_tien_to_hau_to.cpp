#include <bits/stdc++.h>
 
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack <string> st;
        string x,y,tmp="";
        int n=s.size();
        for(int i=n-1;i>=0;i--){
            if(s[i]!='+'&& s[i]!='-'&& s[i]!='*'&&s[i]!='/'){
                st.push(string(1, s[i])); // push a new string containing s[i]
            }else{
                x = st.top(); st.pop();
                y = st.top(); st.pop();
                tmp = x+y+s[i];
                st.push(tmp);
            }
        }
        cout << st.top() << endl; // the final result is at the top of the stack
    }
    return 0;
}
