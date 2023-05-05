/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Exception.h
 * Author: Roberto Carlos
 *
 * Created on 4 de abril de 2023, 2:48 p. m.
 */

#ifndef EXCEPTION_H
#define EXCEPTION_H
#include <iostream>

using namespace std;

class Exception {
private:
    string mensaje;
    
public:
    Exception(string mensaje) :
    mensaje(mensaje) {
    }

    Exception(const Exception& orig);
    virtual ~Exception();
    
    string GetMensaje() const {
        return mensaje;
    }

};

#endif /* EXCEPTION_H */

