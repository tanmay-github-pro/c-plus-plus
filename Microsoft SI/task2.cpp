// you can use includes, for example:
// #include <algorithm>
#include <bits/stdc++.h>
using namespace std;
// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
void sortInPair(vector<int> &A, vector<int> &P);

bool solution(vector<int> &A, vector<int> &P, int B, int E) {
  // write your code in C++14 (g++ 6.2.0)
  // sorting so that positions are arranged in ascending order
  sortInPair(A, P);
  // Moving package to max distance that a crane can transport it
  for (int k = 0; k < (int)A.size(); k++) {
    if (B >= (P[k] - A[k]) && B <= (P[k] + A[k])) {
      B = P[k] + A[k];
    }
  }
  if (B >= E) {
    return true;
  } else
    return false;
}

void sortBubble(vector<int> &A, vector<int> &P) {
  for (int i = 0; i < (int)A.size() - 1; i++) {
    for (int j = 0; j < (int)A.size() - i - 1; j++) {
      if (P[j] > P[j + 1]) {
        int temp = P[j];
        P[j] = P[j + 1];
        P[j + 1] = temp;
        int temp2 = A[j];
        A[j] = A[j + 1];
        A[j + 1] = temp2;
      }
    }
  }
}

void sortInPair(vector<int> &A, vector<int> &P) {
  int n = A.size(); // size of both A and P is same
  pair<int, char> pairedArr[n];

  // Store in pairs.
  for (int i = 0; i < n; i++) {
    pairedArr[i].first = P[i];
    pairedArr[i].second = A[i];
  }

  // Sorting the pair array.
  sort(pairedArr, pairedArr + n);

  // Modifying original arrays
  for (int i = 0; i < n; i++) {
    P[i] = pairedArr[i].first;
    A[i] = pairedArr[i].second;
  }
}
