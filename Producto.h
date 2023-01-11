
#ifndef PRODUCTO_H
#define PRODUCTO_H
#include<iostream>
#include<string>
#include"Cliente.h"


using namespace std;

class Producto : public Cliente{
private:
string name, description;
int price, weight;

public:
Producto();
~Producto();
string getNombreProducto();
string getDescription();
float getPrice();
float getWeight();
void mostrarProducto();
void setName(string name);
void setDescription(string description);
void setPrice(int price);
void setWeight(int weight);
};

Producto::Producto(){
  name="";
  description="";
  price=0;
  weight=0;
}

Producto::~Producto(){

}

string Producto::getNombreProducto(){
  return name;
}

string Producto::getDescription(){
  return description;
}

float Producto::getPrice(){
  return price;
}

float Producto::getWeight(){
  return weight;
}

void Producto::setDescription(string description){
  this -> description=description;
}

void Producto::setName(string name){
  this -> name=name;
}

void Producto::setPrice(int price){
  this -> price=price;
}

void Producto::setWeight(int weight){
  this -> weight=weight;
}

void Producto::mostrarProducto(){
  cout<<"Producto: "<<getNombreProducto()<<endl;
  cout<<"Descripción: "<<getDescription()<<endl;
  cout<<"Precio: $"<<getPrice()<<endl;
  cout<<"Peso: "<<getWeight()<<"g"<<endl;
  cout<<"Destinatario: "<<getNombrePersona()<<endl;
  cout<<"Dirección de entrega: "<<getAdress()<<endl;
  cout<<endl;
}


#endif