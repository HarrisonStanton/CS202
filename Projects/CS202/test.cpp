#include <iostream>
#include <fstream>


using namespace std;

int main (){

  ifstream fin;
    fin.open("newUnoDeck.txt");
    char currentChar = ' ';
    int numOfSpaces = 0;

    for (int i = 0; i < 50; i++){
        fin.get(currentChar);
        if (currentChar == ' '){
          ++numOfSpaces;
	  cout << numOfSpaces << endl;
        }
        cout << currentChar << endl;
    }
    
}
