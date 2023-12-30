#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

class NGUOI {
protected:
    string hoTen;
    int namSinh;

public:
    NGUOI() : namSinh(0) {}

    NGUOI(string ten, int nam) : hoTen(ten), namSinh(nam) {}

    string getHoTen() const { return hoTen; }
    void setHoTen(string ten) { hoTen = ten; }

    int getNamSinh() const { return namSinh; }
    void setNamSinh(int nam) { namSinh = nam; }

    virtual void NhapThongTin() {
        cin.ignore();
        cout << "Nhap ho ten: ";
        getline(cin, hoTen);

        cout << "Nhap nam sinh: ";
        cin >> namSinh;
    }

    virtual void XuatThongTin() const {
        cout << left << setw(20) << hoTen;
        cout << left << setw(15) << namSinh;
    }

    virtual int getMSV() const {
        return 0;
    }

    static bool SoSanhTheoTenVaMSV(const NGUOI* a, const NGUOI* b) {
        if (a->getHoTen() == b->getHoTen()) {
            return a->getMSV() < b->getMSV();
        }
        return a->getHoTen() < b->getHoTen();
    }

    virtual ~NGUOI() {}
};

class SINHVIEN : public NGUOI {
private:
    long long maSinhVien;

public:
    SINHVIEN() : maSinhVien(0) {}

    SINHVIEN(long long ma, string ten, int nam) : NGUOI(ten, nam), maSinhVien(ma) {}

    void NhapThongTin() override {
        NGUOI::NhapThongTin(); 
        cout << "Nhap ma sinh vien: ";
        cin >> maSinhVien;
    }

    int getMSV() const override {
        return maSinhVien;
    }

    void XuatThongTin() const override {
        NGUOI::XuatThongTin(); 
        cout << left << setw(15)<< maSinhVien << endl;
    }

    ~SINHVIEN() {}
};

void NhapDanhSach(vector<NGUOI*>& danhSachNguoi) {
    int soLuongNguoi;
    cout << "Nhap so luong sinh vien: ";
    cin >> soLuongNguoi;

    for (int i = 0; i < soLuongNguoi; ++i) {
        SINHVIEN* sv = new SINHVIEN;
        cout << "Nhap thong tin cho sinh vien thu " << i + 1 << ":" << endl;
        sv->NhapThongTin();
        danhSachNguoi.push_back(sv);
    }
}

void XuatDanhSachChuaSapXep(const vector<NGUOI*>& danhSachNguoi) {
    cout << left << setw(10) << "STT" << setw(20) << "Ho ten" << setw(15) << "Nam sinh" << setw(15) << "Ma sinh vien" << endl;
    int stt = 1;
    for (const NGUOI* nguoi : danhSachNguoi) {
        cout << left << setw(10) << stt;
        nguoi->XuatThongTin();
        stt++;
    }
}

void SapXepDanhSach(vector<NGUOI*>& danhSachNguoi) {
    sort(danhSachNguoi.begin(), danhSachNguoi.end(), NGUOI::SoSanhTheoTenVaMSV);
}

void XuatDanhSachSauSapXep(const vector<NGUOI*>& danhSachNguoi) {
    cout << left << setw(10) << "STT" << setw(20) << "Ho ten" << setw(15) << "Nam sinh" << setw(15) << "Ma sinh vien" << endl;
    int stt = 1;
    for (const NGUOI* nguoi : danhSachNguoi) {
        cout << left << setw(10) << stt;
        nguoi->XuatThongTin();
        stt++;
    }
}

int main() {
    vector<NGUOI*> danhSachNguoi;

    NhapDanhSach(danhSachNguoi);
	cout << endl;
    cout << "Thong tin khi chua sap xep:" << endl ;
    cout << "--------------Danh sach sau khi chua sap xep--------------" << endl;
    XuatDanhSachChuaSapXep(danhSachNguoi);

    SapXepDanhSach(danhSachNguoi);
	cout << endl;
    cout << "Thong tin sau khi sap xep:" << endl;
    cout << "----------------Danh sach sau khi sap xep----------------" << endl;
    XuatDanhSachSauSapXep(danhSachNguoi);

    for (NGUOI* nguoi : danhSachNguoi) {
        delete nguoi;
    }

    return 0;
}

