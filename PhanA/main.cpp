#include "DanhSachPhuongTien.hpp"
#include <iostream>

using namespace std;

class App{
    private:
        DanhSachPhuongTien dsPhuongTien;
    public:
        void Menu() {
            cout << "1. Nhap danh sach phuong tien" << endl;
            cout << "2. Xuat danh sach phuong tien" << endl;
            cout << "3. Them phuong tien vao danh sach" << endl;
            cout << "4. Tim kiem phuong tien theo nam san xuat" << endl;
            cout << "5. Tim kiem phuong tien theo gia" << endl;
            cout << "6. Tim phuong tien co gia cao nhat" << endl;
            cout << "7. Tim phuong tien cu nhat" << endl;
            cout << "8. Hien thi danh sach phuong tien sap xep theo gia" << endl;
            cout << "9. Thoat" << endl;
            
        }
    void Run(){
        int chon;
        do {
            Menu();
            cout << "Nhap lua chon: ";
            cin >> chon;
            switch (chon) {
                case 1:
                    dsPhuongTien.NhapDanhSach();
                    break;
                case 2:
                    dsPhuongTien.XuatDanhSach();
                    break;
                case 3:
                    dsPhuongTien.ThemDanhSach();
                    break;
                case 4: {
                    int namSanXuat;
                    cout << "Nhap nam san xuat can tim: ";
                    cin >> namSanXuat;
                    dsPhuongTien.TimKiem_Nam(namSanXuat);
                    break;
                }
                case 5: {
                    int giaCanTim;
                    cout << "Nhap gia can tim: ";
                    cin >> giaCanTim;
                    dsPhuongTien.TimKiem_Gia(giaCanTim);
                    break;
                }
                case 6:
                    cout << "Phuong tien co gia cao nhat la: " << endl;
                    dsPhuongTien.MaxGia();
                    break;
                case 7:
                    cout << "Phuong tien cu nhat la: " << endl;
                    dsPhuongTien.MinNamSanXuat();
                    break;
                case 8: {
                    dsPhuongTien.HienthiPhuongtiensapxeptheogia();
                    dsPhuongTien.XuatDanhSach();
                    break;
                }
                case 9:
                    cout << "Ket thuc chuong trinh" << endl;
                    break;
                
                default:
                    cout << "Lua chon khong hop le" << endl;
                    break;
            }
        } while (chon != 9);
    }
};

int main() {
    App app;
    app.Run();
    return 0;
}
