#include <iostream>

using namespace std;

int a[2010];
int euclidGCD(int a, int b){return b==0 ? a : euclidGCD(b,a%b);}

int main(){
  
  int n, k=0;
  cin >> n;

  for(int i=0; i<n;i++)
    cin >> a[i];

  for(int i=0; i<n+k-1; i++){
    if(euclidGCD(a[i],a[i+1])!=1){
      k++;
      for(int j=n+k-1; j>i+1;j--){
        a[j]=a[j-1];
      }
      a[i+1]=1;
    } 
  }

  cout << k << endl;
  for(int i=0; i<n+k; i++){
    cout << a[i] << " ";
  }

  return 0;
}
