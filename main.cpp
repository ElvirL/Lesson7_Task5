/*
������� 5. ������������ ���
��� ����� �������
������������� ������ � ������������� ����� ���, ����� � ����� �� ����������� ��������� ���� �+�, �� ������� ����� ������������ ��� 
���� ������� ����� �^�, � �� ������ ����� �������������� ��� � ������� ������ �>�. ��� ������� ������� ����� �������� � ������.
*/

#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    int height, weidth;
    cout << "������� ������ ������������ ����: ";
    cin >> height;
    cout << "������� ������ ������������ ����: ";
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