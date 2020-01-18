#include "tdm.h"
#include <cstdlib>
#include <iostream>

using namespace std;

tdm::tdm()
{
    matrix = new int[128];
    ascii = 0;
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
    if(matrix[ascii] < max)
    {
        frq = matrix[ascii] + 1;
    }
    matrix[ascii] = frq;
}

int * tdm::generateTDM(string data)
{
    max = data.length();
    for (int i = 0; i < max; i++)
    {
        append(data[i]);
    }
    return matrix;
}

char tdm::mostCommonChar(int index)
{
    return char(matrix[index]);
}

int tdm::mostCommonFrq(int index)
{
    return matrix[index];
}

void tdm::printTDM()
{
    for (int i = 0; i < 128; i++)
    {
        if(matrix[i] <= max)
        {
            cout << i << ".\t: " << matrix[i] << endl; 
        }

    }
}