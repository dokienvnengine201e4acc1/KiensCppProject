#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
	HDC bitblt_hdc = GetDC(0);
	int bitblt_a = GetSystemMetrics(0);
	int bitblt_b = GetSystemMetrics(1);

	LPCWSTR message1 = L"Do you want to do running virus trojan?.";
	LPCWSTR title1 = L"Trojan.Win32.EffectCpp";

	int result1 = MessageBox(NULL, message1, title1, MB_ICONQUESTION | MB_YESNO);

	if (result1 == IDYES) {
		LPCWSTR message2 = L"Last question. Running trojan? Press any key to continue!";
		int result2 = MessageBox(NULL, message2, title1, MB_ICONQUESTION | MB_YESNO);
		if (result2 == IDYES) {
			MessageBox(NULL, L"Your trojan is running!", title1, MB_ICONERROR | MB_OK);
			while (true) {
				BitBlt(bitblt_hdc, 5, 5, bitblt_a, bitblt_b, bitblt_hdc, 0, 0, SRCCOPY);
				Sleep(100);

			}
		}
	}
}
