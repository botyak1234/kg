#include "Figure.h"
#include "Trasform.h"
#include <vector>
#include "Header.h"
#include <fstream>
#include "Clip.h"
#include <sstream>
#include "MyForm1.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Kozikov::MyForm form;
	Application::Run(% form);

}
