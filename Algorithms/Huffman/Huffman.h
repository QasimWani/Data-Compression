#ifndef Huffman_H
#define Huffman_H

class Huffman
{
private:
    /* data */
    typedef struct matrix
    {
        int frequency;
        char character;
        float occurance;
    }* TDM;
    TDM table;
    
public:
    Huffman(/* args */);
    
};

#endif