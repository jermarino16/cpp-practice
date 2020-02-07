#include <iostream>
using namespace std;

void say_hello_word(){
	cout << "Hello World" << endl;

}

int main(){
	for (int num: {1,2,3}){
		cout << num << " time " << endl;
		say_hello_word();
	}

	return 0;
}