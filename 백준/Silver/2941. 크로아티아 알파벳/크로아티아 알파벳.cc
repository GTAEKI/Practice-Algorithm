#include <bits/stdc++.h>
using namespace std;

int main() 
{
    vector <string> v = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    int index = 0;
    string s;
    cin>>s;
    
    for (int i = 0; i < v.size(); i++) {

		while (1){
			index = s.find(v[i]);
			if (index == string::npos)
				break;
			s.replace(index, v[i].length(), "#");
			
		}
	}
	cout << s.size();

	return 0;
}