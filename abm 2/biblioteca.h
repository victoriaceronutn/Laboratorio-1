#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIBRE 0
#define OCUPADO 1
#define BORRADO -1


typedef struct
{
    int estado;
    int id;
    float precio;
    char nombre[50];
    char proveedor[50];
    char codigoDeBarra[50];
    char fechaDeVencimiento[50];
    int idProveedor;

}eProducto;

typedef struct
{
    int id;
    char descripcion[50];
    char localidad[50];
    char cuit[50];
    char duenio[50];
}eProveedor;

eProducto pedirProducto();

void inicializarProductos(eProducto[],int);//OK

void mostrarProducto(eProducto);

void cargarArray(eProducto[], int);

void mostrarArray(eProducto[], int);

void construirArray(eProducto[], int);

int insertarProducto(eProducto [], int );

int dameLugarLibre(eProducto[],int);

int existeProducto(eProducto,eProducto[]);

int borrarProducto(eProducto[], int);

int editarProducto(eProducto [], int );

void inicializarProveedor(eProveedor[], int);

void mostrarArrayProductosConProveedores(eProducto listaProducto[], int tamprod, eProveedor listaProveedores);
