#include "Amigo.h"

void Amigo::setAmigo(string nom, int ed, char sx) {
	nombre = nom;
	edad = ed;
	sexo = sx;
	estado = 'A';
}
string Amigo::getNombre() {
	return(nombre);
}

int Amigo::getEdad() {
	return(edad);
}

char Amigo::getSexo() {
	return(sexo);
}

char Amigo::getEstado() {
	return(estado);
}

void Amigo::guardarArchivo() {
	archivo.open("prueba.bin", std::ios::binary | std::ios::app);
	size_t nombretam = nombre.size();
	archivo.write(reinterpret_cast<char*>(&nombretam), sizeof(nombretam));
	archivo.write(nombre.c_str(), nombretam);
	archivo.write(reinterpret_cast<char*>(&edad), sizeof(edad));
	archivo.write(reinterpret_cast<char*>(&sexo), sizeof(sexo));
	archivo.write(reinterpret_cast<char*>(&estado), sizeof(estado));

	archivo.close();
}