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

(актуальная для 28/06/23):

| LIB                     | Ver | depends                                     | return             | Смысл                                                          | last<br/>prev                                                                                                                                       |
|-------------------------|-----|---------------------------------------------|--------------------|----------------------------------------------------------------|-----------------------------------------------------------------------------------------------------------------------------------------------------|
| isIncludes              | 1.2 |                                             | bool               | Получаем true если элемент хоть раз встречается в диапазоне    | 16_6_4<br/>[`16_6_1`](https://github.com/VladislavNovak/16_6_1/blob/main/main.cpp)                                                                  |
| isNumeric               | 1.0 |                                             | bool               | Проверяет, является ли строка целым числом. True - если да     | [`20_5_1`](https://github.com/VladislavNovak/20_5_1/blob/main/main.cpp)                                                                             |
| getUserChar             | 1.3 |                                             | T                  | UI. Получаем символ в обозначенном диапазоне                   | [`19_5_2`](https://github.com/VladislavNovak/19_5_2/blob/main/main.cpp)<br/>16_6_4                                                                  |
| getUserInput            | 2.1 |                                             | string             | UI. Получаем слово                                             | 16_6_4<br/>[`19_5_5`](https://github.com/VladislavNovak/19_5_5/blob/main/main.cpp)                                                                  |
| getNumeric              | 1.0 | isNumeric                                   | int                | UI. Получаем число                                             | [`20_5_1`](https://github.com/VladislavNovak/20_5_1/blob/main/main.cpp)                                                                             |
| getRandomIntInRange     | 1.0 |                                             | int                | RANDOM. Получить число в диапазоне                             | [`16_6_5`](https://github.com/VladislavNovak/16_6_5/blob/main/main.cpp)                                                                             |
| digitCount              | 1.0 |                                             | int                | Получаем количество разрядов в числе                           | [`16_6_2`](https://github.com/VladislavNovak/16_6_2/blob/main/main.cpp)                                                                             |
| stringToDouble          | 1.0 |                                             | double             | Конвертирует строку в double                                   | [`16_6_3_1`](https://github.com/VladislavNovak/16_6_3_1/blob/main/main.cpp)                                                                         |
| getSplitStringAsVector  | 1.0 |                                             | vec of strings     | Разбивает строку на подстроки                                  | [`20_5_1`](https://github.com/VladislavNovak/20_5_1/blob/main/main.cpp)                                                                             |
| getUserWord             | 1.0 | getSplitStringAsVector                      | string             | UI. Возвращает первое слово                                    | [`20_5_1`](https://github.com/VladislavNovak/20_5_1/blob/main/main.cpp)                                                                             |
| removeSymbolFromString  | 0.1 |                                             |                    | Удаляет из строки упоминания указанного символа                | [`16_6_3_1`](https://github.com/VladislavNovak/16_6_3_1/blob/main/main.cpp)                                                                         |
| trim                    | 1.1 |                                             | string             | Обрезает конечные пробелы                                      | [`20_5_1`](https://github.com/VladislavNovak/20_5_1/blob/main/main.cpp)<br/>[`19_5_5`](https://github.com/VladislavNovak/19_5_5/blob/main/main.cpp) |
| SNIPPETS:               |     |                                             |                    |                                                                |                                                                                                                                                     |
| hasDialogYesNo          | 0.2 | isIncludes                                  | bool               | Диалог с пользователем. Позволяет вводить лишь да/нет          | [`16_6_1`](https://github.com/VladislavNovak/16_6_1/blob/main/main.cpp)<br/>[`19_5_5`](https://github.com/VladislavNovak/19_5_5/blob/main/main.cpp) |
| getUserChoiceFrom       | 0.1 | getUserInput                                | string             | Диалог с пользователем. Получаем слово с уникальными символами | [`16_6_5`](https://github.com/VladislavNovak/16_6_5/blob/main/main.cpp)                                                                             |
| getUserDouble           | 0.1 |                                             | double             | Диалог с пользователем. Получает число double                  | [`16_6_1`](https://github.com/VladislavNovak/16_6_1/blob/main/main.cpp)                                                                             |
| getRecords              | 1.0 | getUserWord                                 | vec of strings     | UI. Возвращает вектор данных по указанному шаблону             | [`20_5_1`](https://github.com/VladislavNovak/20_5_1/blob/main/main.cpp)                                                                             |
| setComplexData          | 1.0 | getRecords                                  | complex of strings | UI. Формирует комплекс из группы векторов типа string          | [`20_5_1`](https://github.com/VladislavNovak/20_5_1/blob/main/main.cpp)                                                                             |
| printComplexData        | 1.0 |                                             |                    | Печатает complex of strings в указанный поток (cout или file)  | [`20_5_1`](https://github.com/VladislavNovak/20_5_1/blob/main/main.cpp)                                                                             |
| ENUM:                   |     |                                             |                    |                                                                |                                                                                                                                                     |
| getTogglePosition       | 0.1 |                                             | int                | Возвращает занимаемую позицию в enum                           | [`16_6_5`](https://github.com/VladislavNovak/16_6_5/blob/main/main.cpp)                                                                             |
| getTogglePositionAsChar | 0.1 | getTogglePosition                           | char               | Возвращает занимаемую позицию в enum                           | [`16_6_5`](https://github.com/VladislavNovak/16_6_5/blob/main/main.cpp)                                                                             |
| changeToggle            | 0.1 |                                             |                    | Меняет флаг указанного бита                                    | [`16_6_5`](https://github.com/VladislavNovak/16_6_5/blob/main/main.cpp)                                                                             |
| resetAllToggles         | 0.1 | changeToggle                                |                    | Сбрасывает все флаги                                           | [`16_6_5`](https://github.com/VladislavNovak/16_6_5/blob/main/main.cpp)                                                                             |
| hasToggleFlag           | 0.1 |                                             | bool               | Получить состояние указанного бита                             | [`16_6_5`](https://github.com/VladislavNovak/16_6_5/blob/main/main.cpp)                                                                             |
| getToggleInfo           | 0.1 | hasToggleFlag                               | string             | Получить отчет о бите в строковом аналоге JSON                 | [`16_6_5`](https://github.com/VladislavNovak/16_6_5/blob/main/main.cpp)                                                                             |
| enumToString            | 0.1 |                                             | string             | Преобразовывает enum в соответствующий name                    | 16_6_4                                                                                                                                              |
| FILES:                  |     |                                             |                    |                                                                |                                                                                                                                                     |
| readFileToVector        | 0.1 |                                             | bool               | Читает из файла в структуру vec of strings                     | [`19_5_5`](https://github.com/VladislavNovak/19_5_5/blob/main/main.cpp)                                                                             |
| readFileToComplexData   | 1.1 | readFileToVector<br/>getSplitStringAsVector | bool               | Читает из файла в структуру complex of strings                 | [`20_5_1`](https://github.com/VladislavNovak/20_5_1/blob/main/main.cpp)<br/>[`19_5_5`](https://github.com/VladislavNovak/19_5_5/blob/main/main.cpp) |
| writeComplexDataToFile  | 1.0 | printComplexData                            |                    | Печатает complex of strings в файл                             | [`20_5_1`](https://github.com/VladislavNovak/20_5_1/blob/main/main.cpp)                                                                             |
|                         |     |                                             |                    |                                                                |                                                                                                                                                     |
|                         |     |                                             |                    |                                                                |                                                                                                                                                     |
