#include <stdio.h>

typedef enum{
THU_HAI=1,
THU_BA,
THU_TU,
THU_NAM,
THU_SAU,
THU_BAY,
CHU_NHAT
}weekDay;
int ktNamNhuan(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Hàm tính số ngày trong một tháng
int ktThang(int month, int year) {
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return ktNamNhuan(year) ? 29 : 28;
        default:
           printf("Thang khong hop le\n");
    }
}

int main() {
    int inputDay, inputMonth, inputYear;
   const int Mocthoigian[3]={1,1,2022};

    // Nhập ngày, tháng, năm từ người dùng
    printf("Nhap ngay: ");
    scanf("%d", &inputDay);

    printf("Nhap thang: ");
    scanf("%d", &inputMonth);

    printf("Nhap nam: ");
    scanf("%d", &inputYear);

    // Kiểm tra tính hợp lệ của ngày, tháng, năm
    if (inputDay <= 0 ||inputMonth <= 0 || inputMonth > 12 || inputYear <= 0) {
        printf("Ngay thang nam khong hop le\n");
    }

    // Tính số ngày chênh lệch
    int totalDays = 0;

    // Tính số ngày từ ngày mốc đến ngày trước ngày nhập vào
    for (int year = Mocthoigian[2]; year < inputYear; ++year) {
        totalDays += ktNamNhuan(year) ? 366 : 365;
    }

    // Tính số ngày từ đầu năm đến trước tháng nhập vào
    for (int month = Mocthoigian[1]; month < inputMonth; ++month) {
        totalDays += ktThang(month, inputYear);
    }

    // Tính số ngày từ đầu tháng đến ngày nhập vào
    totalDays += inputDay;

    // Tính thứ của ngày nhập vào
    int dayOfWeek = (totalDays + 5) % 7; // Sử dụng công thức Zeller's Congruence

    // Xuất kết quả
    switch (dayOfWeek) {
        case THU_HAI:
            printf("Thu hai\n");
            break;
        case THU_BA:
            printf("Thu ba\n");
            break;
        case THU_TU:
            printf("Thu tu\n");
            break;
        case THU_NAM:
            printf("Thu nam\n");
            break;
        case THU_SAU:
            printf("Thu sau\n");
            break;
        case THU_BAY:
            printf("Thu bay\n");
            break;
        case CHU_NHAT:
            printf("Chu Nhat\n");
            break;
        default:
            printf("Xay ra loi trong qua trinh tinh toan\n");
    }

    return 0;
}
