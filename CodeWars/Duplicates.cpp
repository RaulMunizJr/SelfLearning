//Count the number of Duplicates

/*
Example

"abcde" -> 0 # no characters repeats more than once
"aabbcde" -> 2 # 'a' and 'b'
"aabBcde" -> 2 # 'a' occurs twice and 'b' twice (`b` and `B`)
"indivisibility" -> 1 # 'i' occurs six times
"Indivisibilities" -> 2 # 'i' occurs seven times and 's' occurs twice
"aA11" -> 2 # 'a' and '1'
"ABBA" -> 2 # 'A' and 'B' each occur twice
*/

//Data Structures:							insert		find		size
/*
	set - sorted order, no duplicates.		log n 		log n 		O(1)
unordered_set - similar (search diff)		O(1)		O(1)		O(1)
map - key and value				(make_pair)-log n 		log n 		O(1)	"->"


*/
#include <unordered_set>
size_t duplicateCount(const std::string& in); // helper for tests

size_t duplicateCount(const char* in)
{
    std::unordered_set<char> singles, multiples;
    while(*in != '\0')
    {
      if(singles.find(tolower(*in)) == singles.end())
      {
        singles.insert(tolower(*in));
        in++;
      }
      else
      {
        multiples.insert(tolower(*in));
        in++;
      }
    }
    return multiples.size();
}

