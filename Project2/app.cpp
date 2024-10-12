#include <Windows.h>
#include "LoadingScreen.h"

using namespace System;
using namespace System::Windows::Forms;

int main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project2::LoadingScreen form;
	Application::Run(% form);
}