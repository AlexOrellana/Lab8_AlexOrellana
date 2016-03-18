#pragma once
#include "Obras.h"
#include <string>
using std::string;

class Disenos : public Obras{	
	string tipo;
  public:
	Disenos(string,string,string,string);
	string toString();
};
