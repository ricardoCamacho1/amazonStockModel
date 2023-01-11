
#ifndef CLIENTE_H
#define CLIENTE_H
#include<iostream>
#include<string>

using namespace std;

class Cliente {
private:
string nombrePersona, rfc, adress, gender, email, paymentMethod;
double bankAccount, cash;
public:
Cliente();
~Cliente();
void Comprar();
void setNombrePersona(string name);
void setAdress(string adress);
void setRFC(string rfc);
void setGender(string gender);
void setEmail(string email);
void setPaymentMethod(string paymentMethod);
void setBankAccount(double bankAccount);
void setCash(double cash);
string getNombrePersona();
string getAdress();
string getPaymentMethod();
double getBankAccount();
double getCash();
void mostrarPersona();


};

Cliente::Cliente(){
  nombrePersona="";
  adress="";
  gender="";
  email="";
  paymentMethod="";
  bankAccount=0;
  cash=0;
}

void Cliente::setNombrePersona(string nombrePersona){
  this -> nombrePersona=nombrePersona;
}

void Cliente::setAdress(string adress){
  this -> adress=adress;
}

void Cliente::setRFC(string rfc){
  this -> rfc=rfc;
}

void Cliente::setGender(string gender){
  this -> gender=gender;
}

void Cliente::setEmail(string email){
  this -> email=email;
}

void Cliente::setPaymentMethod(string paymentMethod){
  this -> paymentMethod=paymentMethod;
}

void Cliente::setBankAccount(double bankAccount){
  this -> bankAccount=bankAccount;
}

void Cliente::setCash(double cash){
  this -> cash=cash;
}


Cliente::~Cliente(){

}

string Cliente::getNombrePersona(){
  return nombrePersona;
}

string Cliente::getAdress(){
  return adress;
}

string Cliente::getPaymentMethod(){
  return paymentMethod;
}

double Cliente::getBankAccount(){
  return bankAccount;
}

double Cliente::getCash(){
  return cash;
}

void Cliente::mostrarPersona(){
  cout<<"Nombre: "<<getNombrePersona()<<endl;
  cout<<"Dirección: "<<getAdress()<<endl;
  cout<<"RFC: "<<rfc<<endl;
  cout<<"Género: "<<gender<<endl;
  cout<<"Email: "<<email<<endl;
  cout<<"Método de pago: "<<paymentMethod<<endl;
  if (paymentMethod=="Efectivo"){
    cout<<"Dinero en efectivo:: "<<cash<<endl;
  }
  if(paymentMethod=="Transferencia"){
    cout<<"Dinero en cuenta del Banco: "<<bankAccount<<endl;
  }
  cout<<endl;
}





#endif