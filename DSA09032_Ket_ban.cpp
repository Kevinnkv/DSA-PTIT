#include<bits/stdc++.h>
using namespace std;
int n,m;
int par[100005];
int sz[100005];
int Find(int u){
	if(par[u]==u) return u;
	else{
		return par[u]=Find(par[u]);
	}
}
void Union(int u, int v){
	u= Find(u);
	v= Find(v);
	if(u!=v){
	    if(sz[u]<sz[v]){
	 	    swap(u,v);
        }
	 	par[u]=v;
	 	sz[v]+=sz[u];
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=1; i<=n; i++){
		par[i]=i;
		sz[i]=1;
		}
		for(int i=1; i<=m; i++){
			int x,y;
			cin>>x>>y;
			Union(x,y);
		}
		int cnt=-1;
		for(int i=1; i<=n;i++){
			cnt=max(cnt,sz[i]);
		}
		cout<<cnt<<endl;
	}
}