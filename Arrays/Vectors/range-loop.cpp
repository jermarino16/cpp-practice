#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> test_scores {70, 90, 80};
	int total_score = 0;

	for (int score: test_scores){
		total_score += score;
	}
	// cout << total_score;

	int average_score = total_score / test_scores.size();

	cout << "The average test score is: " << average_score << endl;

	return 0;
}