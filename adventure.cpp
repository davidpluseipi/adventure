//Adventure
//by David Meissner

#include <iostream> // cin, cout
#include <string> // string datatype
#include <sstream> // ss.str()
using namespace std;

int main() {
  // variable declaration / definition
  char userInput[50] = " ";
  string userInputStr = " ";
  //stringstream ss; // was used when testing stringstream use

  // user commands
  string cmd001 = "wait for bus";

  cout << "You are standing on the side of a deserted road." << endl;
  cin >> userInput;
  cout << userInput;
  //userInputStr = ss.str();
  userInputStr = userInput;
  cout << userInputStr << endl;

  if (!userInputStr.compare(cmd001)) {
    cout << "A bus has arrived.";
  } else {
    cout << "I don't understand that." << endl;
  }

  return 0;

}
