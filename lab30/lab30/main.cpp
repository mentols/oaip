#include <iostream>
#include <string>

using namespace std;

struct Creater
{
    string name;
    string surname;
    void input()
    {
        cout << "Введите имя: ";
        cin >> name;
        cout << "Введите фамилию: ";
        cin >> surname;
    }
    void show()
    {
        cout << "ФИО: " << surname << ' ' << name << endl;
    }
};

struct Book
{
    string number;
    Creater creater;
    string name;
    int year_of_creation;
    string publishing_house;
    int pages;
    void input();
    void Show();

};


struct Tree
{
    Book book;
    Tree* left = nullptr;
    Tree* right = nullptr;
};

void Book::input()
{
    cout << "Введите номер регистрации: ";
    cin >> number;
    creater.input();
    cout << "Введите название книги: ";
    cin >> name;
    cout << "Введите год издания: ";
    cin >> year_of_creation;
    cout << "Введите издательство: ";
    cin >> publishing_house;
    cout << "Введите количество страниц: ";
    cin >> pages;
}
void Book::Show()
{
    cout << "Номер регистрации: " << number << endl;
    cout << "Автор: ";
    creater.show();
    cout << "Название: " << name << endl;
    cout << "Год издания: " << year_of_creation << endl;
    cout << "Издательство: " << publishing_house << endl;
    cout << "Кол-во страниц: " << pages << endl;
}
Tree* add_node(Book x, Tree* tree)
{
    if (tree == nullptr)
    {
        tree = new Tree();
        tree->book = x;
        tree->left = nullptr;
        tree->right = nullptr;
    }
    else
    {
        if (x.name < tree->book.name)
        {
            tree->left = add_node(x, tree->left);
        }
        else
        {
            tree->right = add_node(x, tree->right);
        }
    }
    return tree;
}
void delete_tree(Tree* tree)
{
    if (tree != nullptr)
    {
        delete_tree(tree->left);
        delete_tree(tree->right);
        delete tree;
    }
}
Tree* subfuncdel(Tree* add_tree, Tree* old_tree, string name_deleted)
{
    if (old_tree != nullptr)
    {
        if (old_tree->book.name != name_deleted)
        {
            add_tree = add_node(old_tree->book, add_tree);
        }
        add_tree = subfuncdel(add_tree, old_tree->left, name_deleted);
        add_tree = subfuncdel(add_tree, old_tree->right, name_deleted);
    }
    return add_tree;
}
Tree* delete_node(Tree* tree, string name)
{
    Tree* add_tree = nullptr;
    tree = subfuncdel(add_tree, tree, name);
    delete_tree(add_tree);
    delete add_tree;
    return tree;
}
Tree* change_tree(Tree* add_tree, Tree* old_tree, string name)
{
    if (old_tree != nullptr)
    {
        if (old_tree->book.name != name)
        {
            add_tree = add_node(old_tree->book, add_tree);
        }
        else
        {
            old_tree->book.input();
            add_tree = add_node(old_tree->book, add_tree);
        }
        add_tree = subfuncchange(add_tree, old_tree->left, name);
        add_tree = subfuncchange(add_tree, old_tree->right, name);
    }
    return add_tree;
}
Tree* change_node(Tree* tree, string name_change)
{
    Tree* add_tree = nullptr;
    tree = change_tree(add_tree, tree, name_change);
    delete_tree(add_tree);
    delete add_tree;
    return tree;
}

int tree_count(Tree* tree)
{
    if (tree != nullptr)
    {
        int n = 1;
        n +=tree_count(tree->left);
        n+=tree_count(tree->right);
        return n;
    }
    return 0;
}

void show_tree(Tree* tree)
{
    if (tree != nullptr)
    {
        show_tree(tree->left);
        show_tree(tree->right);
        tree->book.Show();
    }
}

int main()
{
    Tree* tree = nullptr;
    Book book;
    string delete_name, change_name;
    bool exit = true;
    while (exit)
    {
        int menu;
        cout << "1 - Добавить новую запись\n2 - Выбрать по имени\n3 - Удалить элемент по имени\n4 - Очистить дерево\n5 - Количество элементов\n6 - Показать дерево\n9 - Выйти\nНомер: ";
        cin >> menu;
        switch (menu)
        {
            case 1:
            {
                book.input();
                tree = add_node(book, tree);
                cout << "Книга добавлена";
                break;
            }
            case 2:
            {
                if (tree != nullptr)
                {
                    cout << "Введите название для изменения: ";
                    cin >> change_name;
                    tree = change_node(tree, change_name);
                    cout << "Успешно!" << endl;
                }
                else
                {
                    cout << "Дерево пустое" << endl;
                }
                break;
            }
            case 3:
            {
                if (tree != nullptr)
                {
                    cout << "Введите название для удаления: ";
                    cin >> delete_name;
                    tree = delete_node(tree, delete_name);
                    cout << "Node was deleted\n" << endl;
                }
                else
                {
                    cout << "Дерево пустое" << endl;
                }
                break;
            }
            case 4:
            {
                if (tree != nullptr)
                {
                    delete_tree(tree);
                    cout << "Дерево очищено" << endl;
                }
                else
                {
                    cout << "Дерево пустое" << endl;
                }
                break;
            }
            case 5:
            {
                int count = tree_count(tree);
                cout << count << " элементво в дереве" << endl;
                break;
            }
            case 6:
            {
                if (tree != nullptr)
                {
                    show_tree(tree);
                }
                else
                {
                    cout << "Дерево пустое" << endl;
                }
                break;
            }
            case 9:
            {
                exit = false;
                cout << "Выход" << endl;
                break;
            }
            default:
            {
                cout << "Неизвестная операция" << endl;
                break;
            }
        }
    }

    return 0;
}
