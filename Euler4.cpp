#include <stdio.h>
#include <iostream>
using namespace std;

int intLength(int);
int storeNum(int,int*);
int palTest(int);

int main()
{
	int palNum;
	int num1=999;
	int num2=999;
	int numLength;
	numLength=intLength(palNum);
	int index=numLength-1;
	int index2=0;
	int stored[numLength];
	int maxPal=0;
	int maxPal2=0;
	
	
	while(num1>0)
	{
		for(num1=999;num1>0;num1--)
		{
			for(num2=999;num2>0;num2--)
			{
				palNum=num1*num2;
				if(palTest(palNum))
				{
					maxPal2=palNum;
					
				}
				if(maxPal2>maxPal)
				{
					maxPal=maxPal2;
				}
				
			}
			
		}
			
	}
	
	cout<<maxPal;
	

}

int intLength(int x)
{
	
	//int x=12345678;
	int numLength=0;
	bool numEnd=0;
	int test=1;
		
	while(numEnd==0)
	{
		if (x/test>0)
		{
			numLength++;
			test=test*10;
		}
		if (x/test==0)
		{
			numEnd=1;
		}
	
	}
	return numLength;
	
}

int storeNum(int x,int* store)
{
	int length;
	length=intLength(x);
	store[length];
	int test=1;
	int temp;
	int modTest=10;
	int digit=length-1;
	
	while(length>=1)
	{
		temp=x%modTest;
		store[digit-(length-1)]=temp/test;
		length--;
		test=test*10;
		modTest=modTest*10;
	}
	/*for(digit;digit>=0;digit--)
	{
		cout<<store[digit];
	}*/
	
}
int palTest(int palNum)
{

	int numLength;
	
	numLength=intLength(palNum);
	
	int index=numLength-1;
	int index2=0;
	int stored[numLength];
	int palTrue=1;
	storeNum(palNum,stored);
	
	while(palTrue==1)
	{
		if(index<index2)
		{
			break;
		}
		
		if(stored[index]!=stored[index2])
		{
			palTrue=0;
		}
		 index--;
		 index2++;
		
		
	}
	return palTrue;
}
