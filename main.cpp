#include <iostream>
using namespace std;

//Im branch test
int factorial(int n){
	if(n == 0)
		return 1;
	return factorial(n - 1) * n;
}
int main(){
	int n;
	cin >> n;
	cout << factorial(n);
	
	return 0;
}
