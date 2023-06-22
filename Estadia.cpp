/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Estadia.cpp
 * Author: Roberto Carlos
 * 
 * Created on 1 de abril de 2023, 9:13 a. m.
 */

#include "Estadia.h"

Estadia::Estadia(const Estadia& orig) {
}

Estadia::~Estadia() {
}

int Estadia::GetDuracionDias()  {
    return duracionDias;
}

Habitacion * Estadia::GetNuevaHabitacion(){
    return nuevaHabitacion;
}

Huesped* Estadia::GetNuevoHuesped()  {
    return nuevoHuesped;
}

Parqueadero * Estadia::GetNuevoParqueadero(){
    return nuevoParqueadero;        
}

string Estadia::GetFecha(){
    return fecha;
}

string Estadia::GetNumeroEstadia(){
    return numeroEstadia;
}

void Estadia::adiccionarServicios(Servicios * servicios){


    this->listaServicios->push_back(servicios);
    
}

list<Servicios *> * Estadia::GetListaServicios(){
    list<Servicios *> * resultados = this->listaServicios;
    
    return resultados;
}

int Estadia::costoTotalServicios(){
    int suma = 0;
    list<Servicios *>::iterator it = this->listaServicios->begin();
    Servicios * e = NULL;
    for(; it != this->listaServicios->end();it++){
            e = *it;
            suma += e->getPrecio();
        }
    
    return suma;
}
    
int Estadia::costoTotalParqueadero(){
    return (this->nuevoParqueadero->GetCostoDia() * duracionDias);
}


int Estadia::costoTotalEstadia(){
    return this->duracionDias * this->nuevaHabitacion->GetCostoNoche();
}
//ver si depsues funciona igualmete;
//pero mi logica me lleva de que utilizando el objeto this y accediendo a el pues puedo acceder tambien ya que los getters son para fuera de la funcion;
//y ya que los metodos getters devuelven eso mismo pues creo que es lo mismo, que con getters que con punteros de clase;
//En el archivo de costo_llamada utilizo para calcular la duracionTotal el this para llamar claramente un objeto de la clase en vez de utilizar el getter;
int Estadia::costoTotal(){
    //estudiar esto con mas claridad, entre getters y uso de los mismos objetos de la clases
    int iva = (costoTotalEstadia() + costoTotalServicios() + costoTotalParqueadero()) * 0.19; //El parquedero esta elevando el precio demasiado y creo que tambien los servicios
    return (costoTotalEstadia() + costoTotalServicios() + costoTotalParqueadero()) + iva;// Iva;
    
}

int Estadia::costoTotalSinIva(){
    return costoTotalEstadia() + costoTotalServicios() + costoTotalParqueadero();
}



