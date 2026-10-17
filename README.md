# Математические задачи

Коллекция задач для поддержания в тонусе.

## Каталог

| № | Задача | Темы | Материалы | Источник |
| --- | --- | --- | --- | --- |
| 01 | Угол четырёхугольника | Геометрия | [PDF](01/main.pdf) · [LaTeX](01/main.tex) | Не указан |
| 02 | Ломаная в квадрате | Геометрия | [PDF](02/main.pdf) · [LaTeX](02/main.tex) | Не указан |
| 03 | Площадь части треугольника | Геометрия, площади | [PDF](03/main.pdf) · [LaTeX](03/main.tex) | [Ссылка из исходника](https://tinyurl.com/y2pvvnfm) |
| 04 | Уравнение с радикалами | Алгебра | [PDF](04/main.pdf) · [LaTeX](04/main.tex) | [РТ ЦТ 2023-1, вариант 3, B17](https://tinyurl.com/54jakpdm) |
| 05 | Построение прямоугольного треугольника | Геометрия, построения | [PDF](05/main.pdf) · [LaTeX](05/main.tex) | [Киселёв, с. 36, №44](https://disk.yandex.ru/d/QqFzGPzxTVXGag) |
| 06 | Иррациональность косинуса одного градуса | Тригонометрия, теория чисел | [PDF](06/main.pdf) · [LaTeX](06/main.tex) | [obznam, №1409](https://t.me/obznam/1409) |
| 07 | Серия побед в турнире | Теория вероятностей | [PDF](07/main.pdf) · [LaTeX](07/main.tex) | [obznam, №1423](https://t.me/obznam/1423) |
| 08 | Биссектриса и медиана | Геометрия | [PDF](08/main.pdf) · [LaTeX](08/main.tex) | [Киселёв, с. 121, №244](https://disk.yandex.ru/d/QqFzGPzxTVXGag) |
| 09 | Наибольшее произведение | Арифметика, оптимизация | [PDF](09/main.pdf) · [LaTeX](09/main.tex) | [YouTube](https://youtu.be/o-UF8JlqZ_c) |
| 10 | Циклические сдвиги массива | Алгоритмы, массивы | [PDF](10/main.pdf) · [LaTeX](10/main.tex) · [C++](10/main.cpp) | [Codeforces 1893A](https://codeforces.com/contest/1893/problem/A) |
| 11 | Пары с запрещёнными суммой и разностью | Комбинаторика, алгоритмы | [PDF](11/main.pdf) · [LaTeX](11/main.tex) · [C++](11/main.cpp) | [Codeforces 1935D](https://codeforces.com/contest/1935/problem/D), ограничения изменены |
| 12 | Массив без одной суммы | Комбинаторика, алгоритмы | [PDF](12/main.pdf) · [LaTeX](12/main.tex) · [C++](12/main.cpp) | [Codeforces 1965B](https://codeforces.com/contest/1965/problem/B) |
| 13 | Квадрат и прямая | Геометрия | [PDF](13/main.pdf) · [LaTeX](13/main.tex) | [Регата, 8 класс, 27.01.2024, №2.2](https://olympiads.mccme.ru/regata/20232024/reg8.htm) |

## Сборка PDF

Установка зависимостей в Ubuntu/Debian:

```sh
sudo apt update
sudo apt install latexmk texlive-latex-extra texlive-pictures texlive-lang-cyrillic
```

Сборка из папки задачи, например для №13:

```sh
cd 13
latexmk -pdf -interaction=nonstopmode -halt-on-error main.tex
```
