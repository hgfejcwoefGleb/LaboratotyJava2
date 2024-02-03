// Test_work.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

//

#include <iostream>
#include <string>
struct User {
    int id;
    std::string name;
    int age;

};
User* user_arr = new User[100];
int num_of_acc = 0;


int main()

{
    static User empty_acc;
    empty_acc.age = 0;
    empty_acc.id = 0;
    empty_acc.name = "";
    for (int i = 0; i < 100; i++) {
        user_arr[i] = empty_acc;
    }
    while (true) {
        std::string func_chosen = "";
        std::cout << "Enter disireable action add or del or up or show" << std::endl;
        std::cin >> func_chosen;
        do_smth()
       
    }
    
}
void do_smth(int id, std::string name, int age, User* arr, int& num_of_acc, User login, User empty_acc, void(*func)(int id, std::string name, int age, User* arr, int& num_of_acc, User login, User empty_acc), std::string func_chosen) {
    void (*add)(int id, std::string name, int age, User * arr, int& num_of_acc, User login, User empty_acc) = add_new_account;
    void (*del)(int id, std::string name, int age, User * arr, int& num_of_acc, User login, User empty_acc) = del_acc;
    void (*up)(int id, std::string name, int age, User * arr, int& num_of_acc, User login, User empty_acc) = upload_data;
    void (*show)(User * arr) = show;
    if (func_chosen == "add") {
        add(id, name, age, arr, num_of_acc, login, empty_acc);
        
    }
}
void add_new_account(int id, std::string name, int age, User* arr, int& num_of_acc, User login, User empty_acc) {
    login.age = age;
    login.id = num_of_acc;
    login.name = name;
    arr[num_of_acc] = login;
    num_of_acc += 1;
}
void del_acc(int id, std::string name, int age, User* arr, int& num_of_acc, User login, User empty_acc) {
    arr[login.id] = empty_acc;
}
void upload_data(int id, std::string name, int age, User* arr, int& num_of_acc, User login, User empty_acc) {
    login.id = id;
    login.name = name;
    login.age = age;
}
void show_data(int id, std::string name, int age, User* arr, int& num_of_acc, User login, User empty_acc) {
    for (int i = 0; i < 100; i++) {
        if (arr[i].age != 0) {
            std::cout << "User name is " << arr[i].name << std::endl;
            std::cout << "User age is " << arr[i].age << std::endl;
            std::cout << "User id is " << arr[i].id << std::endl;
        }
    }
}
//  программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
