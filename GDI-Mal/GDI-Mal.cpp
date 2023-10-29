#include <Windows.h>
#include <iostream>

int main()
{
    HDC dc = GetDC(0);
    POINT points;

    int x = GetSystemMetrics(0);
    int y = GetSystemMetrics(1);

    
    for (int i = 0; i < 500;i++) {

        BitBlt(dc, rand() % x + 0, rand() % y + 0 * 2, x + i, y + i, dc, 0, 0, SRCCOPY);
        BitBlt(dc, rand() % 10 - i, rand() % 20 - i * 2, x + i, y + i, dc, 0, 0, SRCCOPY);
        BitBlt(dc, rand() % 10 + i, rand() % 15 + i * rand(), x * i, y + i, dc, 0, 0, SRCCOPY);
        BitBlt(dc, rand() % 15 + i, rand() % 15 + i * rand(), x * i, y + i, dc, 0, 0, SRCCOPY);
        //Sleep(i);
    }
    
}
