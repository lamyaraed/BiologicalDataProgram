///CS213:Programming-II | 2018-2019 | First Semester
///Assignment4 Version1
///Dr: Mohammed Nassef
///Date: December 12 2018
/// Authors: Ahmed Abdulwahab 20170392
///          Lamya Raed Aly   20170399

//Class Sequence: Parent Class (Version1)
//input: take sequence from user as a character array

#ifndef SEQUENCE_H
#define SEQUENCE_H

class Sequence
{
  	protected:
        char * seq;
    public:
 	 	// constructors and destructor
        Sequence();
        Sequence(int length);
        Sequence(Sequence& rhs);
        virtual ~Sequence();
 	 	// pure virtual function that should be overridden because every
        // type of sequence has its own details to be printed
        virtual void Print()= 0;
 	 	// friend function that will find the LCS (longest common
        // subsequence) between 2 sequences of any type, according to
        // polymorphism
        friend char* Align(Sequence * s1, Sequence * s2);
};
#endif // SEQUENCE_H
