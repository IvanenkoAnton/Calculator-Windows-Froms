/*******************************************************************************
Simple Calculator,
Created by Anton Ivanenko,June 2017
I wrote this to train using Windows Forms .NET
*******************************************************************************/
#include <windows.h>
#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;


int main() {

	FreeConsole();
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Calculator::MyForm form;
	Application::Run(%form);

	return 0;
}
