#include "Obras.h"
#include "disenos.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Disenos::Disenos(string nombre,string autor,string fecha,string tipo):Obras(nombre, nombre, fecha),
	tipo(tipo){
}
string Disenos::toString(){
	stringstream ss;
	ss << Obras::toString() << tipo << "[disenos]";
	return ss.str();
}
