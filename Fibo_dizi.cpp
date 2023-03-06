#include <iostream>
using namespace std;

int main(){
	int sayi,i,j;
	
	cout << "Kac sayi istersiniz?: ";
	cin >> sayi;
	
	int fibo[sayi];
	
	fibo[0]=1;
	fibo[1]=1;
	fibo[2]=2;
	
	
	for (i=3;i<sayi;i++)
	{
		fibo[i]=fibo[i-1]+fibo[i-2];
	}
	for (j=0;j<sayi;j++)
		cout << fibo[j]<< " ";
	

	return 0;
}