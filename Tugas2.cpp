#include<iostream>
using namespace std;
int main()
{
	int l, i, j, k, m, n;
	cout << "Tabel Perkalian" << endl;
	cout << "-----------------" << endl;
	
	cout<< "Masukkan m : ";
	cin>> m;
	cout<< "Masukkan n : ";
	cin>> n;
	
	cout<< "\n\n\t";
	

	
	for(l=1; l<=n; l++){
		cout<< l << "\t";
	}
	cout<<"\n-------------------------------------";
	cout << endl;
	for(i=1; i<=m; i++) {
	cout << i << " |\t";
	for(j=1; j<=n; j++) {
	cout << (i*j) << "\t";
	}
	cout << endl;
	}
}
