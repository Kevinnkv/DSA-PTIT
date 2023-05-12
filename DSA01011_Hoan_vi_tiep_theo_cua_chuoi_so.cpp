#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int i = s.length() - 2;
        while (i >= 0 && s[i] >= s[i + 1]) i--;
        if (i == -1) {
            cout << n << " BIGGEST";
        }else{
            for (int j = s.length() - 1; j > i; --j) {
                if (s[j] > s[i]) {
                    swap(s[i], s[j]);
                    sort(s.begin() + i + 1, s.end());
                    break;
                }
            }
            cout << n << " " << s;
        }
        cout << endl;
    }
    
    system("pause");
	return 0;	
}



