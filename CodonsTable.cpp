///CS213:Programming-II | 2018-2019 | First Semester
///Assignment4 Version1
///Dr: Mohammed Nassef
///Date: December 12 2018
/// Authors: Ahmed Abdulwahab 20170392
///          Lamya Raed Aly   20170399

//Class CodonsTable Functions(Version1)
//input: take sequence from user as a character array

#include "CodonsTable.h"
#include <fstream>
#include <iostream>
#include <string.h>
using namespace std;
//constructor
CodonsTable :: CodonsTable()
{

}
//destructor
CodonsTable::~CodonsTable()
{

}
// Function that loads Codons from a file.
// input: file name
// stores data from file in the codon struct
void CodonsTable::LoadCodonsFromFile(string codonsFileName)
{
    ifstream file (codonsFileName.c_str());
    int i = 0 ;
    while (! file.eof())
    {
        file >> codons[i].value;
        file >> codons[i].AminoAcid;
    }
}


Codon CodonsTable::getAminoAcid(char * value)
{

    char am ;
    for(int i=0 ; i< 64 ; i++)
    {
        if ( strcmp (codons[i].value, value) == 0  )
        {
          am =  codons[i].AminoAcid;
        }
    }

    Codon c;
    strcpy (c.value , value );
    c.AminoAcid = am;

    return c;
}

void CodonsTable::setCodon(char * value, char AminoAcid, int index)
{
    strcpy (codons[index].value , value );
    codons[index].AminoAcid = AminoAcid;

}
