#include <iostream>
#include <fstream>
#include <algorithm>
#include <set>//контейнер, представляющий собой бинарное дерево поиска
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    string file1 = "file1.txt";  
    string file2 = "file2.txt";  

    set<string> words1; // Контейнер для хранения слов из первого файла
    set<string> words2; 

    // Чтение слов из первого файла
    ifstream inputFile1(file1);
    if (inputFile1.is_open()) {
        string word;
        while (inputFile1 >> word) {
            words1.insert(word);
        }
        inputFile1.close();
    }
    else {
        cerr << "Не удалось открыть файл: " << file1 << endl;
        return 1;
    }

    // Чтение слов из второго файла
    ifstream inputFile2(file2);
    if (inputFile2.is_open()) {
        string word;
        while (inputFile2 >> word) {
            words2.insert(word);
        }
        inputFile2.close();
    }
    else {
        cerr << "Не удалось открыть файл: " << file2 << endl;
        return 1;
    }

    // Поиск слов, которые есть в первом файле, но отсутствуют во втором
    set<string> uniqueWords;
    set_difference(words1.begin(), words1.end(), words2.begin(), words2.end(),
        inserter(uniqueWords, uniqueWords.begin()));

    // Вывод найденных слов
    cout << "Слова из файла \"" << file1 << "\", которых нет в файле \"" << file2 << "\":\n";
    for (const std::string& word : uniqueWords) {
        cout << word << endl;
    }
    system("pause");
    return 0;
}


