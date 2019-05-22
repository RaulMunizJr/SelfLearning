/*
  In DNA strings, symbols "A" and "T" are complements of each other, as "C" and "G". 
  You have function with one side of the DNA (string, except for Haskell); 
  you need to get the other complementary side. DNA strand is never empty 
  or there is no DNA at all (again, except for Haskell).

/////////////////////////////////////////////////////////////////////
  DNA_strand ("ATTGC") # return "TAACG"
  DNA_strand ("GTAT") # return "CATA"
*/

/*
Range-based for loop
The for-loop has another syntax, which is used exclusively with ranges:

for ( declaration : range ) statement;

(auto) -> Here, the type of c is automatically deduced as the type of the elements in str.
*/


#include <string>

std::string DNAStrand(const std::string& dna)
{
  std::string dna1 = dna; //dna declared const
  for(auto &c : dna1)
  {
    switch (c)
    {
      case 'C': c = 'G'; break;
      case 'G': c = 'C'; break;
      case 'A': c = 'T'; break;
      case 'T': c = 'A'; break;
    }
  }
  return dna1;
}

/**********************************************************************/
//Using hash map
/*
  std::map is a sorted associative container that contains key-value pairs 
  with unique keys. Keys are sorted by using the comparison function Compare. 
  Search, removal, and insertion operations have logarithmic complexity.

  map - key and value     (make_pair)-log n     log n     O(1)  "->"  ;  insert, find, size
*/
#include <map>

const std::map<char, char> mapping =
{
    { 'A', 'T' },
    { 'T', 'A' },
    { 'C', 'G' },
    { 'G', 'C' },
};


std::string DNAStrand(const std::string& dna)
{
    std::string dna2 = dna;
    for (auto &c : dna2)
    {
        c = mapping.at(c);
    }
    return dna2;
}