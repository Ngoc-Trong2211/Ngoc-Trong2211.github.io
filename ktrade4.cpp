#include <bits/stdc++.h>

using namespace std;

class MatHang {
private:
  int maHang;
  string tenHang;
  string nhomHang;
  float giaBan;
  int soLuong;

public:
  MatHang();
  MatHang(int maHang, string tenHang, string nhomHang, float giaBan, int soLuong);

  int GetMaHang();
  void SetMaHang(int maHang);
  string GetTenHang();
  void SetTenHang(string tenHang);
  string GetNhomHang();
  void SetNhomHang(string nhomHang);
  float GetGiaBan();
  void SetGiaBan(float giaBan);
  int GetSoLuong();
  void SetSoLuong(int soLuong);
};

MatHang::MatHang() {
  maHang = 0;
  tenHang = "";
  nhomHang = "";
  giaBan = 0.0f;
  soLuong = 0;
}

MatHang::MatHang(int maHang, string tenHang, string nhomHang, float giaBan, int soLuong) {
  this->maHang = maHang;
  this->tenHang = tenHang;
  this->nhomHang = nhomHang;
  this->giaBan = giaBan;
  this->soLuong = soLuong;
}

int MatHang::GetMaHang() {
  return maHang;
}

void MatHang::SetMaHang(int maHang) {
  this->maHang = maHang;
}

string MatHang::GetTenHang() {
  return tenHang;
}

void MatHang::SetTenHang(string tenHang) {
  this->tenHang = tenHang;
}

string MatHang::GetNhomHang() {
  return nhomHang;
}

void MatHang::SetNhomHang(string nhomHang) {
  this->nhomHang = nhomHang;
}

float MatHang::GetGiaBan() {
  return giaBan;
}

void MatHang::SetGiaBan(float giaBan) {
  this->giaBan = giaBan;
}

int MatHang::GetSoLuong() {
  return soLuong;
}

void MatHang::SetSoLuong(int soLuong) {
  this->soLuong = soLuong;
}

class NhanVienBanHang {
private:
  int maNV;
  string hoTen;
  string diaChi;
  string soDT;
  string ngayKyHopDong;

public:
  NhanVienBanHang();
  NhanVienBanHang(int maNV, string hoTen, string diaChi, string soDT, string ngayKyHopDong);

  int GetMaNV();
  void SetMaNV(int maNV);
  string GetHoTen();
  void SetHoTen(string hoTen);
  string GetDiaChi();
  void SetDiaChi(string diaChi);
  string GetSoDT();
  void SetSoDT(string soDT);
  string GetNgayKyHopDong();
  void SetNgayKyHopDong(string ngayKyHopDong);
};

NhanVienBanHang::NhanVienBanHang() {
  maNV = 0;
  hoTen = "";
  diaChi = "";
  soDT = "";
  ngayKyHopDong = "";
}

NhanVienBanHang::NhanVienBanHang(int maNV, string hoTen, string diaChi, string soDT, string ngayKyHopDong) {
  this->maNV = maNV;
  this->hoTen = hoTen;
  this->diaChi = diaChi;
  this->soDT = soDT;
  this->ngayKyHopDong = ngayKyHopDong;
}

int NhanVienBanHang::GetMaNV() {
  return maNV;
}

void NhanVienBanHang::SetMaNV(int maNV) {
  this->maNV = maNV;
}

string NhanVienBanHang::GetHoTen() {
  return hoTen;
}

void NhanVienBanHang::SetHoTen(string hoTen) {
  this->hoTen = hoTen;
}

string NhanVienBanHang::GetDiaChi() {
  return diaChi;
}

void NhanVienBanHang::SetDiaChi(string diaChi) {
  this->diaChi = diaChi;
}

string NhanVienBanHang::GetSoDT() {
  return soDT;
}

void NhanVienBanHang::SetSoDT(string soDT) {
  this->soDT = soDT;
}

string NhanVienBanHang::GetNgayKyHopDong() {
  return ngayKyHopDong;
}

void NhanVienBanHang::SetNgayKyHopDong(string ngayKyHopDong) {
  this->ngayKyHopDong = ngayKyHopDong;
}

class BangDanhSachBanHang {
private:
  int maDanhSach;
  int maNV;
  int maHang;
  int soLuong;

public:
  BangDanhSachBanHang();
  BangDanhSachBanHang(int maDanhSach, int maNV, int maHang, int soLuong);

  int GetMaDanhSach();
  void SetMaDanhSach(int maDanhSach);
  int GetMaNV();
  void SetMaNV(int maNV);
  int GetMaHang();
  void SetMaHang(int maHang);
  int GetSoLuong();
  void SetSoLuong(int soLuong);
};

BangDanhSachBanHang::BangDanhSachBanHang() {
  maDanhSach = 0;
  maNV = 0;
  maHang = 0;
  soLuong = 0;
}

BangDanhSachBanHang::BangDanhSachBanHang(int maDanhSach, int maNV, int maHang, int soLuong) {
  this->maDanhSach = maDanhSach;
  this->maNV = maNV;
  this->maHang = maHang;
  this->soLuong = soLuong;
}

int BangDanhSachBanHang::GetMaDanhSach() {
  return maDanhSach;
}

void BangDanhSachBanHang::SetMaDanhSach(int maDanhSach) {
  this->maDanhSach = maDanhSach;
}

int BangDanhSachBanHang::GetMaNV() {
  return maNV;
}

void BangDanhSachBanHang::SetMaNV(int maNV) {
  this->maNV = maNV;
}

int BangDanhSachBanHang::GetMaHang() {
  return maHang;
}

void BangDanhSachBanHang::SetMaHang(int maHang) {
  this->maHang = maHang;
}

int BangDanhSachBanHang::GetSoLuong() {
  return soLuong;
}

void BangDanhSachBanHang::SetSoLuong(int soLuong) {
  this->soLuong = soLuong;
}

void NhapDanhSachMatHang(vector<MatHang *> &danhSachMatHang) {
  int n;
  cout << "Nhap so luong mat hang: ";
  cin >> n;

  for (int i = 0; i < n; i++) {
    MatHang *matHang = new MatHang();

    matHang->SetMaHang(i + 1);

    cout << "Nhap ten hang: ";
    string tenHang;
    cin.ignore();
    getline(cin, tenHang); 
    matHang->SetTenHang(tenHang);

    cout << "Nhap nhom hang: ";
    string nhomHang;
    getline(cin, nhomHang); 
    matHang->SetNhomHang(nhomHang);

    cout << "Nhap gia ban: ";
    float giaBan;
    cin >> giaBan;
    matHang->SetGiaBan(giaBan);

    cout << "Nhap so luong: ";
    int soLuong;
    cin >> soLuong;
    cout << endl; 
    matHang->SetSoLuong(soLuong);

    danhSachMatHang.push_back(matHang);
  }
}

void InDanhSachMatHang(vector<MatHang *> &danhSachMatHang) {
  for (MatHang *matHang : danhSachMatHang) {
    cout << "Ma hang: " << matHang->GetMaHang() << endl;
    cout << "Ten hang: " << matHang->GetTenHang() << endl;
    cout << "Nhom hang: " << matHang->GetNhomHang() << endl;
    cout << "Gia ban: " << matHang->GetGiaBan() << endl;
    cout << "So luong: " << matHang->GetSoLuong() << endl;
    cout << endl;
  }
}

void InDanhSachNhanVien(vector<NhanVienBanHang *> &danhSachNhanVien) {
  for (NhanVienBanHang *nhanVien : danhSachNhanVien) {
    cout << "Ma NV: " << nhanVien->GetMaNV() << endl;
    cout << "Ho ten: " << nhanVien->GetHoTen() << endl;
    cout << "Dia chi: " << nhanVien->GetDiaChi() << endl;
    cout << "So DT: " << nhanVien->GetSoDT() << endl;
    cout << "Ngay ky hop dong: " << nhanVien->GetNgayKyHopDong() << endl;
    cout << endl;
  }
}

void NhapDanhSachNhanVien(vector<NhanVienBanHang *> &danhSachNhanVien) {
  int n;
  cout << "Nhap so luong nhan vien: ";
  cin >> n;

  for (int i = 0; i < n; i++) {
    NhanVienBanHang *nhanVien = new NhanVienBanHang();

    nhanVien->SetMaNV(i + 1);

    cout << "Nhap ho ten: ";
    string hoTen;
    cin.ignore();
    getline(cin , hoTen);
    nhanVien->SetHoTen(hoTen);

    cout << "Nhap dia chi: ";
    string diaChi;
    getline(cin , diaChi);
    nhanVien->SetDiaChi(diaChi);

    cout << "Nhap so DT: ";
    string soDT;
    cin >> soDT;
    nhanVien->SetSoDT(soDT);

    cout << "Nhap ngay ki hop dong: ";
    string ngayKyHopDong;
    cin >> ngayKyHopDong;
    cout << endl; 
    nhanVien->SetNgayKyHopDong(ngayKyHopDong);

    danhSachNhanVien.push_back(nhanVien);
  }
}

void LapDanhSachBanHang(vector<NhanVienBanHang *> &danhSachNhanVien, vector<MatHang *> &danhSachMatHang, vector<BangDanhSachBanHang *> &danhSachBangDanhSachBanHang) {
  for (NhanVienBanHang *nhanVien : danhSachNhanVien) {
    vector<MatHang *> danhSachMatHangNhanVien;
    for (MatHang *matHang : danhSachMatHang) {
      bool coBan = false;
      for (BangDanhSachBanHang *bangDanhSachBanHang : danhSachBangDanhSachBanHang) {
        if (bangDanhSachBanHang->GetMaNV() == nhanVien->GetMaNV() && bangDanhSachBanHang->GetMaHang() == matHang->GetMaHang()) {
          coBan = true;
          break;
        }
      }

      if (!coBan) {
        danhSachMatHangNhanVien.push_back(matHang);
      }
    }

    if (danhSachMatHangNhanVien.size() <= 5) {
      for (MatHang *matHang : danhSachMatHangNhanVien) {
        BangDanhSachBanHang *bangDanhSachBanHang = new BangDanhSachBanHang();
        bangDanhSachBanHang->SetMaNV(nhanVien->GetMaNV());
        bangDanhSachBanHang->SetMaHang(matHang->GetMaHang());
        bangDanhSachBanHang->SetSoLuong(1);
        danhSachBangDanhSachBanHang.push_back(bangDanhSachBanHang);
      }
    } else {
    }
  }
}

void InDanhSachBangDanhSachBanHang(vector<BangDanhSachBanHang *> &danhSachBangDanhSachBanHang) {
  for (BangDanhSachBanHang *bangDanhSachBanHang : danhSachBangDanhSachBanHang) {
    cout << "Ma NV: " << bangDanhSachBanHang->GetMaNV() << endl;
    cout << "Ma hang: " << bangDanhSachBanHang->GetMaHang() << endl;
    cout << "So luong: " << bangDanhSachBanHang->GetSoLuong() << endl;
    cout << endl;
  }
}

void TinhDoanhThuChoMoiNhanVien(vector<BangDanhSachBanHang *> &danhSachBangDanhSachBanHang, vector<NhanVienBanHang *> &danhSachNhanVien, vector<MatHang *> &danhSachMatHang) {
  vector<int> danhSachDoanhThu;

  for (BangDanhSachBanHang *bangDanhSachBanHang : danhSachBangDanhSachBanHang) {
    NhanVienBanHang *nhanVien = NULL;
    for (NhanVienBanHang *nhanVien1 : danhSachNhanVien) {
      if (nhanVien1->GetMaNV() == bangDanhSachBanHang->GetMaNV()) {
        nhanVien = nhanVien1;
        break;
      }
    }

    MatHang *matHang = NULL;
    for (MatHang *matHang1 : danhSachMatHang) {
      if (matHang1->GetMaHang() == bangDanhSachBanHang->GetMaHang()) {
        matHang = matHang1;
        break;
      }
    }

    if (nhanVien != NULL && matHang != NULL) {
      float doanhThu = bangDanhSachBanHang->GetSoLuong() * matHang->GetGiaBan();
      danhSachDoanhThu.push_back(doanhThu);

      cout << "Doanh thu: " << nhanVien->GetHoTen() << ": " << doanhThu << endl;
    }
  }

  float totalRevenue = 0;
  for (float doanhThu : danhSachDoanhThu) {
    totalRevenue += doanhThu;
  }

  cout << "Tang doanh thu: " << totalRevenue << endl;
}

int main() {
  vector<MatHang *> danhSachMatHang;
  vector<NhanVienBanHang *> danhSachNhanVien;
  vector<BangDanhSachBanHang *> danhSachBangDanhSachBanHang;

  NhapDanhSachMatHang(danhSachMatHang);
  NhapDanhSachNhanVien(danhSachNhanVien);

  LapDanhSachBanHang(danhSachNhanVien, danhSachMatHang, danhSachBangDanhSachBanHang);

  InDanhSachMatHang(danhSachMatHang);
  InDanhSachNhanVien(danhSachNhanVien);
  InDanhSachBangDanhSachBanHang(danhSachBangDanhSachBanHang);

  TinhDoanhThuChoMoiNhanVien(danhSachBangDanhSachBanHang, danhSachNhanVien, danhSachMatHang);

  for (MatHang *matHang : danhSachMatHang) {
    delete matHang;
  }

  for (NhanVienBanHang *nhanVien : danhSachNhanVien) {
    delete nhanVien;
  }

  for (BangDanhSachBanHang *bangDanhSachBanHang : danhSachBangDanhSachBanHang) {
    delete bangDanhSachBanHang;
  }

  return 0;
}
