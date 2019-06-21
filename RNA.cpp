///CS213:Programming-II | 2018-2019 | First Semester
///Assignment4 Version1
///Dr: Mohammed Nassef
///Date: December 12 2018
/// Authors: Ahmed Abdulwahab 20170392
///          Lamya Raed Aly   20170399

//Class RNA Functions(Version1)

#include "RNA.h"
#include <string.h>
using namespace std;
// constructor that sets the RNA type to a default: mRNA
RNA::RNA()
{
  type = mRNA;
}
// constructor that takes sequence and RNA type from the user
RNA::RNA(char * seq, RNA_Type atype)
{
  strcpy (this->seq, seq);
  type = atype;
}
RNA::RNA(RNA& rhs)
{
  strcpy (seq, rhs.seq);
  type = mRNA;
}
// destructor
RNA::~RNA()
{
  //
}
// function print to print the RNA sequence
void RNA::Print()
{
     cout << seq ;
}
Protein RNA::ConvertToProtein(const CodonsTable & table)
{

}
// converting a RNA sequence to a DNA sequence
DNA RNA::ConvertToDNA()
{
   char * seqDNA ;

  seqDNA = new char [strlen(seq)];
  for(int i =0 ; i< strlen(seq) ; i++)
  {
      if(seq[i] == 'U')
      {
         seqDNA[i] = 'T';
      }
      else
        seqDNA[i] = seq[i];
  }

   for(int i =0 ; i< strlen(seq) ; i++)
  {
      if(seq[i] == 'A')
      {
         seqDNA[i] = 'T';
      }
      else
        seqDNA[i] = seq[i];
  }
  DNA D(seqDNA,promoter) ;
  D.BuildComplementaryStrand();
  return D;

}
