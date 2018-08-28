#include <bits/stdc++.h>

using namespace std;

int main(){

	string a, b;
	int s;
	char tmp;	

	cin >> s >> a >> b;

	vector<int> moves;

	for(int i=0; i<s; i++){
		char toFind = b[i];
		int j=i;
		
		while( j < s and a[j] != toFind)j++;
		if(a[j] != toFind){
			cout << "-1\n"; return 0;
		}
		for(j; j>i; j--){
			moves.push_back(j);
			tmp = a[j];
			a[j] = a[j-1];
			a[j-1] = tmp;
		}

	}

	//cout << a << endl;

	cout << moves.size() << endl;

	if(moves.size() != 0){
		for(int c : moves){
			cout << c << " ";
		}
		cout << endl;
	}


}