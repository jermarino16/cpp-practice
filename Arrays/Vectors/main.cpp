#include <iostream>
#include <vector>
using namespace std;

int main(){
	// vector<int> score {5, 10, 15};

	// // for (int i =0; i <score.size(); i++){
	// // 	cout << score.at(i) << endl;
	// // }

	//vector of vectors
	vector<vector<int>> movie_ratings {
		{1, 2, 3, 4},
		{4, 3, 2, 1},
		{0, 0, 0, 0}
	};
	for(int i =0; i < movie_ratings.size(); i++){
		cout << "Reviewer " << i + 1 <<  " scores: ";

		for (int j = 0; j<movie_ratings[0].size(); j++ ){
			cout << movie_ratings[i][j] << " ";
		}
		cout <<endl;
	}

	return 0;
}