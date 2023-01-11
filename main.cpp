#include <iostream>
#include <string>
#include "Cliente.h"
#include "Producto.h"
#include"Empresa.h"
#include"Paqueteria.h"
using namespace std;


int main() {


Paqueteria P1 = Paqueteria();

P1.setNombrePersona("Ricardo Camacho Castillo");
P1.setEmail("a01654132@itesm.mx");
P1.setGender("Masculino");
P1.setRFC("CACR020315HDFMSCA9");
P1.setCash(500000);
P1.setBankAccount(2000000);
P1.setAdress("Retorno 23, Casa 23, Colonia Avante, 04460 Ciudad de México, CDMX, México. ");
P1.setPaymentMethod("Transferencia");
P1.setName("Alexa Echo Dot");
P1.setDescription("Bocina Inteligente con Alexa integrada. Nueva Echo Dot (4ta generación). Color negro. Controla por voz tu entretenimiento. Controla tu Casa Inteligente.");
P1.setRFCEmpresa("ASJ-140318-5L6");
P1.setMedioEntrega("Recoger");
P1.setNombreEmpresa("Amazon México");
P1.setCuentaBancaria(9999999999999);
P1.setTipoEmpresa("Privada");
P1.setAdressEmpresa("Juan Salvador Agraz 73, Contadero, 05348 Ciudad de México, CDMX, México.");
P1.setInventario(5);
P1.setStock(8);
P1.setPrice(1099);
P1.setWeight(341);
P1.setAdressPaqueteria("Seattle, Washington, Estados Unidos");
P1.setNombrePaqueteria("Amazon Central Office");
P1.setSchedule("5:00 - 22:00");
P1.setDelivery("Aéreo");
cout<<"\t\t\t\t\t\t\tPRUEBA 1\n";
P1.Envio();

cout<<"\n\n\t\t\t\t\t\t\tPRUEBA 2\n";
P1.setMedioEntrega("Express");
P1.Envio();

cout<<"\n\n\t\t\t\t\t\t\tPRUEBA 3\n";
P1.setMedioEntrega("Estándar");
P1.Envio();

cout<<"\n\n\t\t\t\t\t\t\tPRUEBA 4\n";
P1.setBankAccount(0);
P1.Envio();

cout<<"\n\n\t\t\t\t\t\t\tPRUEBA 5\n";
P1.setPaymentMethod("Efectivo");
P1.Envio();

cout<<"\n\n\t\t\t\t\t\t\tPRUEBA 6\n";
P1.setInventario(0);
P1.Envio();

cout<<"\n\n\t\t\t\t\t\t\tPRUEBA 7\n";
P1.setStock(0);
P1.Envio();







  
}