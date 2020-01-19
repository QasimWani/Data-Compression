#ifndef TDM_H
#define TDM_H
#include <string>
using namespace std;
class tdm
{
private:
    typedef struct TDM
    {
        char character;
        int frequency;
    }* tdm_adt;
    
    tdm_adt * matrix;
    tdm_adt temp;
    int ascii;
    int frq;
    int max;
    void append(char data); // helper function for generateTDM(N)    
public:
    tdm();
    ~tdm();
    tdm_adt generateTDM(string data); // array of most occuring characters with their frequencies and the characters based on input char array.
    char mostCommonChar(int index=0); //return the nth most common occuring character
    int mostCommonFrq(int index=0); //returns the nth most common frequency of most common occuring character
    void printTDM();
};
#endif