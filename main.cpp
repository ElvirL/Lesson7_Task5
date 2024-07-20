/*
Задание 5. Координатные оси
Что нужно сделать
Модифицируйте пример с координатными осями так, чтобы в точке их пересечения рисовался знак «+», на верхнем конце вертикальной оси 
была стрелка вверх «^», а на правом конце горизонтальной оси — стрелка вправо «>». Это сделает рисунок более красивым и точным.
*/

#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    int height, weidth;
    cout << "Введите высоту координатных осей: ";
    cin >> height;
    cout << "Введите ширину координатных осей: ";
    cin >> weidth;

    for (int h=0; h<=height; ++h){
        for (int w=1; w<=weidth+1; ++w){
            if ((w != weidth/2) && (h != height/2)){
                cout << " ";
            }
            else if (w == weidth/2){

                if (h != height/2){
                    if (h ==0)
                        cout << "^";
                    else {
                        cout << "|";
                    }
                } else {
                    if (h == height / 2){
                        cout << "+";
                    }
                }
            } else if (h == height/2){
                if (w == weidth+1){
                    cout << ">";
                } 
                else {
                    cout << "-";
                } 
            }
        }
        cout << endl;
    }
}