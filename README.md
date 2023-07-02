## <font color="tomato">Механическое пианино</font>

Создайте упрощённую модель механического пианино.

Всего у данного пианино семь клавиш, которые соответствуют семи нотам.
Каждая клавиша кодируется уникальной битовой маской, которая записывается в enum.
В начале программы пользователь вводит мелодию.
Ввод осуществляется с помощью цифр на клавиатуре, от 1 до 7 включительно (от ноты 'до' до ноты 'си').
В результате из чисел может быть составлена любая комбинация нот.
К примеру 512 или 154.
После ввода комбинации вводится следующая.
Всего таких комбинаций нот — 12.
Как только все комбинации были введены пользователем, мелодия проигрывается.
Для этого каждая комбинация нот последовательно выводится на экран.
Однако на этот раз она печатается «красиво», то есть все ноты указываются словами, а не цифрами.
При этом слова разделяются пробелами.

### <font color="tomato">Интересные ссылки</font>

[Шаблоны функций](https://metanit.com/cpp/tutorial/9.2.php)

[Алгоритмы](https://academy.yandex.ru/handbook/cpp/article/algorithms)

[? Display enum with printf()](https://stackoverflow.com/questions/2161790/can-i-display-the-value-of-an-enum-with-printf)

[? Initialize vector/array using an enum?](https://stackoverflow.com/questions/27532072/how-do-i-initialize-vector-array-using-an-enum)

### <font color="tomato">LIB + snippets</font>

(актуальная для 29/06/23):

| LIB                        | depends                                     | return             | Смысл                                                          | last<br/>prev                                                                                                                                                                                     |
|----------------------------|---------------------------------------------|--------------------|----------------------------------------------------------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| isIncludes                 |                                             | bool               | Получаем true если элемент хоть раз встречается в диапазоне    | [16_6_4](https://github.com/VladislavNovak/16_6_4/blob/5e27ffd9e4b65dbeb05fa8feb3af24d4e61339e0/main.cpp#L12)<br/>[16_6_1](https://github.com/VladislavNovak/16_6_1/blob/main/main.cpp)           |
| isNumeric                  |                                             | bool               | Проверяет, является ли строка целым числом. True - если да     | [20_5_1](https://github.com/VladislavNovak/20_5_1/blob/main/main.cpp)                                                                                                                             |
| getUserChar                |                                             | T                  | UI. Получаем символ в обозначенном диапазоне                   | [19_5_2](https://github.com/VladislavNovak/19_5_2/blob/main/main.cpp)<br/>[16_6_4](https://github.com/VladislavNovak/16_6_4/blob/2adf5a08cb7afbbc278d2dc65df93fb4eaacd268/main.cpp#L32)           |
| getUserInput               |                                             | string             | UI. Получаем слово                                             | [16_6_4](https://github.com/VladislavNovak/16_6_4/blob/5e27ffd9e4b65dbeb05fa8feb3af24d4e61339e0/main.cpp#L49C15-L49C15)<br/>[19_5_5](https://github.com/VladislavNovak/19_5_5/blob/main/main.cpp) |
| getUserNumeric             | isNumeric                                   | int                | UI. Получаем число                                             | [20_5_2](https://github.com/VladislavNovak/20_5_2/blob/89adfe880b2d931009953b4e03bd19e6181bd05f/main.cpp#L71)<br/>[20_5_1](https://github.com/VladislavNovak/20_5_1/blob/main/main.cpp)           |
| getRandomIntInRange        |                                             | int                | RANDOM. Получить число в диапазоне                             | [16_6_5](https://github.com/VladislavNovak/16_6_5/blob/main/main.cpp)                                                                                                                             |
| digitCount                 |                                             | int                | Получаем количество разрядов в числе                           | [16_6_2](https://github.com/VladislavNovak/16_6_2/blob/main/main.cpp)                                                                                                                             |
| stringToDouble             |                                             | double             | Конвертирует строку в double                                   | [16_6_3_1](https://github.com/VladislavNovak/16_6_3_1/blob/main/main.cpp)                                                                                                                         |
| getSplitStringOnRecords    |                                             | vec of strings     | Разбивает строку на подстроки                                  | [20_5_2](https://github.com/VladislavNovak/20_5_2/blob/89adfe880b2d931009953b4e03bd19e6181bd05f/main.cpp#L28)<br/>[20_5_1](https://github.com/VladislavNovak/20_5_1/blob/main/main.cpp)           |
| getUserString              | getSplitStringAsVector                      | string             | UI. Возвращает первое слово                                    | [20_5_2](https://github.com/VladislavNovak/20_5_2/blob/89adfe880b2d931009953b4e03bd19e6181bd05f/main.cpp#L45)<br/>[20_5_1](https://github.com/VladislavNovak/20_5_1/blob/main/main.cpp)           |
| removeSymbolFromString     |                                             |                    | Удаляет из строки упоминания указанного символа                | [16_6_3_1](https://github.com/VladislavNovak/16_6_3_1/blob/main/main.cpp)                                                                                                                         |
| getTrimmedString           |                                             | string             | Обрезает конечные пробелы                                      | [20_5_2](https://github.com/VladislavNovak/20_5_2/blob/89adfe880b2d931009953b4e03bd19e6181bd05f/main.cpp#L14C2-L14C2)<br/>[20_5_1](https://github.com/VladislavNovak/20_5_1/blob/main/main.cpp)   |
| SNIPPETS:                  |                                             |                    |                                                                |                                                                                                                                                                                                   |
| isDate                     | getSplitStringOnRecords<br/>isNumeric       |                    |                                                                |                                                                                                                                                                                                   |
| hasDialogYesNo             | isIncludes                                  | bool               | Диалог с пользователем. Позволяет вводить лишь да/нет          | [16_6_1](https://github.com/VladislavNovak/16_6_1/blob/main/main.cpp)<br/>[19_5_5](https://github.com/VladislavNovak/19_5_5/blob/main/main.cpp)                                                   |
| getUserChoiceFrom          | getUserInput                                | string             | Диалог с пользователем. Получаем слово с уникальными символами | [16_6_5](https://github.com/VladislavNovak/16_6_5/blob/main/main.cpp)                                                                                                                             |
| getUserDouble              |                                             | double             | Диалог с пользователем. Получает число double                  | [16_6_1](https://github.com/VladislavNovak/16_6_1/blob/main/main.cpp)                                                                                                                             |
| getRecords                 | getUserString                               | vec of strings     | UI. Возвращает вектор данных из UI по указанному шаблону       | [20_5_2](https://github.com/VladislavNovak/20_5_2/blob/89adfe880b2d931009953b4e03bd19e6181bd05f/main.cpp#L94)                                                                                     |
| setComplexData             | getRecords                                  | complex of strings | UI. Формирует комплекс из группы векторов типа string          | [20_5_2](https://github.com/VladislavNovak/20_5_2/blob/89adfe880b2d931009953b4e03bd19e6181bd05f/main.cpp#L104)                                                                                    |
| outputComplexData          |                                             |                    | Печатает complex of strings в указанный поток (cout или file)  | [20_5_2](https://github.com/VladislavNovak/20_5_2/blob/89adfe880b2d931009953b4e03bd19e6181bd05f/main.cpp#L113)<br/>[20_5_1](https://github.com/VladislavNovak/20_5_1/blob/main/main.cpp)          |
| displayComplexDataToScreen | outputComplexData                           |                    | Печатает complex of strings на экран                           | [20_5_2](https://github.com/VladislavNovak/20_5_2/blob/89adfe880b2d931009953b4e03bd19e6181bd05f/main.cpp#L173)                                                                                    |
| ENUM:                      |                                             |                    |                                                                |                                                                                                                                                                                                   |
| getTogglePosition          |                                             | int                | Возвращает занимаемую позицию в enum                           | [16_6_5](https://github.com/VladislavNovak/16_6_5/blob/main/main.cpp)                                                                                                                             |
| getTogglePositionAsChar    | getTogglePosition                           | char               | Возвращает занимаемую позицию в enum                           | [16_6_5](https://github.com/VladislavNovak/16_6_5/blob/main/main.cpp)                                                                                                                             |
| changeToggle               |                                             |                    | Меняет флаг указанного бита                                    | [16_6_5](https://github.com/VladislavNovak/16_6_5/blob/main/main.cpp)                                                                                                                             |
| resetAllToggles            | changeToggle                                |                    | Сбрасывает все флаги                                           | [16_6_5](https://github.com/VladislavNovak/16_6_5/blob/main/main.cpp)                                                                                                                             |
| hasToggleFlag              |                                             | bool               | Получить состояние указанного бита                             | [16_6_5](https://github.com/VladislavNovak/16_6_5/blob/main/main.cpp)                                                                                                                             |
| getToggleInfo              | hasToggleFlag                               | string             | Получить отчет о бите в строковом аналоге JSON                 | [16_6_5](https://github.com/VladislavNovak/16_6_5/blob/main/main.cpp)                                                                                                                             |
| enumToString               |                                             | string             | Преобразовывает enum в соответствующий name                    | 16_6_4 (уточнить)                                                                                                                                                                                 |
| FILES:                     |                                             |                    |                                                                |                                                                                                                                                                                                   |
| readFileToVector           |                                             | bool               | Читает из файла в структуру vec of strings                     | [19_5_5](https://github.com/VladislavNovak/19_5_5/blob/6fb5101bb621d5659ea7cdcc00b6422e03e830e1/main.cpp#L76)                                                                                     |
| readFileToComplexData      | readFileToVector<br/>getSplitStringAsVector | bool               | Читает из файла в структуру complex of strings                 | [20_5_2](https://github.com/VladislavNovak/20_5_2/blob/89adfe880b2d931009953b4e03bd19e6181bd05f/main.cpp#L155)<br/>[20_5_1](https://github.com/VladislavNovak/20_5_1/blob/main/main.cpp)          |
| writeComplexDataToFile     | outputComplexData                           |                    | Печатает complex of strings в файл                             | [20_5_2](https://github.com/VladislavNovak/20_5_2/blob/89adfe880b2d931009953b4e03bd19e6181bd05f/main.cpp#L122)<br/>[20_5_1](https://github.com/VladislavNovak/20_5_1/blob/main/main.cpp)          |
|                            |                                             |                    |                                                                |                                                                                                                                                                                                   |
|                            |                                             |                    |                                                                |                                                                                                                                                                                                   |


### <font color="tomato">Вариации</font>

`getRecords`: [20_5_1](https://github.com/VladislavNovak/20_5_1/blob/ffa6db6840c82b32353f1714d6b7aaca3a6bcad2/main.cpp#L179),

`setComplexData`: [20_5_1](https://github.com/VladislavNovak/20_5_1/blob/ffa6db6840c82b32353f1714d6b7aaca3a6bcad2/main.cpp#L216),

