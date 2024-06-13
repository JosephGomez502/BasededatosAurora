#pragma once

namespace Base_de_datos_Aurora {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace MySql::Data::MySqlClient;

    public ref class aerolinea : public System::Windows::Forms::Form
    {
    public:
        aerolinea(void)
        {
            InitializeComponent();
        }

    protected:
        ~aerolinea()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::TextBox^ textBoxNombre;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ labelId;
    private: System::Windows::Forms::TextBox^ textBoxPais;
    private: System::Windows::Forms::TextBox^ textBoxId;
    private: System::Windows::Forms::Button^ buttonCrear;
    private: System::Windows::Forms::Button^ buttonLeer;
    private: System::Windows::Forms::Button^ buttonModificar;
    private: System::Windows::Forms::Button^ buttonBorrar;
    private: System::Windows::Forms::Button^ buttonLimpiar;

    private:
        System::ComponentModel::Container^ components;
        String^ connectionString = "server=127.0.0.1;user id=jose;password=123456789;database=aeropuerto_aurora;";

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->textBoxNombre = (gcnew System::Windows::Forms::TextBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->labelId = (gcnew System::Windows::Forms::Label());
            this->textBoxPais = (gcnew System::Windows::Forms::TextBox());
            this->textBoxId = (gcnew System::Windows::Forms::TextBox());
            this->buttonCrear = (gcnew System::Windows::Forms::Button());
            this->buttonLeer = (gcnew System::Windows::Forms::Button());
            this->buttonModificar = (gcnew System::Windows::Forms::Button());
            this->buttonBorrar = (gcnew System::Windows::Forms::Button());
            this->buttonLimpiar = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(192)));
            this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(177, 25);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(226, 41);
            this->label1->TabIndex = 0;
            this->label1->Text = L"AEROLINEA";
            this->label1->Click += gcnew System::EventHandler(this, &aerolinea::label1_Click);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(112, 163);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(151, 36);
            this->label2->TabIndex = 1;
            this->label2->Text = L"NOMBRE";
            // 
            // textBoxNombre
            // 
            this->textBoxNombre->BackColor = System::Drawing::Color::Cyan;
            this->textBoxNombre->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBoxNombre->Location = System::Drawing::Point(356, 97);
            this->textBoxNombre->Name = L"textBoxNombre";
            this->textBoxNombre->Size = System::Drawing::Size(170, 44);
            this->textBoxNombre->TabIndex = 2;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->BackColor = System::Drawing::Color::Cyan;
            this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(112, 97);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(81, 36);
            this->label3->TabIndex = 3;
            this->label3->Text = L"PAIS";
            // 
            // labelId
            // 
            this->labelId->AutoSize = true;
            this->labelId->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->labelId->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->labelId->Location = System::Drawing::Point(112, 237);
            this->labelId->Name = L"labelId";
            this->labelId->Size = System::Drawing::Size(49, 36);
            this->labelId->TabIndex = 5;
            this->labelId->Text = L"ID";
            // 
            // textBoxPais
            // 
            this->textBoxPais->BackColor = System::Drawing::Color::Cyan;
            this->textBoxPais->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBoxPais->Location = System::Drawing::Point(356, 160);
            this->textBoxPais->Name = L"textBoxPais";
            this->textBoxPais->Size = System::Drawing::Size(170, 44);
            this->textBoxPais->TabIndex = 6;
            this->textBoxPais->TextChanged += gcnew System::EventHandler(this, &aerolinea::textBoxPais_TextChanged);
            // 
            // textBoxId
            // 
            this->textBoxId->BackColor = System::Drawing::Color::Cyan;
            this->textBoxId->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBoxId->Location = System::Drawing::Point(356, 234);
            this->textBoxId->Name = L"textBoxId";
            this->textBoxId->Size = System::Drawing::Size(78, 44);
            this->textBoxId->TabIndex = 8;
            // 
            // buttonCrear
            // 
            this->buttonCrear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->buttonCrear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonCrear->Location = System::Drawing::Point(60, 326);
            this->buttonCrear->Name = L"buttonCrear";
            this->buttonCrear->Size = System::Drawing::Size(110, 52);
            this->buttonCrear->TabIndex = 9;
            this->buttonCrear->Text = L"Crear";
            this->buttonCrear->UseVisualStyleBackColor = false;
            this->buttonCrear->Click += gcnew System::EventHandler(this, &aerolinea::buttonCrear_Click);
            // 
            // buttonLeer
            // 
            this->buttonLeer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->buttonLeer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonLeer->Location = System::Drawing::Point(60, 418);
            this->buttonLeer->Name = L"buttonLeer";
            this->buttonLeer->Size = System::Drawing::Size(110, 50);
            this->buttonLeer->TabIndex = 10;
            this->buttonLeer->Text = L"Leer";
            this->buttonLeer->UseVisualStyleBackColor = false;
            this->buttonLeer->Click += gcnew System::EventHandler(this, &aerolinea::buttonLeer_Click);
            // 
            // buttonModificar
            // 
            this->buttonModificar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->buttonModificar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonModificar->Location = System::Drawing::Point(386, 326);
            this->buttonModificar->Name = L"buttonModificar";
            this->buttonModificar->Size = System::Drawing::Size(150, 52);
            this->buttonModificar->TabIndex = 11;
            this->buttonModificar->Text = L"Modificar";
            this->buttonModificar->UseVisualStyleBackColor = false;
            this->buttonModificar->Click += gcnew System::EventHandler(this, &aerolinea::buttonModificar_Click);
            // 
            // buttonBorrar
            // 
            this->buttonBorrar->BackColor = System::Drawing::Color::Red;
            this->buttonBorrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonBorrar->Location = System::Drawing::Point(386, 418);
            this->buttonBorrar->Name = L"buttonBorrar";
            this->buttonBorrar->Size = System::Drawing::Size(140, 50);
            this->buttonBorrar->TabIndex = 12;
            this->buttonBorrar->Text = L"Borrar";
            this->buttonBorrar->UseVisualStyleBackColor = false;
            this->buttonBorrar->Click += gcnew System::EventHandler(this, &aerolinea::buttonBorrar_Click);
            // 
            // buttonLimpiar
            // 
            this->buttonLimpiar->BackColor = System::Drawing::Color::Silver;
            this->buttonLimpiar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonLimpiar->Location = System::Drawing::Point(218, 368);
            this->buttonLimpiar->Name = L"buttonLimpiar";
            this->buttonLimpiar->Size = System::Drawing::Size(126, 47);
            this->buttonLimpiar->TabIndex = 13;
            this->buttonLimpiar->Text = L"Limpiar";
            this->buttonLimpiar->UseVisualStyleBackColor = false;
            this->buttonLimpiar->Click += gcnew System::EventHandler(this, &aerolinea::buttonLimpiar_Click);
            // 
            // aerolinea
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(192)));
            this->ClientSize = System::Drawing::Size(560, 480);
            this->Controls->Add(this->buttonLimpiar);
            this->Controls->Add(this->buttonBorrar);
            this->Controls->Add(this->buttonModificar);
            this->Controls->Add(this->buttonLeer);
            this->Controls->Add(this->buttonCrear);
            this->Controls->Add(this->textBoxId);
            this->Controls->Add(this->textBoxPais);
            this->Controls->Add(this->labelId);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->textBoxNombre);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Name = L"aerolinea";
            this->Text = L"aerolinea";
            this->Load += gcnew System::EventHandler(this, &aerolinea::aerolinea_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private: System::Void aerolinea_Load(System::Object^ sender, System::EventArgs^ e) {
    }

    private: System::Void buttonCrear_Click(System::Object^ sender, System::EventArgs^ e) {
        crear_aerolinea();
    }

    private: System::Void buttonLeer_Click(System::Object^ sender, System::EventArgs^ e) {
        leer_aerolinea();
    }

    private: System::Void buttonModificar_Click(System::Object^ sender, System::EventArgs^ e) {
        modificar_aerolinea();
    }

    private: System::Void buttonBorrar_Click(System::Object^ sender, System::EventArgs^ e) {
        borrar_aerolinea();
    }

    private: System::Void buttonLimpiar_Click(System::Object^ sender, System::EventArgs^ e) {
        limpiar_campos();
    }

    private: void crear_aerolinea() {
        String^ nombre = textBoxNombre->Text;
        String^ pais = textBoxPais->Text;

        MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
        try {
            conn->Open();
            String^ query = "INSERT INTO aerolinea (nombre, pais) VALUES (@nombre, @pais)";
            MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
            cmd->Parameters->AddWithValue("@nombre", nombre);
            cmd->Parameters->AddWithValue("@pais", pais);
            cmd->ExecuteNonQuery();
            MessageBox::Show("Aerolínea Creada");
        }
        catch (Exception^ ex) {
            MessageBox::Show(ex->Message);
        }
        finally {
            conn->Close();
        }
    }

    private: void leer_aerolinea() {
        MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
        try {
            conn->Open();
            String^ query = "SELECT * FROM aerolinea WHERE id=@id";
            MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
            cmd->Parameters->AddWithValue("@id", textBoxId->Text);
            MySqlDataReader^ reader = cmd->ExecuteReader();
            if (reader->Read()) {
                textBoxNombre->Text = reader["nombre"]->ToString();
                textBoxPais->Text = reader["pais"]->ToString();
                MessageBox::Show("Datos cargados");
            }
            else {
                MessageBox::Show("Aerolínea no encontrada");
            }
        }
        catch (Exception^ ex) {
            MessageBox::Show(ex->Message);
        }
        finally {
            conn->Close();
        }
    }

    private: void modificar_aerolinea() {
        String^ id = textBoxId->Text;
        String^ nombre = textBoxNombre->Text;
        String^ pais = textBoxPais->Text;

        MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
        try {
            conn->Open();
            String^ query = "UPDATE aerolinea SET nombre=@nombre, pais=@pais WHERE id=@id";
            MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
            cmd->Parameters->AddWithValue("@id", id);
            cmd->Parameters->AddWithValue("@nombre", nombre);
            cmd->Parameters->AddWithValue("@pais", pais);
            cmd->ExecuteNonQuery();
            MessageBox::Show("Aerolínea Modificada");
        }
        catch (Exception^ ex) {
            MessageBox::Show(ex->Message);
        }
        finally {
            conn->Close();
        }
    }

    private: void borrar_aerolinea() {
        String^ id = textBoxId->Text;

        MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
        try {
            conn->Open();
            String^ query = "DELETE FROM aerolinea WHERE id=@id";
            MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
            cmd->Parameters->AddWithValue("@id", id);
            cmd->ExecuteNonQuery();
            MessageBox::Show("Aerolínea Borrada");
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
        textBoxNombre->Clear();
        textBoxPais->Clear();
    }
    private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void textBoxPais_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
