#include <iostream>
#include <vector>
using namespace std;

int main(){

	for (int i{1}; i<=100; i++){
		cout << i << ((i%10 ==0) ? "\n" : " yo ");
	}

	return 0;
}