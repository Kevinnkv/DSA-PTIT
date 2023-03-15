#include <bits/stdc++.h>

using namespace std;

int n,a[11],check[11]={};
vector <char> v;
void in(){
    for(int i=1;i<=n;i++){
        cout << v[a[i]-1];//vector bat dau tu chi so 0,mang tu 1
    }
    cout << " ";
}
void Try(int i){// quay lui to hop
    for(int j=1;j<=n;j++){
        if(check[j]==0){
            check[j]=1;
            a[i]=j;
            if(i==n) in();
            else Try(i+1);
            check[j]=0;
        }
    }
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
    while(t--){
        string s;
        cin >> s;
        n=s.size();
        for(int i=0;i<n;i++) v.push_back(s[i]);
        Try(1);
        v.clear();
        cout << endl;
    }
    system("pause");
	return 0;	
}
