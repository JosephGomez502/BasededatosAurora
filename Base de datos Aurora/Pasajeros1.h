#pragma once

namespace Base_de_datos_Aurora {

    using namespace System;
    using namespace MySql::Data::MySqlClient;

    public ref class Pasajero {
    public:
        String^ idPasajero;
        String^ nombre;
        String^ apellido;
        String^ telefono;
        String^ nacionalidad;
        String^ numeroPasaporte;

        static String^ connectionString = "server=127.0.0.1;user id=jose;password=123456789;database=aeropuerto_aurora;";

        // Constructor
        Pasajero(String^ id, String^ name, String^ lastName, String^ phone, String^ nationality, String^ passport) {
            idPasajero = id;
            nombre = name;
            apellido = lastName;
            telefono = phone;
            nacionalidad = nationality;
            numeroPasaporte = passport;
        }

        // Métodos CRUD
        void crear() {
            MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
            try {
                conn->Open();
                String^ query = "INSERT INTO pasajero (id_pasajero, nombre, apellido, telefono, nacionalidad, numero_pasaporte) VALUES (@idPasajero, @nombre, @apellido, @telefono, @nacionalidad, @numeroPasaporte)";
                MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
                cmd->Parameters->AddWithValue("@idPasajero", idPasajero);
                cmd->Parameters->AddWithValue("@nombre", nombre);
                cmd->Parameters->AddWithValue("@apellido", apellido);
                cmd->Parameters->AddWithValue("@telefono", telefono);
                cmd->Parameters->AddWithValue("@nacionalidad", nacionalidad);
                cmd->Parameters->AddWithValue("@numeroPasaporte", numeroPasaporte);
                cmd->ExecuteNonQuery();
                MessageBox::Show("Pasajero Creado");
            }
            catch (Exception^ ex) {
                MessageBox::Show(ex->Message);
            }
            finally {
                conn->Close();
            }
        }

        static void leer() {
            MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
            try {
                conn->Open();
                String^ query = "SELECT * FROM pasajero";
                MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
                MySqlDataReader^ reader = cmd->ExecuteReader();
                while (reader->Read()) {
                    MessageBox::Show("ID: " + reader["id_pasajero"] + "\nNombre: " + reader["nombre"] + "\nApellido: " + reader["apellido"] + "\nTelefono: " + reader["telefono"] + "\nNacionalidad: " + reader["nacionalidad"] + "\nNúmero de Pasaporte: " + reader["numero_pasaporte"]);
                }
            }
            catch (Exception^ ex) {
                MessageBox::Show(ex->Message);
            }
            finally {
                conn->Close();
            }
        }

        void modificar() {
            MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
            try {
                conn->Open();
                String^ query = "UPDATE pasajero SET nombre=@nombre, apellido=@apellido, telefono=@telefono, nacionalidad=@nacionalidad, numero_pasaporte=@numeroPasaporte WHERE id_pasajero=@idPasajero";
                MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
                cmd->Parameters->AddWithValue("@idPasajero", idPasajero);
                cmd->Parameters->AddWithValue("@nombre", nombre);
                cmd->Parameters->AddWithValue("@apellido", apellido);
                cmd->Parameters->AddWithValue("@telefono", telefono);
                cmd->Parameters->AddWithValue("@nacionalidad", nacionalidad);
                cmd->Parameters->AddWithValue("@numeroPasaporte", numeroPasaporte);
                cmd->ExecuteNonQuery();
                MessageBox::Show("Pasajero Modificado");
            }
            catch (Exception^ ex) {
                MessageBox::Show(ex->Message);
            }
            finally {
                conn->Close();
            }
        }

        void borrar() {
            MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
            try {
                conn->Open();
                String^ query = "DELETE FROM pasajero WHERE id_pasajero=@idPasajero";
                MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
                cmd->Parameters->AddWithValue("@idPasajero", idPasajero);
                cmd->ExecuteNonQuery();
                MessageBox::Show("Pasajero Borrado");
            }
            catch (Exception^ ex) {
                MessageBox::Show(ex->Message);
            }
            finally {
                conn->Close();
            }
        }
    };
}
