//Adventure
//by David Meissner

#include <iostream>
#include <string>
using namespace std;

int main() {
  // variable declaration / definition
  string userInput = "";

  cout << "You are standing on the side of a deserted road.";
  cin >> userInput;

  if (userInput == "wait for bus") {
    cout << "a bus has arrived";
  }
}
