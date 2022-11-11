#include <iostream>
#include <string>
using namespace std;
#include "Jugador.h"
#include "AtrasCancha.h"
#include "Equipo.h"

void datos(string lista_nombres[], int lista_numero[], int lista_minutos_jugados[], int lista_nomina[], int lista_puntos[], int lista_sueldo[], int tam){
    string nombre;
    int numero_camiseta, minutos_jugados, nomina, puntos_anotados, sueldo, opcion_minutos_jugados;
    for (int i=0;i<tam;i++){
        cout << "Nombre: ";
        getline (cin,nombre);
        lista_nombres[i] = nombre;
        cout << "Número de camiseta: ";
        cin >> numero_camiseta;
        lista_numero[i] = numero_camiseta;
        cout << "Nómina";
        cin >> nomina;
        lista_nomina[i] = nomina;
        cout << "¿Tiene minutos jugados? 1=Si, 2=No: ";
        cin >> opcion_minutos_jugados;
        if (opcion_minutos_jugados == 2){
            lista_minutos_jugados[i] = 0;
            lista_puntos[i] = 0;
        } else{
            cout << "Minutos jugados: ";
            cin >> minutos_jugados;
            lista_minutos_jugados[i] = minutos_jugados;
            cout << "Puntos anotados: ";
            cin >> puntos_anotados;
            lista_puntos[i] = puntos_anotados;
        }
        cout << "Sueldo: ";
        cin >> sueldo;
        lista_sueldo[i] = sueldo;
    } 
}
void menu(){
    cout << "1. Consultar jugador";
    cout << "2. Mayor encestador";
    cout << "3. Sueldo del jugador";
    cout << "4. Agregar jugador";
    cout << "5. Jugador con mas minutos en cancha";
    cout << "6. Nombre del equipo";
    cout << "7. Entrenador";  
    cout << "8. Puntos anotados del equipo";  
    cout << "9. Tipo de balón";
    cout << "10. Tipo de aro";
    cout << "0. Salir";
}

int main(){
    int tam;
    cin >> tam;
    string lista_nombres[tam-1], nombre_buscar;
    int lista_numero[tam-1], lista_minutos_jugados[tam-1], lista_nomina[tam-1], lista_puntos[tam-1], lista_sueldo[tam-1], opcion;
    datos(lista_nombres,lista_numero,lista_minutos_jugados,lista_nomina,lista_puntos,lista_sueldo,tam);
    menu();
    cin >> opcion;
    //Creación de los objetos
    Jugador jugador_1; 
    Equipo equipo_1;
    AtrasCancha cancha;
    //Prueba de que funciona
    jugador_1.getNombre();
    jugador_1.setNombre("Esteban");
    equipo_1.getEntrenador();
    equipo_1.setEntrenador("Benjamin");
    cancha.getColiseo();
    cancha.setColiseo("Coliseo de Conocoto");
    return 0;
}