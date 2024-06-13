#pragma once

using namespace MySql::Data::MySqlClient;
using namespace std;
using namespace System::Data;
using namespace System;

ref class conexionbd{
public:
	conexionbd();
	void entrarbd();
	void salirbd();
	MySqlConnection^ obtenerconexion();

private:
	String^ stringConexion;
	MySqlConnection^ conexion;

	void crearPasajero(String^ nombre, String^ apellido, String^ numero_telefonico, String^ numero_de_pasaporte, String^ nacionalidad, String^ fecha_de_nacimiento);
	void leerPasajeros();
	void actualizarPasajero(int id, String^ nombre, String^ apellido, String^ numero_telefonico, String^ numero_de_pasaporte, String^ nacionalidad, String^ fecha_de_nacimiento);
	void eliminarPasajero(int id);
};

