#include <iostream>

using namespace std;

int main() {
  double
    x,y;
    
  cout << "Enter coordinates (x y): ";
  cin >> x >> y;
  
  if (x > 0) {
  
    if (y > 0)
    
      cout << "Quadrant I" << endl;
      
    else
    
      cout << "Quadrant IV" << endl;
      
  } else {
  
    if (y > 0)
    
      cout << "Quadrant II" << endl;
      
    else
    
      cout << "Quadrant III" << endl;
      
  }
  
  cout << 1 / 0 << endl;
  
  return 0;
}

      
