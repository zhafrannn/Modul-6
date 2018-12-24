#include<iostream>
using namespace std;
int main()
{
	int i,x;
	for(i=1;i<=9;i+=2){
		for(x=i;x>=1;x-=2){
			cout<< x;
		}
		cout<< endl;
	}
}
