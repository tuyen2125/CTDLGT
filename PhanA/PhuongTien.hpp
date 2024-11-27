#include <iostream>
#include <string>

using namespace std;

class PhuongTien {
private:
    string tenPhuongTien;
    string hangSanXuat;
    string mauSac;
    int giaTien;
    int namSanXuat;
public:
    PhuongTien();
    PhuongTien(string tenPhuongTien, string hangSanXuat, 
                string mauSac, int NamSanXuat, int giaTien);
    string getTenPhuongTien();
    string getHangSanXuat();
    string getMauSac();
    int getNamSanXuat();
    int getGiaTien();
    // Toán tử cin,cout
    friend istream& operator>>(istream& is, PhuongTien &pt);
    friend ostream& operator<<(ostream& os, const PhuongTien& pt);
    // Toán tử so sánh
    bool operator < (const PhuongTien& pt); // So sánh theo giá tiền

};

PhuongTien::PhuongTien() {
    tenPhuongTien = "";
    hangSanXuat = "";
    mauSac = "";
    giaTien = 0;
    namSanXuat = 0;
}

PhuongTien::PhuongTien(string tenPhuongTien, string hangSanXuat, 
                    string mauSac, int NamSanXuat, int giaTien){
    this->tenPhuongTien = tenPhuongTien;
    this->hangSanXuat = hangSanXuat;
    this->mauSac = mauSac;
    this->namSanXuat = NamSanXuat;
    this->giaTien = giaTien;

}
string PhuongTien::getTenPhuongTien(){
    return tenPhuongTien;
}
string PhuongTien::getHangSanXuat(){
    return hangSanXuat;
}
string PhuongTien::getMauSac(){
    return mauSac;
}
int PhuongTien::getNamSanXuat() {
    return namSanXuat;
}

int PhuongTien::getGiaTien() {
    return giaTien;
}


istream& operator>>(istream& is, PhuongTien &pt) {
    cout << "Nhap ten phuong tien: ";
    is >> pt.tenPhuongTien;
    cout << "Nhap hang san xuat: ";
    is >> pt.hangSanXuat;
    cout << "Nhap mau sac: ";
    is >> pt.mauSac;
    cout << "Nhap nam san xuat: ";
    is >> pt.namSanXuat;
    cout << "Nhap gia tien: ";
    is >> pt.giaTien;
    return is;
}

ostream& operator<<(ostream& os, const PhuongTien& pt) {
    os << "Ten phuong tien: " << pt.tenPhuongTien << endl;
    os << "Hang san xuat: " << pt.hangSanXuat << endl;
    os << "Mau sac: " << pt.mauSac << endl;
    os << "Nam san xuat: " << pt.namSanXuat << endl;
    os << "Gia tien: " << pt.giaTien << endl;
    return os;
}

bool PhuongTien::operator<(const PhuongTien& pt) {
    return this->giaTien < pt.giaTien;
}
