#pragma once
#include "aerolinea.h"


namespace Base_de_datos_Aurora {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace MySql::Data::MySqlClient;

    public ref class PASAJEROS : public System::Windows::Forms::Form
    {
    public:
        PASAJEROS(void)
        {
            InitializeComponent();
        }

    protected:
        ~PASAJEROS()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::Label^ label0;
    private: System::Windows::Forms::TextBox^ textBox0;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::TextBox^ textBox4;
    private: System::Windows::Forms::TextBox^ textBox5;
    private: System::Windows::Forms::Button^ buttonCrear;
    private: System::Windows::Forms::Button^ buttonLeer;
    private: System::Windows::Forms::Button^ buttonModificar;
    private: System::Windows::Forms::Button^ buttonBorrar;

    private:
        System::ComponentModel::Container^ components;
    private: System::Windows::Forms::Label^ label6;

    private: System::Windows::Forms::Button^ btn_abrir;




           String^ connectionString = "server=127.0.0.1;user id=jose;password=123456789;database=aeropuerto_aurora;";

#pragma region Windows Form Designer generated code
           void InitializeComponent(void)
           {
               this->label0 = (gcnew System::Windows::Forms::Label());
               this->textBox0 = (gcnew System::Windows::Forms::TextBox());
               this->label1 = (gcnew System::Windows::Forms::Label());
               this->textBox1 = (gcnew System::Windows::Forms::TextBox());
               this->label2 = (gcnew System::Windows::Forms::Label());
               this->textBox2 = (gcnew System::Windows::Forms::TextBox());
               this->label3 = (gcnew System::Windows::Forms::Label());
               this->textBox3 = (gcnew System::Windows::Forms::TextBox());
               this->label4 = (gcnew System::Windows::Forms::Label());
               this->textBox4 = (gcnew System::Windows::Forms::TextBox());
               this->label5 = (gcnew System::Windows::Forms::Label());
               this->textBox5 = (gcnew System::Windows::Forms::TextBox());
               this->buttonCrear = (gcnew System::Windows::Forms::Button());
               this->buttonLeer = (gcnew System::Windows::Forms::Button());
               this->buttonModificar = (gcnew System::Windows::Forms::Button());
               this->buttonBorrar = (gcnew System::Windows::Forms::Button());
               this->label6 = (gcnew System::Windows::Forms::Label());
               this->btn_abrir = (gcnew System::Windows::Forms::Button());
               this->SuspendLayout();
               // 
               // label0
               // 
               this->label0->AutoSize = true;
               this->label0->Location = System::Drawing::Point(81, 54);
               this->label0->Name = L"label0";
               this->label0->Size = System::Drawing::Size(116, 20);
               this->label0->TabIndex = 0;
               this->label0->Text = L"ID PASAJERO";
               // 
               // textBox0
               // 
               this->textBox0->Location = System::Drawing::Point(342, 51);
               this->textBox0->Name = L"textBox0";
               this->textBox0->Size = System::Drawing::Size(100, 26);
               this->textBox0->TabIndex = 1;
               // 
               // label1
               // 
               this->label1->AutoSize = true;
               this->label1->Location = System::Drawing::Point(81, 111);
               this->label1->Name = L"label1";
               this->label1->Size = System::Drawing::Size(79, 20);
               this->label1->TabIndex = 0;
               this->label1->Text = L"NOMBRE";
               // 
               // textBox1
               // 
               this->textBox1->Location = System::Drawing::Point(342, 108);
               this->textBox1->Name = L"textBox1";
               this->textBox1->Size = System::Drawing::Size(100, 26);
               this->textBox1->TabIndex = 1;
               this->textBox1->TextChanged += gcnew System::EventHandler(this, &PASAJEROS::textBox1_TextChanged);
               // 
               // label2
               // 
               this->label2->AutoSize = true;
               this->label2->Location = System::Drawing::Point(81, 168);
               this->label2->Name = L"label2";
               this->label2->Size = System::Drawing::Size(88, 20);
               this->label2->TabIndex = 2;
               this->label2->Text = L"APELLIDO";
               // 
               // textBox2
               // 
               this->textBox2->Location = System::Drawing::Point(342, 162);
               this->textBox2->Name = L"textBox2";
               this->textBox2->Size = System::Drawing::Size(100, 26);
               this->textBox2->TabIndex = 3;
               // 
               // label3
               // 
               this->label3->AutoSize = true;
               this->label3->Location = System::Drawing::Point(77, 229);
               this->label3->Name = L"label3";
               this->label3->Size = System::Drawing::Size(185, 20);
               this->label3->TabIndex = 4;
               this->label3->Text = L"NUMERO TELEFONICO";
               // 
               // textBox3
               // 
               this->textBox3->Location = System::Drawing::Point(342, 223);
               this->textBox3->Name = L"textBox3";
               this->textBox3->Size = System::Drawing::Size(100, 26);
               this->textBox3->TabIndex = 5;
               // 
               // label4
               // 
               this->label4->AutoSize = true;
               this->label4->Location = System::Drawing::Point(81, 293);
               this->label4->Name = L"label4";
               this->label4->Size = System::Drawing::Size(130, 20);
               this->label4->TabIndex = 6;
               this->label4->Text = L"NACIONALIDAD";
               // 
               // textBox4
               // 
               this->textBox4->Location = System::Drawing::Point(342, 290);
               this->textBox4->Name = L"textBox4";
               this->textBox4->Size = System::Drawing::Size(100, 26);
               this->textBox4->TabIndex = 7;
               // 
               // label5
               // 
               this->label5->AutoSize = true;
               this->label5->Location = System::Drawing::Point(81, 352);
               this->label5->Name = L"label5";
               this->label5->Size = System::Drawing::Size(181, 20);
               this->label5->TabIndex = 8;
               this->label5->Text = L"NUMERO PASAPORTE";
               // 
               // textBox5
               // 
               this->textBox5->Location = System::Drawing::Point(342, 349);
               this->textBox5->Name = L"textBox5";
               this->textBox5->Size = System::Drawing::Size(100, 26);
               this->textBox5->TabIndex = 9;
               // 
               // buttonCrear
               // 
               this->buttonCrear->Location = System::Drawing::Point(50, 420);
               this->buttonCrear->Name = L"buttonCrear";
               this->buttonCrear->Size = System::Drawing::Size(100, 30);
               this->buttonCrear->TabIndex = 10;
               this->buttonCrear->Text = L"Crear";
               this->buttonCrear->UseVisualStyleBackColor = true;
               this->buttonCrear->Click += gcnew System::EventHandler(this, &PASAJEROS::buttonCrear_Click);
               // 
               // buttonLeer
               // 
               this->buttonLeer->Location = System::Drawing::Point(170, 420);
               this->buttonLeer->Name = L"buttonLeer";
               this->buttonLeer->Size = System::Drawing::Size(100, 30);
               this->buttonLeer->TabIndex = 11;
               this->buttonLeer->Text = L"Leer";
               this->buttonLeer->UseVisualStyleBackColor = true;
               this->buttonLeer->Click += gcnew System::EventHandler(this, &PASAJEROS::buttonLeer_Click);
               // 
               // buttonModificar
               // 
               this->buttonModificar->Location = System::Drawing::Point(290, 420);
               this->buttonModificar->Name = L"buttonModificar";
               this->buttonModificar->Size = System::Drawing::Size(100, 30);
               this->buttonModificar->TabIndex = 12;
               this->buttonModificar->Text = L"Modificar";
               this->buttonModificar->UseVisualStyleBackColor = true;
               this->buttonModificar->Click += gcnew System::EventHandler(this, &PASAJEROS::buttonModificar_Click);
               // 
               // buttonBorrar
               // 
               this->buttonBorrar->Location = System::Drawing::Point(410, 420);
               this->buttonBorrar->Name = L"buttonBorrar";
               this->buttonBorrar->Size = System::Drawing::Size(100, 30);
               this->buttonBorrar->TabIndex = 13;
               this->buttonBorrar->Text = L"Borrar";
               this->buttonBorrar->UseVisualStyleBackColor = true;
               this->buttonBorrar->Click += gcnew System::EventHandler(this, &PASAJEROS::buttonBorrar_Click);
               // 
               // label6
               // 
               this->label6->AutoSize = true;
               this->label6->BackColor = System::Drawing::Color::Yellow;
               this->label6->Location = System::Drawing::Point(241, 9);
               this->label6->Name = L"label6";
               this->label6->Size = System::Drawing::Size(95, 20);
               this->label6->TabIndex = 14;
               this->label6->Text = L"PASAJERO";
               // 
               // btn_abrir
               // 
               this->btn_abrir->Location = System::Drawing::Point(516, 37);
               this->btn_abrir->Name = L"btn_abrir";
               this->btn_abrir->Size = System::Drawing::Size(120, 55);
               this->btn_abrir->TabIndex = 16;
               this->btn_abrir->Text = L"Aerolinea";
               this->btn_abrir->UseVisualStyleBackColor = true;
               this->btn_abrir->Click += gcnew System::EventHandler(this, &PASAJEROS::btn_abrir_Click_1);
               // 
               // PASAJEROS
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                   static_cast<System::Int32>(static_cast<System::Byte>(192)));
               this->ClientSize = System::Drawing::Size(648, 479);
               this->Controls->Add(this->btn_abrir);
               this->Controls->Add(this->label6);
               this->Controls->Add(this->buttonBorrar);
               this->Controls->Add(this->buttonModificar);
               this->Controls->Add(this->buttonLeer);
               this->Controls->Add(this->buttonCrear);
               this->Controls->Add(this->textBox5);
               this->Controls->Add(this->label5);
               this->Controls->Add(this->textBox4);
               this->Controls->Add(this->label4);
               this->Controls->Add(this->textBox3);
               this->Controls->Add(this->label3);
               this->Controls->Add(this->textBox2);
               this->Controls->Add(this->label2);
               this->Controls->Add(this->textBox1);
               this->Controls->Add(this->label1);
               this->Controls->Add(this->textBox0);
               this->Controls->Add(this->label0);
               this->Name = L"PASAJEROS";
               this->Text = L"PASAJEROS";
               this->Load += gcnew System::EventHandler(this, &PASAJEROS::PASAJEROS_Load);
               this->ResumeLayout(false);
               this->PerformLayout();

           }
#pragma endregion

    private: System::Void PASAJEROS_Load(System::Object^ sender, System::EventArgs^ e) {
    }

    private: System::Void buttonCrear_Click(System::Object^ sender, System::EventArgs^ e) {
        crear_pasajero();
    }

    private: System::Void buttonLeer_Click(System::Object^ sender, System::EventArgs^ e) {
        leer_pasajero();
    }

    private: System::Void buttonModificar_Click(System::Object^ sender, System::EventArgs^ e) {
        modificar_pasajero();
    }

    private: System::Void buttonBorrar_Click(System::Object^ sender, System::EventArgs^ e) {
        borrar_pasajero();
    }

    private: void crear_pasajero() {
        String^ idPasajero = textBox0->Text;
        String^ nombre = textBox1->Text;
        String^ apellido = textBox2->Text;
        String^ telefono = textBox3->Text;
        String^ nacionalidad = textBox4->Text;
        String^ numeroPasaporte = textBox5->Text;

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

    private: void leer_pasajero() {
        MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
        try {
            conn->Open();
            String^ query = "SELECT * FROM pasajeros";
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

    private: void modificar_pasajero() {
        String^ idPasajero = textBox0->Text;
        String^ nombre = textBox1->Text;
        String^ apellido = textBox2->Text;
        String^ telefono = textBox3->Text;
        String^ nacionalidad = textBox4->Text;
        String^ numeroPasaporte = textBox5->Text;

        MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
        try {
            conn->Open();
            String^ query = "UPDATE pasajeros SET nombre=@nombre, apellido=@apellido, telefono=@telefono, nacionalidad=@nacionalidad, numero_pasaporte=@numeroPasaporte WHERE id_pasajero=@idPasajero";
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

    private: void borrar_pasajero() {
        String^ idPasajero = textBox0->Text;

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
    private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {


    }
    private: System::Void btn_abrir_Click(System::Object^ sender, System::EventArgs^ e) {

        Base_de_datos_Aurora::aerolinea^ aerolinea = gcnew Base_de_datos_Aurora::aerolinea();
        this->Visible = false;
        aerolinea->ShowDialog();
        this->Visible = true;
    }
    private: System::Void btn_abrir_Click_1(System::Object^ sender, System::EventArgs^ e) {
        Base_de_datos_Aurora::aerolinea^ aerolinea = gcnew Base_de_datos_Aurora::aerolinea();
        this->Visible = false;
        aerolinea->ShowDialog();
        this->Visible = true;

    }
    };
}
