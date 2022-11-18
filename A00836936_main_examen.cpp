#include <iostream>
#include <string>
using namespace std;
#include "Jugador.h"
#include "AtrasCancha.h"
#include "Equipo.h"
void menu(){
    cout << "1. Consultar \n";
    cout << "2. Mayor encestador \n";
    cout << "3. Sueldo del jugador \n";
    cout << "4. Agregar jugador \n";
    cout << "5. Jugador con mas minutos en cancha \n";
    cout << "6. Nombre del equipo \n";
    cout << "7. Puntos anotados del equipo \n";  
    cout << "8. Entrenador \n";  
    cout << "9. Tipo de balón \n";
    cout << "10. Tipo de aro \n";
    cout << "0. Salir \n";
}

int main(){
    string nombre_buscar, nombre_equipo_nuevo, nombre_entrenador;
    int tam, opcion;
    cout << "Cantidad de jugadores a agregar: ";
    cin >> tam;
    Jugador jugador_prueba;
    Equipo equipo(tam);
    for (int i=0;i<tam;i++){
        jugador_prueba.agregarJugadores();
    }
    menu();
    cin >> opcion;
    if (opcion == 1){
        cout << "Nombre: ";
        cin >> nombre_buscar;
        jugador_prueba.buscarJugador(nombre_buscar);
        jugador_prueba.imprimirInformacion();
    } else if (opcion == 2){
        jugador_prueba.mayorEncestador();
        cout << "Mayor encestador: " << jugador_prueba.getNombre() << " con " << jugador_prueba.getPuntosAnotados() << " puntos";
    } else if (opcion == 3){
        cout << "Nombre: ";
        cin >> nombre_buscar;
        jugador_prueba.buscarJugador(nombre_buscar);
        cout << "El jugador " << jugador_prueba.getNombre() << " el sueldo es " << jugador_prueba.getSueldoBase();
    } else if (opcion == 4){
        jugador_prueba.agregarJugadores();
    } else if (opcion == 5){
        jugador_prueba.masMinutosCancha();
        cout << "Jugador con más minutos en cancha es: " << jugador_prueba.getNombre() << " con " << jugador_prueba.getMinutosJugados() << " minutos";
    } else if (opcion == 6){
        if (equipo.getNombreEquipo() == ""){
            cout << "Nombre del equipo: ";
            cin >> nombre_equipo_nuevo;
            equipo.setNombreEquipo(nombre_equipo_nuevo);
        } else {
            cout << "Nuevo nombre del equipo: ";
            cin >> nombre_equipo_nuevo;
            equipo.setNombreEquipo(nombre_equipo_nuevo);
        }
    } else if (opcion == 7){
        cout << "La cantidad de puntos anotados del equipo " << equipo.calcularPuntos();
    } else if (opcion == 8){
        if (equipo.getEntrenador() == ""){
            cout << "Nombre entrenador: ";
            cin >> nombre_entrenador;
            equipo.setNombreEquipo(nombre_entrenador);
        } 
    } 
    return 0;
}