//#include <iostream>
//#include <fstream>
//#include <chrono>
//#include <string>
//
//using namespace std;
//
//char findFirstSymbol(const string& text) {
//    size_t xPos = text.find('x');
//    size_t wPos = text.find('w');
//
//    if (xPos == string::npos && wPos == string::npos) {
//        cout << "� ������ ��� �������� 'x' � 'w'" << endl;
//        return ' ';
//    }
//    else if (xPos == string::npos) {
//        cout << "� ������ ��� ������� 'x'" << endl;
//        return 'w';
//    }
//    else if (wPos == string::npos) {
//        cout << "� ������ ��� ������� 'w'" << endl;
//        return 'x';
//    }
//
//    if (xPos < wPos)
//        return 'x';
//    else
//        return 'w';
//}
//
//int countSymbolsBeforeZero(const string& line) {
//    int count = 0;
//    for (size_t i = 0; i < line.length() - 1; i++) {
//        if ((line[i] == 'x' || line[i] == 'w') && line[i + 1] == '0') {
//            count++;
//        }
//    }
//    return count;
//}
//
//int main() {
// setlocale(LC_ALL, "Russian");
//    string filePath = "input.txt";  // ���� � ����� � �������
//
//    // ������ ������ �� �����
//    ifstream inputFile(filePath);
//    if (!inputFile.is_open()) {
//        cerr << "�� ������� ������� ����: " << filePath << endl;
//        return 1;
//    }
//
//    string text;  // ���������� ��� �������� ������
//    string line;
//    while (getline(inputFile, line)) {
//        text += line;
//    }
//
//    // ����� ������� ���������� ������� findFirstSymbol()
//    auto start = chrono::steady_clock::now();
//    char firstSymbol = findFirstSymbol(text);
//    auto end = chrono::steady_clock::now();
//    chrono::duration<double> duration = end - start;
//    cout << "����� ���������� findFirstSymbol(): " << duration.count() << " ���." << endl;
//
//    // ����� ������� ���������� ������� countSymbolsBeforeZero()
//    start = chrono::steady_clock::now();
//    int symbolCount = countSymbolsBeforeZero(text);
//    end = chrono::steady_clock::now();
//    duration = end - start;
//    cout << "����� ���������� countSymbolsBeforeZero(): " << duration.count() << " ���." << endl;
//
//    cout << "������ ������: " << firstSymbol << endl;
//    cout << "���������� �������� ����� ����� : " << symbolCount << endl;
//
//    system("pause");
//    return 0;
//}