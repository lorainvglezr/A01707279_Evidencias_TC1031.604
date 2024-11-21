#include <iostream>
#include <stack>
#include <string>
#include <vector>

#include "Biblioteca.h"
#include "Usuario.h"

using namespace std;

// Función para prestar un libro
void prestarLibro(vector<Libro> &libros, Stack &librosPrestados) {
  int index;
  cin >> index;

  if (index >= 0 && index < libros.size()) {
    if (librosPrestados.existe(
            libros[index])) { // Verificar si ya está prestado
      cout << "El libro '" << libros[index].titulo
           << "' ya ha sido comprado anteriormente" << endl;
    } else {
      librosPrestados.push(
          libros[index]); // Agregar el libro a la pila de libros prestados
      cout << "LIBRO COMPRADO " << libros[index].titulo << endl;
    }
  } else {
    cout << "ERROR. ÍNDICE INVÁLIDO" << endl;
  }
}

// Función para mostrar el menú de libros
void mostrarMenuLibros(vector<Libro> &libros, Stack &librosPrestados) {
  int opcion;
  do {
    cout << endl;
    cout << "MENÚ PRINCIPAL" << endl;
    cout << "1. Mostrar todos los libros" << endl;
    cout << "2. Ordenar libros de más a menos antiguo" << endl;
    cout << "3. Ordenar libros de menor a mayor cantidad de páginas" << endl;
    cout << "4. Ordenar libros de menor a mayor calificación (1-5)" << endl;
    cout << "5. Ordenar libros de menos a más caro" << endl;
    cout << "6. Compra un libro" << endl;
    cout << "7. Mostrar libros comprados" << endl;
    cout << "8. Salir" << endl;
    cout << "Seleccione una de las opciones del menú: ";
    cin >> opcion;
    cout << endl;

    switch (opcion) {
    case 1:
      cout << endl;
      cout << "------LISTA DE LIBROS EN DESORDEN------" << endl;
      cout << endl;
      mostrarLibros(libros); // Mostrar todos los libros
      break;

    case 2:
      cout << endl;
      cout << "------LIBROS ORDENADOS POR AÑO DE PUBLICACIÓN------" << endl;
      cout << endl;
      mergeSort(libros, 0, libros.size() - 1,
                compararPorAno); // Ordenar por año
      mostrarLibros(libros);
      break;

    case 3:
      cout << endl;
      cout << "------LIBROS ORDENADOS POR NÚMERO DE PÁGINAS------" << endl;
      cout << endl;
      mergeSort(libros, 0, libros.size() - 1,
                compararPorNumPaginas); // Ordenar por número de páginas
      mostrarLibros(libros);
      break;

    case 4:
      cout << endl;
      cout << "------LISTA DE LIBROS ORDENADOS POR CALIFICACIÓN------" << endl;
      cout << endl;
      mergeSort(libros, 0, libros.size() - 1,
                compararPorCalificacion); // Ordenar por calificación
      mostrarLibros(libros);
      break;

    case 5:
      cout << endl;
      cout << "------LISTA DE LIBROS ORDENADOS POR PRECIO------" << endl;
      cout << endl;
      mergeSort(libros, 0, libros.size() - 1,
                compararPorPrecio); // Ordenar por precio
      mostrarLibros(libros);
      break;

    case 6:
      cout << endl;
      cout << "A TOMAR EN CONSIDERACIÓN ANTES DE COMPRAR:" << endl; 
      cout << "- El usuario debe de teclear el índice del libro que quiere comprar." << endl;
      cout << "- Los índices disponibles son del 0 al 41." << endl; 
      cout << "- Los índices indican el orden de la lista." << endl;
      cout << "- Se toma el orden de la última lista desplegada en pantalla." << endl; 
      cout << "- Si la lista no fue ordenada en ningun momento, se tomarán los índices de la lista original." << endl; 
      cout << "- Los libros no pueden ser comprados más de una vez." << endl;
      cout << endl; 
      cout << "Indique el índice del libro que desea comprar: ";
      prestarLibro(libros, librosPrestados); // Prestar un libro
      break;

    case 7:
      librosPrestados.mostrar(); // Mostrar los libros prestados
      break;

    case 8:
      cout << "Saliendo del programa..." << endl;
      break;

    default:
      cout << "ERROR. OPCIÓN INVÁLIDA" << endl;
      cout << "Por favor, seleccione una opción válida del menú." << endl;
    }
  } 
    while (opcion != 8); // Salir del menú cuando el usuario elige la opción 0
  cout << "Hasta luego!" << endl;
}

int main() {
  cout << "BIENVENIDO A LA BIBLIOTECA VIRTUAL" << endl;
  cout << "---------EL FARO DEL SABER--------" << endl;
  
  vector<Libro> libros;
  Stack librosPrestados;
  leerLibrosDesdeArchivo("Libros.txt",
                         libros); // Cargar los libros desde el archivo

  int opcionMenuUsuario;
  bool estaLogeado = false;

  // Menú de usuario (registrarse o iniciar sesión)
  do {
    cout << endl;
    cout << "MENÚ DE USUARIO" << endl;
    cout << "1. Registrarse" << endl;
    cout << "2. Iniciar sesión" << endl;
    cout << "3. Salir" << endl;
    cout << "Seleccione una de las opciones del menú: ";
    cin >> opcionMenuUsuario;
    cout << endl;

    switch (opcionMenuUsuario) {
    case 1:
      registrarUsuario(); // Registrar un nuevo usuario
      break;

    case 2:
      estaLogeado = iniciarSesion(); // Intentar iniciar sesión
      if (estaLogeado) {
        cout << "INICIO DE SESIÓN EXITOSO" << endl;
      }
      break;

    case 3:
      cout << "Hasta pronto!" << endl;
      cout << "Esperamos que vuelva pronto." << endl;
      break;

    default:
      cout << "ERROR. OPCIÓN INVÁLIDA" << endl;
    }
  } while (opcionMenuUsuario != 3 &&
           !estaLogeado); // Repetir hasta que el usuario inicie sesión o salga

  // Menú principal (después de iniciar sesión)
  if (estaLogeado) {
    mostrarMenuLibros(libros, librosPrestados); // Mostrar el menú de libros
  }

  return 0;
}