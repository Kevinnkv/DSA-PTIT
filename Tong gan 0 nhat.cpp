#include <bits/stdc++.h>

using namespace std;

bool cmp(int a,int b){
    return abs(a)<abs(b);
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int b[n*n]; 
        int x=0;
         for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                b[x]=a[i]+a[j];
                x++;
            }
         }
         int min=abs(b[0]);
         int z;
         for(long long i=0;i<x;i++){
            if(min>abs(b[i])){
                min=abs(b[i]);
                z=i;
            }
         }
         cout<<b[z]<<endl;     
    }
    system("pause");
}
