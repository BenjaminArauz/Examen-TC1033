#ifndef JUGADOR_NUEVO_H
#define JUGADOR_NUEVO_H
#include <iostream>
#include <string>
using namespace std;
#include "Armador.h"
#include "Alero.h"
#include "Poste.h"

class JugadorNuevo {
    private:
        int nomina;
        int numero;
        int puntos_anotados; 
        int minutos_jugados;
        int sueldo;
        int posicion;
        string nombre;
    public:
        JugadorNuevo(){}     
        string getNombre();
        int getNumero();
        int getNomina();
        int getMinutosJugados();
        int getPuntosAnotados();
        int getSueldo();
        int getPosicion();
        void setNombre(string);
        void setNumero(int);
        void setNomina(int);
        void setMinutosJugados(int);
        void setPuntosAnotados(int);
        void setSueldo(int);
        void setPosicion(int);
        //Otros métodos
        void agregarJugador();
        void cambioInformacion(int);
};

string JugadorNuevo::getNombre(){
    return nombre;
}
int JugadorNuevo::getNumero(){
    return numero;
}
int JugadorNuevo::getNomina(){
    return nomina;
}
int JugadorNuevo::getMinutosJugados(){
    return minutos_jugados;
}
int JugadorNuevo::getPuntosAnotados(){
    return puntos_anotados;
}
int JugadorNuevo::getSueldo(){
    return sueldo;
}
int JugadorNuevo::getPosicion(){
    return posicion;
}
void JugadorNuevo::setNombre(string nuevo_nombre){
    nombre = nuevo_nombre;
}
void JugadorNuevo::setNumero(int nuevo_numero){
    numero = nuevo_numero;
}
void JugadorNuevo::setNomina(int nuevo_nomina){
    nomina = nuevo_nomina;
}
void JugadorNuevo::setMinutosJugados(int nuevo_minutos_jugados){
    minutos_jugados = nuevo_minutos_jugados;
}
void JugadorNuevo::setPuntosAnotados(int nuevo_puntos_anotados){
    puntos_anotados = nuevo_puntos_anotados;
}
void JugadorNuevo::setSueldo(int nuevo_sueldo){
    sueldo = nuevo_sueldo;
}
void JugadorNuevo::setPosicion(int nuevo_posicion){
    posicion = nuevo_posicion;
}
void JugadorNuevo::agregarJugador(){
    string nuevo_nombre;
    int nuevo_numero;
    int nuevo_nomina;
    int nuevo_minutos_jugados;
    int nuevo_puntos_anotados;
    int nuevo_sueldo;
    int opcion_minutos;
    cout << "Nombre: ";
    cin >> nuevo_nombre;
    setNombre(nuevo_nombre);
    cout << "Número de camiseta: ";
    cin >> nuevo_numero;
    setNumero(nuevo_numero);
    cout << "Nómina: ";
    cin >> nuevo_nomina;
    setNomina(nuevo_nomina);
    cout << "Sueldo: ";
    cin >> nuevo_sueldo;
    setSueldo(nuevo_sueldo);
    cout << "¿El jugador " << nuevo_nombre << " tiene minutos jugados? 1=Si, 2=No: ";
    cin >> opcion_minutos;
    if (opcion_minutos == 2){
        minutos_jugados = 0;
        puntos_anotados = 0;
    } else {
        cout << "Minutos jugados: ";
        cin >> nuevo_minutos_jugados;
        setMinutosJugados(nuevo_minutos_jugados);
        cout << "Puntos anotados: ";
        cin >> nuevo_puntos_anotados;
        setPuntosAnotados(nuevo_puntos_anotados);
    }
}
void JugadorNuevo::cambioInformacion(int cambio){
    string nuevo_nombre;
    int nuevo_numero, nuevo_nomina, nuevo_minutos_jugados, nuevo_puntos_anotados, nuevo_sueldo, opcion_minutos;
    if (cambio == 1){
        cout << "Nuevo nombre: ";
        cin >> nuevo_nombre;
        setNombre(nuevo_nombre);
    } else if (cambio == 2){
        cout << "Nómina: ";
        cin >> nuevo_nomina;
        setNomina(nuevo_nomina);
    } else if (cambio == 3){
        cout << "Nuevo número de camiseta: ";
        cin >> nuevo_numero;
        setNumero(nuevo_numero);
    } else if (cambio == 4){
        cout << "Nuevos minutos jugados: ";
        cin >> nuevo_minutos_jugados;
        setMinutosJugados(nuevo_minutos_jugados);
    } else if (cambio == 5){
        cout << "Nuevos puntos anotados: ";
        cin >> nuevo_puntos_anotados;
        setPuntosAnotados(nuevo_puntos_anotados);
    } else if (cambio == 6){
        cout << "Nuevo sueldo: ";
        cin >> nuevo_sueldo;
        setSueldo(nuevo_sueldo);
    }
}
#endif