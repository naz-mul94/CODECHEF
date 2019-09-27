#include <iostream>
using namespace std;

void adjacenSwap(string &A, int index, int end)
{
	char x=A[index];
	for (int i = index+1; i <=end; ++i)
	{
		int y=A[i];
		A[i]=A[i-1];
		A[i-1]=y;
	}
} 

int main()
{
    string intput;
	while(1)
	{
		
		cin>>intput;
		if(intput.size()==1&&intput[0]=='0')break;
		int n=intput.size();
		int start=0, end=n-1;
		int ans=0;
		int flag=1;
		while(start<end)
		{
			if(intput[start]!=intput[end])
			{
				int swap=0, i;
				for(i=end-1;i>start;i--)
				{
					swap++;
					if(intput[i]==intput[start])break;
				}
				if(i==start)
				{
					flag=0;break;
				}
				else
				{
					adjacenSwap(intput, i, end);
					ans+=swap;
				}
			}
			start++;
			end--;
		}
		if(!flag)cout<<"Impossible\n";
		else
		cout<<ans<<endl;
	}
	return 0;
}
