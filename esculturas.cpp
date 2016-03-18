#include "Obras.h"
#include "esculturas.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Esculturas::Esculturas(string nombre,string autor,string fecha,int peso,string material):Obras(nombre, nombre, fecha),
	peso(peso), material(material){
}
string Esculturas::toString(){
	stringstream ss;
	ss << Obras::toString() << peso << " " << material<< "[Escultura]";
	return ss.str();
}
