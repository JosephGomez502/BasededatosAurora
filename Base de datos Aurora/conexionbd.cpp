#include "pch.h"
#include "conexionbd.h"
#include <iostream>
#include <string>

using namespace std;
using namespace System::Windows::Forms;
using namespace MySql::Data::MySqlClient;

conexionbd::conexionbd() {
    this->stringConexion = "Server=localhost;port=3306;database=aeropuerto_aurora;uid=jose;password=123456789";
    this->conexion = gcnew MySqlConnection(this->stringConexion);
}

void conexionbd::entrarbd() {
    try {
        this->conexion->Open();
        MessageBox::Show("Conexion realizada");
    }
    catch (Exception^ e) {
        MessageBox::Show("Error conectando: " + e->Message);
    }
}

void conexionbd::salirbd() {
    try {
        this->conexion->Close();
        MessageBox::Show("Conexion terminada");
    }
    catch (Exception^ e) {
        MessageBox::Show("Error cerrando la conexion: " + e->Message);
    }
}

MySqlConnection^ conexionbd::obtenerconexion() {
    return this->conexion;
}

void conexionbd::crearPasajero(String^ nombre, String^ apellido, String^ numero_telefonico, String^ numero_de_pasaporte, String^ nacionalidad, String^ fecha_de_nacimiento) {
    String^ query = "INSERT INTO pasajeros (nombre, apellido, numero_telefonico, numero_de_pasaporte, nacionalidad, fecha_de_nacimiento) VALUES (@nombre, @apellido, @numero_telefonico, @numero_de_pasaporte, @nacionalidad, @fecha_de_nacimiento)";
    MySqlCommand^ cmd = gcnew MySqlCommand(query, this->conexion);
    cmd->Parameters->AddWithValue("@nombre", nombre);
    cmd->Parameters->AddWithValue("@apellido", apellido);
    cmd->Parameters->AddWithValue("@numero_telefonico", numero_telefonico);
    cmd->Parameters->AddWithValue("@numero_de_pasaporte", numero_de_pasaporte);
    cmd->Parameters->AddWithValue("@nacionalidad", nacionalidad);
    cmd->Parameters->AddWithValue("@fecha_de_nacimiento", fecha_de_nacimiento);

    try {
        this->entrarbd();
        cmd->ExecuteNonQuery();
        MessageBox::Show("Pasajero insertado correctamente");
    }
    catch (Exception^ e) {
        MessageBox::Show("Error insertando pasajero: " + e->Message);
    }
    finally {
        this->salirbd();
    }
}

void conexionbd::leerPasajeros() {
    String^ query = "SELECT * FROM pasajeros";
    MySqlCommand^ cmd = gcnew MySqlCommand(query, this->conexion);

    try {
        this->entrarbd();
        MySqlDataReader^ reader = cmd->ExecuteReader();
        while (reader->Read()) {
            Console::WriteLine("ID: {0}, Nombre: {1}, Apellido: {2}, Numero Telefonico: {3}, Numero de Pasaporte: {4}, Nacionalidad: {5}, Fecha de Nacimiento: {6}",
                reader["id_pasajero"], reader["nombre"], reader["apellido"], reader["numero_telefonico"], reader["numero_de_pasaporte"], reader["nacionalidad"], reader["fecha_de_nacimiento"]);
        }
        reader->Close();
    }
    catch (Exception^ e) {
        MessageBox::Show("Error leyendo pasajeros: " + e->Message);
    }
    finally {
        this->salirbd();
    }
}

void conexionbd::actualizarPasajero(int id, String^ nombre, String^ apellido, String^ numero_telefonico, String^ numero_de_pasaporte, String^ nacionalidad, String^ fecha_de_nacimiento) {
    String^ query = "UPDATE pasajeros SET nombre=@nombre, apellido=@apellido, numero_telefonico=@numero_telefonico, numero_de_pasaporte=@numero_de_pasaporte, nacionalidad=@nacionalidad, fecha_de_nacimiento=@fecha_de_nacimiento WHERE id_pasajero=@id";
    MySqlCommand^ cmd = gcnew MySqlCommand(query, this->conexion);
    cmd->Parameters->AddWithValue("@id", id);
    cmd->Parameters->AddWithValue("@nombre", nombre);
    cmd->Parameters->AddWithValue("@apellido", apellido);
    cmd->Parameters->AddWithValue("@numero_telefonico", numero_telefonico);
    cmd->Parameters->AddWithValue("@numero_de_pasaporte", numero_de_pasaporte);
    cmd->Parameters->AddWithValue("@nacionalidad", nacionalidad);
    cmd->Parameters->AddWithValue("@fecha_de_nacimiento", fecha_de_nacimiento);

    try {
        this->entrarbd();
        cmd->ExecuteNonQuery();
        MessageBox::Show("Pasajero actualizado correctamente");
    }
    catch (Exception^ e) {
        MessageBox::Show("Error actualizando pasajero: " + e->Message);
    }
    finally {
        this->salirbd();
    }
}

void conexionbd::eliminarPasajero(int id) {
    String^ query = "DELETE FROM pasajeros WHERE id_pasajero=@id";
    MySqlCommand^ cmd = gcnew MySqlCommand(query, this->conexion);
    cmd->Parameters->AddWithValue("@id", id);

    try {
        this->entrarbd();
        cmd->ExecuteNonQuery();
        MessageBox::Show("Pasajero eliminado correctamente");
    }
    catch (Exception^ e) {
        MessageBox::Show("Error eliminando pasajero: " + e->Message);
    }
    finally {
        this->salirbd();
    }
}
