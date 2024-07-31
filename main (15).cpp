#include <iostream>

using namespace std;

int main() {
int inputNumber;

bool TargetExp = false; //bool thingy?
  
  cout << "GIMME A NUMBER" << endl;
  cin >> inputNumber;
  
  int numbers[10] = {1,2,3,4,5,6,7,8,9,10};
  
  for (int i = 0; i < 10; i++) {
    for (int j = i+1; j < 10; j++){

  if (numbers[i] + numbers[j] == inputNumber){
    cout << numbers[i] << " + " << numbers[j] << " = " << inputNumber << endl;

  TargetExp = true;
    
  }//end of if statement
      // add if statement here
      if (TargetExp){
        break;
      }
    }// end of second for loop
  if (TargetExp){
    break;
  }
  }// end of first for loop
cout << "Finished?";
return 0;
}