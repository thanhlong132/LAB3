#include <iostream>
#include <stdio.h>
#include <cmath> //0850080030-Võ Thành Luân-08THMT
#include <string>
using namespace std;
//1
void tinhsonho(int a , int b) {
    int sonho = min(a,b);
    cout <<"So nho nhat trong 2 so la: "<<sonho<<endl;
}
//2
int UCLN(int a , int b) 
{
    while ( a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }

    return a;
}
int BCNN(int a, int b)
{
    int result = UCLN(a, b);
    return a * b / result;
}
//3
int giaiThua(int n){
    int giaiThua =1;
    for(int i =1;i<=n;i++)
    {
        giaiThua= giaiThua * i;
    }
    cout<<"Tong giai thua: "<<giaiThua;
}
//4
double mu(double x, int n) {
    double result = 1.0;
    int abs_n = abs(n); // Lấy giá trị tuyệt đối của n để xử lý trường hợp n < 0

    while (abs_n > 0) {
        if (abs_n % 2 == 1) {
            result *= x;
        }
        x *= x;
        abs_n /= 2;
    }

    return (n < 0) ? 1.0 / result : result;
}
//5
unsigned long long tinhGiaiThua(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        unsigned long long ketQua = 1;
        for (int i = 2; i <= n; i++) {
            ketQua *= i;
        }
        return ketQua;
    }
}

unsigned long long tinhToHop(int n, int k) {
    if (k < 0 || k > n) {
        cout << "Không thể tính. Vui lòng nhập lại k sao cho 0 <= k <= n." << endl;
        return 0;
    } else {
        unsigned long long tuSo = tinhGiaiThua(n);
        unsigned long long mauSo = tinhGiaiThua(k) * tinhGiaiThua(n - k);
        return tuSo / mauSo;
    }
}
//6
double ChuVi (int a , int b){
    return (a+b)*2;
    cout<<"\n Chu vi hinh chu nhat la: "<<ChuVi(a , b)<<endl;
}

double DienTich (int a , int b){
    return  a*b;
    cout<<"\n Dien tich chu nhat la: "<< DienTich(a , b)<<endl;
}

void HinhChuNhat(int a, int b) {
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}
//7
bool laSoHoanThien(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}
void inSoHoanThienNhoHon(int num) {
    cout << "Cac so hoan thien nho hon " << num << " la: ";
    for (int i = 1; i < num; i++) {
        if (laSoHoanThien(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}
//8
void tinhSoToTien(int soTien, int toTien[]) {
    int loaiTien[] = {50000, 20000, 10000, 5000, 2000, 1000};
    int n = sizeof(loaiTien) / sizeof(loaiTien[0]);

    for (int i = 0; i < n; i++) {
       toTien[i] = soTien / loaiTien[i];
        soTien -= toTien[i] * loaiTien[i];
    }
} 

int tinhTongSoToTien(int toTien[]) {
    int tongSoTo = 0;
    int loaiTien[] = {50000, 20000, 10000, 5000, 2000, 1000};
    int n = sizeof(loaiTien) / sizeof(loaiTien[0]);

    for (int i = 0; i < n; i++) {
        tongSoTo += toTien[i];
    }
    return tongSoTo;
}    
        
int main()
{   
    cout<<"Bạn muốn thấy bài số mấy: ";
    int n;
	cin >> n;
	switch (n) {
    case 1:{
        int a,b;
        cout<<"Nhap so a: ";
        cin>>a;
        cout<<"Nhap so b: ";
        cin>>b;
        tinhsonho(a,b);
    }
    break ;
    case 2:{
        int a,b;
        cout<<"Nhap a:";
        cin>>a;
        cout<<"Nhap b:";
        cin>>b;
        int result=UCLN(a,b);
        cout <<"Uoc chung lon nhat la: "<<result<<endl;
        result = BCNN(a, b);
        cout << "Boi chung nho nhat : " << result << endl;
        }
        break;
    case 3:{
        int n;
        cin >> n;
        giaiThua(n);
    }
    break;
    case 4:{
        double x;
        int n;
        cout << "Nhập giá trị x: ";
        cin >> x;
        cout << "Nhập số nguyên n: ";
        cin >> n;

        double ketQua = mu(x, n);
        cout << "(" << x << ")^" << n << " = " << ketQua << endl;

        return 0;
    }
    break;
    case 5:{
        int n, k;
        cout << "Nhập số nguyên dương n: ";
        cin >> n;
        cout << "Nhập số nguyên k (0 <= k <= n): ";
        cin >> k;

        unsigned long long ketQua = tinhToHop(n, k);
        cout << "C(" << n << ", " << k << ") = " << ketQua << endl;

        return 0;
    }
    break;
    case 6:{
        int a, b;
        cout<<"Nhap chieu dai a:";
        cin>>a;
        cout<<"Nhap chieu rong b:";
        cin>>b;
        cout<<"\n Chu vi hinh chu nhat la: "<<ChuVi(a , b)<<endl;
        cout<<"\n Dien tich chu nhat la: "<< DienTich(a , b)<<endl;
        cout<<"Hinh chu nhat: "<<HinhChuNhat <<endl;
        HinhChuNhat(a,b);
        return 0;
    }
    break;
    case 7:{
         int num;
        cout << "Nhap mot so nguyen duong: ";
        cin >> num;

        if (num < 1) {
            cout << "Vui long nhap mot so nguyen duong." << endl;
        } else {
            if (laSoHoanThien(num)) {
                cout << num << " la so hoan thien." << endl;
            } else {
                cout << num << " khong la so hoan thien." << endl;
            }

            inSoHoanThienNhoHon(num);
        }

        return 0;
    }
    break;
    case 8 : {
            int soTien;
        cout << "Nhap so tien: ";
        cin >> soTien;

        int toTien[6] = {0}; // Khởi tạo mảng số tờ tiền ban đầu là 0

        tinhSoToTien(soTien, toTien);
        int tongSoTo = tinhTongSoToTien(toTien);

        cout << "Phuong an chi tieu: " << endl;
        int loaiTien[] = {50000, 20000, 10000, 5000, 2000, 1000};
        int n = sizeof(loaiTien) / sizeof(loaiTien[0]);

        for (int i = 0; i < n; i++) {
            cout << toTien[i] << " to " << loaiTien[i] << " VND" << endl;
        }

        cout << "Tong so to tien: " << tongSoTo << endl;

        return 0;
    }
    break;
        default: {
            cout << "khong co bai ban chon" << endl;
            break;
        }
    
}
}