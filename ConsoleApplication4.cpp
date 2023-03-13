#include <iostream>
#include <string>
using namespace std;

class firstThing
{
public:
	firstThing(int a,string Сase1) {
		int time = a;
		string Сase = Сase1;
		for (int i = 0; i < a; i++)
		{
			cout << "граєм кс ";
		}
		cout << endl;
		cout<< Сase << endl;
	}
private:
	int time;
	string Сase;
};

class firstThing2
{
public:
	firstThing2(int a2,string Сase2) {
		int time = a2;
		string Сase = Сase2;
		for (int i = 0; i < a2; i++)
		{
			cout << "граєм кс ";
		}
		cout << endl;
		cout << Сase<< endl;
	}
private:
	int time;
	string Сase;
};
class firstThing3
{
public:
	firstThing3(int a3, string Сase3) {
		int time = a3;
		string Сase = Сase3;
		for (int i = 0; i < a3; i++)
		{
			cout << "граєм кс ";
		}
		cout << endl;
		cout << Сase<<endl;
	}
private:
	int time;
	string Сase;
};
int main() {
	setlocale(LC_ALL, "ru");
	int time, time2, time3;
	string Case, Case2, Case3;
	bool b;
	cout << "введить сколько ви будеш грати кс " << endl;

	cin>> time >> time2>> time3;
	cout << "шо вам треба зробити?"<<endl;
	cin >> Case >> Case2 >> Case3;

	firstThing a(time,Case);
	cout << "просмотреть другие события?(1-так,0-не)" << endl;
	cin >> b;
	if (b)
	{
	firstThing2 a2(time2,Case2);
	}	
	cout << "просмотреть другие события?(1-так,0-не)" << endl;
	cin >> b;
	if (b)
	{
		firstThing3 a3(time3, Case3);
	}


}
