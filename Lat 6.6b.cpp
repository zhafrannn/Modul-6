#include<iostream>
using namespace std;
int main()
{
	int i, j, k; 
	for(i=5; i>=1; i--){ 
	for(j=5; j>i; j--){
	cout << " ";
	}
	for(k=i; k>=1; k--){
	cout << "*";
	}
	cout << endl;
	}
}
