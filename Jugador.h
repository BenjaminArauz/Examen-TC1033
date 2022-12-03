/*
- Benjamín Iván Arauz Córdova
- A00836936
- 02/12/2022

Clase Jugador: Representa a un solo jugador, recién se crea el jugador.
*/

#ifndef JUGADOR_H //Si no esta definido JUGADOR_H 
#define JUGADOR_H //Definir procesador JUGADOR_H 

//Librerias
#include <iostream>
#include <string>
using namespace std;

class Jugador {
    protected:
        //Atributos
        int nomina;
        int numero;
        int puntos_anotados; 
        int minutos_jugados;
        int sueldo;
        string nombre;
    public:
        //Constructor
        Jugador(){}
        //Getters
        string getNombre();
        int getNumero();
        int getNomina();
        int getMinutosJugados();
        int getPuntosAnotados();
        int getSueldo();
        //Setters
        void setNombre(string);
        void setNumero(int);
        void setNomina(int);
        void setMinutosJugados(int);
        void setPuntosAnotados(int);
        void setSueldo(int);
        //Otros métodos
        void agregarJugador();
        void cambioInformacion(int);
};
//Getters
string Jugador::getNombre(){
    return nombre;
}
int Jugador::getNumero(){
    return numero;
}
int Jugador::getNomina(){
    return nomina;
}
int Jugador::getMinutosJugados(){
    return minutos_jugados;
}
int Jugador::getPuntosAnotados(){
    return puntos_anotados;
}
int Jugador::getSueldo(){
    return sueldo;
}
//Setters
void Jugador::setNombre(string nuevo_nombre){
    nombre = nuevo_nombre;
}
void Jugador::setNumero(int nuevo_numero){
    numero = nuevo_numero;
}
void Jugador::setNomina(int nuevo_nomina){
    nomina = nuevo_nomina;
}
void Jugador::setMinutosJugados(int nuevo_minutos_jugados){
    minutos_jugados = nuevo_minutos_jugados;
}
void Jugador::setPuntosAnotados(int nuevo_puntos_anotados){
    puntos_anotados = nuevo_puntos_anotados;
}
void Jugador::setSueldo(int nuevo_sueldo){
    sueldo = nuevo_sueldo;
}
//Otros métodos
void Jugador::agregarJugador(){
    string nuevo_nombre;
    int nuevo_numero;
    int nuevo_nomina;
    int nuevo_minutos_jugados;
    int nuevo_puntos_anotados;
    int nuevo_sueldo;
    int opcion_minutos;
    int opcion_posicion;
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
void Jugador::cambioInformacion(int cambio){
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