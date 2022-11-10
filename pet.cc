
#include <iomanip>
#include <iostream>


string Pet::Name() const
{
  return name_;
}
void Pet::SetName(const string& nName)
{
  name_ = nName;
}
Breed Pet::GetBreed() const
{
  return breed_;
}
void Pet::SetBreed(const Breed& nBreed)
{
  breed_ = nBreed;
}
void Pet::SetBreed(const string &nSpecies, const string &nBreed,const string &nColor)
{
  breed_ = Breed(nSpecies, nBreed, nColor);
}
double Pet::Weight() const
{
  return weight_;
}
void Pet::SetWeight(const double &weight)
{
  weight_ = weight;
}
void Pet::Print(){
  std::cout << "Name: " << name_ << "\n"
<< "Species: " << breed_.Species() << "\n" << "Breed: " << breed_.BreedName() <<"\n" << "Color: " << breed_.Color() << "\n"
<< "Weight: " << weight_ << " lbs\n";
}
