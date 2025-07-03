#include<iostream>
#include<string>
using namespace std;
string dnatorna(string dna) {
    string rna = "";
    for (char c : dna) // Iterate through each character in the DNA string
    
    {
        if (c == 'T') {
            rna += 'U'; // Replace Thymine with Uracil
        } else {
            rna += c; // Keep other characters the same
        }
    }
    return rna;
}


int main() {
    string dna;
    cout << "Enter a DNA sequence(Only A T G C ): ";
    cin >> dna; // Input the DNA sequence from the user
    string rna = dnatorna(dna); // Convert DNA to RNA
    cout << "RNA sequence: " << rna << endl; // Output the RNA sequence
    return 0;
}
/*best soluATION


std::string DNAtoRNA(std::string dna){
  std::replace(dna.begin(), dna.end(), 'T', 'U');
  return dna;
}



*/