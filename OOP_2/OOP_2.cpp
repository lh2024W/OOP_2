// OOP_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

class Elektric_Kettle {
    string brand;//бренд
    string model;//модель
    string color;//цвет
    int price;//цена

public:
    void SetBrand(string b) {
        brand = b;
    }

    void SetModel(string m) {
        model = m;
    }

    void SetColor(string c) {
        color = c;
    }

    void SetPrice(int p) {
        if (p !=0)
        price = p;
    }

    string GetBrand() {
        return brand ;
    }

    string GetModel() {
        return model;
    }

    string GetColor() {
        return color;
    }

    int GetPrice() {
        return price;
    }

    void PrintPriceColor(int price, string color) {
        cout << "Price: " << price << "\nColor: " << color << "\n\n";
    }

    void PrintBrandModel(string brand, string model) {
        cout << "Brand: " << brand << "\nModel: " << model << "\n\n";
    }

    void Price(int price) {
        if (price < 3000) {
            cout << "Cheap kettle!" << price << "\n\n";
        }
        else
            cout << "Expensive kettle!" << price << "\n\n";
    }
};

class Book {
    string author;//автор
    string name;//название книги
    string genre;//жанр
    int year;//год выпуска
    int count_page;//количество страниц

public:
    void SetAuthor(string a) {
        author = a;
    }

    void SetName(string n) {
         name = n;
    }

    void SetGenre(string g) {
        genre = g;
    }

    void SetYear(int y) {
        if (y != 0 && y < 2025)
            year = y;
    }

    void SetCount_page(int c) {
        if (c != 0)
        count_page = c;
    }

    string GetAuthor() {
        return author;
    }

    string GetName() {
        return name;
    }

    string GetGenre() {
        return genre;
    }

    int GetYear() {
        return year;
    }

    int GetCount_page() {
        return count_page;
    }
    void PrintBook(string author, string name, string genre) {
        cout << "Author: " << author << "\nName: " << name << "\nGenre: " << genre << "\n\n";
    }

    void PrintCountPageYear(string name, int count_page, int year) {
        cout << "Name: " << name << "\nCount page: " << count_page << "\nYear: " << year << "\n\n";
    }

    void Year(int year) {
        if (year > 2000) {
            cout << "New book!" << year << "\n\n";
        }
        else
            cout << "Old book!" << year << "\n\n";
    }
};

class Pen {
    string color;//цвет
    string brand;//бренд
    bool write;//пишет? да\нет

public:
    void SetColor(string c) {
        if (c != "White")
        color = c;
    }

    void SetBrand(string b) {
        brand = b;
    }

    void SetWrite(bool w) {
        write = w;
    }

    string GetColor() {
        return color;
    }

    string GetBrand() {
        return brand;
    }

    bool GetWrite() {
        return write;
    }
    void LeaveOrThrowAway(bool write) {
        if (write = true) {
            cout << "Leave this pen!" << "\n\n";
        }
        else
            cout << "Throw away this pen!" << "\n\n";
    }

    void Print() {
        cout << brand << " " << color << "\n\n";
    }
};

class Banknote {
    int denomination;//номинал купюры
    string year;//год выпуска
    bool old_new;//потрепанная да\нет

public:
    void SetDenomination(int d) {
        if (d != 0)
          denomination = d;
    }

    void SetYear(string y) {
        year = y;
    }

    void SetOld_new(bool o) {
        old_new = o;
    }

    int GetDenomination() {
        return denomination;
    }

    string GetYear() {
        return year;
    }

    bool GetOld_new() {
        return old_new;
    }
    void Print() {
        cout << "Banknote: " << denomination << " grn." << "\n" << year << "Year of release" << "\n\n";
    }

    void TakeOrChange(bool old_new) {
        if (old_new = true) {
            cout << "Take this banknote!" << "\n\n";
        }
        else
            cout << "Change this banknote!" << "\n\n";
    }
};

class Wallet {
    string brand;//бренд
    string price;//цена
    string color;//цвет
    bool coin_box;//отдел для монет да\нет
    int count_section;//количество отделений
    int count_card_sections;// количество денег

public:
    void SetBrand(string b) {
        brand = b;
    }

    void SetPrice(string p) {
        if (p != "0" && p != "00" && p != "000" && p != "0000")
        price = p;
    }

    void SetColor(string c) {
        color = c;
    }

    void SetCoin_box(bool c) {
        coin_box = c;
    }

    void SetCount_section(bool c) {
        count_section = c;
    }

    void SetCount_card_sections(int c) {
        if (c != 0 && c < 10)
        count_card_sections = c;
    }

    string GetBrand() {
        return brand;
    }

    string GetPrice() {
        return price;
    }

    string GetColor() {
        return color;
    }

    bool GetCoin_box() {
        return coin_box;
    }

    bool GetCount_section() {
        return count_section;
    }

    int GetCount_card_sections() {
        return count_card_sections;
    }

    void Print() {
        cout << "Wallet \n";
        cout << "Brand: " << brand << "\nColor: " << color << "\nPrice : " << price << "\n\n";
    }

    void BayWallet(int count_card_sections, bool coin_box, string price) {
        if ((count_card_sections == 3) && (coin_box = true)) {
            cout << "Price: " << price << "\n";
        }
        else
            cout << "This wallet is not available!" << "\n";
    }

};

int main()
{
    Elektric_Kettle k;

    k.SetBrand("Philips");
    k.SetModel("4569tt");
    k.SetColor("White");
    k.SetPrice(3600);
    
    cout << k.GetBrand() << "\n";
    cout << k.GetModel() << "\n";
    cout << k.GetColor() << "\n";
    cout << k.GetPrice() << "\n";

    k.PrintPriceColor(2500, "blue");
    k.PrintBrandModel("Tefal", "1025R");
    k.Price(3000);


    Book b;

    b.SetAuthor("Theodore Dreiser");
    b.SetCount_page(456);
    b.SetGenre("novel");
    b.SetName("Financier");
    b.SetYear(1912);

    cout << b.GetAuthor() << "\n";
    cout << b.GetCount_page() << "\n";
    cout << b.GetGenre() << "\n";
    cout << b.GetName() << "\n";
    cout << b.GetYear() << "\n";

    b.PrintBook("Stephen Prata", "C++", "Science fiction");
    b.PrintCountPageYear("Three people in the boat, not counting the dog", 250, 1889);
    b.Year(1997);


    Pen p;

    p.SetBrand("Bic");
    p.SetColor("black");
    p.SetWrite(false);

    cout << p.GetBrand() << "\n";
    cout << p.GetColor() << "\n";
    cout << p.GetWrite() << "\n";

    p.LeaveOrThrowAway(true);
    p.Print();


    Banknote B;

    B.SetDenomination(50);
    B.SetOld_new(true);
    B.SetYear("2003");

    cout << B.GetDenomination() << "\n";
    cout << B.GetOld_new() << "\n";
    cout << B.GetYear() << "\n";

    B.Print();
    B.TakeOrChange(true);

    Wallet w;

    w.SetBrand("Wiola");
    w.SetPrice("500");
    w.SetCoin_box(true);
    w.SetColor("red");
    w.SetCount_card_sections(3);
    w.SetCount_section(2);

    cout << w.GetBrand() << "\n";
    cout << w.GetPrice() << "\n";
    cout << w.GetCoin_box() << "\n";
    cout << w.GetColor() << "\n";
    cout << w.GetCount_card_sections() << "\n";
    cout << w.GetCount_section() << "\n";

    w.Print();
    w.BayWallet(3, false, "300");

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
