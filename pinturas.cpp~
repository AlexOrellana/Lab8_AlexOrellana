#include "Obras.h"
#include "pinturas.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Pinturas::Pinturas(string nombre,string autor,string fecha,string material,string tecnica):Obras(nombre, nombre, fecha),
	material(material), tecnica(tecnica){
}
string Pinturas::toString(){
	stringstream ss;
	ss << Obras::toString() << material << " " << tecnica;
	return ss.str();
}
