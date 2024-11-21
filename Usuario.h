#ifndef USUARIO_H
#define USUARIO_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void registrarUsuario() {
    ofstream file("Usuario.txt", ios::app);
    string nombre, apellido, edad, usuario, contrasena;

    cout << "Ingrese su nombre: ";
    cin >> nombre;
    cout << "Ingrese su apellido: ";
    cin >> apellido;
    cout << "Ingrese su edad: ";
    cin >> edad;
    cout << "Ingrese su nombre de usuario: ";
    cin >> usuario;
    cout << "Ingrese su contraseña: ";
    cin >> contrasena;

    file << nombre << endl;
    file << apellido << endl;
    file << edad << endl;
    file << usuario << endl; 
    file << contrasena << endl;
    file.close();
    cout << "REGISTRO DE USUARIO EXITOSO." << endl;
}

bool iniciarSesion() {
    ifstream file("Usuario.txt");
    string nombre, apellido, edad, usuario, contrasena;
    string usuarioIngresado, contrasenaIngresada;

    cout << "Ingrese su nombre de usuario: ";
    cin >> usuarioIngresado;
    cout << "Ingrese su contraseña: ";
    cin >> contrasenaIngresada;

    while (getline(file, nombre) && getline(file, apellido) && getline(file, edad) && getline(file, usuario) && getline(file, contrasena)) {
        if (usuario == usuarioIngresado && contrasena == contrasenaIngresada) {
            file.close();
            return true;
        }
    }

    file.close();
    cout << "Usuario o contraseña incorrectos.\n";
    return false;
}

#endif /*USUARIO_H*/