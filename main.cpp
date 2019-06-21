///CS213:Programming-II | 2018-2019 | First Semester
///Assignment4 Version1
///Dr: Mohammed Nassef
///Date: December 12 2018
/// Authors: Ahmed Abdulwahab 20170392
///          Lamya Raed Aly   20170399
#include <iostream>
#include "CodonsTable.h"
using namespace std;

int main()
{
    CodonsTable c ;
    c.LoadCodonsFromFile("RNA_codon_table.txt");

    char * seq ;
    cin >> seq ;


    cout << " 1- RNA \n 2- DNA \n ";

    return 0;
}
