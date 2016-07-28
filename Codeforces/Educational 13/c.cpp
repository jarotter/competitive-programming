#include <iostream>
#include <algorithm>

using namespace std;

long long euclid(long long a, long long b){ return (b==0 ? a : euclid(b,a%b));}

long long mcm(long long a, long long b){ return a*b/euclid(a,b);}

int main(){

	long long n, a, b, p, q, s;

	cin >> n >> a >> b >> p >> q;

	s=(p*(n/a))+(q*(n/b)) - (n/mcm(a,b)*min(p,q));

	cout << s << endl;
 
  return 0;
}
