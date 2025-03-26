#include "Utilities.h"
#include "Usuario.h"
#include "Lista.cpp"
#include "Material.h"
#include "Libro.h"
#include "Revista.h"
#include "Articulo.h"


int main() {
    Usuario* usuario = new Usuario("119560085", "Sebastian", "Gomez", "Gomez", true);
    Lista<Usuario> lista;
    lista.insertarFinal(usuario);
    cout << lista << endl;
    Material* m3 = new Articulo("123", "456", "Articulo de la UNAM", "UNAM", "articulo, UNAM, ciencia", "Bueno");
    Material* m2 = new Revista("123", "456", "Revista de la UNAM", "UNAM", "revista, UNAM, ciencia", "Bueno");
    Material* m1 = new Libro("123", "456", "El principito", "Antoine de Saint-Exupéry", "principito, amor, soledad", "Malo");
    Lista<Material> lista2;
    lista2.insertarFinal(m1);
    lista2.insertarFinal(m2);
    lista2.insertarFinal(m3);
    cout << lista2 << endl;
    return 0;
}
