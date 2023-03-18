#include <bits/stdc++.h>

using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        map <int,int> mp;
        int m,n,k;
        cin >> m >> n >> k;
        long long a[m],b[n],c[k];
        vector<long long> v;
        for(auto &i : a){
            cin >> i;
        }
        for(auto &i : b){
            cin >> i;
        }
        for(auto &i : c){
            cin >> i;
        }
        int i=0,j=0,l=0;
        int check=0;
        while(i<m && j<n && l<k){
            if(a[i]==b[j] && b[j]==c[l]){
                cout << a[i] << " ";
                check=1;
                i++; j++; k++;
            }
            else{
                int min1=min(a[i],min(b[j],c[l]));
                if(a[i]== min1) i++;
                if(b[j] ==  min1) j++;
                if(c[l] == min1) l++;
            }

        }
        if(check==0) cout << "-1";
        cout << endl;
   }
	system("pause");
	return 0;	
}
