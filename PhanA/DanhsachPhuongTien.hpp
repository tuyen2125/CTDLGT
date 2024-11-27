#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include "PhuongTien.hpp"
using namespace std;

class DanhSachPhuongTien {
private:
    vector<PhuongTien> dsPhuongTien;
public:
    DanhSachPhuongTien();
    void ThemPhuongTien(PhuongTien pt);
    void NhapDanhSach();
    void ThemDanhSach();
    void XuatDanhSach();
    void TimKiem_Nam(int namSanXuat);
    void TimKiem_Gia(int GiacanTim);
    void MaxGia();
    void MinNamSanXuat();
    void HienthiPhuongtiensapxeptheogia();
};


DanhSachPhuongTien::DanhSachPhuongTien() {
    dsPhuongTien = vector<PhuongTien>();
}

void DanhSachPhuongTien::ThemPhuongTien(PhuongTien pt) {
    dsPhuongTien.push_back(pt);
}

void DanhSachPhuongTien::NhapDanhSach() {
    int n;
    cout << "Nhap so luong phuong tien: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Nhap phuong tien " << i+1 <<":" << endl;
        PhuongTien pt;
        cin >> pt;
        ThemPhuongTien(pt);
    }
}

void DanhSachPhuongTien::ThemDanhSach(){
        cout << "Nhap phuong tien can them:"<< endl;
        PhuongTien pt;
        cin >> pt;
        ThemPhuongTien(pt);
}
void DanhSachPhuongTien::XuatDanhSach() {
    for (int i = 0; i < dsPhuongTien.size(); i++) {
        cout << dsPhuongTien[i] << endl;
    }
}



void DanhSachPhuongTien::TimKiem_Gia(int GiacanTim) {
    bool check = false;
    for (int i = 0; i < dsPhuongTien.size(); i++) {
        if (dsPhuongTien[i].getGiaTien() == GiacanTim) {
            cout << dsPhuongTien[i] << endl;
            check = true;
        }
    }
    if (!check)
        cout << "Khong tim thay phuong tien" << endl;
}

void DanhSachPhuongTien::TimKiem_Nam(int namSanXuat) {
    bool check = false;
    for (int i = 0; i < dsPhuongTien.size(); i++) {
        if (dsPhuongTien[i].getNamSanXuat() == namSanXuat) {
            cout << dsPhuongTien[i] << endl;
            check = true;
        }
    }
    if (!check)
        cout << "Khong tim thay phuong tien" << endl;
}
void DanhSachPhuongTien::MaxGia(){
    auto giaMax = max_element (dsPhuongTien.begin(), dsPhuongTien.end(),
                                 [](PhuongTien a, PhuongTien b){
        return a.getGiaTien() < b.getGiaTien();
    });
    cout << "Ten phuong tien: " << giaMax->getTenPhuongTien() << endl;
    cout << "Hang san xuat: " << giaMax->getHangSanXuat() << endl;
    cout << "Mau sac: " << giaMax->getMauSac() << endl;
    cout << "Nam san xuat: " << giaMax->getNamSanXuat() << endl;
    cout << "Gia tien: " << giaMax->getGiaTien() << endl;
}
void DanhSachPhuongTien::MinNamSanXuat(){
    auto namSanXuatMin = min_element (dsPhuongTien.begin(), dsPhuongTien.end(), 
                                        [](PhuongTien a, PhuongTien b){
        return a.getNamSanXuat() > b.getNamSanXuat();
    });
    cout << "Ten phuong tien: " << namSanXuatMin->getTenPhuongTien() << endl;
    cout << "Hang san xuat: " << namSanXuatMin->getHangSanXuat() << endl;
    cout << "Mau sac: " << namSanXuatMin->getMauSac() << endl;
    cout << "Nam san xuat: " << namSanXuatMin->getNamSanXuat() << endl;
    cout << "Gia tien: " << namSanXuatMin->getGiaTien() << endl;
}

void DanhSachPhuongTien::HienthiPhuongtiensapxeptheogia() {
    sort(dsPhuongTien.begin(), dsPhuongTien.end(), [](PhuongTien a, PhuongTien b) {
        return a.getGiaTien() > b.getGiaTien();
    });
}
