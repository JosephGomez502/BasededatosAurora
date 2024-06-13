#include "pch.h"
#include "PASAJEROS.h"

using namespace Base_de_datos_Aurora;

[STAThreadAttribute]
int main(array<System::String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    PASAJEROS form;
    Application::Run(% form);
}
