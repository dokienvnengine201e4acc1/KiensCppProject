#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    LPCWSTR message = L"Bạn ấn vào Có (Yes) để sửa lỗi.";
    LPCWSTR title = L"Microsoft Windows";

    int result = MessageBox(NULL, message, title, MB_ICONQUESTION | MB_YESNO);

    if (result == IDYES) {
        MessageBox(NULL, L"Không thể sửa lỗi được.", title, MB_ICONERROR | MB_OK);
    }
    return 0;
}
