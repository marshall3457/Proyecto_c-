/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Parqueadero.h
 * Author: Roberto Carlos
 *
 * Created on 1 de abril de 2023, 9:11 a. m.
 */

#ifndef PARQUEADERO_H
#define PARQUEADERO_H
#include <iostream>

using namespace std;

class Parqueadero {

private:
    int costoDia;
    string lugarEstacionamiento;
    int tiempoEstacionado;
public:
    
    Parqueadero(int costoDia, string lugarEstacionamiento, int tiempoEstacionado) :
    costoDia(costoDia), lugarEstacionamiento(lugarEstacionamiento), tiempoEstacionado(tiempoEstacionado) {
    }
    
    Parqueadero(const Parqueadero& orig);
    virtual ~Parqueadero();

    
    int GetCostoDia();
    string GetLugarEstacionamiento();
    int GetTiempoEstacionado();


    //metodo para calcular el costo del estacionamiento;
    
    //tambien podria agregar todo lo que tiene el ejercicio del parqueadero que nos hicieron hacer;
};

#endif /* PARQUEADERO_H */

