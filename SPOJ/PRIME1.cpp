#include <iostream>
#include <cstdlib>
#define endl '\n'
using namespace std;

long long power(long long x, long long y, long long p){
  long long ans=1;
  x%=p;
  while(y>0){
    if(y&1)
      ans=(ans*x)%p;
    y=y>>1;
    x=(x*x)%p;
  }

  return ans;
}

bool millerTest(long long d, long long n){
  long long a = 2 + rand() % (n-4);
  long long x = power(a,d,n);
  if(x==1 || x==n-1)
    return true;
  while(d!=n-1){
    x=(x*x)%n;
    d*=2;

    if(x==1) return false;
    if(x==n-1) return true;
  }

  return false;
}

bool isPrime(long long n, long long k){

  if(n==1 || n==4) return false;
  if(n<=3)  return true;

  long long d=n-1;
  while(d%2==0)
    d/=2;

  for(int i=0; i<k; i++)
    if(millerTest(d,n)==false){
      return false;
    }

  memo[n]=1;
  return true;
}

int main(){

  std::ios::sync_with_stdio(false);
  
  int count, T;
  long long N, M;

  cin >> T;

  while(T--){
    count=0;
    cin >> M >> N;

    for(long long j=M; j<=N; j++){
      if(isPrime(j,3))
        cout << j << endl;
    }
      cout << endl;
  }

  return 0;
}
