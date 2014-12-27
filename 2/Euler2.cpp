#include <stdio.h>
#include <iostream>
using namespace std;


int main()
{
	int total=2;
	int num1=1;
	int num2=2;
	int num3;
	while(num2<=4000000)
	{
		num3=num1+num2;
		num1=num2;
		num2=num3;
		if (num2%2==0)
		{
			total=total+num2;
		}
	}
	cout<<total;
	
	
}


