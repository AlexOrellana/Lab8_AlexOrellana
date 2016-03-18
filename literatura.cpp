#include "Obras.h"
#include "literatura.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Literatura::Literatura(string nombre,string autor,string fecha,string genero,string epoca):Obras(nombre, nombre, fecha),
	genero(genero), epoca(epoca){
}
string Literatura::toString(){
	stringstream ss;
	ss << Obras::toString() << genero << " " <<epoca<<"[literatura]";
	return ss.str();
}

