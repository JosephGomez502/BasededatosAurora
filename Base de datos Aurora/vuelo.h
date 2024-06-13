#pragma once


namespace Base_de_datos_Aurora {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace MySql::Data::MySqlClient;

    public ref class vuelo : public System::Windows::Forms::Form
    {
    public:
        vuelo(void)
        {
            InitializeComponent();
        }

    protected:
        ~vuelo()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::TextBox^ textBoxNumeroVuelo;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::TextBox^ textBoxOrigen;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::TextBox^ textBoxDestino;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::TextBox^ textBoxHoraSalida;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::TextBox^ textBoxHoraLlegada;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::TextBox^ textBoxEstadoVuelo;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::TextBox^ textBoxAerolinea;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::TextBox^ textBoxModeloAvion;
    private: System::Windows::Forms::Button^ buttonCrear;
    private: System::Windows::Forms::Button^ buttonLeer;
    private: System::Windows::Forms::Button^ buttonModificar;
    private: System::Windows::Forms::Button^ buttonBorrar;
    private: System::Windows::Forms::Button^ buttonLimpiar;
    private: System::Windows::Forms::Label^ label9;

    private:
        System::ComponentModel::Container^ components;
        String^ connectionString = "server=127.0.0.1;user id=jose;password=123456789;database=aeropuerto_aurora;";

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->textBoxNumeroVuelo = (gcnew System::Windows::Forms::TextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->textBoxOrigen = (gcnew System::Windows::Forms::TextBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->textBoxDestino = (gcnew System::Windows::Forms::TextBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->textBoxHoraSalida = (gcnew System::Windows::Forms::TextBox());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->textBoxHoraLlegada = (gcnew System::Windows::Forms::TextBox());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->textBoxEstadoVuelo = (gcnew System::Windows::Forms::TextBox());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->textBoxAerolinea = (gcnew System::Windows::Forms::TextBox());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->textBoxModeloAvion = (gcnew System::Windows::Forms::TextBox());
            this->buttonCrear = (gcnew System::Windows::Forms::Button());
            this->buttonLeer = (gcnew System::Windows::Forms::Button());
            this->buttonModificar = (gcnew System::Windows::Forms::Button());
            this->buttonBorrar = (gcnew System::Windows::Forms::Button());
            this->buttonLimpiar = (gcnew System::Windows::Forms::Button());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(57, 49);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(168, 29);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Numero Vuelo";
            // 
            // textBoxNumeroVuelo
            // 
            this->textBoxNumeroVuelo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->textBoxNumeroVuelo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBoxNumeroVuelo->Location = System::Drawing::Point(342, 49);
            this->textBoxNumeroVuelo->Name = L"textBoxNumeroVuelo";
            this->textBoxNumeroVuelo->Size = System::Drawing::Size(171, 35);
            this->textBoxNumeroVuelo->TabIndex = 1;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(57, 87);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(87, 29);
            this->label2->TabIndex = 2;
            this->label2->Text = L"Origen";
            // 
            // textBoxOrigen
            // 
            this->textBoxOrigen->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->textBoxOrigen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBoxOrigen->Location = System::Drawing::Point(342, 87);
            this->textBoxOrigen->Name = L"textBoxOrigen";
            this->textBoxOrigen->Size = System::Drawing::Size(171, 35);
            this->textBoxOrigen->TabIndex = 3;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(57, 127);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(95, 29);
            this->label3->TabIndex = 4;
            this->label3->Text = L"Destino";
            // 
            // textBoxDestino
            // 
            this->textBoxDestino->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->textBoxDestino->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBoxDestino->Location = System::Drawing::Point(342, 127);
            this->textBoxDestino->Name = L"textBoxDestino";
            this->textBoxDestino->Size = System::Drawing::Size(171, 35);
            this->textBoxDestino->TabIndex = 5;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->Location = System::Drawing::Point(57, 169);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(139, 29);
            this->label4->TabIndex = 6;
            this->label4->Text = L"Hora Salida";
            // 
            // textBoxHoraSalida
            // 
            this->textBoxHoraSalida->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->textBoxHoraSalida->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBoxHoraSalida->Location = System::Drawing::Point(342, 169);
            this->textBoxHoraSalida->Name = L"textBoxHoraSalida";
            this->textBoxHoraSalida->Size = System::Drawing::Size(171, 35);
            this->textBoxHoraSalida->TabIndex = 7;
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->Location = System::Drawing::Point(55, 211);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(158, 29);
            this->label5->TabIndex = 8;
            this->label5->Text = L"Hora Llegada";
            // 
            // textBoxHoraLlegada
            // 
            this->textBoxHoraLlegada->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->textBoxHoraLlegada->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBoxHoraLlegada->Location = System::Drawing::Point(342, 214);
            this->textBoxHoraLlegada->Name = L"textBoxHoraLlegada";
            this->textBoxHoraLlegada->Size = System::Drawing::Size(171, 35);
            this->textBoxHoraLlegada->TabIndex = 9;
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->Location = System::Drawing::Point(55, 255);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(156, 29);
            this->label6->TabIndex = 10;
            this->label6->Text = L"Estado Vuelo";
            // 
            // textBoxEstadoVuelo
            // 
            this->textBoxEstadoVuelo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->textBoxEstadoVuelo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBoxEstadoVuelo->Location = System::Drawing::Point(342, 255);
            this->textBoxEstadoVuelo->Name = L"textBoxEstadoVuelo";
            this->textBoxEstadoVuelo->Size = System::Drawing::Size(171, 35);
            this->textBoxEstadoVuelo->TabIndex = 11;
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->Location = System::Drawing::Point(55, 295);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(116, 29);
            this->label7->TabIndex = 12;
            this->label7->Text = L"Aerolinea";
            // 
            // textBoxAerolinea
            // 
            this->textBoxAerolinea->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->textBoxAerolinea->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBoxAerolinea->Location = System::Drawing::Point(342, 295);
            this->textBoxAerolinea->Name = L"textBoxAerolinea";
            this->textBoxAerolinea->Size = System::Drawing::Size(171, 35);
            this->textBoxAerolinea->TabIndex = 13;
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label8->Location = System::Drawing::Point(51, 336);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(160, 29);
            this->label8->TabIndex = 14;
            this->label8->Text = L"Modelo Avion";
            // 
            // textBoxModeloAvion
            // 
            this->textBoxModeloAvion->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->textBoxModeloAvion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBoxModeloAvion->Location = System::Drawing::Point(342, 336);
            this->textBoxModeloAvion->Name = L"textBoxModeloAvion";
            this->textBoxModeloAvion->Size = System::Drawing::Size(171, 35);
            this->textBoxModeloAvion->TabIndex = 15;
            // 
            // buttonCrear
            // 
            this->buttonCrear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonCrear->Location = System::Drawing::Point(536, 68);
            this->buttonCrear->Name = L"buttonCrear";
            this->buttonCrear->Size = System::Drawing::Size(100, 48);
            this->buttonCrear->TabIndex = 16;
            this->buttonCrear->Text = L"Crear";
            this->buttonCrear->UseVisualStyleBackColor = true;
            this->buttonCrear->Click += gcnew System::EventHandler(this, &vuelo::buttonCrear_Click);
            // 
            // buttonLeer
            // 
            this->buttonLeer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonLeer->Location = System::Drawing::Point(536, 126);
            this->buttonLeer->Name = L"buttonLeer";
            this->buttonLeer->Size = System::Drawing::Size(100, 53);
            this->buttonLeer->TabIndex = 17;
            this->buttonLeer->Text = L"Leer";
            this->buttonLeer->UseVisualStyleBackColor = true;
            this->buttonLeer->Click += gcnew System::EventHandler(this, &vuelo::buttonLeer_Click);
            // 
            // buttonModificar
            // 
            this->buttonModificar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonModificar->Location = System::Drawing::Point(519, 185);
            this->buttonModificar->Name = L"buttonModificar";
            this->buttonModificar->Size = System::Drawing::Size(127, 54);
            this->buttonModificar->TabIndex = 18;
            this->buttonModificar->Text = L"Modificar";
            this->buttonModificar->UseVisualStyleBackColor = true;
            this->buttonModificar->Click += gcnew System::EventHandler(this, &vuelo::buttonModificar_Click);
            // 
            // buttonBorrar
            // 
            this->buttonBorrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonBorrar->Location = System::Drawing::Point(536, 245);
            this->buttonBorrar->Name = L"buttonBorrar";
            this->buttonBorrar->Size = System::Drawing::Size(100, 59);
            this->buttonBorrar->TabIndex = 19;
            this->buttonBorrar->Text = L"Borrar";
            this->buttonBorrar->UseVisualStyleBackColor = true;
            this->buttonBorrar->Click += gcnew System::EventHandler(this, &vuelo::buttonBorrar_Click);
            // 
            // buttonLimpiar
            // 
            this->buttonLimpiar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->buttonLimpiar->Location = System::Drawing::Point(529, 310);
            this->buttonLimpiar->Name = L"buttonLimpiar";
            this->buttonLimpiar->Size = System::Drawing::Size(117, 55);
            this->buttonLimpiar->TabIndex = 20;
            this->buttonLimpiar->Text = L"Limpiar";
            this->buttonLimpiar->UseVisualStyleBackColor = true;
            this->buttonLimpiar->Click += gcnew System::EventHandler(this, &vuelo::buttonLimpiar_Click);
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
                static_cast<System::Int32>(static_cast<System::Byte>(192)));
            this->label9->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label9->Location = System::Drawing::Point(224, 9);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(122, 36);
            this->label9->TabIndex = 21;
            this->label9->Text = L"VUELO";
            // 
            // vuelo
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(192)));
            this->ClientSize = System::Drawing::Size(655, 387);
            this->Controls->Add(this->label9);
            this->Controls->Add(this->buttonLimpiar);
            this->Controls->Add(this->buttonBorrar);
            this->Controls->Add(this->buttonModificar);
            this->Controls->Add(this->buttonLeer);
            this->Controls->Add(this->buttonCrear);
            this->Controls->Add(this->textBoxModeloAvion);
            this->Controls->Add(this->label8);
            this->Controls->Add(this->textBoxAerolinea);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->textBoxEstadoVuelo);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->textBoxHoraLlegada);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->textBoxHoraSalida);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->textBoxDestino);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->textBoxOrigen);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->textBoxNumeroVuelo);
            this->Controls->Add(this->label1);
            this->Name = L"vuelo";
            this->Text = L"VUELO";
            this->Load += gcnew System::EventHandler(this, &vuelo::VUELO_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private: System::Void VUELO_Load(System::Object^ sender, System::EventArgs^ e) {
    }

    private: System::Void buttonCrear_Click(System::Object^ sender, System::EventArgs^ e) {
        crear_vuelo();
    }

    private: System::Void buttonLeer_Click(System::Object^ sender, System::EventArgs^ e) {
        leer_vuelo();
    }

    private: System::Void buttonModificar_Click(System::Object^ sender, System::EventArgs^ e) {
        modificar_vuelo();
    }

    private: System::Void buttonBorrar_Click(System::Object^ sender, System::EventArgs^ e) {
        borrar_vuelo();
    }

    private: System::Void buttonLimpiar_Click(System::Object^ sender, System::EventArgs^ e) {
        limpiar_campos();
    }

    private: void crear_vuelo() {
        String^ numero_vuelo = textBoxNumeroVuelo->Text;
        String^ origen = textBoxOrigen->Text;
        String^ destino = textBoxDestino->Text;
        String^ hora_salida = textBoxHoraSalida->Text;
        String^ hora_llegada = textBoxHoraLlegada->Text;
        String^ estado_vuelo = textBoxEstadoVuelo->Text;
        String^ aerolinea = textBoxAerolinea->Text;
        String^ modelo_avion = textBoxModeloAvion->Text;
        MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
        try {
            conn->Open();
            String^ query = "INSERT INTO vuelo (numero_vuelo, origen, destino, hora_salida, hora_llegada, estado_vuelo, aerolinea, modelo_avion) VALUES (@numero_vuelo, @origen, @destino, @hora_salida, @hora_llegada, @estado_vuelo, @aerolinea, @modelo_avion)";
            MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
            cmd->Parameters->AddWithValue("@numero_vuelo", numero_vuelo);
            cmd->Parameters->AddWithValue("@origen", origen);
            cmd->Parameters->AddWithValue("@destino", destino);
            cmd->Parameters->AddWithValue("@hora_salida", hora_salida);
            cmd->Parameters->AddWithValue("@hora_llegada", hora_llegada);
            cmd->Parameters->AddWithValue("@estado_vuelo", estado_vuelo);
            cmd->Parameters->AddWithValue("@aerolinea", aerolinea);
            cmd->Parameters->AddWithValue("@modelo_avion", modelo_avion);
            cmd->ExecuteNonQuery();
            MessageBox::Show("Vuelo Creado");
        }
        catch (Exception^ ex) {
            MessageBox::Show(ex->Message);
        }
        finally {
            conn->Close();
        }
    }

    private: void leer_vuelo() {
        MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
        try {
            conn->Open();
            String^ query = "SELECT * FROM vuelo WHERE numero_vuelo=@numero_vuelo";
            MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
            cmd->Parameters->AddWithValue("@numero_vuelo", textBoxNumeroVuelo->Text);
            MySqlDataReader^ reader = cmd->ExecuteReader();
            if (reader->Read()) {
                textBoxNumeroVuelo->Text = reader["numero_vuelo"]->ToString();
                textBoxOrigen->Text = reader["origen"]->ToString();
                textBoxDestino->Text = reader["destino"]->ToString();
                textBoxHoraSalida->Text = reader["hora_salida"]->ToString();
                textBoxHoraLlegada->Text = reader["hora_llegada"]->ToString();
                textBoxEstadoVuelo->Text = reader["estado_vuelo"]->ToString();
                textBoxAerolinea->Text = reader["aerolinea"]->ToString();
                textBoxModeloAvion->Text = reader["modelo_avion"]->ToString();
                MessageBox::Show("Datos cargados");
            }
            else {
                MessageBox::Show("Vuelo no encontrado");
            }
        }
        catch (Exception^ ex) {
            MessageBox::Show(ex->Message);
        }
        finally {
            conn->Close();
        }
    }

    private: void modificar_vuelo() {
        String^ numero_vuelo = textBoxNumeroVuelo->Text;
        String^ origen = textBoxOrigen->Text;
        String^ destino = textBoxDestino->Text;
        String^ hora_salida = textBoxHoraSalida->Text;
        String^ hora_llegada = textBoxHoraLlegada->Text;
        String^ estado_vuelo = textBoxEstadoVuelo->Text;
        String^ aerolinea = textBoxAerolinea->Text;
        String^ modelo_avion = textBoxModeloAvion->Text;
        MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
        try {
            conn->Open();
            String^ query = "UPDATE vuelo SET origen=@origen, destino=@destino, hora_salida=@hora_salida, hora_llegada=@hora_llegada, estado_vuelo=@estado_vuelo, aerolinea=@aerolinea, modelo_avion=@modelo_avion WHERE numero_vuelo=@numero_vuelo";
            MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
            cmd->Parameters->AddWithValue("@numero_vuelo", numero_vuelo);
            cmd->Parameters->AddWithValue("@origen", origen);
            cmd->Parameters->AddWithValue("@destino", destino);
            cmd->Parameters->AddWithValue("@hora_salida", hora_salida);
            cmd->Parameters->AddWithValue("@hora_llegada", hora_llegada);
            cmd->Parameters->AddWithValue("@estado_vuelo", estado_vuelo);
            cmd->Parameters->AddWithValue("@aerolinea", aerolinea);
            cmd->Parameters->AddWithValue("@modelo_avion", modelo_avion);
            cmd->ExecuteNonQuery();
            MessageBox::Show("Vuelo Modificado");
        }
        catch (Exception^ ex) {
            MessageBox::Show(ex->Message);
        }
        finally {
            conn->Close();
        }
    }

    private: void borrar_vuelo() {
        String^ numero_vuelo = textBoxNumeroVuelo->Text;
        MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
        try {
            conn->Open();
            String^ query = "DELETE FROM vuelo WHERE numero_vuelo=@numero_vuelo";
            MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
            cmd->Parameters->AddWithValue("@numero_vuelo", numero_vuelo);
            cmd->ExecuteNonQuery();
            MessageBox::Show("Vuelo Borrado");
        }
        catch (Exception^ ex) {
            MessageBox::Show(ex->Message);
        }
        finally {
            conn->Close();
        }
    }

    private: void limpiar_campos() {
        textBoxNumeroVuelo->Clear();
        textBoxOrigen->Clear();
        textBoxDestino->Clear();
        textBoxHoraSalida->Clear();
        textBoxHoraLlegada->Clear();
        textBoxEstadoVuelo->Clear();
        textBoxAerolinea->Clear();
        textBoxModeloAvion->Clear();
    }
    };
}
