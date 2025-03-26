//
// Created by sebas on 26/3/2025.
//

#include "Menu.h"

void Menu::mostrarMenu() {
    int opcion;
do {
    cout<<"\n\n------------------------Bienvenidos Al Menu Principal De La Biblioteca-------------------------"<<endl;
    cout<<"1. Inclusion de datos de materiales (libros, revistas, articulos, videos, material digital)"<<endl;
    cout<<"2. Modificacion de datos de materiales"<<endl;
    cout<<"3. Inclusion de usuarios"<<endl;
    cout<<"4. Modificacion de datos de usuarios"<<endl;
    cout<<"5. Registro de solicitudes de prestamo y devoluciones"<<endl;
    cout<<"6. Reporte de inventario de materiales"<<endl;
    cout<<"7. Reporte de usuarios"<<endl;
    cout<<"8. Reporte de materiales en prestamo (general y por tipo de material)"<<endl;
    cout<<"9. Reporte de prestamos por usuario"<<endl;
    cout << "0. Salir" << endl;
    cout << "------------------------------------------------------------------------------------------------"<<endl;
    cout<<"Escoga el numero de su Interes: ";
    cin>>opcion;

    switch(opcion) {
    case 1:
        Menu::incluirMateriales();
        break;
    case 2:
        Menu::modificarMateriales();
        break;
    case 3:
        Menu::incluirUsuarios();
        break;
    case 4:
        Menu::modificarUsuarios();
        break;
    case 5:
        int opinion;
        cout <<"\n\n---------------------Registrar solicitudes de Prestamos y Devoluciones----------------------------"<<endl;
        cout << "1. Registrar Prestamo" << endl;
        cout << "2. Registrar Devoluciones"<<endl;
        cout<<"\n------------------------------------------------------------------------------------------------"<<endl;
        cout<<"Digite su opcion:"; cin >> opinion;

        switch(opinion) {
        case 1:
            Menu::RegistroPrestamos();
            break;
        case 2:
            Menu::RegistroDevoluciones();
            break;
        default:
            cout << "Opcion invalida. Presione enter para volver a la Pestalla anterior" << endl;
            cin.ignore();
            cin.get();
        }
        break;
    case 6:
        Menu::ReporteInventarioMaterial();
        break;
    case 7:
        Menu::ReporteUsuario();
        break;
    case 8:
        int seleccion;
        cout <<"\n\n---------------------Reporte de materiales en prestamo (general y por tipo de material)----------------------------"<<endl;
        cout << "1. Reporte General" << endl;
        cout << "2. Reporte Por Tipo De Material"<<endl;
        cout<<"\n------------------------------------------------------------------------------------------------"<<endl;
        cout<<"Digite su opcion:";cin>>seleccion;

        switch(seleccion) {
        case 1:
            Menu::RegistroPrestamos();
            break;
        case 2:
            Menu::RegistroDevoluciones();
            break;
        default:
            cout << "Opcion invalida. Presione enter para volver a la Pestalla anterior" << endl;
            cin.ignore();
            cin.get();
        }
        break;
    case 9:
        ReportePrestamosUsuarios();
        break;
    case 0:
        cout << "Muchas Gracias Por su Visita" << endl;
        break;
    default:
        cout << "Opcion invalida. Presione enter para volver al Inicio" << endl;
        cin.ignore();
        cin.get();
    }
}while(opcion!=0);

}

void Menu::incluirMateriales() {
    cout <<"\n\n------------------------------------I------------------------------------------------------------"<<endl;
    cout << "Incluir datos de materiales..." << endl;
    cout << "Aquí puedes registrar libros, revistas, artículos, videos, material digital, etc." << endl;
    cout << "\n Presione Enter para volver al menu..."<<endl;
    cout<<"\n------------------------------------------------------------------------------------------------";
    cin.ignore();
    cin.get();

}

void Menu::modificarMateriales() {
    cout <<"\n\n------------------------------------------------------------------------------------------------"<<endl;
    cout << "Modificar datos de materiales..." << endl;
    cout << "Aqui puedes editar los datos de los materiales registrados." << endl;
    cout << "\n Presione Enter para volver al menu...";
    cout <<"\n------------------------------------------------------------------------------------------------";
    cin.ignore();
    cin.get();
}

void Menu::incluirUsuarios() {
    cout <<"\n\n------------------------------------------------------------------------------------------------"<<endl;
    cout << "Incluir usuarios..." << endl;
    cout << "Aquí puedes registrar nuevos usuarios en el sistema." << endl;
    cout << "\nPresione Enter para volver al menu...";
    cout <<"\n------------------------------------------------------------------------------------------------";
    cin.ignore();
    cin.get();
}

void Menu::modificarUsuarios() {
    cout <<"\n\n------------------------------------------------------------------------------------------------"<<endl;
    cout << "Modificar datos de usuarios..." << endl;
    cout << "Aquí puedes actualizar la información de los usuarios existentes." << endl;
    cout << "\nPresione Enter para volver al menu...";
    cout <<"\n------------------------------------------------------------------------------------------------";
    cin.ignore();
    cin.get();
}

void Menu::RegistroPrestamos() {
    cout <<"\n\n------------------------------------------------------------------------------------------------"<<endl;
    cout << "Registrar solicitudes de préstamos" << endl;
    cout << "Aquí puedes registrar los préstamos" << endl;
    cout << "\nPresione Enter para volver al menu...";
    cout <<"\n------------------------------------------------------------------------------------------------";
    cin.ignore();
    cin.get();
}

void Menu::RegistroDevoluciones() {
    cout <<"\n\n------------------------------------------------------------------------------------------------"<<endl;
    cout << "Registrar solicitudes de devoluciones" << endl;
    cout << "Aquí puedes registrar las devoluciones de materiales." << endl;
    cout << "\nPresione Enter para volver al menu...";
    cout <<"\n------------------------------------------------------------------------------------------------";
    cin.ignore();
    cin.get();
}

void Menu::ReporteInventarioMaterial() {
    cout <<"\n\n------------------------------------------------------------------------------------------------"<<endl;
    cout << "Generar reporte de inventario de materiales..." << endl;
    cout << "Muestra un listado de todos los materiales disponibles en la biblioteca." << endl;
    cout << "\nPresione Enter para volver al menu...";
    cout <<"\n------------------------------------------------------------------------------------------------";
    cin.ignore();
    cin.get();
}

void Menu::ReporteUsuario() {
    cout <<"\n\n------------------------------------------------------------------------------------------------"<<endl;
    cout << "Generar reporte de usuarios..." << endl;
    cout << "Muestra un listado de todos los usuarios registrados en el sistema." << endl;
    cout << "\nPresione Enter para volver al menu...";
    cout <<"\n------------------------------------------------------------------------------------------------";
    cin.ignore();
    cin.get();
}

void Menu::reporteMaterialPrestamosGeneral() {
    cout <<"\n\n------------------------------------------------------------------------------------------------"<<endl;
    cout << "Generar reporte de materiales en préstamo..." << endl;
    cout << "Muestra los materiales actualmente prestados en general" << endl;
    cout << "\nPresione Enter para volver al menu...";
    cout <<"\n------------------------------------------------------------------------------------------------";
    cin.ignore();
    cin.get();
}

void Menu::reporteMaterialPrestamosPorMaterial() {
    cout <<"\n\n------------------------------------------------------------------------------------------------"<<endl;
    cout << "Generar reporte de materiales en préstamo..." << endl;
    cout << "Muestra los materiales actualmente prestados  por tipo." << endl;
    cout << "\nPresione Enter para volver al menu...";
    cout <<"\n------------------------------------------------------------------------------------------------";
    cin.ignore();
    cin.get();
}


void Menu::ReportePrestamosUsuarios() {
    system("CLS");
    cout << "Generar reporte de préstamos por usuario..." << endl;
    cout << "Muestra un historial de préstamos específicos por cada usuario." << endl;
    cout << "\nPresione Enter para volver al menu...";
    cout <<"\n------------------------------------------------------------------------------------------------";
    cin.ignore();
    cin.get();
}