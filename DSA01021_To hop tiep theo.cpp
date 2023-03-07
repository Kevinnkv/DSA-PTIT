#include <bits/stdc++.h>

using namespace std;

int n,k,a[100],b[100],c[100];
void SinhTohop(){
	int i=k;
	while(i>0 && a[i]==n-k+i){
		i--;
	}
    a[i]+=1;
    for(int i=0;i<k;i++){
        b[i]=a[i];
    }
    int cnt=0;
    for(int i=0;i<k;i++){
        if(b[i] != c[i]) cnt ++;
    }
    cout << cnt;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		cin >> n>>k;
        for(int i=0;i<k;i++){
            cin >> a[i];
            c[i]=a[i];
        }
		SinhTohop();
		cout << endl;
	}
    system("pause");
	return 0;	
}
