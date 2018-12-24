#include<iostream>
using namespace std;
int main()
{
	int i,x;
	for(i=8;i>=0;i-=2){
		for(x=i;x<=8;x+=2){
			cout<< x;
		}
		cout<< endl;
	}
}
