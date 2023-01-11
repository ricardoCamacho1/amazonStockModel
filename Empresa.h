
#ifndef EMPRESA_H
#define EMPRESA_H
#include<iostream>
#include<string>
#include"Cliente.h"
#include"Producto.h"


using namespace std;

class Empresa : public Producto {
private:
string nombre, tipoEmpresa, adress, medioEntrega, rfc;
float cuentaBancaria;
int inventario;

public:
Empresa();
~Empresa();
void GenerarProducto();
void Vender();
void Cobrar();
void setNombreEmpresa(string nombre);
void setTipoEmpresa(string tipo);
void setAdressEmpresa(string adress);
void setMedioEntrega(string medio);
void setCuentaBancaria(float cuenta);
void setInventario(int inventario);
void setRFCEmpresa(string rfc);
string getMedioEntrega();
int getInventario();
float getCuentaBancaria();
void mostrarEmpresa();
void Recibir();
void Recoger();
void RecibirPago();
};

Empresa::Empresa(){
  this->nombre="";
  this->tipoEmpresa="";
  this->adress="";
  this->medioEntrega="";
  this->cuentaBancaria=0;
  this->inventario=0;
}

Empresa::~Empresa(){

}

void Empresa::setNombreEmpresa(string nombre){
  this->nombre=nombre;
}

void Empresa::setTipoEmpresa(string tipo){
  this->tipoEmpresa=tipo;
}

void Empresa::setAdressEmpresa(string adress){
  this->adress=adress;
}

void Empresa::setMedioEntrega(string medio){
  this->medioEntrega=medio;
}

void Empresa::setCuentaBancaria(float cuenta){
  this->cuentaBancaria=cuenta;
}

void Empresa::setInventario(int inventario){
  this->inventario=inventario;
}

void Empresa::setRFCEmpresa(string rfc){
  this->rfc=rfc;
}

string Empresa::getMedioEntrega(){
  return medioEntrega;
}

float Empresa::getCuentaBancaria(){
  return cuentaBancaria;
}

int Empresa::getInventario(){
  return inventario;
}

void Empresa::GenerarProducto(){
  mostrarProducto();
}

void Empresa::mostrarEmpresa(){
  cout<<"Empresa: "<<nombre<<endl;
  cout<<"Tipo de Empresa: "<<tipoEmpresa<<endl;
  cout<<"Dirección Empresa: "<<adress<<endl;
  cout<<"Stock Disponible de "<<getNombreProducto()<<": "<<getInventario()<<" artículos disponibles"<<endl;
  cout<<"Dinero de la Empresa: $"<<getCuentaBancaria()<<endl;
  cout<<"Método de Entrega: "<<getMedioEntrega()<<endl;
  cout<<endl;
}

void Empresa::Vender(){
  cout<<"EL PRODUCTO:\n";
  GenerarProducto();
  cout<<"ENVIADO POR:\n";
  mostrarEmpresa();
  cout<<"SE VENDERÁ A:\n";
  mostrarPersona();
}



void Empresa::Cobrar(){ 
  if(getMedioEntrega()=="Express"){
    if(getInventario()>1){
      if (getPaymentMethod()=="Efectivo"){
        cout<<"Se le cobrará a "<<getNombrePersona()<<" la cantidad de $"<<getPrice()<<" más la cantidad de $150 por el envío Express(1-2 días) en efectivo.\n";
        

        if(getCash()>getPrice()){
          cout<<getNombrePersona()<<" ahora tiene $"<<getCash()-getPrice()-150<<" en efectivo."<<endl;
          Recibir();
          RecibirPago();
        }
        else{
          cout<<"Fondos insuficientes, no se puede realizar la compra\n";
        }   
      }

      if (getPaymentMethod()=="Transferencia"){
        cout<<"Se le cobrará a "<<getNombrePersona()<<" la cantidad de $"<<getPrice()<<" más la cantidad de $150 por el envío Express(1-2 días) a cuenta bancaria.\n";

        if(getBankAccount()>getPrice()){
          cout<<getNombrePersona()<<" ahora tiene $"<<getBankAccount()-getPrice()-150<<" en su cuenta Bancaria."<<endl;
          Recibir();
          RecibirPago();
        }  
        else{
          cout<<"Fondos insuficientes, no se puede realizar la compra\n";    
        } 
      }  
    }
    else{
      cout<<"No hay Stock suficiente,espera a que nos llegue el producto del proveedor para volver a pedirlo";
    }  
  }  
  if(getMedioEntrega()=="Recoger"){
    if(getInventario()>1){
      if (getPaymentMethod()=="Efectivo"){
        cout<<"Se le cobrará a "<<getNombrePersona()<<" la cantidad de $"<<getPrice()<<" sin cargo adicional de envío(Recoger en Almacén) en efectivo.\n";

        if(getCash()>getPrice()){
          cout<<getNombrePersona()<<" ahora tiene $"<<getCash()-getPrice()<<" en efectivo."<<endl;
          Recoger();
          RecibirPago();
        }
        else{
          cout<<"Fondos insuficientes, no se puede realizar la compra\n";
        }   
      }

      if (getPaymentMethod()=="Transferencia"){
        cout<<"Se le cobrará a "<<getNombrePersona()<<" la cantidad de $"<<getPrice()<<" sin cargo adicional por envío a su cuenta(Recoger en Almacén) Bancaria.\n";

        if(getBankAccount()>getPrice()){
          cout<<getNombrePersona()<<" ahora tiene $"<<getBankAccount()-getPrice()<<" en su cuenta Bancaria."<<endl;
          Recoger();
          RecibirPago();
        }  
        else{
          cout<<"Fondos insuficientes, no se puede realizar la compra\n";    
        } 
      }  
    }
    else{
      cout<<"No hay Stock suficiente,espera a que nos llegue el producto del proveedor para volver a pedirlo";
    }  
  }  
  if((getMedioEntrega()== "Estándar") or (getMedioEntrega()== "Estandar")){
    if(getInventario()>1){
      if (getPaymentMethod()=="Efectivo"){
        cout<<"Se le cobrará a "<<getNombrePersona()<<" la cantidad de $"<<getPrice()<<" más la cantidad de $50 por el envío Estándar(5-10 días hábiles) en efectivo.\n";

        if(getCash()>getPrice()){
          cout<<getNombrePersona()<<" ahora tiene $"<<getCash()-getPrice()-50<<" en efectivo."<<endl;
          Recibir();
          RecibirPago();
        }
        else{
          cout<<"Fondos insuficientes, no se puede realizar la compra\n";
        }   
      }

      if (getPaymentMethod()=="Transferencia"){
        cout<<"Se le cobrará a "<<getNombrePersona()<<" la cantidad de $"<<getPrice()<<" más la cantidad de $50 por el envío Estándar(5-10 días hábiles) a su cuenta bancaria.\n";


        if(getBankAccount()>getPrice()){
          cout<<getNombrePersona()<<" ahora tiene $"<<getBankAccount()-getPrice()-50<<" en su cuenta Bancaria."<<endl;
          Recibir();
          RecibirPago();
        }  
        else{
          cout<<"Fondos insuficientes, no se puede realizar la compra\n";    
        } 
      }  
    }
    else{
      cout<<"No hay Stock suficiente,espera a que nos llegue el producto del proveedor para volver a pedirlo";
    }  
  }  
}

void Empresa::Recibir(){
  cout<<"\nPaquete recibido exitosamente por: "<<getNombrePersona()<<endl;
  cout<<"Paquete recibido exitosamente en: "<<getAdress()<<endl;
  cout<<"Entregado por: "<<nombre<<endl;
  cout<<"Producto entregado: "<<getNombreProducto()<<endl;
}

void Empresa::Recoger(){
  cout<<"\nPaquete recogido exitosamente por: "<<getNombrePersona()<<endl;
  cout<<"Paquete recibido exitosamente en: "<<adress<<endl;
  cout<<"Entregado por: "<<nombre<<endl;
  cout<<"Producto entregado: "<<getNombreProducto();
}

void Empresa::RecibirPago(){
  cout<<"\nAhora la empresa "<<nombre <<" cuenta con $"<<getCuentaBancaria()+getPrice()<<" en su cuenta de Banco.";
}

#endif