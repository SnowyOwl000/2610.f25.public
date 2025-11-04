#include <iostream>
#include <iomanip>
#include <unistd.h>

using namespace std;

int main() {
  int
    square[9][9]={0},
    size,
    magic,			// magic number
    count=1,
    row,col,			// which cell is being filled in
    nextRow,nextCol;		// next cell to fill in

  cout << "\e[2J\e[H";		// \e = escape char
    
  // step 1: get the size
  cout << "Enter size [3,5,7,9]: ";
  cin >> size;
  
  if (size != 3 && size != 5 && size != 7 && size != 9) {
    cout << "Bad size" << endl;
    return 1;
  }
  
  // step 2: start top row, center column
  row = 0;
  col = size / 2;
  
  // step 3: count from 1 to size * size
  for (;count <= size*size;count++) {
    // step 3a: fill in cell
    square[row][col] = count;
    
    cout << "\e[" << (row+2) << ';' << (1+col*3) << 'H' << setw(3) << count;
    cout.flush();
    sleep(1);
    
    // step 3b: find next cell
    // try up one row, right one col
    nextRow = row - 1;
    nextCol = col + 1;
    // wrap around if necessary
    if (nextRow < 0)
      nextRow = size - 1;
    if (nextCol == size)
      nextCol = 0;
      
    // if that cell is empty, use it
    if (square[nextRow][nextCol] == 0) {
      row = nextRow;
      col = nextCol;
    } else {
    // if not empty, move down one row
      row++;
      if (row == size)
        row = 0;
    }
  }
  /*
  // step 4: output result
  for (row=0;row<size;row++) {
    for (col=0;col<size;col++)
      cout << setw(3) << square[row][col];
    cout << endl;
  }
  */
  
  cout << "\e[" << (size+4) << ";1H";
  
  // for fun: calculate the magic number
  magic = (size * (size * size + 1)) / 2;
  cout << "Magic number: " << magic << endl;
  
  // all done!
  return 0;
}

