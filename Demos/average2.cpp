#include <iostream>

using namespace std;

int main() {
  int
    sum = 0,
    count = 0,
    value,
    average;

  cout << "Enter a value (-1 to quit): ";
  cin >> value;
    
  while (value != -1) {
    sum = sum + value;		// sum += value also works here
    count++;

    cout << "Enter a value (-1 to quit): ";
    cin >> value;
  }
  
  average = sum / count;
  
  cout << "Average is " << average << endl;
  
  return 0;
}

