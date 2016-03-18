#pragma once

#include <string>
using std::string;

class Obras{
	string nombre,autor,fecha;
  public:
	Obras(string,string,string);
	string toString();
};
