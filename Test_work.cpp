// Test_work.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
struct User {
    int id;
    char name;
    int age;

};
User* user_arr = new User[100];
int num_of_acc = 0;
User empty_acc;

int main()

{
    std::cout << user_arr[0];
    
}
void add_new_account(int id, char name, int age, User* arr, int &num_of_acc, User login) {
    login.age = age;
    login.id = num_of_acc;
    login.name = name;
    arr[num_of_acc] = login;
    num_of_acc += 1;
}
void del_acc(User login, User* arr) {
    arr[login.id] = empty_acc;
}
void upload_data(int id, char name, int age, User login) {
    login.id = id;
    login.name = name;
    login.age = age;
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
