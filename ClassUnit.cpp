//---------------------------------------------------------------------------

#pragma hdrstop

#include "ClassUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)


void Ill::AddSymptom(string symptom)
{
	symptoms.push_back(symptom);

}
void Ill::AddOrgan(string organ)
{
	organs.push_back(organ);

}
list<string> Ill::GetSymptoms()
{
	return symptoms;
}
list<string> Ill::GetOrgans()
{
	 return organs;
}
string Ill::GetName()
{
	return name;
}
string Ill::GetDesc()
{
	return desc;
}

void Ill::SetDesc(string _desc)
{
	desc = _desc;
}

