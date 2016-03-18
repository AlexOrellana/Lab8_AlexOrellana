#pragma once
#include "Obras.h"
#include <string>
using std::string;

class Esculturas : public Obras{
	int peso;	
	string material;
  public:
	Esculturas(string,string,string,int,string);
	string toString();
};
