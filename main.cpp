#include <iostream>
#include <vector>
#include <cctype>
#include <algorithm> // any_of
#include <vector>

using std::cout;
using std::endl;
using std::string;

enum class Notes { DO, RE, MI, FA, SO, LA, SI };

// Получаем true если элемент `item` хоть раз встречается в диапазоне `range`
bool isIncludes(const string &range, const char &item) {
    return std::any_of(range.begin(),
                       range.end(),
                       [&item](const char &c) { return c == item; });
}

// Получаем char-символ в обозначенном диапазоне `range`
template<typename T>
T getUserChar(string const &range) {
    T input;

    while (true) {
        std::cin >> input;
        // Если введено значение из диапазона - сбрасываем
        if (isIncludes(range, input)) break;
        printf("Error. (%c) not in range (%s)\n", input, range.c_str());
        // Сбрасываем коматозное состояние cin
        std::cin.clear();
        // Очищаем поток ввода
        fflush(stdin);
    }

    return input;
}

// Получаем слово с параметрами:
//  - не более определенной длины (`MAX_COUNT`),
//  - с окончанием для ввода (`DOT`),
//  - в указанном диапазоне `range`
string getUserInput() {
    char const DOT = '.';
    size_t MAX_COUNT = 12;
    string range = "0123456";
    string userInput;
    size_t curCount = 0;

    range.append(1, DOT);

    // to format: zu - size_t, s - string.c_str, c - char
    printf("Enter up to (%zu) characters in the range (%s)\n", MAX_COUNT, range.c_str());
    printf("Press (%c) to finish: ", DOT);
    while(curCount < MAX_COUNT) {
        char a = getUserChar<char>(range);
        if (a == DOT) break;
        userInput += a;
        ++curCount;
    }

    return userInput;
}

// Получаем соответствующую enum аббревиатуру
string enumToString(Notes &e) {
    std::vector<string> inner = { "DO", "RE", "MI", "FA", "SO", "LA", "SI"};
    return inner[(int)e];
}

void printNotesCollection(string const &userInputString) {
    std::vector<Notes> notesCollection;

    // Создаем на основе отдельных символов, вектор из enum
    for (char const &ch : userInputString) {
        auto note = static_cast<Notes>(ch - '0');
        notesCollection.push_back(note);
    }

    cout << "Song notes:: " << endl;
    for (int i = 0; i < userInputString.length(); ++i) {
        auto currentNote = notesCollection[i];
        cout << enumToString(currentNote) << ((i + 1) % 3 ? " " : "\n");
    }
}

int main() {
    string store = getUserInput();

    cout << "Values: " << store << endl;

    printNotesCollection(store);
}

