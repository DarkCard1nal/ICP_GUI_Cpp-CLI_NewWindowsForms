#include "l7Form.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main(array<String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	l7::l7Form form;
	Application::Run(% form);
	return 0;
}

