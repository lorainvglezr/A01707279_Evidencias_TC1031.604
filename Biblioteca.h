/*
 *  Biblioteca.h
 *
 *  Fecha de finalizacion: Noviembre de 2024
 *  Nombre del autor: Lorain Valeria Gonzalez Rivas
 *  Matricula del autor: A01707279
 *
 *  Version: Final 2.0
 */

#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

struct Libro {
    string titulo;
    string autor;
    int ano;
    string editorial;
    int numPaginas;
    float calificacion;
    string genero;
    float precio;
};

class Stack {
private:
    vector<Libro> pila;

public:
    void push(const Libro& libro) {
        pila.push_back(libro);
    }

    void pop() {
        if (!pila.empty()) {
            pila.pop_back();
        }
    }

    Libro top() const {
        return pila.back();
    }

    void mostrar() const {
        if (pila.empty()) {
            cout << endl;
            cout << "NO HA COMPRADO NINGÚN LIBRO" << endl;
            return;
        }

        cout << endl;
        cout << "----LISTA DE LIBROS COMPRADOS Y SU INFORMACIÓN GENERAL----" << endl;
        cout << endl;
        for (const auto& libro : pila) {
            cout << "Título: " << libro.titulo << endl;
            cout << "Autor: " << libro.autor << endl;
            cout << "Año de publicación: " << libro.ano << endl;
            cout << "Género: " << libro.genero << endl;
            cout << "Precio: " << libro.precio << endl;
            cout << endl;
        }
    }

    bool existe(const Libro& libro) const {
        for (const auto& item : pila) {
            if (item.titulo == libro.titulo && item.autor == libro.autor) {
                return true;
            }
        }
        return false;
    }

    bool isEmpty() const {
        return pila.empty();
    }
};

void mostrarLibros(const vector<Libro>& libros) {
    for (const auto& libro : libros) {
        cout << "Título: " << libro.titulo << endl;
        cout << "Autor: " << libro.autor << endl;
        cout << "Año: " << libro.ano << endl;
        cout << "Editorial: " << libro.editorial << endl;
        cout << "Número de páginas: " << libro.numPaginas << endl;
        cout << "Calificación: " << libro.calificacion << endl;
        cout << "Género: " << libro.genero << endl;
        cout << "Precio: " << libro.precio << endl;
        cout << endl;
    }
}

void leerLibrosDesdeArchivo(const string& archivo, vector<Libro>& libros) {
    ifstream file(archivo);
    Libro libro;
    while (file >> ws && getline(file, libro.titulo)) {
        getline(file, libro.autor);
        file >> libro.ano;
        file.ignore();
        getline(file, libro.editorial);
        file >> libro.numPaginas >> libro.calificacion;
        file.ignore();
        getline(file, libro.genero);
        file >> libro.precio;
        file.ignore();
        libros.push_back(libro);
    }
}

bool compararPorAno(const Libro& a, const Libro& b) {
    return a.ano < b.ano;
}

bool compararPorNumPaginas(const Libro& a, const Libro& b) {
    return a.numPaginas < b.numPaginas;
}

bool compararPorCalificacion(const Libro& a, const Libro& b) {
    return a.calificacion < b.calificacion;
}

bool compararPorPrecio(const Libro& a, const Libro& b) {
    return a.precio < b.precio;
}

void merge(vector<Libro>& libros, int izq, int der, bool (*compara)(const Libro&, const Libro&)) {
    int mid = (izq + der) / 2;
    int n1 = mid - izq + 1;
    int n2 = der - mid;

    vector<Libro> L(n1), R(n2);

    for (int i = 0; i < n1; i++) L[i] = libros[izq + i];
    for (int j = 0; j < n2; j++) R[j] = libros[mid + 1 + j];

    int i = 0, j = 0, k = izq;
    while (i < n1 && j < n2) {
        if (compara(L[i], R[j])) {
            libros[k] = L[i];
            i = i + 1;
        } else {
            libros[k] = R[j];
            j = j + 1;
        }
        k = k + 1;
    }

    while (i < n1) {
        libros[k] = L[i];
        i = i + 1;
        k = k + 1;
    }
    while (j < n2) {
        libros[k] = R[j];
        j = j + 1;
        k = k + 1;
    }
}

void mergeSort(vector<Libro>& libros, int izq, int der, bool (*compara)(const Libro&, const Libro&)) {
    if (izq < der) {
        int mid = (izq + der) / 2;
        mergeSort(libros, izq, mid, compara);
        mergeSort(libros, mid + 1, der, compara);
        merge(libros, izq, der, compara);
    }
}

#endif /*BIBLIOTECA_H*/
