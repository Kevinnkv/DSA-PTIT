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
        int cnt=0;
        int open=0,close=0;
        for(int i=0;i<s.size();i++){
            int check=0;
            if(!st.empty()){
                if(s[i]==')' && st.top()=='('){
                    st.pop();
                    check=1;
                }
            }
            if(check==0) st.push(s[i]);
        }
        while(!st.empty()){
            if(st.top()=='(') open++;
            else close++;
            st.pop();
        }
        cnt += open/2 + close/2;
        cnt += open%2 + close%2;
        cout << cnt << endl;
    }
    system("pause");
    return 0;
}