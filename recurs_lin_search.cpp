#include <iostream>

using namespace std;

//recursively look for an element
int recurs_lin_search(int *v, int len, int x)
{
	if(len <= 0) //base case
		return 0;
	
	return (v[0] == x) || recurs_lin_search(v+1, len-1, x);
}



int main()
{
	//test input
	int a[] = {17, 28, 1, 48, 7};
	int dim = 5;
	int elem = 5;
	
	cout << recurs_lin_search(a, dim, elem) << endl;
	
	
	return 0;
}