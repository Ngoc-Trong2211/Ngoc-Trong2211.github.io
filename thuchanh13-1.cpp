#include<bits/stdc++.h>

using namespace std;

class NGUOI {
protected:
    string hoten;
    int namsinh;

public:
    NGUOI() {}
    NGUOI(string Hoten, int Namsinh) : hoten(Hoten), namsinh(Namsinh) {}
	
	virtual ~NGUOI() {}
	
    string getHoten() const {
        return hoten;
    }

    void setHoten(const string& Hoten) {
        hoten = Hoten;
    }

    int getNamsinh() const {
        return namsinh;
    }

    void setNamsinh(int Namsinh) {
        namsinh = Namsinh;
    }

    void nhap() {
        cout << "Nhap ho ten: ";
        cin.ignore();
        getline(cin, hoten);
        cout << "Nhap nam sinh: ";
        cin >> namsinh;
    }

    virtual void xuat() {
        cout << setw(20) << left << "Ho ten:" << setw(20) << hoten << endl;
        cout << setw(20) << left << "Nam sinh:" << setw(20) << namsinh << endl;
    }
};

class BENH_NHAN : public NGUOI {
private:
    string tenBenhAn;
    int soNgayNamVien;
    double giaVienPhiNgay;

public:
    BENH_NHAN() : NGUOI() {}
    BENH_NHAN(string Hoten, int Namsinh, string TenBenhAn, int SoNgayNamVien, double GiaVienPhiNgay)
        : NGUOI(Hoten, Namsinh), tenBenhAn(TenBenhAn), soNgayNamVien(SoNgayNamVien), giaVienPhiNgay(GiaVienPhiNgay) {}

    void nhap() {
        NGUOI::nhap();
        cout << "Nhap ten benh an: ";
        cin.ignore();
        getline(cin, tenBenhAn);
        cout << "Nhap so ngay nam vien: ";
        cin >> soNgayNamVien;
        cout << "Nhap gia vien phi/ngay: ";
        cin >> giaVienPhiNgay;
    }

    void xuat() {
        NGUOI::xuat();
        cout << setw(20) << left << "Ten benh an:" << setw(20) << tenBenhAn << endl;
        cout << setw(20) << left << "So ngay nam vien:" << setw(20) << soNgayNamVien << endl;
        cout << setw(20) << left << "Tien vien phi:" << setw(20) << tienVienPhi() << endl;
        cout << setw(20) << left << "Tuoi hien nay:" << setw(20) << tinhTuoiHienNay() << endl;
    }

    int tienVienPhi() const {
        return soNgayNamVien * giaVienPhiNgay;
    }

    int tinhTuoiHienNay() const {
        return 2024 - getNamsinh();
    }
};

class BAC_SI : public NGUOI {
private:
    string MaBS;
    double soNgayLamViec;
    double tienCongNgay;

public:
    BAC_SI() : NGUOI() {}
    BAC_SI(string Hoten, int Namsinh, string MBS, double SoNgayLamViec, double TienCongNgay)
        : NGUOI(Hoten, Namsinh), MaBS(MBS), soNgayLamViec(SoNgayLamViec), tienCongNgay(TienCongNgay) {}

    void nhap() {
        NGUOI::nhap();
        cout << "Nhap ma bac si: ";
        cin.ignore();
        getline(cin, MaBS);
        cout << "Nhap so ngay lam viec: ";
        cin >> soNgayLamViec;
        cout << "Nhap tien cong/ngay: ";
        cin >> tienCongNgay;
    }

    void xuat() {
        NGUOI::xuat();
        cout << setw(20) << left << "Ma bac si:" << setw(20) << MaBS << endl;
        cout << setw(20) << left << "So ngay lam viec:" << setw(20) << soNgayLamViec << endl;
        cout << setw(20) << left << "Tien cong/ngay:" << setw(20) << tienCongNgay << endl;
        cout << setw(20) << left << "Tien cong thang:" << setw(20) << tienCongThang() << endl;
    }

    double tienCongThang() const {
        return soNgayLamViec * tienCongNgay;
    }
};

int main() {
    vector<NGUOI*> danhSachNguoi;
    int n;

    do {
        cout << "Nhap so luong nguoi: ";
        cin >> n;
    } while (n <= 0 || n > 100);

    for (int i = 0; i < n; ++i) {
        int choice;
        cout << "Chon loai nguoi (1: BAC SI, 2: BENH NHAN): ";
        cin >> choice;

        if (choice == 1) {
            BAC_SI* bacSi = new BAC_SI;
            bacSi->nhap();
            danhSachNguoi.push_back(bacSi);
        } else if (choice == 2) {
            BENH_NHAN* benhNhan = new BENH_NHAN;
            benhNhan->nhap();
            danhSachNguoi.push_back(benhNhan);
        } else {
            cout << "Lua chon khong hop le!" << endl;
            --i;
        }
    }

    cout << "\nDanh sach nguoi:" << endl;
    for (const auto& nguoi : danhSachNguoi) {
        nguoi->xuat();
        cout << endl;
    }
	
    cout << "\nDanh sach benh nhan co tuoi <= 10:" << endl;
    for (const auto& nguoi : danhSachNguoi) {
        BENH_NHAN* benhNhan = dynamic_cast<BENH_NHAN*>(nguoi);
        if (benhNhan && benhNhan->tinhTuoiHienNay() <= 10) {
            benhNhan->xuat();
            cout << endl;
        }
    }

    auto maxNgayLamViec = max_element(danhSachNguoi.begin(), danhSachNguoi.end(),
        [](const NGUOI* a, const NGUOI* b) {
            const BAC_SI* bacSiA = dynamic_cast<const BAC_SI*>(a);
            const BAC_SI* bacSiB = dynamic_cast<const BAC_SI*>(b);
            return (bacSiA && bacSiB) ? (bacSiA->tienCongThang() < bacSiB->tienCongThang()) : false;
        });

    if (maxNgayLamViec != danhSachNguoi.end()) {
        cout << "\nThong tin BAC_SI co so ngay lam viec nhieu nhat:" << endl;
        (*maxNgayLamViec)->xuat();
        cout << endl;
    } else {
        cout << "\nKhong co BAC_SI trong danh sach." << endl;
    }

    for (const auto& nguoi : danhSachNguoi) {
        delete nguoi;
    }

    return 0;
}

