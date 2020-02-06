#include <iostream>
#include <array>

using namespace std;

int main(){
	// char vowels[] {'a', 'e', 'i', 'o', 'u'};
	// char vowels[5] {}; //initialize all to 0 or null but allocates space
	int vowels[5] {10, 5}; //initialize first two to 10,5 then 0

	// for (int i = 0; i < vowels.size(); i++){
	// 	cout << "The vowel is: " << vowels[i] << endl;
	// }
	cout << vowels[0] << endl;
	cout << vowels[1] << endl;
	cout << vowels[2] << endl;
	cout << vowels[3] << endl;
	cout << vowels[4] << endl;

}