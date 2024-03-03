#include "Matrix.h"
#include "Figure.h"
#include <vector>
#include "Header.h"
#include <fstream>
#include <sstream>
#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Kozikov::MyForm form;
	Application::Run(% form);

}
