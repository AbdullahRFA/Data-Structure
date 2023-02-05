#include<bits/stdc++.h>
using namespace std;


// Algorithm to Find Path Matrix
vector<vector<int>> FindPathMatrix(vector<vector<int>> adjacency) {

	vector<vector<int>> path_matrix(adjacency.size());

	// Storing our Path0
	for (int i = 0; i < adjacency.size(); i++) {
		for (int j = 0; j < adjacency.size(); j++) {
			path_matrix[i].push_back(adjacency[i][j]);
		}
	}

	// Main algorithm starts here
	for (int k = 1; k < adjacency.size(); k++) {

		for (int i = 1; i < adjacency.size(); i++) {

			for (int j = 1; j < adjacency.size(); j++) {

				path_matrix[i][j] = (path_matrix[i][j] == 1 or
				                     (path_matrix[i][k] == 1 and path_matrix[k][j] == 1)
				                    );
			}
		}
	}

	return path_matrix;
}


int main() {

	/*
	We will find path matrix for this graph

		     5
		     ^
      		     |
		3 -> 4
		^    ^
		|    |
		1 -> 2

	*/

	// Example Adjacency matrix, row 0 and column 0 doesn't contribute to path matrix
	vector<vector<int>> adjacency_matrix{
		{0, 0, 0, 0, 0, 0},
		{0, 0, 1, 1, 0, 0},
		{0, 0, 0, 0, 1, 0},
		{0, 0, 0, 0, 1, 0},
		{0, 0, 0, 0, 0, 1},
		{0, 0, 0, 0, 0, 0}
	};

	auto pathMatrix = FindPathMatrix(adjacency_matrix);

	// Output the path matrix
	for (int i = 1; i < pathMatrix.size(); i++) {
		for (int j = 1; j < pathMatrix.size(); j++) {
			cout << pathMatrix[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
