#include <bits/stdc++.h>

using namespace std;
char s;
int check[10005];
char a[10005];
bool Solve(){
    for(int i=2;i<=s-'A';i++){
        if(a[i]=='A' || a[i] =='E'){
            if(a[i-1] != 'A' && a[i-1]!='E' && a[i+1] != 'A' && a[i+1]!='E' ) return false;
        }
    }
    return true;
}
void in(){
    for(int i=1;i<=s-'A'+1;i++){
        cout << a[i];
    }
    cout << endl;
}
void Try(int i){
    for(char j='A';j<=s;j++){
        if(check[j]==0){
            a[i]=j;
            check[j]=1;
            if(i==(s-'A')+1){
               if(Solve())
                    in();
            }
            else Try(i+1);
            check[j]=0;
        }

    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> s;
    Try(1);
    system("pause");
    return 0;
}
