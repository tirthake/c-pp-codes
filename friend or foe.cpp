#include <string>
#include<iostream>
#include <vector>
using namespace std;
vector<string> friendOrFoe(const vector<string>& input) {
    
  
  vector<string> output; // Initialize an empty vector to store the result
    for (const string& str : input) { // Iterate through each string in the input vector
        if (str.length() == 4) { // Check if the length of the string is 4
            output.push_back(str); // push_back the string to the output vector if the condition is met
        }
    }
  

    return output;
}
int main() {
    vector<string> input = {"Ryan", "Kieran", "Mark", "John"}; // Example input vector
    vector<string> result = friendOrFoe(input); // Call the function to get the result

    for (const string& str : result) { // Iterate through the result vector
        cout << str << endl; // Print each string in the result vector
    }

    return 0;
}   


/*alternative:

std::vector<std::string> friendOrFoe(const std::vector<std::string>& input)
{
  std::vector<std::string> output;

  for (auto str : input)  // iliterate through each string in the input vector
   if (str.length() == 4) //checking condition
   result.push_back(str); // if matched push that string to the newsat output vector.

  return output;
}




*/