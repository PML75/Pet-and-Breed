#include <string>
#include <iomanip>
#include <iostream>

using namespace std;

class Breed {
  public:
    Breed() : species_("Dog"), breed_name_("Chihuahua"), color_("Fawn") {}
    Breed(const string &nSpecies, const string &nBreed, const string &nColor) : species_(nSpecies), breed_name_(nBreed), color_(nColor) {}

    string Species() const { return species_; }
    void SetSpecies(const string &nSpecies) { species_ = nSpecies; }
    string BreedName() const { return breed_name_; }
    void SetBreedName(const string &nBreed) { breed_name_ = nBreed; }
    string Color() const { return color_; }
    void SetColor(const string &nColor) { color_ = nColor; }
    
  private:
    string species_;
    string breed_name_;
    string color_;
};
