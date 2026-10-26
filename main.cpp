#include <iostream>
using namespace std;
// Lab 9 — Raymudno Lugardo
// CIS 5 Week 09 · Call and return
// Homework continues this program. Do not start a second file.

// TODO: double average(const int a[], int n);
// TODO: void printSummary(double avg);
double average(const int a[], int n) {
  if (n == 0) {
      return 0.0;
  }
  double sum = 0;
  for (int i = 0; i < n; i++) {
      sum += a[i];
  }
  return sum / n; 
}

void printSummary(double avg) {
  cout << "Average: " << avg << endl;
}

int main() {
  const int N = 4;
  int scores[N] = {80, 90, 70, 100};
  // TODO: double avg = average(scores, N);
  double avg = average(scores, N);
  // TODO: printSummary(avg);
  printSummary(avg);
  
  return 0;
}
