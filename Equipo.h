/*
- Benjamín Iván Arauz Córdova
- A00836936
- 02/12/2022

Clase Equipo: Representa a un equipo, a la unión de jugadores
*/

#ifndef EQUIPO_H //Si no esta definido EQUIPO_H 
#define EQUIPO_H //Definir procesador EQUIPO_H  

//Librerias
#include <string>
#include <iostream>
using namespace std;
#include <vector>
#include <cstdlib>

//Incluir a la clase Jugador y a sus clases hijas (Armador, Alero, Poste)
#include "Jugador.h"
#include "Armador.h"
#include "Alero.h"
#include "Poste.h"
//Tiene agregación de todas las clases agregadas

class Equipo {
    private:
        //Atributos
        string nombre_equipo;
        Jugador jugador_informacion;
        vector<Jugador> jugadores;
        vector<Armador> armadores;
        vector<Alero> aleros;
        vector<Poste> postes;
    public:
        //Construcor
        Equipo(){}
        //Getters
        string getNombreEquipo();
        Jugador getJugadorInformacion();
        //Setters
        void setNombreEquipo(string);
        //Otros métodos
        void agregarJugadores();
        void imprimirInformacion(string);
        Jugador* buscarJugador(string);
        int mayorEncestador();
        string mayorEncestadorNombre();
        int masMinutosJugados();
        string masMinutosJugadosNombre();
        int puntosEquipo();
        void eliminarJugador(string);
};
//Getters
string Equipo::getNombreEquipo(){
    return nombre_equipo;
}
Jugador Equipo::getJugadorInformacion(){
    return jugador_informacion;
}
//Setter
void Equipo::setNombreEquipo(string nuevo_nombre_equipo){
    nombre_equipo = nuevo_nombre_equipo;
}
//Otros métodos
void Equipo::agregarJugadores(){
    Jugador jugador;
    int opcion_posicion, atributos_clases;
    jugador.agregarJugador();
    cout << "¿ Qué tipo de jugador es? ";
    cout << "1. Armador" << endl;
    cout << "2. Alero" << endl;
    cout << "3. Poste" << endl;
    cin >> opcion_posicion;
    while (opcion_posicion < 1 || opcion_posicion > 3){
        cout << "Número incorrecto:"  << endl;
        cout << "¿ Qué tipo de jugador es? ";
        cout << "1. Armador";
        cout << "2. Alero";
        cout << "3. Poste";
        cin >> opcion_posicion;
    }
    if (opcion_posicion == 1){
        cout << "Robos hechos: ";
        cin >> atributos_clases;
        Armador armador(atributos_clases, jugador);
        armadores.push_back(armador);
    } else if (opcion_posicion == 2){
        cout << "Buenas jugadas: ";
        cin >> atributos_clases;
        Alero alero(atributos_clases, jugador);
        aleros.push_back(alero);
    } else if (opcion_posicion == 3){
        cout << "Rebotes: ";
        cin >> atributos_clases;
        Poste poste(atributos_clases, jugador);
        postes.push_back(poste);
    }
    jugadores.push_back(jugador);
}
void Equipo::imprimirInformacion(string nombre_buscar){
    for (int i=0;i<jugadores.size();i++){
        if (jugadores[i].getNombre() == nombre_buscar){
            jugador_informacion = jugadores[i];
        }
    }
    cout << "1. Nombre: " << jugador_informacion.getNombre() << endl;
    cout << "2. Nómina: " << jugador_informacion.getNomina() << endl;
    cout << "3. Número: " << jugador_informacion.getNumero() << endl;
    cout << "4. Minutos jugados: " << jugador_informacion.getMinutosJugados() << endl;
    cout << "5. Puntos_anotados: " << jugador_informacion.getPuntosAnotados() << endl;
    cout << "6. Sueldo: " << jugador_informacion.getSueldo() << endl;
    for (int j=0;j<armadores.size();j++){
        if (jugador_informacion.getNombre() == armadores[j].getJugador().getNombre()){
        cout << "7. Robos hechos: " << armadores[j].getRobosHechos() << endl; 
        break;
        }
    }
    for (int k=0;k<aleros.size();k++){
        if (jugador_informacion.getNombre() == aleros[k].getJugador().getNombre()){
        cout << "7. Buenas jugadas: " << aleros[k].getBuenasJugadas() << endl;
        break;
        }
    }
    for (int l=0;l<postes.size();l++){
        if (jugador_informacion.getNombre() == postes[l].getJugador().getNombre()){
        cout << "7. Rebotes hechos: " << postes[l].getRebotes() << endl;
        break;
        }
    }
}
Jugador* Equipo::buscarJugador(string nombre_buscar){
    for (int i=0;i<jugadores.size();i++){
        if (jugadores[i].getNombre() == nombre_buscar){
            jugador_informacion = jugadores[i];
            return &jugadores[i];
        }
    }
    return new Jugador();
}
int Equipo::mayorEncestador(){
    int mayor = jugadores[0].getPuntosAnotados();
    for (int i=0;i<jugadores.size();i++){
        if (jugadores[i].getPuntosAnotados() >= mayor){
            mayor = jugadores[i].getPuntosAnotados();
        }
    }
    return mayor;
}
string Equipo::mayorEncestadorNombre(){
    int mayor = jugadores[0].getPuntosAnotados();
    Jugador jugador;
    string nombre;
    for (int i=0;i<jugadores.size();i++){
        if (jugadores[i].getPuntosAnotados() >= mayor){
            mayor = jugadores[i].getPuntosAnotados();
            jugador = jugadores[i];
        }
    }
    return jugador.getNombre();
}
int Equipo::masMinutosJugados(){
    int mayor = jugadores[0].getMinutosJugados();
    for (int i=0;i<jugadores.size();i++){
        if (jugadores[i].getPuntosAnotados() >= mayor){
            mayor = jugadores[i].getPuntosAnotados();
        }
    }
    return mayor;
}
string Equipo::masMinutosJugadosNombre(){
    int mayor = jugadores[0].getMinutosJugados();
    Jugador jugador;
    for (int i=0;i<jugadores.size();i++){
        if (jugadores[i].getPuntosAnotados() >= mayor){
            mayor = jugadores[i].getPuntosAnotados();
            jugador = jugadores[i];
        }
    }
    return jugador.getNombre();
}
int Equipo::puntosEquipo(){
    int puntos_equipo = 0;
    for (int i=0;i<jugadores.size();i++){
        puntos_equipo += jugadores[i].getPuntosAnotados();
    }
    return puntos_equipo;
}
void Equipo::eliminarJugador(string nombre_buscar){
    for (int i=0;i<jugadores.size();i++){
        if (jugadores[i].getNombre() == nombre_buscar){
            if ((i+1) == jugadores.size()){
                jugadores.pop_back();
            } else {
                jugadores.erase(jugadores.begin()+i);
            }
        }
    }
}

#endif