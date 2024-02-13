#include <string>
#include <iostream>
using namespace std;

class Persona
{
    int edad;
    float estatura;
    float peso;

public:
    string nombre;
    string telefono;

    Persona();
    Persona(int ed, float est, float pes, string nom, string tel);
    Persona(string nom);
};

int main()
{
    Persona p1;
    cout << p1.nombre << endl;
    cout << p1.telefono << endl;

    Persona p2("5");
    cout << p2.nombre << endl;
    cout << p2.telefono << endl;

    Persona p3(29, 176, 70, "Alfonso", "123");
    cout << p3.nombre << endl;
    cout << p3.telefono << endl;
    
    return 0;
}

Persona::Persona(){
    edad = 0;
    estatura = 0.0;
    peso = 0.0;
    nombre = "desconocido";
    telefono = "desconocido";
}

Persona::Persona(int ed, float est, float pes, string nom, string tel){
    if(ed>0){
        edad = ed;
    }else{
        edad = 0;
    }
    estatura = est;
    peso = pes;
    nombre = nom;
    telefono = tel;
}

Persona::Persona(string nom){
    edad = 0;
    estatura = 0.0;
    peso = 0.0;
    nombre = nom;
    telefono = "desconocido";
}