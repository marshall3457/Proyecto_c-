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
//remodelar parqueadero colocar el dia mes y ano de ingreso y igual de salida haci dejando a la maquina calcular los dias y si no ha salido pues poner de que no hay salido pero si se a modificado el setter
//de que a salido.
    
private:
    int costoDia;
    string lugarEstacionamiento;

public:
    Parqueadero(int costoDia, string lugarEstacionamiento) :
    costoDia(costoDia), lugarEstacionamiento(lugarEstacionamiento) {
    }
    
    Parqueadero(const Parqueadero& orig);
    virtual ~Parqueadero();

    int GetCostoDia();
    string GetLugarEstacionamiento();    
    void SetCostoDia(int);
    void SetLugarEstacionamiento(string);


    //metodo para calcular el costo del estacionamiento;
    
    //tambien podria agregar todo lo que tiene el ejercicio del parqueadero que nos hicieron hacer;
};

#endif /* PARQUEADERO_H */

