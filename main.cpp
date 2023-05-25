#include <iostream>
#include <vector>
#include <algorithm> // any_of

using std::cout;
using std::endl;
using std::string;
using std::vector;

vector<string> notesNames = { "DO", "RE", "MI", "FA", "SO", "LA", "SI" };

bool isIncludes(const char &item, const std::string &range) {
    return std::any_of(range.begin(),
                       range.end(),
                       [&item](const char &c) { return c == item; });
}

std::string getJoinRange(const std::string &range) {
    char const TERMINATOR = '.';
    char const JOIN = ',';

    std::string joinRange;
    for (int i = 0; i < range.size(); ++i) {
        joinRange += range[i];
        joinRange += (i != range.size() - 1) ? JOIN : TERMINATOR;
    }

    return joinRange;
}

template<typename T>
T getUserChar(std::string const &range) {
    T input;

    while (true) {
        std::cin >> input;
        // Если введено значение из диапазона - сбрасываем
        if (isIncludes(input, range)) break;
        printf("Error. Symbol %c not in range: %s Repeat: ", input, getJoinRange(range).c_str());
        // Сбрасываем коматозное состояние cin
        std::cin.clear();
        // Очищаем поток ввода
        fflush(stdin);
    }

    return input;
}

string getUserInput(const string &range, bool isRepeatAllowed = false, size_t maxCount = 128) {
    char const TERMINATOR = '.';
    string userInput;
    size_t curCount = 0;

    string constraints = range;
    constraints.append(1, TERMINATOR);

    // to format: zu - size_t, s - string.c_str, c - char
    printf("Enter%s valid characters: %s ", (isRepeatAllowed ? "" : " unique"), getJoinRange(range).c_str());
    printf("To complete - press '%c': ", TERMINATOR);
    while (curCount < maxCount) {
        char ch = getUserChar<char>(constraints);
        if (ch == TERMINATOR) break;
        if (!isRepeatAllowed && isIncludes(ch, userInput)) {
            printf("'%c' is already there in %s. Enter another or press '%c': ", ch, userInput.c_str(),
                   TERMINATOR);
            continue;
        }
        userInput += ch;
        ++curCount;
    }

    return userInput;
}

// Создаем на основе отдельных символов, вектор из enum
void setNotesCollection(string const &userInputString, vector<string> &notesCollection) {
    for (char const &ch : userInputString) {
        auto note = notesNames[(ch - '0')];
        notesCollection.push_back(note);
    }
}

void printNotesCollection(vector<string> const &notesCollection) {
    cout << "Song notes:: " << endl;
    for (int i = 0; i < notesCollection.size(); ++i) {
        cout << notesCollection[i] << ((i + 1) % 3 ? " " : "\n");
    }
}

int main() {
    std::vector<string> notesCollection;
    string userInput = getUserInput("0123456", true, 12);
    cout << "Values: " << userInput << endl;

    setNotesCollection(userInput, notesCollection);
    printNotesCollection(notesCollection);
}