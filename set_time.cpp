#include "all.h"
#include "crew.h"
#include "call.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int set_time(char * file_call, char * file_crew) {

    int Ncrew, Ncall, i, j;
    Ncrew = 0; Ncall = 0;

    int hour;

    cout << "Сколько часов прошло?" << endl;
    cin >> hour;

    fstream fcrew; fstream fcall;
    fcrew.open(file_crew,ios::in);
    fcall.open(file_call,ios::in);
    string str;

    while (getline(fcrew,str)) {
        Ncrew++;
    }
    fcrew.close();

    while (getline(fcall,str)) {
        Ncall++;
    }
    fcall.close();

    fcrew.open(file_crew,ios::in);
    fcall.open(file_call,ios::in);
    crew *crews = new crew[Ncrew];
    call *calls = new call[Ncall];

    for (i = 0; i < Ncrew; i++) {
        fcrew >> crews[i];

        if (crews[i].duty_bool == true) {
            //тут проверяем, закончилась ли смена
            crews[i].duty_status = crews[i].duty_status + hour;
            if (crews[i].duty_status >= 24) {
                cout << "У экипажа доктора "<< crews[i].doctor << " закончилась смена." << endl;
                crews[i].duty_status = 0;
                crews[i].call_status = 0;
                crews[i].duty_bool = false;
            }
            //теперь нужно изменить статус соотвествующего вызова
            crews[i].call_status = crews[i].call_status - hour;
            if (crews[i].call_status <= 0) {
                for (j = 0; j < Ncall; j++) {
                    crews[i].call_status = 0;
                    fcall >> calls[j];
                    if (calls[j].assigned_crew == crews[i].doctor) {
                        calls[j].status = "Завершен";
                    }
                }
            }
        }

    }
    fcrew.close();
    fcall.close();

    fcall.open(file_call,ios::trunc);
    fcall.close();
    fcrew.open(file_crew,ios::trunc);
    fcrew.close();

    //записываем изменения
    fcall.open(file_call, ios::out);
    for ( i = 0; i < Ncall ; i++) {
        fcall << calls[i] << endl;
    }
    fcall.close();
    delete [] calls;

    fcrew.open(file_crew, ios::out);
    for (i = 0; i < Ncrew ; i++) {
        fcrew << crews[i] << endl;
    }
    fcrew.close();
    delete [] crews;

    return 0;
}
