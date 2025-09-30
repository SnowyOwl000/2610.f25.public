#include <iostream>

using namespace std;

int main() {
  int
    sum = 0,
    count = 0,
    value,
    average;
    
  while (value != -1) {
    cout << "Enter a value (-1 to quit): ";
    cin >> value;
    
    sum = sum + value;		// sum += value also works here
    count++;
  }
  
  average = sum / count;
  
  cout << "Average is " << average << endl;
  
  return 0;
}

