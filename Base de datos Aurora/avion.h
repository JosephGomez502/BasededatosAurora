#pragma once


namespace Base_de_datos_Aurora {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace MySql::Data::MySqlClient;

    public ref class avion : public System::Windows::Forms::Form
    {
    public:
        avion(void)
        {
            InitializeComponent();
        }

    protected:
        ~avion()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::TextBox^ textBoxModelo;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::TextBox^ textBoxCapacidad;
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
            this->textBoxModelo = (gcnew System::Windows::Forms::TextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->textBoxCapacidad = (gcnew System::Windows::Forms::TextBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
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
            this->label1->Size = System::Drawing::Size(108, 32);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Modelo";
            // 
            // textBoxModelo
            // 
            this->textBoxModelo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->textBoxModelo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBoxModelo->Location = System::Drawing::Point(342, 108);
            this->textBoxModelo->Name = L"textBoxModelo";
            this->textBoxModelo->Size = System::Drawing::Size(156, 39);
            this->textBoxModelo->TabIndex = 1;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(81, 168);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(151, 32);
            this->label2->TabIndex = 2;
            this->label2->Text = L"Capacidad";
            // 
            // textBoxCapacidad
            // 
            this->textBoxCapacidad->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->textBoxCapacidad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBoxCapacidad->Location = System::Drawing::Point(342, 162);
            this->textBoxCapacidad->Name = L"textBoxCapacidad";
            this->textBoxCapacidad->Size = System::Drawing::Size(156, 39);
            this->textBoxCapacidad->TabIndex = 3;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(81, 60);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(41, 32);
            this->label3->TabIndex = 4;
            this->label3->Text = L"ID";
            // 
            // textBoxId
            // 
            this->textBoxId->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->textBoxId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBoxId->Location = System::Drawing::Point(342, 60);
            this->textBoxId->Name = L"textBoxId";
            this->textBoxId->Size = System::Drawing::Size(61, 39);
            this->textBoxId->TabIndex = 5;
            // 
            // buttonCrear
            // 
            this->buttonCrear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonCrear->Location = System::Drawing::Point(42, 247);
            this->buttonCrear->Name = L"buttonCrear";
            this->buttonCrear->Size = System::Drawing::Size(109, 58);
            this->buttonCrear->TabIndex = 6;
            this->buttonCrear->Text = L"Crear";
            this->buttonCrear->UseVisualStyleBackColor = true;
            this->buttonCrear->Click += gcnew System::EventHandler(this, &avion::buttonCrear_Click);
            // 
            // buttonLeer
            // 
            this->buttonLeer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonLeer->Location = System::Drawing::Point(45, 311);
            this->buttonLeer->Name = L"buttonLeer";
            this->buttonLeer->Size = System::Drawing::Size(106, 59);
            this->buttonLeer->TabIndex = 7;
            this->buttonLeer->Text = L"Leer";
            this->buttonLeer->UseVisualStyleBackColor = true;
            this->buttonLeer->Click += gcnew System::EventHandler(this, &avion::buttonLeer_Click);
            // 
            // buttonModificar
            // 
            this->buttonModificar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonModificar->Location = System::Drawing::Point(181, 247);
            this->buttonModificar->Name = L"buttonModificar";
            this->buttonModificar->Size = System::Drawing::Size(158, 58);
            this->buttonModificar->TabIndex = 8;
            this->buttonModificar->Text = L"Modificar";
            this->buttonModificar->UseVisualStyleBackColor = true;
            this->buttonModificar->Click += gcnew System::EventHandler(this, &avion::buttonModificar_Click);
            // 
            // buttonBorrar
            // 
            this->buttonBorrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonBorrar->Location = System::Drawing::Point(192, 311);
            this->buttonBorrar->Name = L"buttonBorrar";
            this->buttonBorrar->Size = System::Drawing::Size(147, 59);
            this->buttonBorrar->TabIndex = 9;
            this->buttonBorrar->Text = L"Borrar";
            this->buttonBorrar->UseVisualStyleBackColor = true;
            this->buttonBorrar->Click += gcnew System::EventHandler(this, &avion::buttonBorrar_Click);
            // 
            // buttonLimpiar
            // 
            this->buttonLimpiar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonLimpiar->Location = System::Drawing::Point(367, 274);
            this->buttonLimpiar->Name = L"buttonLimpiar";
            this->buttonLimpiar->Size = System::Drawing::Size(131, 57);
            this->buttonLimpiar->TabIndex = 10;
            this->buttonLimpiar->Text = L"Limpiar";
            this->buttonLimpiar->UseVisualStyleBackColor = true;
            this->buttonLimpiar->Click += gcnew System::EventHandler(this, &avion::buttonLimpiar_Click);
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label4->Location = System::Drawing::Point(221, 9);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(129, 41);
            this->label4->TabIndex = 11;
            this->label4->Text = L"AVION";
            // 
            // avion
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(192)));
            this->ClientSize = System::Drawing::Size(510, 408);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->buttonLimpiar);
            this->Controls->Add(this->buttonBorrar);
            this->Controls->Add(this->buttonModificar);
            this->Controls->Add(this->buttonLeer);
            this->Controls->Add(this->buttonCrear);
            this->Controls->Add(this->textBoxId);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->textBoxCapacidad);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->textBoxModelo);
            this->Controls->Add(this->label1);
            this->Name = L"avion";
            this->Text = L"AVIONES";
            this->Load += gcnew System::EventHandler(this, &avion::AVIONES_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private: System::Void AVIONES_Load(System::Object^ sender, System::EventArgs^ e) {
    }

    private: System::Void buttonCrear_Click(System::Object^ sender, System::EventArgs^ e) {
        crear_avion();
    }

    private: System::Void buttonLeer_Click(System::Object^ sender, System::EventArgs^ e) {
        leer_avion();
    }

    private: System::Void buttonModificar_Click(System::Object^ sender, System::EventArgs^ e) {
        modificar_avion();
    }

    private: System::Void buttonBorrar_Click(System::Object^ sender, System::EventArgs^ e) {
        borrar_avion();
    }

    private: System::Void buttonLimpiar_Click(System::Object^ sender, System::EventArgs^ e) {
        limpiar_campos();
    }

    private: void crear_avion() {
        String^ modelo = textBoxModelo->Text;
        String^ capacidad = textBoxCapacidad->Text;
        MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
        try {
            conn->Open();
            String^ query = "INSERT INTO avion (modelo, capacidad) VALUES (@modelo, @capacidad)";
            MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
            cmd->Parameters->AddWithValue("@modelo", modelo);
            cmd->Parameters->AddWithValue("@capacidad", capacidad);
            cmd->ExecuteNonQuery();
            MessageBox::Show("Avión Creado");
        }
        catch (Exception^ ex) {
            MessageBox::Show(ex->Message);
        }
        finally {
            conn->Close();
        }
    }

    private: void leer_avion() {
        MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
        try {
            conn->Open();
            String^ query = "SELECT * FROM avion WHERE id=@id";
            MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
            cmd->Parameters->AddWithValue("@id", textBoxId->Text);
            MySqlDataReader^ reader = cmd->ExecuteReader();
            if (reader->Read()) {
                textBoxModelo->Text = reader["modelo"]->ToString();
                textBoxCapacidad->Text = reader["capacidad"]->ToString();
                MessageBox::Show("Datos cargados");
            }
            else {
                MessageBox::Show("Avión no encontrado");
            }
        }
        catch (Exception^ ex) {
            MessageBox::Show(ex->Message);
        }
        finally {
            conn->Close();
        }
    }

    private: void modificar_avion() {
        String^ id = textBoxId->Text;
        String^ modelo = textBoxModelo->Text;
        String^ capacidad = textBoxCapacidad->Text;
        MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
        try {
            conn->Open();
            String^ query = "UPDATE avion SET modelo=@modelo, capacidad=@capacidad WHERE id=@id";
            MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
            cmd->Parameters->AddWithValue("@id", id);
            cmd->Parameters->AddWithValue("@modelo", modelo);
            cmd->Parameters->AddWithValue("@capacidad", capacidad);
            cmd->ExecuteNonQuery();
            MessageBox::Show("Avión Modificado");
        }
        catch (Exception^ ex) {
            MessageBox::Show(ex->Message);
        }
        finally {
            conn->Close();
        }
    }

    private: void borrar_avion() {
        String^ id = textBoxId->Text;
        MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
        try {
            conn->Open();
            String^ query = "DELETE FROM avion WHERE id=@id";
            MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
            cmd->Parameters->AddWithValue("@id", id);
            cmd->ExecuteNonQuery();
            MessageBox::Show("Avión Borrado");
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
        textBoxModelo->Clear();
        textBoxCapacidad->Clear();
    }
    };
}
