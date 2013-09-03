/***************************************************************/
/* PROGRAM:                                                    */
/*                                                             */
/* AUTHOR:                                                     */
/*                                                             */
/* DATE:                                                       */
/*                                                             */
/* REVISIONS:                                                  */
/*                                                             */
/* PURPOSE:                                                    */
/*                                                             */
/***************************************************************/
#include <iostream>
#include <fstream>
#include <cstdio>

using namespace std;

int main () {

    
    char unshuffledUnoDeck[5][25][13];
    char shuffledUnoDeck[108][13];
    ifstream fileInput;
    int numOfSpaces = 0;
    char currentChar = ' ';
    int locOfNullTerm = 12;


    fileInput.open("newUnoDeck.txt");
    

    for ( int i = 0; i < 5; i++ ) {
        for ( int j = 0; j < 25; j++) {
	    for (int k = 0; k < 13; k++) {
                fileInput.get(currentChar);
	        if ( currentChar == ' ') {
                    ++numOfSpaces;
		}
                if (numOfSpaces == 2){
		    locOfNullTerm = k;
		    break;
                }  
	        unshuffledUnoDeck[i][j][k] = currentChar;
		//cout << numOfSpaces;
	    }
            numOfSpaces = 0;
            unshuffledUnoDeck[i][j][locOfNullTerm] = '\0';
        }
    }

    for (int i = 0; i < 4; i++ ) {
        for ( int j = 0; j < 25; j++ ) {
        cout << unshuffledUnoDeck[i][j];
      }
    }

    //cout << unshuffledUnoDeck[0][0];
}
