#include <string>

#include "breed.h"

using namespace std;

class Pet 
{
  public:
    Pet() : name_("Cookie"), weight_(15.6) {}
    Pet(const string &nName, const Breed &nBreed,const double &nWeight):
Pet(nName,nBreed.Species(),nBreed.BreedName(),nBreed.Color(), nWeight){}
// name_(nName), breed_(nBreed.Species(),nBreed.BreedName(),nBreed.Color()), weight_(nWeight) {} 
    
Pet(const string &nName,const string &nSpecies,const string &nBreed, const string &nColor,const double & nWeight) :  name_(nName), breed_(nSpecies, nBreed, nColor), weight_(nWeight) {}

  string Name() const;
  void SetName(const string& nName);
  Breed GetBreed() const; 
  void SetBreed(const Breed& nBreed);
  void SetBreed(const string &nSpecies, const string &nBreed, const string &nColor);
  double Weight() const;
  void SetWeight(const double &weight);
  void Print();

  private:
    string name_;
    Breed breed_;
    double weight_;
};
