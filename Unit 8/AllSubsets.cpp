#include<bits/stdc++.h>
using namespace std;
#define fo(i,s,e) for(long long int i=s;i<e;i++)
#define ll long long int
#define vll vector<ll>
#define takeINP(arr,n) for(long long int i=0;i<n;i++) cin>>arr[i];
#define all(v) v.begin(),v.end()
#define sortall(x) sort(all(x))

void Findsubsets(vector<int>& A, vector<vector<int> >& res,
				vector<int>& subset, int index)
{
	res.push_back(subset);
	for (int i = index; i < A.size(); i++) {

		
		subset.push_back(A[i]);

		
		Findsubsets(A, res, subset, i + 1);
		subset.pop_back();
	}

	return;
}


vector<vector<int> > Allsubsets(vector<int>& A)
{
	vector<int> subset;
	vector<vector<int> > res;

	int index = 0;
	Findsubsets(A, res, subset, index);

	return res;
}

int main()
{
	
	vector<int> array = { 4 , 5 , 6 , 7 };

	vector<vector<int> > res = Allsubsets(array);

	for (int i = 0; i < res.size(); i++) {
		for (int j = 0; j < res[i].size(); j++)
			cout << res[i][j] << " ";
		cout << endl;
	}

	return 0;
}
