#include <iostream>
#include <string>

using namespace std;

class Transporte {
private:
    string nombre;
    string color;
    int nRuedas;
    float velocidad;
    bool tienemotor;

public:
    Transporte(string, string, int, float, bool);
    void mostrarTransporte();
};

class Aereo : public Transporte {
private:
    bool turbinas;
    float AltitudMaxima;
    string TipoCombustible;

public:
    Aereo(string, string, int, float, bool, bool, float, string);
    void mostrarAereo();
};

class Terrestre : public Transporte {
private:
    string Marca;
    int capacidadPasajeros;
    int nventanas;
    int npuertas;
public:
    Terrestre(string, string, int, float, bool, string, int, int, int);
    void mostrarTerrestre();
};

class Acuatico : public Transporte {
private:
    string propulsion;
    float cargamaxima;
    float longitud;
public:
    Acuatico(string, string, int, float, bool, string, float, float);
    void mostrarAcuatico();
};


Transporte::Transporte(string _nombre, string _color, int _nRuedas, float _velocidad, bool _tienemotor) {
    nombre = _nombre;
    color = _color;
    nRuedas = _nRuedas;
    velocidad = _velocidad;
    tienemotor = _tienemotor;
}

Aereo::Aereo(string _nombre, string _color, int _nRuedas, float _velocidad, bool _tienemotor, bool _turbinas, float _AltitudMaxima, string _TipoCombustible)
    : Transporte(_nombre, _color, _nRuedas, _velocidad, _tienemotor) {
    turbinas = _turbinas;
    AltitudMaxima = _AltitudMaxima;
    TipoCombustible = _TipoCombustible;
}

Terrestre::Terrestre(string _nombre, string _color, int _nRuedas, float _velocidad, bool _tienemotor, string _Marca, int _capacidadPasajeros, int _nventanas, int _npuertas)
    : Transporte(_nombre, _color, _nRuedas, _velocidad, _tienemotor) {
    Marca = _Marca;
    capacidadPasajeros = _capacidadPasajeros;
    nventanas = _nventanas;
    npuertas = _npuertas;
}

Acuatico::Acuatico(string _nombre, string _color, int _nRuedas, float _velocidad, bool _tienemotor, string _propulsion, float _cargamaxima, float _longitud)
    :Transporte(_nombre, _color, _nRuedas, _velocidad, _tienemotor) {
    propulsion = _propulsion;
    cargamaxima = _cargamaxima;
    longitud = _longitud;
}

void Transporte::mostrarTransporte() {
    cout << "\nNombre: " << nombre << endl;
    cout << "Color: " << color << endl;
    cout << "Número de ruedas: " << nRuedas << endl;
    cout << "Velocidad: " << velocidad << " km/h" << endl;
    cout << "Motor: " << (tienemotor ? "Sí" : "No") << endl;
};

void Aereo::mostrarAereo() {
    mostrarTransporte();
    cout << "Tiene turbinas: " << turbinas << endl;
    cout << "Altitud máxima: " << AltitudMaxima << "m" << endl;
    cout << "Tipo de combustible: " << TipoCombustible << endl;
};

void Terrestre::mostrarTerrestre() {
    mostrarTransporte();
    cout << "Marca: " << Marca << endl;
    cout << "Capacidad de pasajeros: " << capacidadPasajeros << endl;
    cout << "Número de ventanas: " << nventanas << endl;
    cout << "Número de puertas: " << npuertas << endl;
};

void Acuatico::mostrarAcuatico() {
    mostrarTransporte();
    cout << "Tipo de propulsión: " << propulsion << endl;
    cout << "Carga máxima: " << cargamaxima << "Kg" << endl;
    cout << "Longitud: " << longitud << "m" << endl;
};

int main() {
    Aereo aereo1("Avión", "Rojo", 22, 1.061, true, true, 12000.0, "Jet A");
    aereo1.mostrarAereo();

    Terrestre terestre1("Carro", "Negro", 4, 320, true, "Porsche", 4, 2, 2);
    terestre1.mostrarTerrestre();

    Acuatico acuatico1("Yate", "Blanco", 0, 12, true, "Helice", 736, 18);
    acuatico1.mostrarAcuatico();

    return 0;
}