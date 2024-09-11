#include <iostream>
using namespace std;
const int m = 50;

class ITEMS
{
int itemcode[m];
int itemprice[m];
int count;

public:
    void CNT()
    {
        count = 0;
    }
    void getitem();

    void displaysum();
    void remove();
    void displayItems();
};


void ITEMS ::getitem(){
	cout << "enter item code";
	cin >> itemcode[count];
	cout << "enter item price ";
	cin >> itemprice[count];
	count++;
};
void ITEMS ::displaysum()
{
	float sum = 0;
	for (int i = 0; i < count; i++)
	{
		sum = sum + itemprice[i];
		cout << "\n total values:" << sum << "\n";
	}
}
void ITEMS :: displayItems()
{
	for (int i = 0; i < count; i++)
	{
		cout << "\n code   price  \n";
		cout << itemcode[i]<<"\t";
		cout<< itemprice[i];
	}
}
void ITEMS :: remove()
{
	int a;
	cout << "enter code to remove item";
	cin >> a;
	for (int i = 0; i < count; i++)
	{
		if (itemcode[i] == a)
			itemprice[i] = 0;
	}
}

int main()
{
	ITEMS order;
	order.CNT();
	int x;
	do
	{
		cout << "\n enter appropiate number to excute a funcation \n";
		cout << "\n 1 for add an item\n";
		cout << "\n 2 for display an item \n";
		cout << "\n 3 for total of item \n";
		cout << "\n 4  for delete an item\n";
		cout << "\n 5 for quit\n";
		cout << "select your choice";
		cin >> x;
		switch (x)
		{
		case 1:
			order.getitem();
			break;
		case 2:
			order.displayItems();
			break;
		case 3:
			order.displaysum();
			break;
		case 4:
			order.remove();
			break;

		default:
			cout << "wrong choice";
			break;
		}
		
	}while (x != 5);

		return 0;
}




