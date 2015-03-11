#include "iostream"
#include "iomanip"
using namespace std;

struct menuItemType
{
    char name[30];
    double price;
};

void getData(menuItemType* menu, int size)
{
    for(int i = 0; i < size; i++)
    {
        cin.ignore(100, '\n');
        cout << "Enter the type of breakfast: ";
        cin.getline(menu[i].name, 30);
        cout << "Enter the price: ";
        cin >> menu[i].price;
    }
}

void showMenu(menuItemType* menu, int menu_size)
{
    for (int i = 0; i < menu_size; i++)
    {
        cout << i+1 << " " << setw(15) << menu[i].name << " - " << menu[i].price << endl;
    }
}

void printCheck(menuItemType* menu, int* order, int order_size)
{
    double check = 0;
    for (int i = 0; i < order_size; i++)
    {
        check += menu[order[i] - 1].price;
    }
    cout << "Your check is " << check * 1.05 << endl;
}
int main()
{
    menuItemType menuList[20];
    int order[10];
    int order_size = 0;
    int menu_size;
    cout << "Enter the number of items in the menu: ";
    cin >> menu_size;

    getData(menuList, menu_size);
    showMenu(menuList, menu_size);

    cout << "Enter how many dishes you'd like: ";
    cin >> order_size;
    for (int i = 0; i < order_size; i++)
    {
        cout << "Enter the number of the dish you want:" << endl;
        cin >> order[i];
    }
    printCheck(menuList, order, order_size);
    return 0;
}
