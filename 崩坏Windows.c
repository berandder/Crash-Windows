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
    printf("|                崩坏Windows               | W-光标上移 |\n");
    printf("+------------------------------------------+ S-光标下移 |\n");
    printf("|1，信息课                                 | Enter-确定 |\n");
    printf("|2，让电脑趋势                             | M-返回首页 |\n");
    printf("|3，表面现象                               |            |\n");
    printf("|4，实用工具                               |            |\n");
    printf("|5，更多……                               |            |\n");
    printf("+------------------------------------------+------------+\n");
}//page=10
void FirstMap() {
    printf("信息课：\n\n");
    printf("1，脱离控制\n");
    printf("2，解除网络控制\n");
}//page=11
void SecondMap() {
    printf("让电脑趋势：\n\n");
    printf("1，蓝屏\n");
    printf("2，格式化磁盘\n");
    printf("3，删除所有注册表\n");
    printf("4，删除System32\n");
    printf("5，永远的“回车”\n");
    printf("6，重命名文件\n");
    printf("7，没有网络\n");
    printf("8，开机即关机\n");
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
}//page=13
void FourthMap() {
    printf("实用工具：\n\n");
    printf("1，UAC提权\n");
    printf("2，硬盘榨干器\n");
}//page=14
void FifthMap() {
    printf("更多：\n\n");
    printf("1，彩虹猫病毒MEMZ\n");
    printf("2，使用说明\n");
    printf("3，开发日志\n");
}//page=15
void LOG() {
    printf("===========================================================\n");
    printf("软件开发日志                             （M-返回主菜单）\n");
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
    printf("===========================================================\n");
}//page=16
void PSD() {
	printf("+--------------------------------------------------------------+\n");
	printf("|          Precautions for use & Software Description          |\n");
	printf("+--------------------------------------------------------------+\n");
    printf("|1，请关闭本台电脑上的所有安全软件的防御功能，包括Windows系统自|\n");
    printf("|   带的Windows安全中心（Windows Defender），亦可卸载。        |\n");
    printf("|2，请以管理员身份运行本软件。                                 |\n");
    printf("|3，如遇到光标卡住或按键失灵的情况，请退出重进。               |\n");
    printf("|4，本软件开源，后续将会持续更新。                             |\n");
    printf("|5，重复声明，本软件不是病毒！                                 |\n");
    printf("+--------------------------------------------------------------+\n");
}//page=17
int main() {
    char chlnput = 0;

    char rain_oldname[] = "rain.txt";
    char dance_oldname[] = "dance.txt";
    char boom_oldname[] = "boom.txt";
    char boom2_oldname[] = "boom2.txt";
    char MEMZ_oldname[] = "MEMZ.txt";
    char blue_oldname[] = "blue.txt";
    char format_oldname[] = "format.txt";
    char del_regedit_oldname[] = "del_regedit.txt";
    char del_system32_oldname[] = "del_system32.txt";
    char enter_oldname[] = "enter.txt";
    char file_oldname[] = "file.txt";
    char no_wi_fi_oldname[] = "no_wi_fi.txt";
    char turn_on_off_oldname[] = "turn_on_off.txt";
	//File_old_name

    char rain_newname[] = "rain.bat";
    char dance_newname[] = "dance.bat";
    char boom_newname[] = "boom.bat";
    char boom2_newname[] = "boom2.bat";
    char MEMZ_newname[] = "MEMZ.bat";
    char blue_newname[] = "blue.bat";
    char format_newname[] = "format.bat";
    char del_regedit_newname[] = "del_regedit.bat";
    char del_system32_newname[] = "del_system32.bat";
    char enter_newname[] = "enter.bat";
    char file_newname[] = "file.bat";
    char no_wi_fi_newname[] = "no_wi_fi.bat";
    char turn_on_off_newname[] = "turn_on_off.bat";
	//File_new_name

    char* rain = "rain.bat";
    char* dance = "dance.bat";
    char* boom = "boom.bat";
    char* boom2 = "boom2.bat";
    char* MEMZ = "MEMZ.bat";
    char* blue = "blue.bat";
    char* format = "format.bat";
    char* del_regedit = "del_regedit.bat";
    char* del_system32 = "del_system32.bat";
    char* enter = "enter.bat";
    char* file = "file.bat";
    char* no_wi_fi = "no_wi_fi.bat";
    char* turn_on_off = "turn_on_off.bat";
    char* disk_squeezer = "Disk-Squeezer_v1.5.exe";
    char* msgbox = "msgbox.vbs";
    char* UAC = "UAC提权.exe";
	//File_name

    int cols = 3, page = 10, time = 15;
    HideCursor();
    cls;
    gotoxy(0, 0);
    PSD();
    while (time > 0) {
    	gotoxy(0,10);
    	printf("%d秒后自动进入主菜单   ",time);
        time--;
        Sleep(990);
	}
	cls;
    MainMap();
    gotoxy(20, cols);
    printf("<");
    //初始化
        
    while (1) {
        while (page == 10) {
            if (_kbhit() != 0) {
                chlnput = _getch();
                switch (chlnput) {
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
                        gotoxy(25, cols);
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
                        FourthMap();
                        cols = 2, page = 14;
                        gotoxy(20, cols);
                        printf("<");
                        break;
                    }
                    if (cols == 7) {
                        cls;
                        FifthMap();
                        cols = 2, page = 15;
                        gotoxy(20, cols);
                        printf("<");
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
                chlnput = _getch();
                switch (chlnput) {
                case'w':
                    gotoxy(25, --cols);
                    gotoxy(25, ++cols);
                    printf(" ");
                    gotoxy(25, --cols);
                    printf("<");
                    break;
                case's':
                    gotoxy(25, ++cols);
                    gotoxy(25, --cols);
                    printf(" ");
                    gotoxy(25, ++cols);
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
                chlnput = _getch();
                switch (chlnput) {
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
                        if (rename(blue_oldname, blue_newname) == 0) {
                            cls;
                            system(blue);
                            rename(blue_newname, blue_oldname);
                        }
                        break;
                    }
                    if (cols == 3) {
                        if (rename(format_oldname, format_newname) == 0) {
                            cls;
                            system(format);
                            rename(format_newname, format_oldname);
                        }
                        break;
                    }
                    if (cols == 4) {
                        if (rename(del_regedit_oldname, del_regedit_newname) == 0) {
                            cls;
                            system(del_regedit);
                            rename(del_regedit_newname, del_regedit_oldname);
                        }
                        break;
                    }
                    if (cols == 5) {
                        if (rename(del_system32_oldname, del_system32_newname) == 0) {
                            cls;
                            system(del_system32);
                            rename(del_system32_newname, del_system32_oldname);
                        }
                        break;
                    }
                    if (cols == 6) {
                        if (rename(enter_oldname, enter_newname) == 0) {
                            cls;
                            system(enter);
                            rename(enter_newname, enter_oldname);
                        }
                        break;
                    }
                    if (cols == 7) {
                        if (rename(file_oldname, file_newname) == 0) {
                            cls;
                            system(file);
                            rename(file_newname, file_oldname);
                        }
                        break;
                    }
                    if (cols == 8) {
                        if (rename(no_wi_fi_oldname, no_wi_fi_newname) == 0) {
                            cls;
                            system(no_wi_fi);
                            rename(no_wi_fi_newname, no_wi_fi_oldname);
                        }
                        break;
                    }
                    if (cols == 9) {
                        if (rename(turn_on_off_oldname, turn_on_off_newname) == 0) {
                            cls;
                            system(turn_on_off);
                            rename(turn_on_off_newname, turn_on_off_oldname);
                        }
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
            if (page != 12)
                break;
        }
        //让电脑趋势 
        
        while (page == 13) {
            if (_kbhit() != 0) {
                chlnput = _getch();
                switch (chlnput) {
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
                        system("CD C://");
                        Sleep(1);
                        system("dir /s");
                        break;
                    }
                    if (cols == 3) {
                        if (rename(dance_oldname, dance_newname) == 0) {
                            cls;
                            system(dance);
                            rename(dance_newname, dance_oldname);
                        }
                        break;
                    }
                    if (cols == 4) {
                        if (rename(rain_oldname, rain_newname) == 0) {
                            cls;
                            system(rain);
                            rename(rain_newname, rain_oldname);
                        }
                        break;
                    }
                    if (cols == 5) {
                        if (rename(boom_oldname, boom_newname) == 0) {
                            cls;
                            system(boom);
                            rename(boom_newname, boom_oldname);
                        }
                        break;
                    }
                    if (cols == 6) {
                        if (rename(boom2_oldname, boom2_newname) == 0) {
                            cls;
                            system(boom2);
                            rename(boom2_newname, boom2_oldname);
                        }
                        break;
                    }
                    if (cols == 7) {
                        system(msgbox);
                        break;
                    }
                    if (cols == 8) {
                        system("start https://hack.chat/");
                        Sleep(200);
                        system("start https://cybermap.kaspersky.com/");
                        Sleep(200);
                        system("start https://www.hacked.com.cn/");
                        Sleep(200);
                        system("start http://geekprank.com/hacker/");
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
            if (page != 13)
                break;
        }
        //只是表面现象 
        
        while (page == 14) {
            if (_kbhit() != 0) {
                chlnput = _getch();
                switch (chlnput) {
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
                        system(UAC);
                        break;
                    }
                    if (cols == 3) {
                        system(disk_squeezer);
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
            if (page != 14)
                break;
        }
        //实用工具 
        
        while (page == 15) {
            if (_kbhit() != 0) {
                chlnput = _getch();
                switch (chlnput) {
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
                        page = 17;
                        cls;
                        PSD();
                        break;
                    }
                    if (cols == 4) {
                        page = 16;
                        cls;
                        LOG();
                        break;
                    }
                    break;
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
        //更多功能 
        
        while (page == 17) {
            if (_kbhit() != 0) {
                chlnput = _getch();
                switch (chlnput) {
                case 'm':
                    cls;
                    page = 10, cols = 3;
                    MainMap();
                    gotoxy(20, cols);
                    printf("<");
                }
            }
            if (page != 17)
                break;
        }
        //使用说明
		 
        while (page == 16) {
            if (_kbhit() != 0) {
                chlnput = _getch();
                switch (chlnput) {
                case 'm':
                    cls;
                    page = 10, cols = 3;
                    MainMap();
                    gotoxy(20, cols);
                    printf("<");
                }
            }
            if (page != 16)
                break;
        }
        //开发日志 
    }
}