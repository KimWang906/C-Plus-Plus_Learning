#include<iostream>
#include<math.h>
#define max 1000000
using namespace std;


int main()
{
 	
	int n;
	int *m;
	bool flg;
	bool pf, mf;
	cin >> n;
	m = new int[n];
	
	for(int i = 0; i < n; ++i)
	{
		flg = false;
		pf = false;
		mf = false;
		for(int j = 0; j < abs(max - m[i]); ++j)
		{
			if(mf || pf)
			{
				cout << endl;
				break;
			}
			
			mf = pf = true;
			
			if(m[i] - j > 1)
			{
				for(int mi = 2; mi < m[i] - j; ++mi)
				{
					if((m[i] - j) % mi == 0)
					{
						pf = false;
						break;
					}
				}
			}
			if(m[i] + j <= max)
			{
				for(int mi = 2; mi < m[i] + j; ++mi)
				{
					if((m[i] + j) % mi == 0)
					{
						mf = false;
						break;
					}
				}
				if(mf && j != 0)
				{
					cout << m[i] << " ";
				}
			}
		}
	}	
return 0;
}
