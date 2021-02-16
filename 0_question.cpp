#include<bits/stdc++.h>
using namespace std;
void  jumph(int  x1, int v1, int x2, int v2)
{
	if (x1 > x2)
	{
			int temp = x1;
			x1=x2;
			x2=temp;
			 
			temp=v1;
			v1=v2;
			v2=temp;
			
	}

	if (v2 >= v1)
	{
		cout << "never meet";
	}
	else if ((v2 * (x2 - x1)) % (v1 - v2) == 0)
	{
		cout << "meet";
	}
	else
	{
		cout << "never meet";
	}
}
int main()
{
	int x1, v1, x2, v2;
	cin >> x1 >> v1 >> x2 >> v2;
	jumph(x1, v1, x2, v2);
}
