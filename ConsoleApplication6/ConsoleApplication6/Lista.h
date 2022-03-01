
class ListElement
{
public:
	int value; //warto�� elementu
	ListElement* nextEl; //wska�nik na nast�pny element
};

class List
{

public:
	List();
	void Add(int val);
	void Remove();
	int At(int idex);
	void Print();
	~List();
private:
	ListElement* head, *tail; //wska�niki na pierwszy i ostatni element listy
};



