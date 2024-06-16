#pragma once

namespace Base_de_datos_Aurora {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace MySql::Data::MySqlClient;

    public ref class aeropuerto : public System::Windows::Forms::Form
    {
    public:
        aeropuerto(void)
        {
            InitializeComponent();
        }

    protected:
        ~aeropuerto()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::TextBox^ textBoxNombre;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::TextBox^ textBoxCiudad;
    private: System::Windows::Forms::TextBox^ textBoxPais;
    private: System::Windows::Forms::TextBox^ textBoxId;
    private: System::Windows::Forms::Button^ buttonCrear;
    private: System::Windows::Forms::Button^ buttonLeer;
    private: System::Windows::Forms::Button^ buttonModificar;
    private: System::Windows::Forms::Button^ buttonBorrar;
    private: System::Windows::Forms::Button^ buttonLimpiar;
    private: System::Windows::Forms::Label^ label4;

    private:
        System::ComponentModel::Container^ components;
        String^ connectionString = "server=127.0.0.1;user id=jose;password=123456789;database=aeropuerto_aurora;SslMode=none";

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->textBoxNombre = (gcnew System::Windows::Forms::TextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->textBoxCiudad = (gcnew System::Windows::Forms::TextBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->textBoxPais = (gcnew System::Windows::Forms::TextBox());
            this->textBoxId = (gcnew System::Windows::Forms::TextBox());
            this->buttonCrear = (gcnew System::Windows::Forms::Button());
            this->buttonLeer = (gcnew System::Windows::Forms::Button());
            this->buttonModificar = (gcnew System::Windows::Forms::Button());
            this->buttonBorrar = (gcnew System::Windows::Forms::Button());
            this->buttonLimpiar = (gcnew System::Windows::Forms::Button());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(81, 111);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(114, 32);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Nombre";
            // 
            // textBoxNombre
            // 
            this->textBoxNombre->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->textBoxNombre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBoxNombre->Location = System::Drawing::Point(342, 108);
            this->textBoxNombre->Name = L"textBoxNombre";
            this->textBoxNombre->Size = System::Drawing::Size(195, 39);
            this->textBoxNombre->TabIndex = 1;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(81, 165);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(105, 32);
            this->label2->TabIndex = 2;
            this->label2->Text = L"Ciudad";
            // 
            // textBoxCiudad
            // 
            this->textBoxCiudad->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->textBoxCiudad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBoxCiudad->Location = System::Drawing::Point(342, 162);
            this->textBoxCiudad->Name = L"textBoxCiudad";
            this->textBoxCiudad->Size = System::Drawing::Size(195, 39);
            this->textBoxCiudad->TabIndex = 3;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(81, 224);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(70, 32);
            this->label3->TabIndex = 4;
            this->label3->Text = L"País";
            // 
            // textBoxPais
            // 
            this->textBoxPais->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->textBoxPais->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBoxPais->Location = System::Drawing::Point(342, 217);
            this->textBoxPais->Name = L"textBoxPais";
            this->textBoxPais->Size = System::Drawing::Size(195, 39);
            this->textBoxPais->TabIndex = 5;
            // 
            // textBoxId
            // 
            this->textBoxId->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->textBoxId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBoxId->Location = System::Drawing::Point(267, 63);
            this->textBoxId->Name = L"textBoxId";
            this->textBoxId->Size = System::Drawing::Size(55, 39);
            this->textBoxId->TabIndex = 6;
            // 
            // buttonCrear
            // 
            this->buttonCrear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonCrear->Location = System::Drawing::Point(51, 302);
            this->buttonCrear->Name = L"buttonCrear";
            this->buttonCrear->Size = System::Drawing::Size(100, 49);
            this->buttonCrear->TabIndex = 7;
            this->buttonCrear->Text = L"Crear";
            this->buttonCrear->UseVisualStyleBackColor = true;
            this->buttonCrear->Click += gcnew System::EventHandler(this, &aeropuerto::buttonCrear_Click);
            // 
            // buttonLeer
            // 
            this->buttonLeer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonLeer->Location = System::Drawing::Point(51, 361);
            this->buttonLeer->Name = L"buttonLeer";
            this->buttonLeer->Size = System::Drawing::Size(100, 46);
            this->buttonLeer->TabIndex = 8;
            this->buttonLeer->Text = L"Leer";
            this->buttonLeer->UseVisualStyleBackColor = true;
            this->buttonLeer->Click += gcnew System::EventHandler(this, &aeropuerto::buttonLeer_Click);
            // 
            // buttonModificar
            // 
            this->buttonModificar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonModificar->Location = System::Drawing::Point(205, 302);
            this->buttonModificar->Name = L"buttonModificar";
            this->buttonModificar->Size = System::Drawing::Size(143, 49);
            this->buttonModificar->TabIndex = 9;
            this->buttonModificar->Text = L"Modificar";
            this->buttonModificar->UseVisualStyleBackColor = true;
            this->buttonModificar->Click += gcnew System::EventHandler(this, &aeropuerto::buttonModificar_Click);
            // 
            // buttonBorrar
            // 
            this->buttonBorrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonBorrar->Location = System::Drawing::Point(205, 357);
            this->buttonBorrar->Name = L"buttonBorrar";
            this->buttonBorrar->Size = System::Drawing::Size(143, 50);
            this->buttonBorrar->TabIndex = 10;
            this->buttonBorrar->Text = L"Borrar";
            this->buttonBorrar->UseVisualStyleBackColor = true;
            this->buttonBorrar->Click += gcnew System::EventHandler(this, &aeropuerto::buttonBorrar_Click);
            // 
            // buttonLimpiar
            // 
            this->buttonLimpiar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonLimpiar->Location = System::Drawing::Point(381, 326);
            this->buttonLimpiar->Name = L"buttonLimpiar";
            this->buttonLimpiar->Size = System::Drawing::Size(133, 46);
            this->buttonLimpiar->TabIndex = 11;
            this->buttonLimpiar->Text = L"Limpiar";
            this->buttonLimpiar->UseVisualStyleBackColor = true;
            this->buttonLimpiar->Click += gcnew System::EventHandler(this, &aeropuerto::buttonLimpiar_Click);
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(192)));
            this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label4->Location = System::Drawing::Point(169, 9);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(259, 41);
            this->label4->TabIndex = 12;
            this->label4->Text = L"AEROPUERTO";
            // 
            // aeropuerto
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(192)));
            this->ClientSize = System::Drawing::Size(549, 431);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->buttonLimpiar);
            this->Controls->Add(this->buttonBorrar);
            this->Controls->Add(this->buttonModificar);
            this->Controls->Add(this->buttonLeer);
            this->Controls->Add(this->buttonCrear);
            this->Controls->Add(this->textBoxId);
            this->Controls->Add(this->textBoxPais);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->textBoxCiudad);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->textBoxNombre);
            this->Controls->Add(this->label1);
            this->Name = L"aeropuerto";
            this->Text = L"AEROPUERTOS";
            this->Load += gcnew System::EventHandler(this, &aeropuerto::AEROPUERTOS_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private: System::Void AEROPUERTOS_Load(System::Object^ sender, System::EventArgs^ e) {
    }

    private: System::Void buttonCrear_Click(System::Object^ sender, System::EventArgs^ e) {
        crear_aeropuerto();
    }

    private: System::Void buttonLeer_Click(System::Object^ sender, System::EventArgs^ e) {
        leer_aeropuerto();
    }

    private: System::Void buttonModificar_Click(System::Object^ sender, System::EventArgs^ e) {
        modificar_aeropuerto();
    }

    private: System::Void buttonBorrar_Click(System::Object^ sender, System::EventArgs^ e) {
        borrar_aeropuerto();
    }

    private: System::Void buttonLimpiar_Click(System::Object^ sender, System::EventArgs^ e) {
        limpiar_campos();
    }

    private: void crear_aeropuerto() {
        String^ nombre = textBoxNombre->Text;
        String^ ciudad = textBoxCiudad->Text;
        String^ pais = textBoxPais->Text;
        MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
        try {
            conn->Open();
            String^ query = "INSERT INTO aeropuerto (nombre, ciudad, pais) VALUES (@nombre, @ciudad, @pais)";
            MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
            cmd->Parameters->AddWithValue("@nombre", nombre);
            cmd->Parameters->AddWithValue("@ciudad", ciudad);
            cmd->Parameters->AddWithValue("@pais", pais);
            cmd->ExecuteNonQuery();
            MessageBox::Show("Aeropuerto Creado");
        }
        catch (Exception^ ex) {
            MessageBox::Show(ex->Message);
        }
        finally {
            conn->Close();
        }
    }

    private: void leer_aeropuerto() {
        MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
        try {
            conn->Open();
            String^ query = "SELECT * FROM aeropuerto WHERE id=@id";
            MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
            cmd->Parameters->AddWithValue("@id", textBoxId->Text);
            MySqlDataReader^ reader = cmd->ExecuteReader();
            if (reader->Read()) {
                textBoxNombre->Text = reader["nombre"]->ToString();
                textBoxCiudad->Text = reader["ciudad"]->ToString();
                textBoxPais->Text = reader["pais"]->ToString();
                MessageBox::Show("Datos cargados");
            }
            else {
                MessageBox::Show("Aeropuerto no encontrado");
            }
        }
        catch (Exception^ ex) {
            MessageBox::Show(ex->Message);
        }
        finally {
            conn->Close();
        }
    }

    private: void modificar_aeropuerto() {
        String^ id = textBoxId->Text;
        String^ nombre = textBoxNombre->Text;
        String^ ciudad = textBoxCiudad->Text;
        String^ pais = textBoxPais->Text;
        MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
        try {
            conn->Open();
            String^ query = "UPDATE aeropuerto SET nombre=@nombre, ciudad=@ciudad, pais=@pais WHERE id=@id";
            MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
            cmd->Parameters->AddWithValue("@id", id);
            cmd->Parameters->AddWithValue("@nombre", nombre);
            cmd->Parameters->AddWithValue("@ciudad", ciudad);
            cmd->Parameters->AddWithValue("@pais", pais);
            cmd->ExecuteNonQuery();
            MessageBox::Show("Aeropuerto Modificado");
        }
        catch (Exception^ ex) {
            MessageBox::Show(ex->Message);
        }
        finally {
            conn->Close();
        }
    }

    private: void borrar_aeropuerto() {
        String^ id = textBoxId->Text;
        MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
        try {
            conn->Open();
            String^ query = "DELETE FROM aeropuerto WHERE id=@id";
            MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
            cmd->Parameters->AddWithValue("@id", id);
            cmd->ExecuteNonQuery();
            MessageBox::Show("Aeropuerto Borrado");
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
        textBoxCiudad->Clear();
        textBoxPais->Clear();
    }
    };
}
