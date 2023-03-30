#include <iostream>
#include <chrono>
#include <string>
#include <fstream>

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
 Plant()
    {
        name = "";                   //default constructor
        growth_time = 0;
        quantity = 0;
        price = 0.0;
        colour = "";
        start_time = system_clock::now();
    }
Plant(const Plant& other)                 //copy constructor
{
    name = other.name;
    growth_time = other.growth_time;
    start_time = other.start_time;
    quantity = other.quantity;
    price = other.price;
    colour = other.colour;
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
  int GetQuantity()        //returning quantity
{
  return quantity;
}
  double GetPrice()        //returning price
{
  return price;
}
string GetColour()         //returning colour
{
  return colour;
}
  void SetQuantity(double new_quantity)          //setting quantity
{
  quantity=new_quantity;
}
	friend istream& operator>>(istream& is, Plant& plant)     //scanning input
	{
		is >> plant.name;
    is>> plant.growth_time;
		is >> plant.quantity;
		is >> plant.price;
    is >> plant.colour;
		return is;
	}
/*friend ostream& operator<<(ostream& os, Plant& plant)
	{
		os << plant.name<<endl;
    os >> plant.quantity;
		os >> plant.price;
    return os;
	}*\
};

class Farm 
{
 private:
  Plant *plants[10][10];
 public:
Farm() 
{
    for (int i = 0; i < 10; i++) {
      for (int j = 0; j < 10; j++) {
        plants[i][j] = nullptr;
      }
    }
  }

void AddPlant(int row, int col, Plant *plant)     //продумати виведення
{
  plants[row][col] = plant;
  int temp = (*plants[row][col]).GetQuantity();
  (*plants[row][col]).SetQuantity(temp - 1);
}

  void CollectPlant(int row, int col) 
  {
    delete plants[row][col];
    plants[row][col] = nullptr;             //продумати виведення
    int temp = (*plants[row][col]).GetQuantity();
  (*plants[row][col]).SetQuantity(temp*2);
  }

ifstream input(Text1.txt);//введення
ostream output(Text2.txt);//виведення
  void SaveToFile() {}
  void ShowFarm() {}      //це гарне виведення всього
};

    Farm() {
        for (int i = 0; i < NUM_ROWS; i++) 
        {
            for (int j = 0; j < NUM_COLS; j++) 
            {
                plants[i][j] = NULL;
            }
        }
    }

    void addPlant(Plant plant, int row, int col) 
    {
        plants[row][col] = plant;
      
    }


    void saveToFile(string filename) {
        ofstream file(filename);

        for (int i = 0; i < num_plants; i++) {
            file << plants[i].getName() << "," << plants[i].getSecondsGrown() << endl;
        }

        file.close();
    }