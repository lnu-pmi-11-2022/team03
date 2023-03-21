#include <iostream>
#include <chrono>
#include <string>

using namespace std;
using namespace std::chrono;

class Plant 
{
private:
    string name;
    long long growth_time;
    system_clock::time_point start_time;
    int quantity;
    double price;   
    string colour;    
public:
    Plant(string name, long long growth_time) 
    {
        this->name = name;
        this->growth_time = growth_time;
        this->start_time = system_clock::now();
    }

    string getName() //getting name
    {
        return name;
    }

    long long getGrowthTime() //getting time that is needed to grow a plant
    {
        return growth_time;
    }

    long long getSecondsGrown()   //calculates the number of seconds that have elapsed since the plant was created
  {
        auto elapsed_time = duration_cast<seconds>(system_clock::now() - start_time);
        return elapsed_time.count();
  }
};
