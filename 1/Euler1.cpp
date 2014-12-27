#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	int count=999;
	int total=0;
	for (count;count>=3;count--)
	{
		if (count%5==0||count%3==0)
		{
			total=total+count;
		}
	}
	cout<<total;
}
