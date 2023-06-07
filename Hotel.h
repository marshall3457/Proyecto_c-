/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Hotel.h
 * Author: Roberto Carlos
 *
 * Created on 1 de abril de 2023, 9:17 a. m.
 */

#ifndef HOTEL_H
#define HOTEL_H
#include <list>
#include "Estadia.h"
#include "Empleado.h"
#include <iostream>
using namespace std;

class Hotel {

private:
    string nombreHotel;
    list<Empleado*> *listaEmpleados;
    list<Estadia*> *listaEstadias;
    
public:
    Hotel(string nombreHotel): nombreHotel(nombreHotel){
        listaEstadias = new list<Estadia*>();
        listaEmpleados = new list<Empleado*>();
    }

    Hotel(const Hotel& orig);
    virtual ~Hotel();
    
    string GetNombreHotel();
    
    list<Estadia *> * obtenerEstadiasHechas(string);
    void adiccionarEmpleado(Empleado * empleado);
    void adiccionarEstadia(Estadia* estadia);
    Empleado * BuscarEmpleado(string);
    Estadia * BuscarEstadia(string);
    Estadia * BuscarEstadia(string,string);
    void EliminarEmpleado(string);
    void EliminarEstadia(string);
    list<Empleado *> * ObtenerEmpleadosArea(string area);
    list<Empleado *> * obtenerListaEmpleado();
    list<Estadia *> * obtenerListaEstadia();

};

#endif /* HOTEL_H */

