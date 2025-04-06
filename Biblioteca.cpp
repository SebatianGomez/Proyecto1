//
// Created by sebas on 26/3/2025.
//

// #include "Biblioteca.h"
// #include "AdministradorAlmacenamiento.h"
//
// Biblioteca::Biblioteca() {
//     catalogo = new Lista<Material>();
//     usuarios = new Lista<Usuario>();
// }
//
// Biblioteca::~Biblioteca() {
//     delete catalogo;
//     delete usuarios;
// }
//
// Lista<Material>* Biblioteca::obtenerCatalogo() {
//     return catalogo;
// }
//
// Lista<Usuario>* Biblioteca::obtenerUsuarios() {
//     return usuarios;
// }
//
// void Biblioteca::agregarMaterial(Material* mat) {
//     catalogo->insertarFinal(mat);
// }
//
// void Biblioteca::agregarUsuario(Usuario* usu) {
//     usuarios->insertarFinal(usu);
// }
//
// void Biblioteca::cargarCatalogo() {
//     almacenamiento.cargarCatalogo();
// }
//
// void Biblioteca::cargarUsuarios() {
//     almacenamiento.cargarUsuarios();
// }
//
// void Biblioteca::guardarCatalogo() {
//     almacenamiento.guardarCatalogo(catalogo);
// }
//
// void Biblioteca::guardarUsuarios() {
//     almacenamiento.guardarUsuarios(usuarios);
// }