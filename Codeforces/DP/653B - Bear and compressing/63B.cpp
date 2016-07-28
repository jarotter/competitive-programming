#include <iostream>
#include <string>

using namespace std;
char op[40][4];
int estados[40][7]:

int i, L, ans, q, n;

void f(char ch, int L){
    if(dp[ch-97][L]!=-1) return dp[ch-97][L];
    else{
        for(i=1; i<=q; i++){
            if(op[i][2]==ch){
                
            }
        }
        
    }
    return;
}

int main(){
    
    string instring;
    
    cin >> n >> q;
    
    for(i=0; i<=q; i++){
        getline(cin, instring);
        for(int j=0; j<=3;j++){
            if(j!=2)
                op[i][j]=instring[j];
        }
        op[i][2]=op[i][3];
    }
    
    f('a',1);
    cout << ans << endl;
    
    return 0;
}
