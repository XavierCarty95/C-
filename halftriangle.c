#include <iostream>
using namespace std;

int main(){
for(int row = 1; row <= 5; row++){
      
    for (int spaces = 5; spaces >= row; spaces--){
        cout <<  " ";
  }
    for (int dashes = 2; dashes <= row + 1; dashes++){
         cout << "#";
    }
    
  cout << "\n";
}
  
 }
