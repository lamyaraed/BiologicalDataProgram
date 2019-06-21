///CS213:Programming-II | 2018-2019 | First Semester
///Assignment4 Version1
///Dr: Mohammed Nassef
///Date: December 12 2018
/// Authors: Ahmed Abdulwahab 20170392
///          Lamya Raed Aly   20170399

//Class Sequence Functions(Version1)
//input: take sequence from user as a character array

#include "Sequence.h"
#include <string.h>
using namespace std;
//constructor that points to a new char array of size 100
Sequence::Sequence()
{
  seq = new char [100];
}
//constructor that points to a new char array of size length
//that will be entered by the user
Sequence::Sequence(int length)
{
  seq = new char [length];
}
//constructor that creates a new Sequence to copy the sequence
Sequence::Sequence(Sequence& rhs)
{
  seq = new char [strlen(rhs.seq)];
  strcpy(seq , rhs.seq) ;
}
// destructor to delete the data entered
Sequence::~Sequence()
{
    delete [] seq;
}

