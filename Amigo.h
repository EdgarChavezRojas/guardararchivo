#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Amigo
{
private:
	string 	nombre;
	int		edad;
	char	sexo;
	char	estado;
	fstream archivo;
public:
	Amigo() {
		nombre = "";
		edad = 0;
		sexo = ' ';
		estado = ' ';
	}

	Amigo(string nom, int ed, char sx) {
		nombre = nom;
		edad = ed;
		sexo = sx;
		estado = 'A';
	}
	void setAmigo(string nom, int ed, char sx);
	string getNombre();
	int getEdad();
	char getSexo();
	char getEstado();
	void guardarArchivo();
};

