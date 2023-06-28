#include <iostream>
#include <string>
#include <random>
#include <windows.h>
#include "Hotel.h"
#include "Empleado.h"
#include "Estadia.h"
#include "Huesped.h"
#include "Persona.h"
#include "Exception.h"
#include "Servicios.h"
#include "Parqueadero.h"
#include "Habitacion.h"



//buscar con find despues
//PAUSA
//SIN SENTIDO
//DO
//DESPUES
//IDEA
//GIT
//PROBLEMA SOLUCIONADO


// Declaración de variables globales
HWND hwndButton1;
HWND hwndButton2;
HWND hwndButton3;
HWND hwndButton4;    //declaracion de botones, ambito global
HWND hwndButton5;
HWND hwndButton6;
// ... Declarar el resto de los botones aquí

// Función de manejo de mensajes

LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
    if (msg == WM_CREATE) {
        // Crear los botones
        hwndButton1 = CreateWindow(
            "BUTTON", // Clase del control
            "Servicios", // Texto del botón          
            WS_VISIBLE | WS_CHILD, // Estilo del botón
            10, 10, 200, 30, // Posición y tamaño del botón
            hwnd, // Ventana padre
            (HMENU) 1, // Identificador del botón
            NULL, NULL);

        // Crear los demás botones aquí
        hwndButton2 = CreateWindow(
            "BUTTON", // Clase del control
            "Empleados", // Texto del botón
            WS_VISIBLE | WS_CHILD, // Estilo del botón
            260, 10, 200, 30, // Posición y tamaño del botón     
            hwnd, // Ventana padre
            (HMENU) 2, // Identificador del botón, con esto reconoce los casos
            NULL, NULL);
        hwndButton3 = CreateWindow(
            "BUTTON", // Clase del control
            "Estadias", // Texto del botón
            WS_VISIBLE | WS_CHILD, // Estilo del botón
            510, 10, 200, 30, // Posición y tamaño del botón                                     //x, y
            hwnd, // Ventana padre
            (HMENU) 3, // Identificador del botón, con esto reconoce los casos           
            NULL, NULL);
        hwndButton4 = CreateWindow(
            "BUTTON", // Clase del control
            "Parqueadero", // Texto del botón
            WS_VISIBLE | WS_CHILD, // Estilo del botón
            760, 10, 200, 30, // Posición y tamaño del botón
            hwnd, // Ventana padre
            (HMENU) 4, // Identificador del botón, con esto reconoce los casos
            NULL, NULL);
        hwndButton5 = CreateWindow(
            "BUTTON", // Clase del control
            "Huesped", // Texto del botón
            WS_VISIBLE | WS_CHILD, // Estilo del botón
            1010, 10, 200, 30, // Posición y tamaño del botón
            hwnd, // Ventana padre
            (HMENU) 5, // Identificador del botón, con esto reconoce los casos
            NULL, NULL);

        return 0;
        
    } else if (msg == WM_COMMAND) {
        if (LOWORD(wParam) == 1) {
            // Lógica para la acción 1
            MessageBox(hwnd, "Conocer servicios disponibles y precio", "Acción 1", MB_OK | MB_ICONINFORMATION);
            
        } else if (LOWORD(wParam) == 2) {
            // Agregar lógica para el resto de los botones aquí
            MessageBox(hwnd, "Ayuda", "Acción 1", MB_OK | MB_ICONINFORMATION);

        }
        return 0;
        
    } else if (msg == WM_DESTROY) {
        PostQuitMessage(0);
        return 0;
    }

    return DefWindowProc(hwnd, msg, wParam, lParam);
}

// Función principal
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow){       

        WNDCLASS wc = {0};
        wc.lpfnWndProc = WndProc;
        wc.hInstance = hInstance;
        wc.hbrBackground = (HBRUSH)(COLOR_BACKGROUND);
        wc.lpszClassName = "MyWindowClass";

        if (!RegisterClass(&wc))
            return 1;

        // Crear la ventana
        HWND hwnd = CreateWindow(
            "MyWindowClass",        // Clase de la ventana
            "Mi Aplicación",        // Título de la ventana
            WS_OVERLAPPEDWINDOW,    // Estilo de la ventana
            CW_USEDEFAULT,          // Posición x de la ventana
            CW_USEDEFAULT,          // Posición y de la ventana
            1200, 780,               // Ancho y alto de la ventana
            NULL, NULL,             // Ventana padre y menú
            hInstance,              // Instancia de la aplicación
            NULL);

        if (!hwnd)
            return 2;

        // Mostrar y actualizar la ventana
        ShowWindow(hwnd, nCmdShow);
        UpdateWindow(hwnd);

        // Bucle de mensajes
        MSG msg;
        while (GetMessage(&msg, NULL, 0, 0))
        {
            TranslateMessage(&msg);
            DispatchMessage(&msg);
        }

        return msg.wParam;
}








