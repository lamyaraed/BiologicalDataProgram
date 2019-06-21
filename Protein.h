///CS213:Programming-II | 2018-2019 | First Semester
///Assignment4 Version1
///Dr: Mohammed Nassef
///Date: December 12 2018
/// Authors: Ahmed Abdulwahab 20170392
///          Lamya Raed Aly   20170399

//Class Protein : Child Class (Version1)

#ifndef PROTEIN_H
#define PROTEIN_H

enum Protein_Type {Hormon, Enzyme, TF, Cellular_Function};

class Protein : public Sequence
{
  	private:
        Protein_Type type;
      public:
 	 	// constructors and destructor
 	 	Protein();
 	 	Protein(char * p);
 	 	~Protein();
 	 	void Print();
 	 	// return an array of DNA sequences that can possibly
                // generate that protein sequence
        DNA* GetDNAStrandsEncodingMe(const DNA & bigDNA);
};
#endif
