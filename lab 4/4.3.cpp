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
//        cout << "В тексте нет символов 'x' и 'w'" << endl;
//        return ' ';
//    }
//    else if (xPos == string::npos) {
//        cout << "В тексте нет символа 'x'" << endl;
//        return 'w';
//    }
//    else if (wPos == string::npos) {
//        cout << "В тексте нет символа 'w'" << endl;
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
//    string filePath = "input.txt";  // Путь к файлу с текстом
//
//    // Чтение текста из файла
//    ifstream inputFile(filePath);
//    if (!inputFile.is_open()) {
//        cerr << "Не удалось открыть файл: " << filePath << endl;
//        return 1;
//    }
//
//    string text;  // Переменная для хранения текста
//    string line;
//    while (getline(inputFile, line)) {
//        text += line;
//    }
//
//    // Замер времени выполнения функции findFirstSymbol()
//    auto start = chrono::steady_clock::now();
//    char firstSymbol = findFirstSymbol(text);
//    auto end = chrono::steady_clock::now();
//    chrono::duration<double> duration = end - start;
//    cout << "Время выполнения findFirstSymbol(): " << duration.count() << " сек." << endl;
//
//    // Замер времени выполнения функции countSymbolsBeforeZero()
//    start = chrono::steady_clock::now();
//    int symbolCount = countSymbolsBeforeZero(text);
//    end = chrono::steady_clock::now();
//    duration = end - start;
//    cout << "Время выполнения countSymbolsBeforeZero(): " << duration.count() << " сек." << endl;
//
//    cout << "Первый символ: " << firstSymbol << endl;
//    cout << "Количество символов перед нулем : " << symbolCount << endl;
//
//    system("pause");
//    return 0;
//}