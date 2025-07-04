#include<iostream>
#include<string>
using namespace std;

string bool_to_word(bool value)
{
  return value ?"Yes":"No"; // Convert boolean to string "Yes" or "No"
}


 int main() 
 //a string yes for true value and no for false value
    {
        bool value;
        cout << "Enter a boolean value (1 for true, 0 for false): ";
        cin >> value;
    
        string result = bool_to_word(value);
        cout << "Converted string: " << result << endl;
    
        return 0;
    }


    /*
   ALTERNATIVE FOR BEGINEER:
   
    using namespace std;
   string bool_to_word(bool value)
{
 ....This funtion convert a boolean value to either "Yes" or "No" 

  if(value)
    return ("Yes");  // returns if True case
  else
    return("No");  // returns if False 
  
}
    
    */