#include<iostream>
#include<string>
#include<cctype>
using namespace std;

string fake_binary(const string& inputstr) // a string parameter to accept the input string
{
    string result; // Initialize an empty string to store the result
    for(char c : inputstr) // Iterate through each character in the input string
    {
        if(isdigit(c)) // check if the character is a digit
        {
            result += (c < '5') ? '0' : '1'; // Convert digits to 0 if less than 5, otherwise to 1
        }
        
    }

    // If no digits were found, return a message indicating that
    if(result.empty()) {
        result = "No digits found in input.";
    }
    return result;
}

 int main() {
    string input;
    cout << "Enter a string containing digits and non-digit characters: ";
    getline(cin, input);

    string output = fake_binary(input);
    cout << "Converted string: " << output << endl;

    return 0;
 }



 /*

 best practice:
 #include <string>

std::string fakeBin(std::string str){
  for (auto &s : str)   // Use a range-based for loop to iterate through each character in the string
	{
		s = s < '5'?'0':'1'; // Convert each character to '0' if it's less than '5', otherwise to '1'
	}
  return str;
}
 
 
 
 */