#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <cassert>

using namespace std;

// Reverse the sentence i.e, words appear in reverse order. Eg: "Along
// came a spider." would return "spider. a came Along"

// Algorithm: Let N be the length of the sentence.
// 1. Split the sentence into individual words - O( N )
// 2. Store the words in a stack
// 3. Return the contents of the stack as one big string. - O( N )
// Total run time: O( N ). Total memory - O( N ) used to store the words.
// We can avoid the memory overhead but that's for another time :)
// Input sentence assumption for simplicity
// 1. Words are split by only one space (' ') character.
// 2. Beginning/Ending white space is ignored.
string reverseSentence( string sentence ) {
  vector< string > words;
  istringstream stream( sentence );
  copy( istream_iterator< string >( stream ),
	istream_iterator< string >(),
	back_inserter( words ) );
  // Walk the words in reverse order to return the result.
  string result;
  for( int i = words.size() - 1; i >= 0; --i ) {
    if( i > 0 ) {
      result += words[ i ] + ' ';
    } else {
      result += words[ i ];
    }
  }
  return result;
}

// Test driver
int main() {
  string inputStr = "Along came a spider.";
  string outputStr = "spider. a came Along";
  assert( reverseSentence( inputStr ) == outputStr );

  inputStr = "Abc";
  outputStr = "Abc";
  assert( reverseSentence( inputStr ) == outputStr );

  inputStr = "Ab ";
  outputStr = "Ab";
  assert( reverseSentence( inputStr ) == outputStr );
  
  return 0;
}
   
    
    
