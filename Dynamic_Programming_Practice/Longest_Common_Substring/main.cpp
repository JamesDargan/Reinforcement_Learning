#include <iostream>
#include <string>
#include <cstring>
using namespace std;

// Function to find the Longest common substring of sequences
// X[0..m-1] and Y[0..n-1]
string LCS(string X, string Y, int m, int n)
{
  int maxlen = 0; // Stores the max lenght of LCS
  int endingIndex = m; // Stores the ending index of LCS in X



// Main function
int main()
{
  string X = "ABC", Y = "BABA";
  int m = X.length(), n = Y.length();

  // Find longest common substring
  cout << "The Longest Common Substring is " << LCS(X, Y, m, n);

  return 0;
}