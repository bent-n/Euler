#include <stdio.h>
#include <iostream>
using namespace std;

//sum of squares
//sqare of sum

int main()
{
	int sum1=0;
	int sum2=0;
	int x=100;
	
	sum1=(x*(x+1)*(2*x+1))/6;
	
	sum2=(x*(x+1))/2;
	sum2=sum2*sum2;
	
	cout<<sum1<<endl<<sum2<<endl<<sum2-sum1;
	
}
