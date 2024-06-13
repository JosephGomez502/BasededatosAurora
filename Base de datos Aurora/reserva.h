#pragma once

namespace Base_de_datos_Aurora {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace MySql::Data::MySqlClient;

    public ref class reserva : public System::Windows::Forms::Form
    {
    public:
        reserva(void)
        {
            InitializeComponent();
        }

    protected:
        ~reserva()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::TextBox^ textBoxDestino;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::TextBox^ textBoxFechaReserva;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::TextBox^ textBoxHoraAbordaje;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::TextBox^ textBoxHoraLlegada;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::TextBox^ textBoxHoraSalida;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::TextBox^ textBoxNumeroTicket;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::TextBox^ textBoxAsiento;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::TextBox^ textBoxClase;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::TextBox^ textBoxCodigoReserva;
    private: System::Windows::Forms::Button^ buttonCrear;
    private: System::Windows::Forms::Button^ buttonLeer;
    private: System::Windows::Forms::Button^ buttonModificar;
    private: System::Windows::Forms::Button^ buttonBorrar;
    private: System::Windows::Forms::Button^ buttonLimpiar;
    private: System::Windows::Forms::Label^ label10;

    private:
        System::ComponentModel::Container^ components;
        String^ connectionString = "server=127.0.0.1;user id=jose;password=123456789;database=aeropuerto_aurora;";

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->textBoxDestino = (gcnew System::Windows::Forms::TextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->textBoxFechaReserva = (gcnew System::Windows::Forms::TextBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->textBoxHoraAbordaje = (gcnew System::Windows::Forms::TextBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->textBoxHoraLlegada = (gcnew System::Windows::Forms::TextBox());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->textBoxHoraSalida = (gcnew System::Windows::Forms::TextBox());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->textBoxNumeroTicket = (gcnew System::Windows::Forms::TextBox());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->textBoxAsiento = (gcnew System::Windows::Forms::TextBox());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->textBoxClase = (gcnew System::Windows::Forms::TextBox());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->textBoxCodigoReserva = (gcnew System::Windows::Forms::TextBox());
            this->buttonCrear = (gcnew System::Windows::Forms::Button());
            this->buttonLeer = (gcnew System::Windows::Forms::Button());
            this->buttonModificar = (gcnew System::Windows::Forms::Button());
            this->buttonBorrar = (gcnew System::Windows::Forms::Button());
            this->buttonLimpiar = (gcnew System::Windows::Forms::Button());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(81, 111);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(95, 29);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Destino";
            // 
            // textBoxDestino
            // 
            this->textBoxDestino->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->textBoxDestino->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBoxDestino->Location = System::Drawing::Point(342, 108);
            this->textBoxDestino->Name = L"textBoxDestino";
            this->textBoxDestino->Size = System::Drawing::Size(228, 35);
            this->textBoxDestino->TabIndex = 1;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(80, 145);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(175, 29);
            this->label2->TabIndex = 2;
            this->label2->Text = L"Fecha Reserva";
            // 
            // textBoxFechaReserva
            // 
            this->textBoxFechaReserva->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->textBoxFechaReserva->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->textBoxFechaReserva->Location = System::Drawing::Point(342, 145);
            this->textBoxFechaReserva->Name = L"textBoxFechaReserva";
            this->textBoxFechaReserva->Size = System::Drawing::Size(228, 35);
            this->textBoxFechaReserva->TabIndex = 3;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(81, 185);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(169, 29);
            this->label3->TabIndex = 4;
            this->label3->Text = L"Hora Abordaje";
            // 
            // textBoxHoraAbordaje
            // 
            this->textBoxHoraAbordaje->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->textBoxHoraAbordaje->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->textBoxHoraAbordaje->Location = System::Drawing::Point(342, 182);
            this->textBoxHoraAbordaje->Name = L"textBoxHoraAbordaje";
            this->textBoxHoraAbordaje->Size = System::Drawing::Size(228, 35);
            this->textBoxHoraAbordaje->TabIndex = 5;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->Location = System::Drawing::Point(81, 222);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(158, 29);
            this->label4->TabIndex = 6;
            this->label4->Text = L"Hora Llegada";
            // 
            // textBoxHoraLlegada
            // 
            this->textBoxHoraLlegada->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->textBoxHoraLlegada->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBoxHoraLlegada->Location = System::Drawing::Point(342, 219);
            this->textBoxHoraLlegada->Name = L"textBoxHoraLlegada";
            this->textBoxHoraLlegada->Size = System::Drawing::Size(228, 35);
            this->textBoxHoraLlegada->TabIndex = 7;
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->Location = System::Drawing::Point(81, 259);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(139, 29);
            this->label5->TabIndex = 8;
            this->label5->Text = L"Hora Salida";
            // 
            // textBoxHoraSalida
            // 
            this->textBoxHoraSalida->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->textBoxHoraSalida->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBoxHoraSalida->Location = System::Drawing::Point(342, 256);
            this->textBoxHoraSalida->Name = L"textBoxHoraSalida";
            this->textBoxHoraSalida->Size = System::Drawing::Size(228, 35);
            this->textBoxHoraSalida->TabIndex = 9;
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->Location = System::Drawing::Point(81, 296);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(172, 29);
            this->label6->TabIndex = 10;
            this->label6->Text = L"Numero Ticket";
            // 
            // textBoxNumeroTicket
            // 
            this->textBoxNumeroTicket->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->textBoxNumeroTicket->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->textBoxNumeroTicket->Location = System::Drawing::Point(342, 293);
            this->textBoxNumeroTicket->Name = L"textBoxNumeroTicket";
            this->textBoxNumeroTicket->Size = System::Drawing::Size(228, 35);
            this->textBoxNumeroTicket->TabIndex = 11;
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->Location = System::Drawing::Point(81, 333);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(93, 29);
            this->label7->TabIndex = 12;
            this->label7->Text = L"Asiento";
            // 
            // textBoxAsiento
            // 
            this->textBoxAsiento->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->textBoxAsiento->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBoxAsiento->Location = System::Drawing::Point(342, 330);
            this->textBoxAsiento->Name = L"textBoxAsiento";
            this->textBoxAsiento->Size = System::Drawing::Size(228, 39);
            this->textBoxAsiento->TabIndex = 13;
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label8->Location = System::Drawing::Point(81, 370);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(75, 29);
            this->label8->TabIndex = 14;
            this->label8->Text = L"Clase";
            // 
            // textBoxClase
            // 
            this->textBoxClase->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->textBoxClase->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBoxClase->Location = System::Drawing::Point(342, 375);
            this->textBoxClase->Name = L"textBoxClase";
            this->textBoxClase->Size = System::Drawing::Size(228, 35);
            this->textBoxClase->TabIndex = 15;
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label9->Location = System::Drawing::Point(81, 60);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(187, 29);
            this->label9->TabIndex = 16;
            this->label9->Text = L"Codigo Reserva";
            this->label9->Click += gcnew System::EventHandler(this, &reserva::label9_Click);
            // 
            // textBoxCodigoReserva
            // 
            this->textBoxCodigoReserva->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
                static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
            this->textBoxCodigoReserva->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->textBoxCodigoReserva->Location = System::Drawing::Point(342, 64);
            this->textBoxCodigoReserva->Name = L"textBoxCodigoReserva";
            this->textBoxCodigoReserva->Size = System::Drawing::Size(77, 35);
            this->textBoxCodigoReserva->TabIndex = 17;
            // 
            // buttonCrear
            // 
            this->buttonCrear->Location = System::Drawing::Point(32, 420);
            this->buttonCrear->Name = L"buttonCrear";
            this->buttonCrear->Size = System::Drawing::Size(103, 47);
            this->buttonCrear->TabIndex = 18;
            this->buttonCrear->Text = L"Crear";
            this->buttonCrear->UseVisualStyleBackColor = true;
            this->buttonCrear->Click += gcnew System::EventHandler(this, &reserva::buttonCrear_Click);
            // 
            // buttonLeer
            // 
            this->buttonLeer->Location = System::Drawing::Point(150, 420);
            this->buttonLeer->Name = L"buttonLeer";
            this->buttonLeer->Size = System::Drawing::Size(100, 47);
            this->buttonLeer->TabIndex = 19;
            this->buttonLeer->Text = L"Leer";
            this->buttonLeer->UseVisualStyleBackColor = true;
            this->buttonLeer->Click += gcnew System::EventHandler(this, &reserva::buttonLeer_Click);
            // 
            // buttonModificar
            // 
            this->buttonModificar->Location = System::Drawing::Point(265, 420);
            this->buttonModificar->Name = L"buttonModificar";
            this->buttonModificar->Size = System::Drawing::Size(103, 47);
            this->buttonModificar->TabIndex = 20;
            this->buttonModificar->Text = L"Modificar";
            this->buttonModificar->UseVisualStyleBackColor = true;
            this->buttonModificar->Click += gcnew System::EventHandler(this, &reserva::buttonModificar_Click);
            // 
            // buttonBorrar
            // 
            this->buttonBorrar->Location = System::Drawing::Point(385, 420);
            this->buttonBorrar->Name = L"buttonBorrar";
            this->buttonBorrar->Size = System::Drawing::Size(104, 47);
            this->buttonBorrar->TabIndex = 21;
            this->buttonBorrar->Text = L"Borrar";
            this->buttonBorrar->UseVisualStyleBackColor = true;
            this->buttonBorrar->Click += gcnew System::EventHandler(this, &reserva::buttonBorrar_Click);
            // 
            // buttonLimpiar
            // 
            this->buttonLimpiar->Location = System::Drawing::Point(504, 420);
            this->buttonLimpiar->Name = L"buttonLimpiar";
            this->buttonLimpiar->Size = System::Drawing::Size(101, 47);
            this->buttonLimpiar->TabIndex = 22;
            this->buttonLimpiar->Text = L"Limpiar";
            this->buttonLimpiar->UseVisualStyleBackColor = true;
            this->buttonLimpiar->Click += gcnew System::EventHandler(this, &reserva::buttonLimpiar_Click);
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)));
            this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            this->label10->Location = System::Drawing::Point(241, 9);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(178, 41);
            this->label10->TabIndex = 23;
            this->label10->Text = L"RESERVA";
            // 
            // reserva
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(192)));
            this->ClientSize = System::Drawing::Size(617, 479);
            this->Controls->Add(this->label10);
            this->Controls->Add(this->buttonLimpiar);
            this->Controls->Add(this->buttonBorrar);
            this->Controls->Add(this->buttonModificar);
            this->Controls->Add(this->buttonLeer);
            this->Controls->Add(this->buttonCrear);
            this->Controls->Add(this->textBoxCodigoReserva);
            this->Controls->Add(this->label9);
            this->Controls->Add(this->textBoxClase);
            this->Controls->Add(this->label8);
            this->Controls->Add(this->textBoxAsiento);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->textBoxNumeroTicket);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->textBoxHoraSalida);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->textBoxHoraLlegada);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->textBoxHoraAbordaje);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->textBoxFechaReserva);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->textBoxDestino);
            this->Controls->Add(this->label1);
            this->Name = L"reserva";
            this->Text = L"RESERVA";
            this->Load += gcnew System::EventHandler(this, &reserva::RESERVA_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private: System::Void RESERVA_Load(System::Object^ sender, System::EventArgs^ e) {
    }

    private: System::Void buttonCrear_Click(System::Object^ sender, System::EventArgs^ e) {
        crear_reserva();
    }

    private: System::Void buttonLeer_Click(System::Object^ sender, System::EventArgs^ e) {
        leer_reserva();
    }

    private: System::Void buttonModificar_Click(System::Object^ sender, System::EventArgs^ e) {
        modificar_reserva();
    }

    private: System::Void buttonBorrar_Click(System::Object^ sender, System::EventArgs^ e) {
        borrar_reserva();
    }

    private: System::Void buttonLimpiar_Click(System::Object^ sender, System::EventArgs^ e) {
        limpiar_campos();
    }

    private: void crear_reserva() {
        String^ destino = textBoxDestino->Text;
        String^ fecha_reserva = textBoxFechaReserva->Text;
        String^ hora_abordaje = textBoxHoraAbordaje->Text;
        String^ hora_llegada = textBoxHoraLlegada->Text;
        String^ hora_salida = textBoxHoraSalida->Text;
        String^ numero_ticket = textBoxNumeroTicket->Text;
        String^ asiento = textBoxAsiento->Text;
        String^ clase = textBoxClase->Text;
        MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
        try {
            conn->Open();
            String^ query = "INSERT INTO reserva (destino, fecha_reserva, hora_abordaje, hora_llegada, hora_salida, numero_ticket, asiento, clase) VALUES (@destino, @fecha_reserva, @hora_abordaje, @hora_llegada, @hora_salida, @numero_ticket, @asiento, @clase)";
            MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
            cmd->Parameters->AddWithValue("@destino", destino);
            cmd->Parameters->AddWithValue("@fecha_reserva", fecha_reserva);
            cmd->Parameters->AddWithValue("@hora_abordaje", hora_abordaje);
            cmd->Parameters->AddWithValue("@hora_llegada", hora_llegada);
            cmd->Parameters->AddWithValue("@hora_salida", hora_salida);
            cmd->Parameters->AddWithValue("@numero_ticket", numero_ticket);
            cmd->Parameters->AddWithValue("@asiento", asiento);
            cmd->Parameters->AddWithValue("@clase", clase);
            cmd->ExecuteNonQuery();
            MessageBox::Show("Reserva Creada");
        }
        catch (Exception^ ex) {
            MessageBox::Show(ex->Message);
        }
        finally {
            conn->Close();
        }
    }

    private: void leer_reserva() {
        MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
        try {
            conn->Open();
            String^ query = "SELECT * FROM reserva WHERE codigo_reserva=@codigo_reserva";
            MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
            cmd->Parameters->AddWithValue("@codigo_reserva", textBoxCodigoReserva->Text);
            MySqlDataReader^ reader = cmd->ExecuteReader();
            if (reader->Read()) {
                textBoxDestino->Text = reader["destino"]->ToString();
                textBoxFechaReserva->Text = reader["fecha_reserva"]->ToString();
                textBoxHoraAbordaje->Text = reader["hora_abordaje"]->ToString();
                textBoxHoraLlegada->Text = reader["hora_llegada"]->ToString();
                textBoxHoraSalida->Text = reader["hora_salida"]->ToString();
                textBoxNumeroTicket->Text = reader["numero_ticket"]->ToString();
                textBoxAsiento->Text = reader["asiento"]->ToString();
                textBoxClase->Text = reader["clase"]->ToString();
                MessageBox::Show("Datos cargados");
            }
            else {
                MessageBox::Show("Reserva no encontrada");
            }
        }
        catch (Exception^ ex) {
            MessageBox::Show(ex->Message);
        }
        finally {
            conn->Close();
        }
    }

    private: void modificar_reserva() {
        String^ codigo_reserva = textBoxCodigoReserva->Text;
        String^ destino = textBoxDestino->Text;
        String^ fecha_reserva = textBoxFechaReserva->Text;
        String^ hora_abordaje = textBoxHoraAbordaje->Text;
        String^ hora_llegada = textBoxHoraLlegada->Text;
        String^ hora_salida = textBoxHoraSalida->Text;
        String^ numero_ticket = textBoxNumeroTicket->Text;
        String^ asiento = textBoxAsiento->Text;
        String^ clase = textBoxClase->Text;
        MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
        try {
            conn->Open();
            String^ query = "UPDATE reserva SET destino=@destino, fecha_reserva=@fecha_reserva, hora_abordaje=@hora_abordaje, hora_llegada=@hora_llegada, hora_salida=@hora_salida, numero_ticket=@numero_ticket, asiento=@asiento, clase=@clase WHERE codigo_reserva=@codigo_reserva";
            MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
            cmd->Parameters->AddWithValue("@codigo_reserva", codigo_reserva);
            cmd->Parameters->AddWithValue("@destino", destino);
            cmd->Parameters->AddWithValue("@fecha_reserva", fecha_reserva);
            cmd->Parameters->AddWithValue("@hora_abordaje", hora_abordaje);
            cmd->Parameters->AddWithValue("@hora_llegada", hora_llegada);
            cmd->Parameters->AddWithValue("@hora_salida", hora_salida);
            cmd->Parameters->AddWithValue("@numero_ticket", numero_ticket);
            cmd->Parameters->AddWithValue("@asiento", asiento);
            cmd->Parameters->AddWithValue("@clase", clase);
            cmd->ExecuteNonQuery();
            MessageBox::Show("Reserva Modificada");
        }
        catch (Exception^ ex) {
            MessageBox::Show(ex->Message);
        }
        finally {
            conn->Close();
        }
    }

    private: void borrar_reserva() {
        String^ codigo_reserva = textBoxCodigoReserva->Text;
        MySqlConnection^ conn = gcnew MySqlConnection(connectionString);
        try {
            conn->Open();
            String^ query = "DELETE FROM reserva WHERE codigo_reserva=@codigo_reserva";
            MySqlCommand^ cmd = gcnew MySqlCommand(query, conn);
            cmd->Parameters->AddWithValue("@codigo_reserva", codigo_reserva);
            cmd->ExecuteNonQuery();
            MessageBox::Show("Reserva Borrada");
        }
        catch (Exception^ ex) {
            MessageBox::Show(ex->Message);
        }
        finally {
            conn->Close();
        }
    }

    private: void limpiar_campos() {
        textBoxCodigoReserva->Clear();
        textBoxDestino->Clear();
        textBoxFechaReserva->Clear();
        textBoxHoraAbordaje->Clear();
        textBoxHoraLlegada->Clear();
        textBoxHoraSalida->Clear();
        textBoxNumeroTicket->Clear();
        textBoxAsiento->Clear();
        textBoxClase->Clear();
    }
    private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
    }
};
}
