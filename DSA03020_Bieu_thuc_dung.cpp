#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        stack<int> st;
        int res = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '[') {
                st.push(i);
            } else {
                if (!st.empty()) {
                    st.pop();
                } else {
                    int j = i;
                    while (s[j] == ']') j++;
                    swap(s[i], s[j]);
                    res += j - i;
                    st.push(i);
                }
            }
        }
        cout << res << endl;
    }
    system("pause");
	return 0;	
}



