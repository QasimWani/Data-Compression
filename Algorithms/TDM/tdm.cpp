#include "tdm.h"
#include <cstdlib>
#include <iostream>

using namespace std;

tdm::tdm()
{
    matrix = new tdm_adt[128];
    ascii = 0;
    temp = NULL;
    frq = 0;
    max = 1;    
}

tdm::~tdm()
{
    delete[] matrix;
}

void tdm::append(char data)
{
    ascii = int(data);
    frq = 1;
    cout << (&matrix[ascii]->frequency) << endl;
    cout << "End" << endl;
    if (&matrix[ascii]->character!=NULL)
    {
        matrix[ascii]->character = data;
    }
    else
    {
        frq = matrix[ascii]->frequency + 1;
    }
    matrix[ascii]->frequency = frq;
    if (matrix[ascii] != NULL)
    {
        tdm_adt n = new TDM;
        n->character = data;
        n->frequency = frq;
        temp = n;
        matrix[ascii] = temp;
    }
    cout << temp << endl;
    cout << ascii << "\t" << data << endl;
    cout << matrix[ascii] << endl;
    if(matrix[ascii] < max)
    {
        frq = matrix[ascii] + 1;
    }
    matrix[ascii] = frq;
}

tdm::tdm_adt tdm::generateTDM(string data)
{
    max = data.length();
    for (int i = 0; i < max; i++)
    {
        append(data[i]);
    }
    return * matrix;
}

char tdm::mostCommonChar(int index)
{
    return matrix[index]->character;
}

int tdm::mostCommonFrq(int index)
{
    return matrix[index]->frequency;
}

void tdm::printTDM()
{
    for (int i = 0; i < 128; i++)
    {
        if (&matrix[i]->character!=NULL)
        {
            cout << i << ".\t: " << matrix[i] << endl; 
        }

    }
}
