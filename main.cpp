#include <iostream>
#include <string>
#include "Hotel.h"
#include "Empleado.h"
#include "Estadia.h"
#include "Huesped.h"
#include "Persona.h"
#include "Exception.h"
#include "Servicios.h"
#include "Parqueadero.h"
#include "Habitacion.h"

using namespace std;

//Utilizar git para guardar una version del programa(tag) y despues utilizar windows y por utilmo utilizar mysql;
int main(){
    
    //PROGRAMA PARA LA ADMINISTRACION DE UN HOTEL;
    //Depronto agregar algo mas a la clase huesped como seria el numero de acompanantes;
    
    //Empleado(Persona* nuevaPersona, string cargo, int sueldo) :
    //Persona(string nombre, int edad, string genero, string DNI) :
    
        Hotel * nuevoHotel = new Hotel("Carmelo");
        Persona * nuevaPersona1 = new Persona("Carlos", 21, "Masculino", "12");
        Empleado * nuevoEmpleado1 =  new Empleado(nuevaPersona1,"Recepcionista",1200000);

        Persona * nuevaPersona2 = new Persona("Juan", 29, "Masculino", "24");
        Empleado * nuevoEmpleado2 =  new Empleado(nuevaPersona2,"Aseo",900000);

        Persona * nuevaPersona3 = new Persona("Ana", 45, "Femenino", "14");
        Empleado * nuevoEmpleado3 =  new Empleado(nuevaPersona3,"Aseo", 1300000);
        nuevoHotel->adiccionarEmpleado(nuevoEmpleado1);
        nuevoHotel->adiccionarEmpleado(nuevoEmpleado2);
        nuevoHotel->adiccionarEmpleado(nuevoEmpleado3);



        Persona * PersonaHotel1 = new Persona("Rodriguez", 45, "Masculino", "9");
        Huesped * nuevoHuesped1 = new Huesped(PersonaHotel1);
        Habitacion * nuevaHabitacion1 = new Habitacion(35000, 72, 2);
        Parqueadero * nuevoParqueadero1 = new Parqueadero(5000,"A12",20);
        Servicios * serviciosRealizados1 = new Servicios(30000,20000,15000,10000,2000);
        Estadia * nuevaEstadia1 =  new Estadia(nuevoHuesped1,nuevaHabitacion1,nuevoParqueadero1,serviciosRealizados1,20,"12/07/2003","P90");
        //Bueno aplicando esa logica los dias de que se quede el huesped van a ser tambien los dias que se quede en el parqueadero;
        Persona * PersonaHotel2 = new Persona("Juana", 24, "Femenino", "19");
        Huesped * nuevoHuesped2 = new Huesped(PersonaHotel2);
        Habitacion * nuevaHabitacion2 = new Habitacion(95000, 100, 3);
        Parqueadero * nuevoParqueadero2 = new Parqueadero(3000,"B34",12);
        Servicios * serviciosRealizados2 = new Servicios(30000,0,0,10000,2000);
        Estadia * nuevaEstadia2 =  new Estadia(nuevoHuesped2,nuevaHabitacion2,nuevoParqueadero2,serviciosRealizados2,12,"11/02/2012","P20");

        Persona * PersonaHotel3 = new Persona("Carlos", 31, "Masculino", "28");
        Huesped * nuevoHuesped3 = new Huesped(PersonaHotel3);
        Habitacion * nuevaHabitacion3 = new Habitacion(40000, 92, 3);
        Parqueadero * nuevoParqueadero3 = new Parqueadero(3000,"B95",9);
        Servicios * serviciosRealizados3 = new Servicios(30000,20000,0,0,10000);
        Estadia * nuevaEstadia3 =  new Estadia(nuevoHuesped3,nuevaHabitacion3,nuevoParqueadero3,serviciosRealizados3,9,"15/08/2005","P35");

        nuevoHotel->adiccionarEstadia(nuevaEstadia1);
        nuevoHotel->adiccionarEstadia(nuevaEstadia2);
        nuevoHotel->adiccionarEstadia(nuevaEstadia3);

/*
        list<Empleado *> * listaEmpleadosCargo = nuevoHotel->ObtenerEmpleados("Aseo");
        list<Empleado *>::iterator it = listaEmpleadosCargo->begin();
        Empleado * est;
        for(; it != listaEmpleadosCargo->end(); it++){
            est = *it;
            cout<<"El empleado que trabaja es: "<<est->GetNuevaPersona()->GetNombre()<<endl;

        }
        */

            //Creo que puedo crear la aplicacion para los administrativo y para los clientes pero lo mejor sera no mezclar las dos cosas;
        int opcion;
        int accion;
        do{
            cout<<"--------MENU------"<<endl;
            cout<<"1- Servicios"<<endl;
            cout<<"2- Empleados"<<endl;
            cout<<"3- Estadias"<<endl;
            cout<<"4- Parqueadero"<<endl;
            cout<<"5- Salir"<<endl;
            cout<<"Digite la opcion a elegir"<<endl;
            cin>>opcion;

            if(opcion == 1){
                system("cls");
                int accion;  // creo que esto podriar ir afuera
                do{
      
                cout<<"1- Conocer servicios disponibles y precio"<<endl; //creo  que a lo ultimo lo mejor sera crear una lista para los servicios
                cout<<"2- Agregar servicio"<<endl;
                cout<<"3- Conocer veces pedidas de un servicio en especifico"<<endl;
                cout<<"4- Conocer veces pedidas de todos los servicios"<<endl;
                cout<<"5- Conocer costo total de una area de servicios"<<endl; /* Por ejemplo el de servicio a la habitacion para eso deberia asociarlo con los empleados y calcular otros costos para saber
                cuanto le costara al hotel*/
                cout<<"6- Conocer costo total de todos los servicios"<<endl;
                cout<<"7- Generar factura"<<endl;
                cout<<"8- verificar disponibilidad"<<endl; //para esto vamos a poner un limite a cada servicio;
                cout<<"9- Volver al menu principal"<<endl;
                cout<<"10- Salir del programa"<<endl;
                
                cout<<"Digite la accion: ";
                cin>>accion;
                switch(accion){
                    case 1:
                        system("pause");
                        break;
                    case 2:
                        system("pause");
                        break;
                    case 3:
                        system("pause");
                        break;
                    case 4:
                        system("pause");
                        break;
                    case 5:
                        system("pause");
                        break;
                    case 6:
                        system("pause");
                        break;                       
                    case 7:
                        system("pause");
                        break;
                    case 8:
                        system("pause");
                        break; 
                    }
                    system("cls");
                }while(accion != 9);


            }

            
            if(opcion == 2){   
                system("cls");
                do{
                    cout<<"1- Buscar Empleado"<<endl;
                    cout<<"2- Agregar Empleado"<<endl;               
                    cout<<"3- Eliminar empleado"<<endl;
                    cout<<"4- Ver empleados de un area"<<endl;
                    cout<<"5- Ver todos los empleados"<<endl;
                    cout<<"6- Ver sueldo de todos los empleados"<<endl; //mostrata los sueldo de todos los empleados
                    cout<<"7- Calcular sueldo del empleado"<<endl; //mostrara los proceso que hace para obtener el sueldo, se tomaran en cuenta factores como el sueldo y otra cosas
                    cout<<"8- Actualizar informacion del empleado"<<endl;
                    cout<<"9- Calcular antiguedad del empleado"<<endl;
                    cout<<"10- Aplicar aumento"<<endl;
                    cout<<"11- Calcular vacaciones"<<endl; //calculalor en base de la antiguedad por ano seria 15 dias de vacaciones que se pueden acumular;
                    cout<<"12- volver al menu principal"<<endl;
                    cout<<"13- Salir del programa"<<endl;
                    cout<<"Digite la accion: "<<endl;
                    cin>>accion;
                    cout<<endl;
                    if(accion == 1){
                        string DNI;
                        cout<<"Digite el DNI del empleado a buscar"<<endl;
                        cin>>DNI;
                        cout<<nuevoHotel->BuscarEmpleado(DNI)->GetNuevaPersona()->GetNombre()<<endl;
                        system("pause");
                    }
                    if(accion == 2){
                        string nombreE;
                        string generoE;
                        string DNIE;
                        string cargoE;
                        int edad;
                        int sueldo;
                        
                        /*se llena el buffer cuando ingreso un numero largo entonces creo que lo mejor seria utilizar el cin.getline()*/
                        
                        cout<<"Digite los datos del empleado"<<endl;
                        cout<<"Nombre: "<<endl;
                        cin.ignore(); // Ignorar el carácter de nueva línea pendiente en el búfer
                        cin.clear(); // Limpiar cualquier error en el búfer
                        getline(cin, nombreE); 
                        cout<<"Genero: "<<endl;
                        cin>>generoE;
                        cout<<"DNI: "<<endl;
                        cin>>DNIE;
                        cout<<"Cargo: "<<endl;
                        cin>>cargoE;
                        cout<<"Edad: "<<endl;
                        cin>>edad;
                        cout<<"Sueldo: "<<endl;
                        cin>>sueldo;


                        
                        //Empleado(Persona* nuevaPersona, string cargo, int sueldo)
                        //Persona(string nombre, int edad, string genero, string DNI) :
                        Persona * nuevaPersonaEmple = new Persona(nombreE, edad, generoE, DNIE);
                        Empleado * nuevoEmpleadoE = new Empleado(nuevaPersonaEmple, cargoE, sueldo);
                        nuevoHotel->adiccionarEmpleado(nuevoEmpleadoE);
                        cout<<"\n\nEl empleado fue registrado"<<endl;
                        system("pause");
                    }
                    system("cls");
                //Para que se salga del if;
                }while(accion != 12);
            }
            
            if(opcion == 3){
                system("cls");
                int accion;
                do{
                cout<<"1- Buscar Estadia"<<endl;
                cout<<"2- Buscar Estadia por parte del DNI del huesped"<<endl;
                cout<<"3- Ver todas las estadias"<<endl;
                cout<<"4- Valor de costo de todas las estadias"<<endl; //cuestionable funcion;
                cout<<"5- Agregar Estadia"<<endl;
                cout<<"6- Cancelar Estadia"<<endl;
                cout<<"7- Generar Factura de todo"<<endl;
                cout<<"8- Obtener tiempo de la estadia"<<endl;
                cout<<"9- Volver al menu principal"<<endl;
                cout<<"10- Salir del programa"<<endl;
                cout<<"Digite la accion: "<<endl;
                cin>>accion;
                switch(accion){
                    case 1:
                        
                        system("pause");
                        break;
                    case 2:
                        system("pause");
                        break;
                    case 3:
                        system("pause");
                        break;
                    case 4:
                        system("pause");
                        break;
                    case 5:
                        system("pause");
                        break;
                    }
                    system("cls");
                }while(accion != 9);

            }

            if(opcion == 4){
                system("cls");
                int accion;
                do{
                cout<<"1- Registrar entrada";
                cout<<"2- Registra salida";
                cout<<"3- verificar disponibilidad";
                cout<<"4- Calcular costo";
                cout<<"5- generar reporte"<<endl; //Esto nos ayudara a saber todo sobre el vehiculo y su dueno;
                cout<<"6- Verificar vehiculo"<<endl; //Este método podría verificar si un vehículo en particular está estacionado en el parqueadero, en función de su placa u otra información identificativa.
                cout<<"7- actualizar estado"<<endl;
                cout<<"8- volver al menu principal"<<endl;
                cout<<"9- salir del programa"<<endl;
                cout<<"Digite la accion: "<<endl;
                cin>>accion;
                switch(accion){
                    case 1:
                        system("pause");
                        break;
                    case 2:
                        system("pause");
                        break;
                    case 3:
                        system("pause");
                        break;
                    case 4:
                        system("pause");
                        break;
                    case 5:
                        system("pause");
                        break;
                    case 6:
                        system("pause");
                        break;
                    }
                    system("cls");
                }while(accion != 8);

            }
            system("cls");
        }while(opcion != 5);
        cout<<"\n--------------FIN DEL PROGRAMA-----------------";    
       
           
        


    
    
    
    /*  1.que funcione las estadias y las funciones del hotel
     * 2. empleados
     * 3.servicios
     * 4.parqueadero
     */
    //pero principalmete crear un programa sencillo;
    //Organizar mejor el parqueadero y agregar mas clases;
    //pensar mejor en las relaciones de asociacion;
    //hacer otra forma de registrar otros datos como comida, domicilio a la habitacion y uso de la nevera inteligente(donde se coe algo y se registra)
    
    
    /*mejor primero yo genero la tarifa segun lo que halla echo el usuario y despues esto:
    hacer que el propio usuario eliga los servicios y dar un estimado del cobro total;*/
    /*crear una interfaz para cada una de las clases como si fuera una pagina, con su respectivos metodos y variedad de propiedades
    como seria en empleado y una funcion para saber cuantos empleados hay actualmente o cual es el que recibe mejor sueldo*/
    return 0;
}








/*Un hotel es un establecimiento que ofrece alojamiento temporal a los viajeros y turistas. Los servicios y comodidades que ofrece un hotel pueden variar dependiendo del tipo de hotel, su ubicación y su categoría, pero algunas características comunes incluyen:
Habitaciones equipadas con camas, ropa de cama, muebles, televisión, teléfono, baño privado y suministros básicos de aseo personal.
Servicio de limpieza y cambio de sábanas y toallas.
Servicio de recepción y atención al cliente las 24 horas del día.
Servicio de restaurante y bar, que puede ofrecer desayuno, almuerzo, cena y bebidas.
Servicios adicionales como piscina, spa, gimnasio, centro de negocios, salas de reuniones y conferencias.
Servicio de transporte y traslado al aeropuerto o a lugares de interés cercanos.
Wi-Fi gratuito en las áreas comunes y en las habitaciones.
Seguridad y vigilancia las 24 horas del día.
Estacionamiento gratuito o de pago.
Es importante mencionar que los servicios y comodidades pueden variar según el tipo de hotel y la categoría, por lo que es recomendable verificar los servicios ofrecidos al hacer una reserva. */

/*Algunos de los gastos más comunes que realiza un huésped en un hotel incluyen:
Tarifa de la habitación: este es el costo principal de alojamiento y suele ser el gasto más grande que realiza un huésped.
Comida y bebida: los huéspedes pueden optar por comer en el restaurante del hotel o pedir servicio a la habitación. También pueden comprar bebidas en el minibar de la habitación.
Servicios de spa y bienestar: algunos hoteles ofrecen servicios de spa y bienestar, como masajes y tratamientos de belleza, que los huéspedes pueden utilizar por un costo adicional.
Lavandería: si los huéspedes necesitan lavar su ropa durante su estadía, pueden utilizar los servicios de lavandería y tintorería del hotel.
Llamadas telefónicas: si los huéspedes utilizan el teléfono de la habitación para hacer llamadas, pueden incurrir en gastos adicionales
Internet: algunos hoteles pueden cobrar una tarifa por el uso del servicio de internet en la habitación.
Servicios de transporte: si los huéspedes necesitan transporte al aeropuerto u otros destinos, pueden optar por utilizar los servicios de transporte ofrecidos por el hotel por un costo adicional.*/