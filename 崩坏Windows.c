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
    printf("|                ����Windows               | W-������� |\n");
    printf("+------------------------------------------+ S-������� |\n");
    printf("|1����Ϣ��                                 | Enter-ȷ�� |\n");
    printf("|2���õ�������                             | M-������ҳ |\n");
    printf("|3����������                               |            |\n");
    printf("|4��ʵ�ù���                               |            |\n");
    printf("|5�����࡭��                               |            |\n");
    printf("+------------------------------------------+------------+\n");
}//page=10
void FirstMap() {
    printf("��Ϣ�Σ�\n\n");
    printf("1���������\n");
    printf("2������������\n");
}//page=11
void SecondMap() {
    printf("�õ������ƣ�\n\n");
    printf("1������\n");
    printf("2����ʽ������\n");
    printf("3��ɾ������ע���\n");
    printf("4��ɾ��System32\n");
    printf("5����Զ�ġ��س���\n");
    printf("6���������ļ�\n");
    printf("7��û������\n");
    printf("8���������ػ�\n");
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
}//page=13
void FourthMap() {
    printf("ʵ�ù��ߣ�\n\n");
    printf("1��UAC��Ȩ\n");
    printf("2��Ӳ��ե����\n");
}//page=14
void FifthMap() {
    printf("���ࣺ\n\n");
    printf("1���ʺ�è����MEMZ\n");
    printf("2��ʹ��˵��\n");
    printf("3��������־\n");
}//page=15
void LOG() {
    printf("===========================================================\n");
    printf("���������־                             ��M-�������˵���\n");
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
    printf("===========================================================\n");
}//page=16
void PSD() {
	printf("+--------------------------------------------------------------+\n");
	printf("|          Precautions for use & Software Description          |\n");
	printf("+--------------------------------------------------------------+\n");
    printf("|1����رձ�̨�����ϵ����а�ȫ����ķ������ܣ�����Windowsϵͳ��|\n");
    printf("|   ����Windows��ȫ���ģ�Windows Defender�������ж�ء�        |\n");
    printf("|2�����Թ���Ա������б������                                 |\n");
    printf("|3����������꿨ס�򰴼�ʧ�����������˳��ؽ���               |\n");
    printf("|4���������Դ����������������¡�                             |\n");
    printf("|5���ظ���������������ǲ�����                                 |\n");
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
    char* UAC = "UAC��Ȩ.exe";
	//File_name

    int cols = 3, page = 10, time = 15;
    HideCursor();
    cls;
    gotoxy(0, 0);
    PSD();
    while (time > 0) {
    	gotoxy(0,10);
    	printf("%d����Զ��������˵�   ",time);
        time--;
        Sleep(990);
	}
	cls;
    MainMap();
    gotoxy(20, cols);
    printf("<");
    //��ʼ��
        
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
        //���˵� 
        
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
        //��Ϣ�� 
        
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
        //�õ������� 
        
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
        //ֻ�Ǳ������� 
        
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
        //ʵ�ù��� 
        
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
        //���๦�� 
        
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
        //ʹ��˵��
		 
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
        //������־ 
    }
}