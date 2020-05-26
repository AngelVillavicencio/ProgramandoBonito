#include "frmPaginaPrincipal.h"

ProyectoVerticalFarmsView::Contenedores::EspacioEstacion::EspacioEstacion(String^ name,int tabIndex)
{
		this->AutoSize = true;
		this->Location = System::Drawing::Point(17, 250);
		this->Name = name;
		this->Size = System::Drawing::Size(1020, 319);
		this->TabIndex = tabIndex;
		this->TabStop = false;
		this->Text = name;
	


}
