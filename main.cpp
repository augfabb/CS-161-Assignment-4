// ------------- FILE HEADER -------------
// Author ✅: 
// Assignment ✅:
// Date ✅:
// Citations: 


// ------------- ZYBOOKS SCORES -------------
// Chapter ✅: 
// Participation ✅: 
// Challenge ✅:
// Labs ✅:


// ------------- DISCORD POSTS -------------
// https://discord.com/invite/URYKKf8YHm
// Count ✅:
// Links (Optional): 


// ------------- DESIGN DOCUMENT -------------
// A. INPUT ✅: 
// B. OUTPUT ✅:
// C. CALCULATIONS ✅:
// D. LOGIC and ALGORITHMS ✅:
//    (Optional) flow chart link or file name: 


// ------------- TESTING -------------
// PASS ALL GIVEN SAMPLE RUN TESTS ✅: 
// (Optional) Additional tests count:   


// ------------- CODE -------------
#include <iostream>

using namespace std;

// Function prototypes (if any)


// Main function
// https://en.cppreference.com/w/cpp/language/main_function.html
int main(int argc, char* argv[]) {

    string phraseOne;
    string phraseTwo;

    int pos1 = 0;
    int pos2 = 0;
    cout << "Enter first phrase.";
    getline(cin, phraseOne);
    cout << "Enter the second phrase.";
    getline(cin, phraseTwo);
    
     pos1 = phraseOne.find(phraseTwo);
     pos2 = phraseTwo.find(phraseOne);

    if (phraseOne == phraseTwo) {
        cout << "Both phrases are the same.";
    }
    else if (phraseTwo.find(phraseOne) != string::npos ) {
      cout << phraseOne << " is found in " << phraseTwo << endl;  
      cout << phraseTwo.substr(pos2); 
    }
    else if (phraseOne.find(phraseTwo) != string::npos) {
      cout << phraseTwo << " is found in " << phraseOne << endl;
    }
    //hello
    
   
        
    


    




  return 0;
}

// Function implementations (if any)


// ------------- DESIGN -------------
/* 
Program Name:

Program Description:

Design:
A. INPUT
Define the input variables including name data type. 

B. OUTPUT
Define the output variables including data types. 

C. CALCULATIONS
Describe calculations used by algorithms in step D.  
List all formulas. 
If there are no calculations needed, state there are no calculations.

D. LOGIC and ALGORITHMS
Design the logic of your program using pseudocode or flowcharts. 
Use conditionals, loops, functions or array constructs.
List the steps in transforming inputs into outputs. 
https://github.com/Glen-Sasek-PCC-Instructor/2025-06-22/blob/main/Pseudocode-Reference.txt


SAMPLE RUNS
Copy from assignment document.

*/
