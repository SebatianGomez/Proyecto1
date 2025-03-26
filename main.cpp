#include "Utilities.h"
#include "Usuario.h"
#include "Lista.cpp"
#include "Material.h"
#include "Libro.h"


int main() {
    Usuario* usuario = new Usuario("119560085", "Sebastian", "Gomez", "Gomez", true);
    Lista<Usuario> lista;
    lista.insertarFinal(usuario);
    cout << lista << endl;
    Material* m1 = new Libro("123", "456", "El principito", "Antoine de Saint-Exupéry", "principito, amor, soledad", "Disponible");
    Lista<Material> lista2;
    lista2.insertarFinal(m1);
    cout << lista2 << endl;
    return 0;
}
