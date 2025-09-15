#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
	string name;
	int    age;
	int    height;
	int    weight;

};

void print(Person* person)
{
	cout << person->name << " is " << person->age << " years old" << endl;
	cout << person->name << " weighs " << person->weight << " pounds " << endl;
	cout << person->name << " is  " << person->height << " cm tall " << endl;

}


int main()
{
	Person person;
	person.name = "Harry";
	person.age = 23;
	person.weight = 165;
	person.height = 200;

	cout << "Meet " << person.name << endl;
	print(&person);


	return 0;
}