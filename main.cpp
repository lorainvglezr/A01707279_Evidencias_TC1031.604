#include <iostream>
#include <vector>
#include <string>
#include "Libro.h"
#include "Novedad.h"

using namespace std;

void cargaLibros(std::vector<Libro> &listaLibros) {
    ifstream archivo("libros.txt");
    if (archivo.fail()) {
        cout << "El archivo no se pudo abrir" << endl;
        exit(1);
    }

    string titulo, autor, editorial, genero;
    int anoPublicacion, numPaginas;
    float calificacionEstrellas;

    while (archivo >> titulo >> autor >> anoPublicacion >> editorial >> numPaginas >> calificacionEstrellas >> genero) {
        Libro libro;
        libro.setTitulo(titulo);
        libro.setAutor(autor);
        libro.setAnoPublicacion(anoPublicacion);
        libro.setEditorial(editorial);
        libro.setNumPaginas(numPaginas);
        libro.setCalificacionEstrellas(calificacionEstrellas);
        libro.setGenero(genero);
        listaLibros.push_back(libro);
    }
}

void imprimeLibros(std::vector<Libro> &listaLibros) {
    for (auto &libro : listaLibros) {
        libro.mostrar();
    }
}

int main() {
    std::vector<Libro> listaLibros;
    cargaLibros(listaLibros);

    Usuario usuario;
    int opcion;
    do {
        cout << "---- Sistema de Gestión de Libros ----" << endl;
        cout << "1. Mostrar todos los libros" << endl;
        cout << "2. Registrar un nuevo usuario" << endl;
        cout << "3. Consultar libro leído" << endl;
        cout << "4. Mostrar detalles de libros leídos" << endl;
        cout << "0. Salir" << endl;
        cout << "Selecciona una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Lista de Libros:" << endl;
                imprimeLibros(listaLibros);
                break;

            case 2:
                usuario.setNombre();
                usuario.setApellido();
                usuario.setCorreo();
                usuario.setContrasena();
                usuario.guardarArchivo();
                cout << "Usuario registrado exitosamente!" << endl;
                break;

            case 3:
                usuario.consultarNuevoLibro();
                break;

            case 4:
                usuario.mostrarDetallesNuevoLibro();
                break;

            case 0:
                cout << "Saliendo del sistema..." << endl;
                break;

            default:
                cout << "Opción inválida, por favor intenta de nuevo." << endl;
        }

        cout << endl;  
    } while (opcion != 0);

    return 0;
}