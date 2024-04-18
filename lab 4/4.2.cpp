#include <iostream>
#include <fstream>
#include <algorithm>
#include <set>//���������, �������������� ����� �������� ������ ������
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    string file1 = "file1.txt";  
    string file2 = "file2.txt";  

    set<string> words1; // ��������� ��� �������� ���� �� ������� �����
    set<string> words2; 

    // ������ ���� �� ������� �����
    ifstream inputFile1(file1);
    if (inputFile1.is_open()) {
        string word;
        while (inputFile1 >> word) {
            words1.insert(word);
        }
        inputFile1.close();
    }
    else {
        cerr << "�� ������� ������� ����: " << file1 << endl;
        return 1;
    }

    // ������ ���� �� ������� �����
    ifstream inputFile2(file2);
    if (inputFile2.is_open()) {
        string word;
        while (inputFile2 >> word) {
            words2.insert(word);
        }
        inputFile2.close();
    }
    else {
        cerr << "�� ������� ������� ����: " << file2 << endl;
        return 1;
    }

    // ����� ����, ������� ���� � ������ �����, �� ����������� �� ������
    set<string> uniqueWords;
    set_difference(words1.begin(), words1.end(), words2.begin(), words2.end(),
        inserter(uniqueWords, uniqueWords.begin()));

    // ����� ��������� ����
    cout << "����� �� ����� \"" << file1 << "\", ������� ��� � ����� \"" << file2 << "\":\n";
    for (const std::string& word : uniqueWords) {
        cout << word << endl;
    }
    system("pause");
    return 0;
}


