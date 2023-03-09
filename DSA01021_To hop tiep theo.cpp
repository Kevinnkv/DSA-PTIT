#include <bits/stdc++.h>

using namespace std;

int n,k,a[100],b[100];
void SinhTohop(){
	int i=k,dem=0;
	while(i>0 && a[i]==n-k+i){
		i--;
	}
	a[i] += 1;
	for(int j=i+1;j<=k;j++){
		a[j]=a[j-1]+1;
	}
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	int t;
	cin >> t;
	while(t--){
		cin >> n>>k;
		for(int i=1;i<=k;i++){
			cin >> a[i];
			b[i]=a[i];
		}
		int check=1;
		for(int i=k;i>0;i--){
			if(a[i]!=n-k+i) check=0;
		}
		if(check==1) cout << k << endl;
		else{
			SinhTohop();
			int cnt=0;
			for(int i=1;i<=k;i++){
				for(int j=1;j<=k;j++){
					if(a[i]==b[j]) cnt ++;
				}
			}
			cout <<k-cnt << endl;
		}
	}
	return 0;	
}
