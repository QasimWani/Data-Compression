#ifndef TDM_H
#define TDM_H

using namespace std;
class tdm
{
private:
    typedef struct TDM
    {
        char character;
        int frequency;
    }* tdm_adt;
    
    tdm_adt matrix;
    char value;
    int ascii;
    tdm_adt sortBasedTDM(); // helper function for generateTDM(N)    
public:
    tdm(/* args */);
    ~tdm();
    char * generateTDM(int n); // array of n most occuring characters with their frequencies and the characters
    char mostCommonChar(); //return the most common occuring character
    int mostCommonFrq(); //returns the frequency of the most common occuring character
};
#endif