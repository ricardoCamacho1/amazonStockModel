
#ifndef PAQUETERIA_H
#define PAQUETERIA_H
#include<iostream>
#include<string>

using namespace std;

class Paqueteria : public Empresa {
private:
string name, adress, schedule, delivery;
int stock, cont;
public:
Paqueteria();
~Paqueteria();
void Envio();
void Recepcion();
string getNombrePaqueteria();
string getAdressPaqueteria();
string getSchedule();
string getDelivery();
int getStock();
void setSchedule(string schedule);
void setDelivery(string delivery);
void setNombrePaqueteria(string nombre);
void setAdressPaqueteria(string adress);
void setStock(int stock);
void mostrarPaqueteria();
};


Paqueteria::Paqueteria(){
  this-> name="";
  this-> adress="";
  this-> schedule="";
  this-> delivery= "";
  this-> stock=0;
}

Paqueteria::~Paqueteria(){

}

void Paqueteria::setNombrePaqueteria(string nombre){
  this-> name=nombre;
}

void Paqueteria::setAdressPaqueteria(string adress){
  this-> adress=adress;
}

void Paqueteria::setDelivery(string delivery){
  this-> delivery=delivery;
}

void Paqueteria::setSchedule(string schedule){
  this-> schedule=schedule;
}

string Paqueteria::getAdressPaqueteria(){
  return adress;
}

string Paqueteria::getDelivery(){
  return delivery;
}

string Paqueteria::getNombrePaqueteria(){
  return name;
}

string Paqueteria::getSchedule(){
  return schedule;
}

int Paqueteria::getStock(){
  return stock;
}

void Paqueteria::setStock(int stock){
  this-> stock=stock;
}

void Paqueteria::mostrarPaqueteria(){
  cout<<"Proveedor: "<<getNombrePaqueteria()<<endl;
  cout<<"Dirección: "<<getAdressPaqueteria()<<endl;
  cout<<"Horario: "<<getSchedule()<<endl;
  cout<<"Stock en Almacén de "<<getNombreProducto()<<": "<<getStock()<<" unidades disponibles"<<endl;
  cout<<"Método de distribución: "<<getDelivery()<<endl;
  cout<<endl;
}

void Paqueteria::Envio(){
  cout<<"\t\t\t\t\tProceso de un Producto\t\t\n"<<endl;
  cout<<"PROOVEDOR DE PRODUCTO:\n";
  if (getStock()>0){
    mostrarPaqueteria();
    Vender();
    Cobrar();
    cont=1;
  }
  else{
    mostrarPaqueteria();
    cout<<"No hay suficiente stock en almacenes principales, no será posible realizar la compra"<<endl;
  }
}



#endif