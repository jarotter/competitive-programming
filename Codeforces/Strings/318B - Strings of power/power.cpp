#include <iostream>
#include <string>
#include <vector>

using namespace std;

string T,h,m;
int i, j, k, l,r, n, ans, zh[1000100], zm[1000100];

void findHeavy(){
	l=r=zh[0]=0;
	for(i=1; i<n;i++){
		if(i>r){
		l=r=i;
		while(r<n && h[r-l]==h[r]) r++;
		zh[i]=r-l;
		r--;
		}
		else{
			k=i-l;
			if(zh[i]<r-i+1) zh[i]=zh[k];
			else{
				l=i;
				while(r<n && h[r-l]==h[r]) r++;
				zh[i]=r-l;
				r--;
			}
 		}

	}
}

void findMetal(){
	l=r=zm[0]=0;
	for(i=1; i<n;i++){
		if(i>r){
		l=r=i;
		while(r<n && m[r-l]==m[r]) r++;
		zm[i]=r-l;
		r--;
		}
		else{
			k=i-l;
			if(zm[i]<r-i+1) zm[i]=zm[k];
			else{
				l=i;
				while(r<n && m[r-l]==m[r]) r++;
				zm[i]=r-l;
				r--;
			}
 		}

	}
}

int main(){

	vector<int> hpos, mpos;

	cin >> T;

	h="heavy$";
	m="metal$";

	h.append(T);
	m.append(T);

	n=h.size();

	findHeavy();
	findMetal();

	for(i=6; i<n; i++)
		if(zh[i]==5)
			for(j=i+5; j<n; j++)
				ans+=(zm[j]==5);
	

	/**for(i=0; i<n; i++)
		if(zh[i]==5) hpos.push_back(i);

	for(i=0; i<n; i++)
		if(zm[i]==5) mpos.push_back(i);

	for(vector<int>::iterator hit=hpos.begin(); hit!=hpos.end(); hit++)
		for(vector<int>::iterator mit=mpos.begin(); mit!=mpos.end(); mit++)
			ans+=(*mit>*hit);*/

	cout << ans << endl;

 
  return 0;
}
