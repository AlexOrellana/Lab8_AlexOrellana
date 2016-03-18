#include "Obras.h"
#include "disenos.h"
#include "esculturas.h"
#include "literatura.h"
#include "pinturas.h"
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argv[]){
	int resp=0,peso,trans;
	string nombre,autor,fecha,genero,epoca,material,tipo,tecnica;
	vector<Obras>museo;
	vector<Obras>basura;
	while(resp!=8){
		cout<<endl;
		cout<<endl;
		cout<<"---MENU---"<<endl;
		cout<<"1-Agregar obra literaria"<<endl;
		cout<<"2-Agregar esculturas"<<endl;
		cout<<"3-Agregar pintura"<<endl;
		cout<<"4-Agregar disenos arquitectonicos"<<endl;
		cout<<"5-Transferir obra a otro museo"<<endl;
		cout<<"6-Listar obras en museo"<<endl;
		cout<<"7-Listar obras transferidas"<<endl;
		cout<<"8-Salir"<<endl;
		cout<<endl;
		cout<<"Ingrese la opcion: "<<endl;
		cin >> resp;
		cout<<endl;
		cout<<endl;
		
		if(resp==1){
			cout<<"ingrese el nombre: "<<endl;
			cin >> nombre;
			cout<<"ingrese el nombre del autor: "<<endl;
			cin >> autor;
			cout<<"ingrese la fecha:"<<endl;
			cin >> fecha;
			cout<<"ingrese el genero literario"<<endl;
			cin >> genero;
			cout <<"ingrese la epoca"<<endl;
			cin>>epoca;

			Literatura a(nombre,autor,fecha,genero,epoca);
			museo.push_back(a);
			
		}else if(resp==2){
			cout<<"ingrese el nombre: "<<endl;
			cin >> nombre;
			cout<<"ingrese el nombre del autor: "<<endl;
			cin >> autor;
			cout<<"ingrese la fecha: "<<endl;
			cin >> fecha;
			cout<<"ingrese el peso: "<<endl;
			cin>>peso;
			cout<<"ingrese el material: "<<endl;
			cin>>material;

			Esculturas b(nombre,autor,fecha,peso,material);
			museo.push_back(b);			

		}else if(resp==3){
			cout<<"ingrese el nombre: "<<endl;
			cin >> nombre;
			cout<<"ingrese el nombre del autor: "<<endl;
			cin >> autor;
			cout<<"ingrese la fecha: "<<endl;
			cin >> fecha;
			cout<<"ingrese material del lienzo: "<<endl;
			cin >>material;
			cout<<"ingrese la tecnica: "<<endl;
			cin>>tecnica;

			Pinturas c(nombre,autor,fecha,material,tecnica);
			museo.push_back(c);
		
		}else if(resp==4){
			cout<<"ingrese el nombre: "<<endl;
			cin >> nombre;
			cout<<"ingrese el nombre del autor: "<<endl;
			cin >> autor;
			cout<<"ingrese la fecha:"<<endl;
			cin >> fecha;
			cout<<"ingrese tipo de terreno: "<<endl;
			cin>>tipo;
		
			Disenos d(nombre,autor,fecha,tipo);
			museo.push_back(d);

		}else if(resp==5){
			if(museo.size()==0){
				cout<<"aqui no hay nada men"<<endl;
			}else{
				cout<<"---Lista---"<<endl;
				for(int i=0;i<museo.size();i++){
					cout<<i<<"->"<<museo[i].toString()<<endl;
				}
				cout<<"ingrese el numero del que desea transferir: "<<endl;
				cin >> trans;
				basura.push_back(museo[trans]);
				museo.erase(museo.begin()+trans);
			}
		}else if(resp==6){
			if(museo.size()==0){
				cout<<"aqui no hay nada men"<<endl;
			}else{
				cout<<"---Lista---"<<endl;
				for(int i=0;i<museo.size();i++){
					cout<<i<<"->"<<museo[i].toString()<<endl;
				}
			}
		}else if(resp==7){
			if(basura.size()==0){
				cout<<"aqui no hay nada men"<<endl;
			}else{
				cout<<"---Lista---"<<endl;
				for(int i=0;i<basura.size();i++){
					cout<<i<<"->"<<basura[i].toString()<<endl;
				}
			}
		}else if(resp==8){
			cout << "Adios"<<endl;
		}
		
	}
	return 0;
}

