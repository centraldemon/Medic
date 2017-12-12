//---------------------------------------------------------------------------

#ifndef ClassUnitH
#define ClassUnitH
#include <string>
#include <list>
using namespace std;
class Ill
{
	private:
	string name;
	list<string> symptoms;
	list<string> organs;
	string desc;
	public:
	Ill(string _name)
	{
		name=_name;
    }

	void AddSymptom(string symptom);

	void AddOrgan(string organ);

    void SetDesc(string _desc);

	list<string> GetSymptoms();

	list<string> GetOrgans();
	string GetName();
	string GetDesc();
};
//---------------------------------------------------------------------------
#endif




