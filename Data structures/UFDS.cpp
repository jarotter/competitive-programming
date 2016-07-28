// ------------------------------------------
// --------- Union Find Disjoint Set --------
//-------------------------------------------

#include <vector>

using namespace std;

typedef vector<int> vi

class UFDS{
private:
	vi p, rank, setSizes;
	int numSets;

public:
	UFDS(int N){
		numSets=N;
		rank.assign(N,0);
		p.assign(N,0);
		for(int i=0; i<N; i++)
			p[i]=i;
	}

	int findSet(int i){
		return (p[i]==i) ? i : (p[i]=findSet(p[i]));
	}

	bool isSameSet(int i, int j){
		return findSet(i)==findSet(j);
	}

	void unionSet(int i, int j){
		if(!isSameSet(i,j)){
			int x = findSet(i); 
			int y = findSet(j);
			if(rank[x]>rank[y]){
				setSizes[findSet(x)]+=setSizes[findSet(y)];
				p[y]=x;
			}
			else{
				setSizes[findSet(y)]+=setSizes[findSet(y)];
				p[x]=y;
				if(rank[x]==rank[y])
					rank[y]++;
			}
			numSets--;
		}
	}

	int numDisjointSets(){
		return numSets;
	}

	int sizeOfSet(int i){
		return setSizes[findSet(i)];
	}

}