// to split an string we have to use library function called istringstream
/*approach:
1 Create an input string stream from the input string using std::istringstream.
2 Iterate through the stream, using std::getline to extract each substring separated by the delimiter.
3 Add the extracted substring to the array.
4 Print the array of substrings.*/

// C++ Program to illustrate how to split a string into an
// array of substrings
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

// Function to split a string into tokens based on a
// delimiter
void splitString(const string& input, char delimiter,
                 string arr[], int& index)
{
    // Creating an input string stream from the input string
    istringstream stream(input);

    // Temporary string to store each token
    string token;

    // Read tokens from the string stream separated by the
    // delimiter
    while (getline(stream, token, delimiter)) {
        if (!token.empty()) {
            // Add the token to the array
            arr[index++] = token;
        }
    }
}

int main()
{
    // Input string
    string input = "Hello, I am Geek from Geeksforgeeks";

    // Delimiter
    char delimiter = ' ';

    // Array to store the substrings
    string arrayOfSubStr[100];

    // Index to keep track of the number of substrings
    int index = 0;

    // Calling the function to split the input string into
    // an array of substrings
    splitString(input, delimiter, arrayOfSubStr, index);

    // Print the array of substrings
    for (int i = 0; i < index; i++) {
        cout << arrayOfSubStr[i] << endl;
    }

    return 0;
}
