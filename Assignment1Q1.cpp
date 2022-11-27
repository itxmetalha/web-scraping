#include<iostream>
using namespace std;
int main()
{
	int r=6;
	int c=6;
	float arr[r][c];
	float arr2[r][c];
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			cout<<"arr["<<i<<"]"<<"["<<j<<"] = ";
			cin>>arr[i][j];
			
		}
	}
	float sum;
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			sum=0;
			if(i==0)
			{
				if(j==0)
				{
					sum=(arr[i][j+1]+arr[i+1][j]+arr[i+1][j+1])/arr[i][j];
				}
				else if(j==c-1)
				{
					sum=(arr[i][j-1]+arr[i+1][j]+arr[i+1][j-1])/arr[i][j];
				}
				else
				{
					sum=(arr[i][j+1]+arr[i][j-1]+arr[i+1][j]+arr[i+1][j+1]+arr[i+1][j-1])/arr[i][j];
				}
			}
			else if(i>0 && i<r)
			{
				if(j==0)
				{
					sum=(arr[i][j+1]+arr[i-1][j]+arr[i-1][j+1]+arr[i+1][j]+arr[i+1][j+1])/arr[i][j];
				}
				else if (j==c-1)
				{
					sum=(arr[i][j-1]+arr[i-1][j]+arr[i-1][j-1]+arr[i+1][j]+arr[i+1][j-1])/arr[i][j];
				}
				else
				{
					sum=(arr[i][j+1]+arr[i][j-1]+arr[i+1][j]+arr[i+1][j+1]+arr[i+1][j-1]+arr[i-1][j]+arr[i-1][j+1]+arr[i-1][j-1])/arr[i][j];
				}
			}
			if(i==r-1)
			{
				if(j==0)
				{
					sum=(arr[i][j+1]+arr[i-1][j]+arr[i-1][j+1])/arr[i][j];
				}
				else if(j==c-1)
				{
					sum=(arr[i][j-1]+arr[i-1][j]+arr[i-1][j-1])/arr[i][j];
				}
				else
				{
					sum=(arr[i][j+1]+arr[i][j-1]+arr[i-1][j]+arr[i-1][j+1]+arr[i-1][j-1])/arr[i][j];
				}
			}
			arr2[i][j]=sum;
			
		}
	}
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			cout<<arr2[i][j]<<"     ";
		}
		cout<<endl;
	}
}
