#include <iostream>
using namespace std;

int main() 
{
	int n,m,i,j;
	cout<<"number of row: "<<'\n';
	cin>>n;
	cout<<"number of column: "<<'\n';
	cin>>m;
	
	for(i=1 ; i<=n ; i++)
	{
		for(j=1 ; j<=m ; j++)
		cout<<i*j<<'\t';
		cout<<'\n';
	}
	
	return 0;
}