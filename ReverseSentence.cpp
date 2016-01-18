#include <iostream>
#include <string>
#include <vector>

// Reverse the sentence i.e, words appear in reverse order. Eg: "Along
// came a spider." would return "spider. a came Along"

// Algorithm: Let N be the length of the sentence.
// 1. Split the sentence into individual words - O( N )
// 2. Store the words in a stack
// 3. Return the contents of the stack as one big string. - O( N )
// Total run time: O( N ). Total memory - O( N ) used to store the words.
// We can avoid the memory overhead but that's for another time :)
string reverseSentence( string sentence ) {
  vector< string > words;
  
}
