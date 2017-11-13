#include <iostream>
using namespace std;
//Edit in github
//Im branch test
int factorial(int n){
	if(n == 0)
		return 1;
	return factorial(n - 1) * n;
}
int main(){
	//Get input
	int n;
	cin >> n;
	cout << factorial(n);
	
	return 0;
}
