#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;

int main(){
	int count[10];
	for(int i=0; i<10;i++){
		cin>>count[i];
	}
	for(int i=0;i<10;i++)
	{
		if(count[i]>0 and i > 0)
		{
			cout<<i;
			count[i]--;
			break;
		}
	}
	for(int i=0;i<10;i++)
	{
		while(count[i])
		{
			cout<<i;
			count[i]--;
		}
	}
	return 0;
}
