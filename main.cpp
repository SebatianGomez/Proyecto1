#include "Utilities.h"
#include "Usuario.h"
#include "Lista.cpp"

int main() {
    Usuario* usuario = new Usuario("119560085", "Sebastian", "Gomez", "Gomez", true);
    Lista<Usuario> lista;
    lista.insertarFinal(usuario);
    cout << lista << endl;
    return 0;
}
