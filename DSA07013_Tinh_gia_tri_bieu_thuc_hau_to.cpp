#include <bits/stdc++.h>
 
using namespace std;
/*Giải thích test
231*+9–
->2+3*1-9=-4
875*+9-
->8+7*5-9=34
*/
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack <int> st;
        int x,y;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]!='+'&& s[i]!='-'&& s[i]!='*'&&s[i]!='/'){
                st.push(s[i]-'0'); // đẩy các toán hạng vào stack dưới dạng int 
            }else{
                int res;
                x = st.top(); st.pop();
                y = st.top(); st.pop();
                if(s[i]=='*') res = y*x;
                if(s[i]=='/') res = y/x;
                if(s[i]=='+') res = y+x;
                if(s[i]=='-') res = y-x;
                st.push(res);
            }
        }
        cout << st.top() << endl; // the final result is at the top of the stack
    }
    return 0;
}
