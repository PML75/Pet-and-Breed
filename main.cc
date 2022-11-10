#include <iostream>
#include <vector>
#include <iomanip>
#include "pet.h"

using namespace std;

int main() {

  vector<Pet> pets;
  std::string name;
  std::string breed_name;
  std::string species;
  std::string color;
  double weight;

  do {
    std::cout << "Please enter the pet's name (q to quit): ";
    std::getline(std::cin, name);
    if (name != "q") {
      std::cout << "Please enter the pet's type: ";
      std::getline(std::cin, species);
      std::cout << "Please enter the pet's breed: ";
      std::getline(std::cin, breed_name);
      std::cout << "Please enter the pet's color: ";
      std::getline(std::cin, color);
      std::cout << "Please enter the pet's weight (lbs): ";
      std::cin >> weight;
      std::cin.ignore();


      Breed breed(species, breed_name, color);
      Pet p1(name, breed, weight);
      pets.push_back(p1);
    }
  } while (name != "q");

  std::cout << "Printing Pets:\n";

  for (int i = 0; i < pets.size() ; i++)
  {
    std::cout << "Pet " << i+1 << "\n";
    pets.at(i).Print();
  }
  return 0;
}
