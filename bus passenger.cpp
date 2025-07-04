#include <utility>// Include the utility header for std::pair
#include <vector>
#include<iostream>
using namespace std;
unsigned int number(const vector<pair<int, int>>& busStops)
   {
int totalPassenger=0;
for(const auto& stop : busStops) // Iterate through each pair in the vector
{
    totalPassenger +=stop.first; // Add the first element (boarding passengers) to totalPassenger
    totalPassenger -=stop.second; // Subtract the second element (alighting passengers) from totalPassenger
}
return totalPassenger; // Return the total number of passengers remaining on the bus


   }

    int main() {
    vector<pair<int, int>> busStops = {{10, 0}, {3, 5}, {5, 8}, {2, 4}}; // Example bus stops with boarding and alighting passengers
    unsigned int totalPassengers = number(busStops); // Call the function to calculate total passengers
    cout << "Total passengers remaining on the bus: " << totalPassengers << endl; // Output the result
    return 0; // Return 0 to indicate successful execution
    }


    /*alternative:
    

unsigned int number(const std::vector<std::pair<int, int>>& busStops){
  int passengers = 0;
  for(auto i: busStops)  //iliterate through each pair in the vector
   passengers += i.first - i.second; // Add the first element (boarding passengers) and subtract the second element (alighting passengers)
  return passengers;
}*/