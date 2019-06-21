///CS213:Programming-II | 2018-2019 | First Semester
///Assignment4 Version1
///Dr: Mohammed Nassef
///Date: December 12 2018
/// Authors: Ahmed Abdulwahab 20170392
///          Lamya Raed Aly   20170399

//Class DNA Functions(Version1)

#include "DNA.h"
#include "RNA.h"
#include <string.h>
using namespace std;
// DNA constructor that creates a new strand that points to DNA
// and sets the DNA type to its default: promoter
DNA::DNA()
{
    complementary_strand = new DNA;
    type = promoter;
    startIndex = 0;
    endIndex = 0;
}
// constructor that creates a DNA sequence
// takes a sequence from user and points it to a new DNA sequence
// and sets the DNA type to what the user entered
DNA::DNA(char * seq, DNA_Type atype)
{
  strcpy (this->seq, seq);
  type = atype;
}
DNA::DNA(DNA& rhs)
{
  strcpy (seq, rhs.seq);
  type = promoter;
}
// destructor to delete all the data stored as DNA
DNA::~DNA()
{
  delete complementary_strand;
}
// function print to print the DNA sequence
void DNA::Print()
{
    cout << seq ;
}
// Converting DNA sequence to RNA sequence
// take one strand and changing every T with a U
// and store it in aa a RNA sequence. (sends it to RNA class)
RNA DNA::ConvertToRNA()
{
  char * seqRNA ;

  seqRNA = new char [strlen(seq)];
  for(int i =0 ; i< strlen(seq) ; i++)
  {
      if(seq[i] == 'T')
      {
         seqRNA[i] = 'U';
      }
      else
        seqRNA[i] = seq[i];
  }
  RNA R(seqRNA,mRNA) ;
  return R;
}
// function to build a second strand for the DNA entered if user
// entered one strand only.
void DNA::BuildComplementaryStrand()
{
  for(int i =0 ; i< strlen(seq) ; i++)
  {
      if(seq[i] == 'T')
      {
         seq[i] = 'A';
      }
      else if(seq[i] == 'A')
      {
         seq[i] = 'T';
      }

      else if(seq[i] == 'C')
      {
         seq[i] = 'G';
      }
      else if(seq[i] == 'G')
      {
         seq[i] = 'C';
      }
  }
}
