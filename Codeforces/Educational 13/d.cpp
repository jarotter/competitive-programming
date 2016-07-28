#include <iostream>
#include <algorithm>

typedef long long ll;

#define MOD 1000000007
using namespace std;

long long binexp(long long base, long long exp){
	long long r=1;
	while(exp>0){
		if(exp & 1) r=(r*base)%MOD;
		exp >>=1;
		base=(base*base)%MOD;
	}
	return r;
}

int main(){

	long long a, b, x, n;

	cin >> a >> b >> n >> x;

	ll w = binexp(a-1,MOD-2);

	ll ans=binexp(a,n)-1;
	ans=(ans*w)%MOD;
	ans=(ans*b)%MOD;
	ans=(ans+binexp(a,n)*x)%MOD;

	cout << ans << endl;

  return 0;
}
