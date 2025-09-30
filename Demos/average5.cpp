#include <iostream>

using namespace std;

int main() {
  int
    sum = 0,
    count = 0,
    value;
  double
    average;

  while (true) {
    cout << "Enter a value (-1 to quit): ";
    cin >> value;
    
    if (value == -1)
      break;
    
    sum = sum + value;		// sum += value also works here
    count++;
  }
  
  average = (double)sum / count;
  
  cout << "Average is " << average << endl;
  
  return 0;
}

