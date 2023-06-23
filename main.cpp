#include <iostream>
#include <string>
#include <random>
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

using namespace std;
void areaEmpleado(string area); //debemos definir la funcion afuera del main para que sea de tipo global;
Hotel * nuevoHotel = new Hotel("Carmelo");

//Utilizar git para guardar una version del programa(tag) y despues utilizar windows y por utilmo utilizar mysql;
int main(){
    
    //PROGRAMA PARA LA ADMINISTRACION DE UN HOTEL;
    //Depronto agregar algo mas a la clase huesped como seria el numero de acompanantes;



        //EMPLEADOS
        Persona * nuevaPersona1 = new Persona("Carlos", 21, "Masculino", "12");
        Empleado * nuevoEmpleado1 =  new Empleado(nuevaPersona1,"Servicio a la habitacion",1200000);

        Persona * nuevaPersona2 = new Persona("Juan", 29, "Masculino", "24");
        Empleado * nuevoEmpleado2 =  new Empleado(nuevaPersona2,"Aseo",900000);

        Persona * nuevaPersona3 = new Persona("Ana", 45, "Femenino", "14");
        Empleado * nuevoEmpleado3 =  new Empleado(nuevaPersona3,"Aseo", 1300000);
        nuevoHotel->adiccionarEmpleado(nuevoEmpleado1);
        nuevoHotel->adiccionarEmpleado(nuevoEmpleado2);
        nuevoHotel->adiccionarEmpleado(nuevoEmpleado3);

//--------------------------------------------------------------------------------------------------------------
        
        //La estadian van desde el P1 hasta el P100 contando el hotel con 100 habitaciones;
        //SERVICIOS
        //que obtenga el tiempo de la estadia y lo multiple por el precio del servicio y asi obtenga el valor y le sume el iva
        Servicios * servicioEstadias1 = new Servicios("Wifi",2000,19);
        Servicios * servicioEstadias2 = new Servicios("Aseo",3000,19);
        Servicios * servicioEstadias3 = new Servicios("Cable",4000,21);
        Servicios * servicioEstadias4 = new Servicios("Refrigerador",2000,19);
        Servicios * servicioEstadias5 = new Servicios("Piscina",5000,15);
        
        
        //ESTADIAS
        Persona * PersonaHotel1 = new Persona("Rodriguez", 45, "Masculino", "9");
        Huesped * nuevoHuesped1 = new Huesped(PersonaHotel1);
        Habitacion * nuevaHabitacion1 = new Habitacion(35000, 72, 2);
        Parqueadero * nuevoParqueadero1 = new Parqueadero(5000,"A12");
        Estadia * nuevaEstadia1 =  new Estadia(nuevoHuesped1,nuevaHabitacion1,nuevoParqueadero1,20,"12/07/2003","P90");
        nuevaEstadia1->adiccionarServicios(servicioEstadias4);
        nuevaEstadia1->adiccionarServicios(servicioEstadias3);
        nuevaEstadia1->adiccionarServicios(servicioEstadias5);
        //Cada objeto de estadia tiene su propia lista de servicios
        //Bueno aplicando esa logica los dias de que se quede el huesped van a ser tambien los dias que se quede en el parqueadero;
        
        Persona * PersonaHotel2 = new Persona("Juana", 24, "Femenino", "19");
        Huesped * nuevoHuesped2 = new Huesped(PersonaHotel2);
        Habitacion * nuevaHabitacion2 = new Habitacion(95000, 100, 3);
        Parqueadero * nuevoParqueadero2 = new Parqueadero(3000,"B34");
        Estadia * nuevaEstadia2 =  new Estadia(nuevoHuesped2,nuevaHabitacion2,nuevoParqueadero2,12,"11/02/2012","P20");
        nuevaEstadia2->adiccionarServicios(servicioEstadias2);
        nuevaEstadia2->adiccionarServicios(servicioEstadias5);

        Persona * PersonaHotel3 = new Persona("Carlos", 31, "Masculino", "28");
        Huesped * nuevoHuesped3 = new Huesped(PersonaHotel3);
        Habitacion * nuevaHabitacion3 = new Habitacion(40000, 92, 3);
        Parqueadero * nuevoParqueadero3 = new Parqueadero(3000,"B95");
        Estadia * nuevaEstadia3 =  new Estadia(nuevoHuesped3,nuevaHabitacion3,nuevoParqueadero3,9,"15/08/2005","P35");
        nuevaEstadia3->adiccionarServicios(servicioEstadias5);
        nuevaEstadia3->adiccionarServicios(servicioEstadias1);

        //Estadia vacia sin huesped
        Persona * PersonaHotel4 = new Persona("", 0, "", "");
        Huesped * nuevoHuesped4 = new Huesped(PersonaHotel4);
        Habitacion * nuevaHabitacion4 = new Habitacion(0, 0, 0);
        Parqueadero * nuevoParqueadero4 = new Parqueadero(0,"0");
        Estadia * nuevaEstadia4 =  new Estadia(nuevoHuesped4,nuevaHabitacion4,nuevoParqueadero4,0,"","P19");
        

        nuevoHotel->adiccionarEstadia(nuevaEstadia1);
        nuevoHotel->adiccionarEstadia(nuevaEstadia2);
        nuevoHotel->adiccionarEstadia(nuevaEstadia3);
        nuevoHotel->adiccionarEstadia(nuevaEstadia4);
        
        
//--------------------------------------------------------------------------------------------------------------



        //Creo que puedo crear la aplicacion para los administrativo y para los clientes pero lo mejor sera no mezclar las dos cosas;
        int opcion;
        int accion;
        
        do{
            cout<<"--------MENU------"<<endl;
            cout<<"1- Servicios"<<endl;
            cout<<"2- Empleados"<<endl;
            cout<<"3- Estadias"<<endl;
            cout<<"4- Parqueadero"<<endl;
            cout<<"5- Huesped"<<endl; 
            cout<<"6- Salir"<<endl;

            cout<<"Digite la opcion a elegir"<<endl;
            cin>>opcion;
            
//----------------------------------------------------------------------------------------------------------------------------------------
            if(opcion == 1){
                system("cls");
                
                do{
      
                    cout<<"1- Conocer servicios disponibles y precio"<<endl; //creo  que a lo ultimo lo mejor sera crear una lista para los servicios
                    cout<<"2- Agregar servicio"<<endl;
                    cout<<"3- Conocer veces pedidas de un servicio en especifico"<<endl;
                    cout<<"4- Conocer veces pedidas de todos los servicios"<<endl;
                    cout<<"5- Conocer costo total de una area de servicios"<<endl; /* Por ejemplo el de servicio a la habitacion para eso deberia asociarlo con los empleados y calcular otros costos para saber cuanto le costara al hotel*/
                    cout<<"6- Conocer costo total de todos los servicios"<<endl;
                    cout<<"7- Generar factura"<<endl;
                    cout<<"8- verificar disponibilidad"<<endl; //para esto vamos a poner un limite a cada servicio;
                    cout<<"9- Volver al menu principal"<<endl;
                    cout<<"10- Salir del programa"<<endl;

                    cout<<"Digite la accion: ";
                    cin>>accion;
                
                }while(accion != 9);


            }

//----------------------------------------------------------------------------------------------------------------------------------------           
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
                    cout<<"12- ver informacion del empleado"<<endl;
                    cout<<"13- volver al menu principal"<<endl;
                    cout<<"14- Salir del programa"<<endl;
                    cout<<"Digite la accion: "<<endl;
                    cin>>accion;
                    cout<<endl;
                    if(accion == 1){
                        string DNI;
                        cout<<"Digite el DNI del empleado a buscar"<<endl;
                        cin>>DNI;
                        cout<<nuevoHotel->BuscarEmpleado(DNI)->GetNuevaPersona()->GetNombre()<<endl;
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
                    }
                    
                    if(accion == 3){
                        string DNI;
                        cout<<"Digite el DNI del empleado a eliminar"<<endl;
                        cin>>DNI;
                        cout<<"El empleado "<<nuevoHotel->BuscarEmpleado(DNI)->GetNuevaPersona()->GetNombre()<<" fue eliminado"<<endl;
                        nuevoHotel->EliminarEmpleado(DNI);

                    }
                    
                    if(accion == 4){
                        //DO
                        int Area;
                        cout<<"Elija el area"<<endl;
                        cout<<"1- Aseo"<<endl;
                        cout<<"2- Servicio a la habitacion"<<endl;
                        cin>>Area;

                        switch(Area){
                            case 1:    
                                areaEmpleado("Aseo");
                                break;
                            case 2: 
                                areaEmpleado("Servicio a la habitacion");
                                break;
                        }
                        

                    }
                    
                    if(accion == 5){
                        cout<<"Los empleados registrados son: "<<endl;
                        list<Empleado *> * resultado = nuevoHotel->obtenerListaEmpleado();
                        list<Empleado *>::iterator it = resultado->begin();
                        
                        Empleado * e = NULL;
                        for(; it != resultado->end();it++){
                            e = *it;
                            cout<<e->GetNuevaPersona()->GetNombre()<<" trabaja en: "<<e->GetCargo()<<endl;
                        }
                    }
                    
                    if(accion == 6){
                        cout<<"El sueldo de todos los empleados es: "<<endl;
                        list<Empleado *> * resultado = nuevoHotel->obtenerListaEmpleado();
                        list<Empleado *>::iterator it = resultado->begin();
                        
                        Empleado * e = NULL;
                        for(; it != resultado->end();it++){
                            e = *it;
                            cout<<e->GetNuevaPersona()->GetNombre()<<" su sueldo es: "<<e->GetSueldo()<<endl;
                        }
                    }
                    
                    if(accion == 7){ //EN PAUSA
                        
                    //Experiencia y habilidades: Por lo general, las personas con mayor experiencia y habilidades específicas en un campo particular tienden a recibir sueldos más altos. La demanda de ciertas habilidades y conocimientos puede aumentar el valor que un empleador está dispuesto a pagar.

                    //Nivel educativo: En muchos casos, un nivel educativo más alto, como un título universitario o posgrado, puede conducir a sueldos más altos. La educación adicional a menudo se asocia con una mayor especialización y conocimientos en un área determinada.

                    //Responsabilidades y nivel de puesto: Los empleados que tienen un mayor nivel de responsabilidad en su trabajo, como supervisores, gerentes o ejecutivos, suelen recibir salarios más altos en comparación con aquellos en puestos de nivel inferior.

                    //Industria y ubicación: El sector o la industria en la que trabajes puede afectar tu salario. Algunas industrias, como la tecnología o las finanzas, tienden a ofrecer salarios más altos en comparación con otras. Además, la ubicación geográfica también puede influir en el nivel salarial, ya que los costos de vida y las condiciones económicas varían en diferentes regiones y países.

                    //Tamaño y tipo de empresa: El tamaño y el tipo de empresa también pueden ser factores determinantes. Las grandes empresas o corporaciones a menudo tienen más recursos financieros y pueden ofrecer salarios más altos en comparación con las pequeñas y medianas empresas. Además, las empresas en sectores altamente competitivos o en crecimiento pueden estar dispuestas a pagar más para atraer y retener talento.

                    //Negociación y habilidades de comunicación: La capacidad de negociar y comunicar eficazmente tu valor como empleado puede influir en tu sueldo. Aquellos que son capaces de demostrar su valía y argumentar de manera persuasiva pueden tener más éxito al negociar un salario más alto.
                       
                        string DNI;
                        cout<<"Informacion del sueldo del empleado";
                        cout<<"Ingrese el DNI";
                        cin>>DNI;
                        cout<<nuevoHotel->BuscarEmpleado(DNI)->GetNuevaPersona()->GetNombre();
                        
                    }
                    
                    if(accion == 8){ //metodos setters
                        int campo;
                        string DNI;
                        cout<<"Actualizar informacion"<<endl;
                        cout<<"Ingrese el DNI del empleado"<<endl;
                        cin>>DNI;
                        cout<<"Que campo desea actualizar"<<endl;
                        cout<<"1- Nombre"<<endl;
                        cout<<"2- Edad"<<endl;
                        cout<<"3- Genero"<<endl;
                        cout<<"4- DNI"<<endl;
                        cout<<"5- Sueldo"<<endl;
                        cout<<"6- Cargo"<<endl;
                        cin>>campo;
                        //depronto meter metodo para salirse y ingresar otro DNI;
                        if(campo == 1){
                            string nombre;
                            string nombreAntiguo = nuevoHotel->BuscarEmpleado(DNI)->GetNuevaPersona()->GetNombre();
                            cout<<"Ingrese el nuevo nombre"<<endl;
                            cin>>nombre;
                            nuevoHotel->BuscarEmpleado(DNI)->GetNuevaPersona()->SetNombre(nombre);
                            cout<<"Informacion actualizada de "<<nombreAntiguo<<" a "<<nombre<<endl;
                        }
                        
                        if(campo == 2){
                            int edad;
                            int edadAntigua  = nuevoHotel->BuscarEmpleado(DNI)->GetNuevaPersona()->GetEdad();
                            cout<<"Ingrese la nueva edad"<<endl;
                            cin>>edad;
                            nuevoHotel->BuscarEmpleado(DNI)->GetNuevaPersona()->SetEdad(edad);
                            cout<<"Informacion actualizada de "<<edadAntigua<<" a "<<edad<<endl;

                        }
                        if(campo == 3){
                            string genero;
                            string generoAntiguo =  nuevoHotel->BuscarEmpleado(DNI)->GetNuevaPersona()->GetGenero();
                            
                            cout<<"Ingrese el nuevo genero"<<endl;
                            cin>>genero;
                            nuevoHotel->BuscarEmpleado(DNI)->GetNuevaPersona()->SetGenero(genero);    
                            cout<<"Informacion actualizada de "<<generoAntiguo<<" a "<<genero<<endl;

                        }
                        if(campo == 4){
                            string DNI;
                            string dniAntiguo = nuevoHotel->BuscarEmpleado(DNI)->GetNuevaPersona()->GetDNI();
                            cout<<"Ingrese el nuevo DNI"<<endl;
                            cin>>DNI;
                            nuevoHotel->BuscarEmpleado(DNI)->GetNuevaPersona()->SetDNI(DNI);
                            cout<<"Informacion actualizada de "<<dniAntiguo<<" a "<<DNI<<endl;
                        }
                        if(campo == 5){
                            int sueldo;
                            int sueldoAntiguo = nuevoHotel->BuscarEmpleado(DNI)->GetSueldo();
                            cout<<"Ingrese el sueldo"<<endl;
                            cin>>sueldo;
                            nuevoHotel->BuscarEmpleado(DNI)->SetSueldo(sueldo);
                            
                            cout<<"Informacion actualizada de "<<sueldoAntiguo<<" a "<<sueldo<<endl;
                        }
                        if(campo == 6){
                            string cargo;
                            string cargoAntiguo = nuevoHotel->BuscarEmpleado(DNI)->GetCargo();
                            cout<<"Ingrese el nombre"<<endl;
                            cin>>cargo;
                            nuevoHotel->BuscarEmpleado(DNI)->SetCargo(cargo);
                            
                            cout<<"Informacion actualizada de "<<cargoAntiguo<<" a "<<cargo<<endl;
                        }
                        

                    }
                    
                    if(accion == 9){
                        //EN PAUSA;
                    }
                    
                    if(accion == 10){
                        string DNI;
                        int opcion;
                        string porcentaje = "%";
                        cout<<"Digite el DNI del empleado"<<endl;
                        cin>>DNI;
                        float aumento;
                        cout<<"Elija la opcion de aumento"<<endl;
                        cout<<"1- por dinero agregado"<<endl;
                        cout<<"2- por porcentaje agregado"<<endl;
                        cin>>opcion;
                        
                        cout<<"\nDigite el aumento a realizar"<<endl;
                        cin>>aumento;
                        switch(opcion){
                            case 1:
                                nuevoHotel->BuscarEmpleado(DNI)->aplicarSueldo(aumento);
                                cout<<"El aumento por dinero fue agregado exitosamente"<<endl;
                                break;
                            case 2:
                                nuevoHotel->BuscarEmpleado(DNI)->aplicarSueldo(aumento,porcentaje);
                                cout<<"El aumento por dinero fue agregado exitosamente"<<endl;
                                break;                              
                                
                        }
                    }if(accion == 11){
                        //EN PAUSA
                    }
                    if(accion == 12){
                        system("cls");
                        int opcion;
                        string DNI;
                        cout<<"Digite el DNI del empleado"<<endl;
                        cin>>DNI;
                        do{ 
                          
                            cout<<"Que informacion desea ver: "<<endl;
                            cout<<"1- Nombre"<<endl;
                            cout<<"2- Edad"<<endl;
                            cout<<"3- Genero"<<endl;
                            cout<<"4- Sueldo"<<endl;
                            cout<<"5- Cargo"<<endl;
                            cout<<"6- Ver toda la informacion"<<endl;
                            cout<<"7- volver al menu anterior"<<endl;
                            cin>>opcion;
                            switch(opcion){
                                case 1:   
                                    cout<<"El nombre del empleado es: "<<nuevoHotel->BuscarEmpleado(DNI)->GetNuevaPersona()->GetNombre()<<endl;
                                    break;
                                case 2:
                                    cout<<"La edad del empleado es: "<<nuevoHotel->BuscarEmpleado(DNI)->GetNuevaPersona()->GetEdad()<<endl;
                                    break;
                                case 3:
                                    cout<<"El genero del empleado es: "<<nuevoHotel->BuscarEmpleado(DNI)->GetNuevaPersona()->GetGenero()<<endl;
                                    break;
                                case 4:
                                    cout<<"El sueldo del empleado es: "<<nuevoHotel->BuscarEmpleado(DNI)->GetSueldo()<<endl;
                                    break;
                                case 5:
                                    cout<<"El cargo del empleado es: "<<nuevoHotel->BuscarEmpleado(DNI)->GetCargo()<<endl;
                                    break;
                                case 6:
                                    cout<<"Datos del empleado: "<<endl;
                                    cout<<"Nombre: "<<nuevoHotel->BuscarEmpleado(DNI)->GetNuevaPersona()->GetNombre()<<endl;
                                    cout<<"Edad: "<<nuevoHotel->BuscarEmpleado(DNI)->GetNuevaPersona()->GetEdad()<<endl;
                                    cout<<"DNI: "<<nuevoHotel->BuscarEmpleado(DNI)->GetNuevaPersona()->GetDNI()<<endl;
                                    cout<<"Genero: "<<nuevoHotel->BuscarEmpleado(DNI)->GetNuevaPersona()->GetGenero()<<endl;
                                    cout<<"Sueldo: "<<nuevoHotel->BuscarEmpleado(DNI)->GetSueldo()<<endl;
                                    cout<<"Cargo: "<<nuevoHotel->BuscarEmpleado(DNI)->GetCargo()<<endl;                                     
                                    break;
                            }
                            system("pause");
                            system("cls");

                        }while(opcion != 7);
                    
                    }
                    system("pause");
                    system("cls");
                //Para que se salga del if;
                    if(accion == 14){
                        cout<<"------FIN DEL PROGRAMA------";
                        exit(0);
                    }
                }while(accion != 13);
                

            }
//---------------------------------------------------------------------------------------------------------------------------------------- 
            if(opcion == 3){
                system("cls");
                do{
                    cout<<"1- Buscar huesped"<<endl;
                    cout<<"2- Buscar Estadia por parte del DNI del huesped"<<endl;
                    cout<<"3- Ver todas las estadias"<<endl;
                    cout<<"4- Valor de costo de todas las estadias"<<endl; //cuestionable funcion;
                    cout<<"5- Agregar Estadia"<<endl;
                    cout<<"6- Cancelar Estadia"<<endl;
                    cout<<"7- Generar Factura de todo"<<endl;
                    cout<<"8- Obtener tiempo de la estadia"<<endl;
                    cout<<"9- Ver toda la informacion de una estadia"<<endl;
                    cout<<"10- ver si la estadia esta ocupada"<<endl;
                    cout<<"11- Buscar Huesped por parte del numero de la habitacion"<<endl;
                    cout<<"12- Volver al menu principal"<<endl;
                    cout<<"13- Salir del programa"<<endl;
                    cout<<"Digite la accion: "<<endl;
                    cin>>accion;
                    if(accion == 1){
                        string numeroEstadia;
                        cout<<"Digite el numero de la estadia"<<endl;
                        cin>>numeroEstadia;
                        cout<<"El nombre del huesped de la estadia es: "<<nuevoHotel->BuscarEstadia(numeroEstadia)->GetNuevoHuesped()->GetNuevaPersona()->GetNombre()<<endl;
                    }

                    if(accion == 2){
                        string DNI;
                        cout<<"Digite el DNI del huesped"<<endl;
                        cin>>DNI;
                        cout<<"El numero de la estadia es: "<<nuevoHotel->BuscarEstadia(DNI,"si")->GetNumeroEstadia()<<" y el huesped es: "<<nuevoHotel->BuscarEstadia(DNI,"si")->GetNuevoHuesped()->GetNuevaPersona()->GetNombre()<<endl;
                    }

                    if(accion == 3){
                        cout<<"Todas las estadias activas: "<<endl;

                        cout<<"Los empleados registrados son: "<<endl;
                        list<Estadia *> * resultado = nuevoHotel->obtenerListaEstadia();
                        list<Estadia *>::iterator it = resultado->begin();

                        Estadia * e = NULL;
                        for(; it != resultado->end();it++){
                            e = *it;
                            cout<<"Numero de la estadia: "<<e->GetNumeroEstadia()<<" nombre del huesped "<<e->GetNuevoHuesped()->GetNuevaPersona()->GetNombre()<<" numero de habitacion: "<<e->GetNuevaHabitacion()->GetNumeroHabitacion()<<endl;
                        }
                    }              
                    
                    if(accion == 4){
                        int suma = 0;
                        cout<<"Valor de costo total de todas las estadias"<<endl;
                        list<Estadia *> * resultado = nuevoHotel->obtenerListaEstadia();
                        list<Estadia *>::iterator it = resultado->begin();

                        Estadia * e = NULL;
                        for(; it != resultado->end();it++){
                            e = *it;
                            suma += e->costoTotal();
                        }
                        
                        cout<<suma<<endl;
                    }
                    
                    if(accion == 5){
                        string nombre,genero, DNI, lugarEstacionamiento,fecha,numeroEstadia;
                        int edad, costoNoche, numeroHabitacion, numeroCamas,duracionDias,costoDia;
                        cout<<"Digite los datos de la estadia a agregar"<<endl;
                        
                        cout<<"\nDatos Personales: "<<endl;
                        cout<<"Nombre: "<<endl;
                        cin.ignore(); // Ignorar el carácter de nueva línea pendiente en el búfer
                        cin.clear(); // Limpiar cualquier error en el búfer
                        getline(cin, nombre);
                        cout<<"Edad: "<<endl;
                        cin>>edad;
                        cout<<"Genero: "<<endl;
                        cin>>genero;
                        cout<<"DNI: "<<endl;
                        cin>>DNI;
                        
                        cout<<"\nDatos de la habitacion: "<<endl;
                        cout<<"Costo noche "<<endl;
                        cin>>costoNoche;
                        cout<<"Numero de la habitacion: "<<endl;
                        cin>>numeroHabitacion;
                        cout<<"Numero de camas: "<<endl;
                        cin>>numeroCamas;
                        
                        cout<<"\nDatos del estacionamiento: "<<endl;
                        cout<<"Costo Dia: "<<endl;
                        cin>>costoDia;
                        cout<<"Lugar de estacionamiento"<<endl;
                        cin>>lugarEstacionamiento;

                                        
                        cout<<"\nDatos de la estadia: "<<endl;
                        cout<<"Dias que va a pasar en el hotel: "<<endl;
                        cin>>duracionDias;
                        cout<<"Fecha actual de hoy (formato: dia/mes/ano)";
                        cin>>fecha;
                        cout<<"Numero de registro de la estadia"<<endl;
                        cin>>numeroEstadia;
                        
                        //Esto no tiene mucho sentido totalmente lo tendria que poner despues, creo que si pudiera inicializar la variables por predeterminado en el constructor seria mejor

                        Persona * personaRegistro = new Persona(nombre,edad,genero,DNI);
                        Huesped * nuevoHuespedRegistro =  new Huesped(personaRegistro);
                        Habitacion * nuevaHabitacionRegistrado = new Habitacion(costoNoche, numeroHabitacion, numeroCamas);
                        Parqueadero * nuevoParqueaderoResgistrado = new Parqueadero(costoDia, lugarEstacionamiento);
                        Estadia * nuevaEstadiaRegistrado = new Estadia(nuevoHuespedRegistro, nuevaHabitacionRegistrado,nuevoParqueaderoResgistrado,duracionDias,fecha,numeroEstadia);
                        
                        nuevoHotel->adiccionarEstadia(nuevaEstadiaRegistrado);
                        cout<<"La estadia fue agregada con exito"<<endl;
                    }
                    if(accion == 6){
                        string numeroEstadia;
                        cout<<"Digite el numero de la estadia a cancelar"<<endl;
                        cin>>numeroEstadia;
                        
                        nuevoHotel->EliminarEstadia(numeroEstadia);
                        cout<<"La estadia: "<<numeroEstadia<<" a sido eliminada"<<endl;
                      
                    }
                    if(accion == 7){
                        string numeroEstadia;
                        cout<<"Digite el numero de la estadia del huesped"<<endl;
                        cin>>numeroEstadia;
                        
                        cout<<"\nDatos personales: "<<endl;
                        cout<<"Nombre: "<<nuevoHotel->BuscarEstadia(numeroEstadia)->GetNuevoHuesped()->GetNuevaPersona()->GetNombre()<<endl;
                        cout<<"Edad: "<<nuevoHotel->BuscarEstadia(numeroEstadia)->GetNuevoHuesped()->GetNuevaPersona()->GetEdad()<<endl;
                        cout<<"DNI: "<<nuevoHotel->BuscarEstadia(numeroEstadia)->GetNuevoHuesped()->GetNuevaPersona()->GetDNI()<<endl;
                        
                        cout<<"\nCosto total del estacionamiento"<<endl;
                        cout<<"Total sin iva: "<<nuevoHotel->BuscarEstadia(numeroEstadia)->costoTotalParqueadero()<<endl;
                      
                        cout<<"\nCosto total servicios"<<endl;
                        cout<<"Total sin iva: "<<nuevoHotel->BuscarEstadia(numeroEstadia)->costoTotalServicios()<<endl;
                        
                        
                        cout<<"\nCosto total estadia"<<endl;
                        cout<<"Dias en el hotel: "<<nuevoHotel->BuscarEstadia(numeroEstadia)->GetDuracionDias()<<endl;
                        cout<<"Costo noche: "<<nuevoHotel->BuscarEstadia(numeroEstadia)->GetNuevaHabitacion()->GetCostoNoche()<<endl;
                        cout<<"Total sin iva: "<<nuevoHotel->BuscarEstadia(numeroEstadia)->costoTotalEstadia()<<endl;
                        
                        cout<<"\nCosto total de la estadia sin iva"<<endl;                      
                        cout<<nuevoHotel->BuscarEstadia(numeroEstadia)->costoTotalSinIva()<<endl;
                        
                        cout<<"\nCosto total de la estadia con iva"<<endl;
                        cout<<nuevoHotel->BuscarEstadia(numeroEstadia)->costoTotal()<<endl;
                        
                                
                    }
                    if(accion == 8){
                        string numeroEstadia;
                        cout<<"Ingrese el numero de la estadia del huesped"<<endl;
                        cin>>numeroEstadia;
                        
                        cout<<"El tiempo de la estadia en dias es: "<<nuevoHotel->BuscarEstadia(numeroEstadia)->GetDuracionDias()<<endl;
                    }
                    
                    if(accion == 9){
                        string numeroEstadia;
                        cout<<"Ingrese el numero de la estadia del huesped"<<endl;
                        cin>>numeroEstadia;
                        
                        cout<<"\nDatos del huesped:"<<endl;
                        cout<<"nombre: "<<nuevoHotel->BuscarEstadia(numeroEstadia)->GetNuevoHuesped()->GetNuevaPersona()->GetNombre()<<endl;
                        cout<<"edad: "<<nuevoHotel->BuscarEstadia(numeroEstadia)->GetNuevoHuesped()->GetNuevaPersona()->GetEdad()<<endl;
                        cout<<"DNI: "<<nuevoHotel->BuscarEstadia(numeroEstadia)->GetNuevoHuesped()->GetNuevaPersona()->GetDNI()<<endl;
                        cout<<"Genero: "<<nuevoHotel->BuscarEstadia(numeroEstadia)->GetNuevoHuesped()->GetNuevaPersona()->GetGenero()<<endl;
                        
                        cout<<"\nDatos de la habitacion:"<<endl;
                        cout<<"numero estadia: "<<nuevoHotel->BuscarEstadia(numeroEstadia)->GetNuevaHabitacion()->GetNumeroHabitacion()<<endl;
                        cout<<"numero de camas: "<<nuevoHotel->BuscarEstadia(numeroEstadia)->GetNuevaHabitacion()->GetNumeroCamas()<<endl;
                        cout<<"costo noche: "<<nuevoHotel->BuscarEstadia(numeroEstadia)->GetNuevaHabitacion()->GetCostoNoche()<<endl;
                        
                        
                        cout<<"\nDatos de los servicios:"<<endl;
                        cout<<"Nombre de los servicios pedidos: "<<endl;
                        //IDEA depronto crear una funcion en las fueras del main o en estadia para solo pasar la lista y que itere sobre ella para tener esto mas organizado
                        list<Servicios *>::iterator it = nuevoHotel->BuscarEstadia(numeroEstadia)->GetListaServicios()->begin();
                        
                        Servicios * e = NULL;
                        
                        for(; it != nuevoHotel->BuscarEstadia(numeroEstadia)->GetListaServicios()->end();it++){
                            e = *it;
                                cout<<e->getNombreServicio()<<endl;
                        }
                        
                        
                        cout<<"\nDatos parqueadero:"<<endl;
                        cout<<"Lugar de estacionamiento: "<<nuevoHotel->BuscarEstadia(numeroEstadia)->GetNuevoParqueadero()->GetLugarEstacionamiento()<<endl;
                        cout<<"Costo dia: "<<nuevoHotel->BuscarEstadia(numeroEstadia)->GetNuevoParqueadero()->GetCostoDia()<<endl;
                        
                        cout<<"\nDatos estadia: "<<endl;
                        cout<<"Duracion de la estadia: "<<nuevoHotel->BuscarEstadia(numeroEstadia)->GetDuracionDias()<<endl;
                        cout<<"Fecha de inicio de la estadia: "<<nuevoHotel->BuscarEstadia(numeroEstadia)->GetFecha()<<endl;
                        
                    }
                    
                    if(accion == 10){
                        
                        string numeroEstadia;
                        cout<<"Digite el numero de la estadia: "<<endl;
                        cin>>numeroEstadia;
                        
                        
                        if(((nuevoHotel->BuscarEstadia(numeroEstadia)->GetNuevoHuesped()->GetNuevaPersona()->GetNombre()) != "")){
                            cout<<"La estadia esta ocupada por el huesped: "<<nuevoHotel->BuscarEstadia(numeroEstadia)->GetNuevoHuesped()->GetNuevaPersona()->GetNombre()<<endl;
                        }else{
                            cout<<"La estadia no esta siendo ocupada"<<endl;
                        }
                        
                        
                    }
                    if(accion == 11){
                        int numeroHabitacion;
                        cout<<"Digite el numero de la habitacion: "<<endl;
                        cin>>numeroHabitacion;
                        
                        list<Estadia *>::iterator it = nuevoHotel->obtenerListaEstadia()->begin();
                        Estadia * e = NULL;
                        for(; it != nuevoHotel->obtenerListaEstadia()->end();it++){
                            e = *it;
                            if(e->GetNuevaHabitacion()->GetNumeroHabitacion() == numeroHabitacion){
                                cout<<"La habitacion "<<numeroHabitacion<<" esta siendo ocupada por: "<<e->GetNuevoHuesped()->GetNuevaPersona()->GetNombre()<<endl;
                                break;
                            }
                        }
                        
                    }
                    
                    system("pause");
                    system("cls");
                    if(accion == 13){
                        cout<<"------FIN DEL PROGRAMA------";
                        exit(0);
                    }
                    
                }while(accion != 12);

            }
//----------------------------------------------------------------------------------------------------------------------------------------
            if(opcion == 4){
                system("cls");
                do{
                    cout<<"1- verificar disponibilidad"<<endl;
                    cout<<"2- Calcular costo"<<endl;
                    cout<<"3- generar reporte"<<endl; //Esto nos ayudara a saber todo sobre el vehiculo y su dueno;
                    cout<<"4- Verificar vehiculo"<<endl; //Este método podría verificar si un vehículo en particular está estacionado en el parqueadero, en función de su placa u otra información identificativa.
                    cout<<"5- volver al menu principal"<<endl;
                    cout<<"6- salir del programa"<<endl;
                    cout<<"Digite la accion: "<<endl;
                    cin>>accion;
                    if(accion == 1){
                        string numeroLugar;
                        bool lugar = true;
                        cout<<"Digite el numero del lugar del parqueadero"<<endl;
                        cin>>numeroLugar;
                        
                        
                        list<Estadia *>::iterator it = nuevoHotel->obtenerListaEstadia()->begin();
                        
                        Estadia * e = NULL;
                        
                        for(;it != nuevoHotel->obtenerListaEstadia()->end();it++){
                            e =  *it;
                            if(e->GetNuevoParqueadero()->GetLugarEstacionamiento() == numeroLugar){
                                lugar = false;
                                break;             
                            }
                        }
                        
                        if(lugar){
                            cout<<"El lugar esta disponible";
                        }else{
                            cout<<"El lugar esta ocupado";
                        }
                        
                       
                    }
                    
                    if(accion == 2){
                        string numeroEstadia;
                        cout<<"Digite el numero de la estadia"<<endl;
                        cin>>numeroEstadia;
                        
                        cout<<"El costo total del parqueadero: "<<nuevoHotel->BuscarEstadia(numeroEstadia)->costoTotalParqueadero();
                        
                    }
                    if(accion == 3){
                        string numeroEstadia;
                        cout<<"Digite el numero de la estadia"<<endl;
                        cin>>numeroEstadia;
                        
                        //IDEA agregar mas cosas como la matricula del carro y otra especificaciones;
                        cout<<"\nDatos Parqueadero: "<<endl;
                        cout<<"Nombre: "<<nuevoHotel->BuscarEstadia(numeroEstadia)->GetNuevoHuesped()->GetNuevaPersona()->GetNombre()<<endl;
                        cout<<"DNI: "<<nuevoHotel->BuscarEstadia(numeroEstadia)->GetNuevoHuesped()->GetNuevaPersona()->GetDNI()<<endl;
                        cout<<"Lugar de estacionamiento: "<<nuevoHotel->BuscarEstadia(numeroEstadia)->GetNuevoParqueadero()->GetLugarEstacionamiento()<<endl;
                        cout<<"Costo por dia: "<<nuevoHotel->BuscarEstadia(numeroEstadia)->GetNuevoParqueadero()->GetCostoDia()<<endl;
                    }
                    if(accion == 4){
                        
                        //EN ESPERA no tengo el atributo matricula ni ninguna forma de rastrearlo
                    }

                    
                    system("pause");
                    system("cls");
                    if(accion == 6){
                        cout<<"------FIN DEL PROGRAMA------";
                        exit(0);
                    }
                    
                }while(accion != 5);
            }
//----------------------------------------------------------------------------------------------------------------------------------------
       
            if(opcion == 5){
                system("cls");
                do{
                    cout<<"1- Ver todos los datos del huesped"<<endl;
                    cout<<"2- Buscar un huesped por su DNI"<<endl;
                    cout<<"3- Ver a todos los huespedes que se encuentran actualmente en el hotel"<<endl;
                    cout<<"4- Cambiar datos"<<endl;
                    cout<<"5- volver al menu principal"<<endl;
                    cout<<"6- salir del programa"<<endl;
                    cout<<"Digite la accion: "<<endl;
                    cin>>accion;
                    if(accion == 1){
                        string DNI;
                        cout<<"Ingrese el DNI del huesped"<<endl;
                        cin>>DNI;
                        
                        cout<<"Nombre: "<<nuevoHotel->BuscarEstadia(DNI, "cc")->GetNuevoHuesped()->GetNuevaPersona()->GetNombre()<<endl;
                        cout<<"Edad: "<<nuevoHotel->BuscarEstadia(DNI, "cc")->GetNuevoHuesped()->GetNuevaPersona()->GetEdad()<<endl;
                        cout<<"Genero: "<<nuevoHotel->BuscarEstadia(DNI, "cc")->GetNuevoHuesped()->GetNuevaPersona()->GetGenero()<<endl;

                    }
                    
                    if(accion == 2){
                        string DNI;
                        cout<<"Ingrese el DNI del huesped"<<endl;
                        cin>>DNI;
                        
                        cout<<"El nombre del huesped registrado es: "<<nuevoHotel->BuscarEstadia(DNI, "cc")->GetNuevoHuesped()->GetNuevaPersona()->GetNombre()<<endl;
                    }
                    
                    
                    if(accion == 3){
                        cout<<"Huespedes en el hotel: "<<endl;
                        
                        list<Estadia* >::iterator it = nuevoHotel->obtenerListaEstadia()->begin();
                        
                        Estadia * e = NULL;
                        for(; it != nuevoHotel->obtenerListaEstadia()->end();it++){
                            cout<<e->GetNuevoHuesped()->GetNuevaPersona()->GetNombre()<<endl;
                        }
                        
                    }
                    
                    
                    if(accion == 4){
                        string DNI;
                        int cambio;
                        cout<<"Ingrese el DNI del huesped"<<endl;
                        cin>>DNI;
                        cout<<"Digite el Dato a cambiar"<<endl;
                        cin>>cambio;
                        cout<<"Cambiar el nombre"<<endl;
                        cout<<"Cambiar la edad"<<endl;
                        cout<<"Cambiar el genero"<<endl;
                        
                        if(cambio == 1){
                            string nombre;
                            cout<<"Digite el nuevo nombre: "<<endl;
                            cin>>nombre;
                            
                            nuevoHotel->BuscarEstadia(DNI, "cc")->GetNuevoHuesped()->GetNuevaPersona()->SetNombre(nombre);
                            
                            cout<<"El nombre a sido cambiado exitosamente"<<endl;

   
                        }
                        
                        if(cambio == 2){
                            int edad;
                            cout<<"Digite el nuevo nombre: "<<endl;
                            cin>>edad;
                            
                            nuevoHotel->BuscarEstadia(DNI, "cc")->GetNuevoHuesped()->GetNuevaPersona()->SetEdad(edad);
                            
                            cout<<"La edad a sido cambiado exitosamente"<<endl;                       
                        
                        }
                        if(cambio == 3){
                            
                            string genero;
                            cout<<"Digite el nuevo nombre: "<<endl;
                            cin>>genero;
                            
                            nuevoHotel->BuscarEstadia(DNI, "cc")->GetNuevoHuesped()->GetNuevaPersona()->SetGenero(genero);
                            
                            cout<<"El genero a sido cambiado exitosamente"<<endl;
                        }
                        
                    }
                    
                    
                    system("pause");
                    system("cls");
                    if(accion == 6){
                        cout<<"------FIN DEL PROGRAMA------";
                        exit(0);
                    }
                    
                }while(accion != 5); 
            }
            
        //FINAL DEL DO-WHILE        
        }while(opcion != 6);
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


void areaEmpleado(string area){ //siempre debemos hacer la implementación de estas funciones fuera del main o dentro de una clase tambien vale;
    list<Empleado *> * empleadosArea = nuevoHotel->ObtenerEmpleadosArea(area);

    list<Empleado *>::iterator it = empleadosArea->begin();
    Empleado * est;
    for(; it != empleadosArea->end(); it++){
        est = *it;
        cout << est->GetNuevaPersona()->GetNombre() << endl;
    }
}







