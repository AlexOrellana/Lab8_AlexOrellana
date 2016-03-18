main: main.o Obras.o literatura.o esculturas.o pinturas.o disenos.o
	g++ main.o Obras.o literatura.o esculturas.o pinturas.o disenos.o -o ejecutar 
	
main.o:	main.cpp Obras.h literatura.h esculturas.h pinturas.h disenos.h
	g++ -c main.cpp 

Obras.o:	Obras.cpp Obras.h
	g++ -c Obras.cpp 

literatura.o:	literatura.cpp literatura.h Obras.h
	g++ -c literatura.cpp

esculturas.o:	esculturas.cpp esculturas.h Obras.h
	g++ -c esculturas.cpp

pinturas.o:	pinturas.cpp pinturas.h Obras.h
	g++ -c pinturas.cpp

disenos.o:	disenos.cpp disenos.h Obras.h
	g++ -c disenos.cpp
