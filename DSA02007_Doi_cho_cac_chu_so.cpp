#include<bits/stdc++.h>
using namespace std;

bool cmp(char a, char b) {
    return a > b;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int k;
        cin >> k;
        string s;
        cin >> s;
        
        for (int i = 0; i < s.size() - 1 && k > 0; i++) {
            char max_digit = *max_element(s.begin() + i, s.end());
            
            if (s[i] < max_digit) {
                for (int j = s.size() - 1; j > i; j--) {
                    if (s[j] == max_digit) {
                        swap(s[i], s[j]);
                        k--;
                        break;
                    }
                }
            }
        }
        
        cout << s << endl;
    }
    
    return 0;
}
