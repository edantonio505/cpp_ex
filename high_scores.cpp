#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>

using namespace std;


int main ()
{
	vector<int>::const_iterator iter;

	cout << "Creating a list of scores";
	vector<int> scores;
	scores.push_back(1500);
	scores.push_back(3500);
	scores.push_back(7500);

	cout << "\nHigh Scores:\n";

	for (iter = scores.begin(); iter != scores.end(); ++iter)
	{
		cout << *iter << endl;
	}




	// Finding a Score
	cout << "\nFinding a score.";
	int score;
	cout << "\nEnter a score to find: ";
	cin >> score;
	iter = find(scores.begin(), scores.end(), score);
	if (iter != scores.end())
	{
		cout << "Score found.\n";
	} else {
		cout << "Score not found.\n";
	}




	// Randomizing scores orders
	cout << "\nRandomizing scores.";
	srand(static_cast<unsigned int>(time(0))); //Seeding random initialization
	random_shuffle(scores.begin(), scores.end());
	cout << "\nHigh Scores: \n";
	for (iter = scores.begin(); iter != scores.end(); ++iter)
	{
		cout << *iter << endl;
	}





	// sorting scores
	cout << "\nSorting scores.";
	sort(scores.begin(), scores.end());
	cout << "\nHigh Scores:\n";
	for(iter = scores.begin(); iter != scores.end(); ++iter)
	{
		cout << *iter << endl;
	}

	return 0;
}