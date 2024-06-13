#pragma once
#include "aerolinea.h"
#include "avion.h"
#include "reserva.h"
#include "vuelo.h"
#include "aeropuerto3.h"

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

    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::TextBox^ textBox4;
    private: System::Windows::Forms::Button^ buttonCrear;
    private: System::Windows::Forms::Button^ buttonLeer;
    private: System::Windows::Forms::Button^ buttonModificar;
    private: System::Windows::Forms::Button^ buttonBorrar;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::TextBox^ textBoxId;
    private: System::Windows::Forms::Button^ buttonLimpiar;

    private:
        System::ComponentModel::Container^ components;
    private: System::Windows::Forms::Button^ button_otro;
    private: System::Windows::Forms::Button^ otro_boton;
    private: System::Windows::Forms::Button^ next_otros;
    private: System::Windows::Forms::Button^ button_gogo;
    private: System::Windows::Forms::Button^ botonn_nexs;
           String^ connectionString = "server=127.0.0.1;user id=jose;password=123456789;database=aeropuerto_aurora;";

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->buttonCrear = (gcnew System::Windows::Forms::Button());
            this->buttonLeer = (gcnew System::Windows::Forms::Button());
            this->buttonModificar = (gcnew System::Windows::Forms::Button());
            this->buttonBorrar = (gcnew System::Windows::Forms::Button());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->textBoxId = (gcnew System::Windows::Forms::TextBox());
            this->buttonLimpiar = (gcnew System::Windows::Forms::Button());
            this->button_otro = (gcnew System::Windows::Forms::Button());
            this->otro_boton = (gcnew System::Windows::Forms::Button());
            this->next_otros = (gcnew System::Windows::Forms::Button());
            this->button_gogo = (gcnew System::Windows::Forms::Button());
            this->botonn_nexs = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::Cyan;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(24, 146);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(137, 32);
            this->label1->TabIndex = 0;
            this->label1->Text = L"NOMBRE";
            // 
            // textBox1
            // 
            this->textBox1->BackColor = System::Drawing::Color::Cyan;
            this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox1->Location = System::Drawing::Point(308, 143);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(171, 39);
            this->textBox1->TabIndex = 1;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::Color::Cyan;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(24, 200);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(152, 32);
            this->label2->TabIndex = 2;
            this->label2->Text = L"APELLIDO";
            // 
            // textBox2
            // 
            this->textBox2->BackColor = System::Drawing::Color::Cyan;
            this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox2->Location = System::Drawing::Point(308, 200);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(171, 39);
            this->textBox2->TabIndex = 3;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->BackColor = System::Drawing::Color::Cyan;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(24, 259);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(166, 32);
            this->label3->TabIndex = 4;
            this->label3->Text = L"TELEFONO";
            // 
            // textBox3
            // 
            this->textBox3->BackColor = System::Drawing::Color::Cyan;
            this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox3->Location = System::Drawing::Point(308, 256);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(171, 39);
            this->textBox3->TabIndex = 5;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->BackColor = System::Drawing::Color::Cyan;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->Location = System::Drawing::Point(24, 319);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(223, 32);
            this->label4->TabIndex = 6;
            this->label4->Text = L"NACIONALIDAD";
            // 
            // textBox4
            // 
            this->textBox4->BackColor = System::Drawing::Color::Cyan;
            this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox4->Location = System::Drawing::Point(308, 319);
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(171, 39);
            this->textBox4->TabIndex = 7;
            // 
            // buttonCrear
            // 
            this->buttonCrear->Location = System::Drawing::Point(30, 401);
            this->buttonCrear->Name = L"buttonCrear";
            this->buttonCrear->Size = System::Drawing::Size(115, 44);
            this->buttonCrear->TabIndex = 10;
            this->buttonCrear->Text = L"Crear";
            this->buttonCrear->UseVisualStyleBackColor = true;
            this->buttonCrear->Click += gcnew System::EventHandler(this, &PASAJEROS::buttonCrear_Click);
            // 
            // buttonLeer
            // 
            this->buttonLeer->Location = System::Drawing::Point(161, 401);
            this->buttonLeer->Name = L"buttonLeer";
            this->buttonLeer->Size = System::Drawing::Size(115, 44);
            this->buttonLeer->TabIndex = 11;
            this->buttonLeer->Text = L"Leer";
            this->buttonLeer->UseVisualStyleBackColor = true;
            this->buttonLeer->Click += gcnew System::EventHandler(this, &PASAJEROS::buttonLeer_Click);
            // 
            // buttonModificar
            // 
            this->buttonModificar->Location = System::Drawing::Point(282, 401);
            this->buttonModificar->Name = L"buttonModificar";
            this->buttonModificar->Size = System::Drawing::Size(121, 44);
            this->buttonModificar->TabIndex = 12;
            this->buttonModificar->Text = L"Modificar";
            this->buttonModificar->UseVisualStyleBackColor = true;
            this->buttonModificar->Click += gcnew System::EventHandler(this, &PASAJEROS::buttonModificar_Click);
            // 
            // buttonBorrar
            // 
            this->buttonBorrar->Location = System::Drawing::Point(409, 401);
            this->buttonBorrar->Name = L"buttonBorrar";
            this->buttonBorrar->Size = System::Drawing::Size(115, 44);
            this->buttonBorrar->TabIndex = 13;
            this->buttonBorrar->Text = L"Borrar";
            this->buttonBorrar->UseVisualStyleBackColor = true;
            this->buttonBorrar->Click += gcnew System::EventHandler(this, &PASAJEROS::buttonBorrar_Click);
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label6->Location = System::Drawing::Point(202, 23);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(197, 41);
            this->label6->TabIndex = 14;
            this->label6->Text = L"PASAJERO";
            // 
            // textBoxId
            // 
            this->textBoxId->BackColor = System::Drawing::Color::Cyan;
            this->textBoxId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBoxId->Location = System::Drawing::Point(308, 82);
            this->textBoxId->Name = L"textBoxId";
            this->textBoxId->Size = System::Drawing::Size(62, 39);
            this->textBoxId->TabIndex = 21;
            // 
            // buttonLimpiar
            // 
            this->buttonLimpiar->Location = System::Drawing::Point(530, 401);
            this->buttonLimpiar->Name = L"buttonLimpiar";
            this->buttonLimpiar->Size = System::Drawing::Size(106, 44);
            this->buttonLimpiar->TabIndex = 22;
            this->buttonLimpiar->Text = L"Limpiar";
            this->buttonLimpiar->UseVisualStyleBackColor = true;
            this->buttonLimpiar->Click += gcnew System::EventHandler(this, &PASAJEROS::buttonLimpiar_Click);
            // 
            // button_otro
            // 
            this->button_otro->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button_otro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button_otro->Location = System::Drawing::Point(514, 52);
            this->button_otro->Name = L"button_otro";
            this->button_otro->Size = System::Drawing::Size(122, 51);
            this->button_otro->TabIndex = 23;
            this->button_otro->Text = L"Aerolinea";
            this->button_otro->UseVisualStyleBackColor = false;
            this->button_otro->Click += gcnew System::EventHandler(this, &PASAJEROS::button_otro_Click);
            // 
            // otro_boton
            // 
            this->otro_boton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->otro_boton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->otro_boton->Location = System::Drawing::Point(514, 121);
            this->otro_boton->Name = L"otro_boton";
            this->otro_boton->Size = System::Drawing::Size(122, 46);
            this->otro_boton->TabIndex = 24;
            this->otro_boton->Text = L"Avion";
            this->otro_boton->UseVisualStyleBackColor = false;
            this->otro_boton->Click += gcnew System::EventHandler(this, &PASAJEROS::otro_boton_Click);
            // 
            // next_otros
            // 
            this->next_otros->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->next_otros->Location = System::Drawing::Point(514, 186);
            this->next_otros->Name = L"next_otros";
            this->next_otros->Size = System::Drawing::Size(122, 46);
            this->next_otros->TabIndex = 25;
            this->next_otros->Text = L"Aeropuerto";
            this->next_otros->UseVisualStyleBackColor = false;
            this->next_otros->Click += gcnew System::EventHandler(this, &PASAJEROS::next_otros_Click);
            // 
            // button_gogo
            // 
            this->button_gogo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->button_gogo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button_gogo->Location = System::Drawing::Point(514, 245);
            this->button_gogo->Name = L"button_gogo";
            this->button_gogo->Size = System::Drawing::Size(122, 46);
            this->button_gogo->TabIndex = 26;
            this->button_gogo->Text = L"Reserva";
            this->button_gogo->UseVisualStyleBackColor = false;
            this->button_gogo->Click += gcnew System::EventHandler(this, &PASAJEROS::button_gogo_Click);
            // 
            // botonn_nexs
            // 
            this->botonn_nexs->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->botonn_nexs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->botonn_nexs->Location = System::Drawing::Point(514, 316);
            this->botonn_nexs->Name = L"botonn_nexs";
            this->botonn_nexs->Size = System::Drawing::Size(122, 46);
            this->botonn_nexs->TabIndex = 27;
            this->botonn_nexs->Text = L"Vuelo";
            this->botonn_nexs->UseVisualStyleBackColor = false;
            this->botonn_nexs->Click += gcnew System::EventHandler(this, &PASAJEROS::botonn_nexs_Click);
            // 
            // PASAJEROS
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(192)));
            this->ClientSize = System::Drawing::Size(648, 479);
            this->Controls->Add(this->botonn_nexs);
            this->Controls->Add(this->button_gogo);
            this->Controls->Add(this->next_otros);
            this->Controls->Add(this->otro_boton);
            this->Controls->Add(this->button_otro);
            this->Controls->Add(this->buttonLimpiar);
            this->Controls->Add(this->textBoxId);
            this->Controls->Add(this->buttonBorrar);
            this->Controls->Add(this->buttonModificar);
            this->Controls->Add(this->buttonLeer);
            this->Controls->Add(this->buttonCrear);
            this->Controls->Add(this->textBox4);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->textBox3);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->textBox2);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->label6);
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

    private: System::Void buttonLimpiar_Click(System::Object^ sender, System::EventArgs^ e) {
        limpiar_campos();
    }

    private: void crear_pasajero() {
        String^ nombre = textBox1->Text;
        String^ apellido = textBox2->Text;
        String^ telefono = textBox3->Text;
        String^ nacionalidad = textBox4->Text;
        MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
        try {
            conn->Open();
            String^ query = "INSERT INTO pasajero (nombre, apellido, telefono, nacionalidad) VALUES (@nombre, @apellido, @telefono, @nacionalidad)";
            MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
            cmd->Parameters->AddWithValue("@nombre", nombre);
            cmd->Parameters->AddWithValue("@apellido", apellido);
            cmd->Parameters->AddWithValue("@telefono", telefono);
            cmd->Parameters->AddWithValue("@nacionalidad", nacionalidad);
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
            String^ query = "SELECT * FROM pasajero WHERE id=@id";
            MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
            cmd->Parameters->AddWithValue("@id", textBoxId->Text);
            MySqlDataReader^ reader = cmd->ExecuteReader();
            if (reader->Read()) {
                textBox1->Text = reader["nombre"]->ToString();
                textBox2->Text = reader["apellido"]->ToString();
                textBox3->Text = reader["telefono"]->ToString();
                textBox4->Text = reader["nacionalidad"]->ToString();
                MessageBox::Show("Datos cargados");
            }
            else {
                MessageBox::Show("Pasajero no encontrado");
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
        String^ id = textBoxId->Text;
        String^ nombre = textBox1->Text;
        String^ apellido = textBox2->Text;
        String^ telefono = textBox3->Text;
        String^ nacionalidad = textBox4->Text;
        MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
        try {
            conn->Open();
            String^ query = "UPDATE pasajero SET nombre=@nombre, apellido=@apellido, telefono=@telefono, nacionalidad=@nacionalidad WHERE id=@id";
            MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
            cmd->Parameters->AddWithValue("@id", id);
            cmd->Parameters->AddWithValue("@nombre", nombre);
            cmd->Parameters->AddWithValue("@apellido", apellido);
            cmd->Parameters->AddWithValue("@telefono", telefono);
            cmd->Parameters->AddWithValue("@nacionalidad", nacionalidad);
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
        String^ id = textBoxId->Text;
        MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
        try {
            conn->Open();
            String^ query = "DELETE FROM pasajero WHERE id=@id";
            MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
            cmd->Parameters->AddWithValue("@id", id);
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

    private: void limpiar_campos() {
        textBoxId->Clear();
        textBox1->Clear();
        textBox2->Clear();
        textBox3->Clear();
        textBox4->Clear();
    }
    private: System::Void button_otro_Click(System::Object^ sender, System::EventArgs^ e) {

        Base_de_datos_Aurora::aerolinea^ aerolinea = gcnew Base_de_datos_Aurora::aerolinea();
        this->Visible = false;
        aerolinea->ShowDialog();
        this->Visible= true;


    }
private: System::Void otro_boton_Click(System::Object^ sender, System::EventArgs^ e) {

    Base_de_datos_Aurora::avion^ avion = gcnew Base_de_datos_Aurora::avion();
    this->Visible = false;
    avion->ShowDialog();
    this->Visible = true;

}
private: System::Void next_otros_Click(System::Object^ sender, System::EventArgs^ e) {

    Base_de_datos_Aurora::aeropuerto^ aeropuerto = gcnew Base_de_datos_Aurora::aeropuerto();
    this->Visible = false;
    aeropuerto->ShowDialog();
    this->Visible = true;
}
private: System::Void button_gogo_Click(System::Object^ sender, System::EventArgs^ e) {

    Base_de_datos_Aurora::reserva^ reserva = gcnew Base_de_datos_Aurora::reserva();
    this->Visible = false;
    reserva->ShowDialog();
    this->Visible = true;
}
private: System::Void botonn_nexs_Click(System::Object^ sender, System::EventArgs^ e) {

    Base_de_datos_Aurora::vuelo^ vuelo = gcnew Base_de_datos_Aurora::vuelo();
    this->Visible = false;
    vuelo->ShowDialog();
    this->Visible = true;
}
};
}

