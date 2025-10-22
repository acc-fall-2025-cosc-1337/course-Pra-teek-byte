
#include "func.h"

double get_gc_content(const string& dna)
{
    if (dna.empty()) return 0.0;

    int gc_count = 0;
    for (char base : dna)
    {
        if (base == 'G' || base == 'C')
            gc_count++;
    }
    return static_cast<double>(gc_count) / dna.size();
}

// Reverse string manually
string get_reverse_string(string dna)
{
    string reversed = "";
    for (int i = static_cast<int>(dna.size()) - 1; i >= 0; i--)
        reversed += dna[i];
    return reversed;
}

// Reverse complement (A<->T, C<->G)
string get_dna_complement(string dna)
{
    string reversed = get_reverse_string(dna);
    for (char &base : reversed)
    {
        switch (base)
        {
            case 'A': base = 'T'; break;
            case 'T': base = 'A'; break;
            case 'C': base = 'G'; break;
            case 'G': base = 'C'; break;
            default: break; 
        }
    }
    return reversed;
}