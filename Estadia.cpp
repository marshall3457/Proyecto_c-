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

Servicios * Estadia::GetServiciosUtilizados(){
    return serviciosUtilizados;
}


//ver si depsues funciona igualmete;
//pero mi logica me lleva de que utilizando el objeto this y accediendo a el pues puedo acceder tambien ya que los getters son para fuera de la funcion;
//y ya que los metodos getters devuelven eso mismo pues creo que es lo mismo, que con getters que con punteros de clase;
//En el archivo de costo_llamada utilizo para calcular la duracionTotal el this para llamar claramente un objeto de la clase en vez de utilizar el getter;
int Estadia::costoTotal(){
    //estudiar esto con mas claridad, entre getters y uso de los mismos objetos de la clases
    int iva = (this->duracionDias * this->nuevaHabitacion->GetCostoNoche()  + this->serviciosUtilizados->costoTotalServicios()) * 0.19;
    return (this->duracionDias * this->nuevaHabitacion->GetCostoNoche()  + this->serviciosUtilizados->costoTotalServicios()) + iva;// Iva;
}


