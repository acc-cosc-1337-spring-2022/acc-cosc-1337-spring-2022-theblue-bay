#include "string"
#include "vectors.h"
#include "algorithm"

double getGcContent(const std::string &dna)
{
    size_t c = std::count(dna.begin(), dna.end(), 'c');
    size_t g = std::count(dna.begin(), dna.end(), 'g');

    double total = c + g;

    double dnaLength = dna.length();

    double percent = total / dnaLength;

    return percent;
}

std::string getReverseString(std::string dna)
{
    std::reverse(dna.begin(), dna.end());

    return dna;
}

std::string getDnaCompliment(const std::string  &dna)
{
    std::string complement = "";

    for (int i = dna.length()-1; i >= 0; i--)
    {
        switch(dna[i]) 
        {
            case 'g': {
                complement = complement + 'c';
                break;
            }
            case 'c': {
                complement = complement + 'g';
                break;
            }
            case 't': {
                complement = complement + 'a';
                break;
            }
            case 'a': {
                complement = complement + 't';
                break;
            }
        }
    }
    return dna;


    
}