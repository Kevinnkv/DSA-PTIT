#include <bits/stdc++.h>
 
using namespace std;
/*Giải thích test
-+8/632
->8 + 6/3 - 2 = 8
-+7*45+20
->7 + 4 * 5 - 2 + 0 = 25
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
        for(int i=n;i>=0;i--){ // thực hiện từ bên phía bắt đầu bằng toán hạng trước
            if(s[i]!='+'&& s[i]!='-'&& s[i]!='*'&&s[i]!='/'){
                st.push(s[i]-'0'); // đẩy các toán hạng vào stack dưới dạng int 
            }else{
                int res;
                x = st.top(); st.pop();
                y = st.top(); st.pop();
                if(s[i]=='*') res = x*y;
                if(s[i]=='/') res = x/y;
                if(s[i]=='+') res = x+y;
                if(s[i]=='-') res = x-y;
                st.push(res);
            }
        }
        cout << st.top() << endl; // the final result is at the top of the stack
    }
    return 0;
}
