#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin >> n >> k;
        int a[n],b[k];
        set <int > s;
        for(int i=0;i<n;i++){
            cin >> a[i];
            s.insert(a[i]);
        }
        for(int i=0;i<k;i++){
            cin >> b[i];
            s.insert(b[i]);
        }
        for(auto it : s){
            cout << it <<" ";
        }
        cout << endl;
        map <int , int > mp;
        for(int i=0;i<n;i++){
            mp[a[i]]=1;
        }
        for(int i=0;i<k;i++){
            if(mp[b[i]]==1) cout << b[i] << " ";
        }
        cout << endl;
	}
    system("pause");
}