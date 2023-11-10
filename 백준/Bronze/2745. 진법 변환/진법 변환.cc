#include <iostream>
using namespace std;

int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string n;
	int b , result = 0;
	
	cin >> n >> b;
	
	int len = n.length();
	int tmp = 1;
	
	for(int i=len-1; i>=0; i--) 
    {
		int num;
		
		if(n[i] >= '0' && n[i] <= '9') 
        {
			num = n[i] - '0';
		}
		else 
        {
			num = n[i] - 'A' + 10;
		}
		
		num *= tmp;
		result += num;
		tmp *= b;		
	}
	
	cout << result << '\n';
	
	return 0;
}