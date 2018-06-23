#include "Sequence.h"
#include <fstream>

Sequence::Sequence(string filename)
{
    fstream fin;
    fin.open(filename,ios_base::in);
    fin>>data;
    cout<<data<<endl;
}

int Sequence::length()
{
    return 0;
}

int Sequence::numberOf(char base)
{
    return 0;
}

string Sequence::longestConsecutive()
{
    return 0;
}

string Sequence::longestRepeated()
{
    return 0;
}
    
