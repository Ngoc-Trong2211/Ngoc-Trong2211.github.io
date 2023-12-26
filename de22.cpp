#include<bits/stdc++.h>

using namespace std;

class CongNhan
{
private:
    int maCongNhan;
    string hoTen;
    string diaChi;
    string soDT;
    int bacTho;

public:
    CongNhan()
    {
        maCongNhan = 10000;
    }

    CongNhan(int maCongNhan, string hoTen, string diaChi, string soDT, int bacTho)
    {
        this->maCongNhan = maCongNhan;
        this->hoTen = hoTen;
        this->diaChi = diaChi;
        this->soDT = soDT;
        this->bacTho = bacTho;
    }

    void setMaCongNhan(int maCongNhan)
    {
        this->maCongNhan = maCongNhan;
    }

    int getMaCongNhan() const
    {
        return maCongNhan;
    }

    void setHoTen(string hoTen)
    {
        this->hoTen = hoTen;
    }

    string getHoTen()
    {
        return hoTen;
    }

    void setDiaChi(string diaChi)
    {
        this->diaChi = diaChi;
    }

    string getDiaChi()
    {
        return diaChi;
    }

    void setSoDT(string soDT)
    {
        this->soDT = soDT;
    }

    string getSoDT()
    {
        return soDT;
    }

    void setBacTho(int bacTho)
    {
        this->bacTho = bacTho;
    }

    int getBacTho()
    {
        return bacTho;
    }
};

class XuongSanXuat
{
private:
    int maXuong;
    string tenXuong;
    string moTa;
    float heSoCongViec;

public:
    XuongSanXuat()
    {
        maXuong = 100;
    }

    XuongSanXuat(int maXuong, string tenXuong, string moTa, float heSoCongViec)
    {
        this->maXuong = maXuong;
        this->tenXuong = tenXuong;
        this->moTa = moTa;
        this->heSoCongViec = heSoCongViec;
    }

    void setMaXuong(int maXuong)
    {
        this->maXuong = maXuong;
    }

    int getMaXuong() const
    {
        return maXuong;
    }

    void setTenXuong(string tenXuong)
    {
        this->tenXuong = tenXuong;
    }

    string getTenXuong()
    {
        return tenXuong;
    }

    void setMoTa(string moTa)
    {
        this->moTa = moTa;
    }

    string getMoTa()
    {
        return moTa;
    }

    void setHeSoCongViec(float heSoCongViec)
    {
        this->heSoCongViec = heSoCongViec;
    }

    float getHeSoCongViec()
    {
        return heSoCongViec;
    }
};
  
class BangDanhSachChamCong{
private:
    int maCongNhan;
    int maXuong;
    int soNgayLam;

public:
    BangDanhSachChamCong()
    {
        maCongNhan = 0;
        maXuong = 0;
        soNgayLam = 0;
    }

    BangDanhSachChamCong(int maCongNhan, int maXuong, int soNgayLam)
    {
        this->maCongNhan = maCongNhan;
        this->maXuong = maXuong;
        this->soNgayLam = soNgayLam;
    }

	string getTenCongNhan() const {
        return "Ten Cong Nhan";
	}
	
    void setMaCongNhan(int maCongNhan)
    {
        this->maCongNhan = maCongNhan;
    }

    int getMaCongNhan() const
    {
        return maCongNhan;
    }

    void setMaXuong(int maXuong)
    {
        this->maXuong = maXuong;
    }

    int getMaXuong() const
    {
        return maXuong;
    }

    void setSoNgayLam(int soNgayLam)
    {
        this->soNgayLam = soNgayLam;
    }

    int getSoNgayLam() const
    {
        return soNgayLam;
    }

};

void nhapDanhSachCongNhan(vector<CongNhan>& dsCongNhan)
{
    int n;
    cout << "Nhap so luong cong nhan: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        CongNhan c;
        int maCongNhan;
        cout << "Nhap ma cong nhan: ";
        cin >> maCongNhan;
        c.setMaCongNhan(maCongNhan);
        string hoTen;
        cout << "Nhap ho ten: ";
        cin.ignore(); 
        getline(cin, hoTen);
        c.setHoTen(hoTen);
        string diaChi;
        cout << "Nhap dia chi: ";
        getline(cin, diaChi);
        c.setDiaChi(diaChi);
        string soDT;
        cout << "Nhap so dien thoai: ";
        getline(cin, soDT);
        c.setSoDT(soDT);
        int bacTho;
        cout << "Nhap bac tho: ";
        cin >> bacTho;
        c.setBacTho(bacTho);

        dsCongNhan.push_back(c);
    }
}

void nhapDanhSachXuongSanXuat(vector<XuongSanXuat>& dsXuong)
{
    int n;
    cout << "Nhap so luong xuong san xuat: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        XuongSanXuat x;
        int maXuong;
        cout << "Nhap ma xuong: ";
        cin >> maXuong;
        x.setMaXuong(maXuong);

        string tenXuong;
        cout << "Nhap ten xuong: ";
        cin.ignore();
        getline(cin, tenXuong);
        x.setTenXuong(tenXuong);

        string moTa;
        cout << "Nhap mo ta: ";
        getline(cin, moTa);
        x.setMoTa(moTa);

        float heSoCongViec;
        cout << "Nhap he so cong viec: ";
        cin >> heSoCongViec;
        x.setHeSoCongViec(heSoCongViec);


        dsXuong.push_back(x);
    }
}



void xuatDanhSachCongNhan(vector<CongNhan>& dsCongNhan)
{
    cout << "-----------------------------------Danh sach cong nhan-----------------------------------" << endl;
	cout << left << setw(15) << "Ma cong nhan" << "|"
				 << setw(20) << "Ho ten" << "|"
				 << setw(25) << "Dia chi" << "|"
				 << setw(20) << "So dien thoai" << "|"
				 << setw(10) << "Bac tho" << endl;
    for (int i = 0; i < dsCongNhan.size(); i++)
    {
    	cout << left << setw(15) << dsCongNhan[i].getMaCongNhan() << "|"
					 << setw(20) << dsCongNhan[i].getHoTen() << "|"
					 << setw(25) << dsCongNhan[i].getDiaChi() << "|"
					 << setw(20) << dsCongNhan[i].getSoDT() << "|"
					 << setw(10) << dsCongNhan[i].getBacTho() << endl;
        cout << endl;  
    }
}


void xuatDanhSachXuongSanXuat(vector<XuongSanXuat>& dsXuong)
{
    cout << "---------------------------------Danh sach xuong san xuat---------------------------------" << endl;
    cout << left << setw(15) << "Ma xuong" << "|"
				 << setw(20) << "Ten xuong" << "|"
				 << setw(30) << "Mo ta" << "|"
				 << setw(15) << "He so cong viec" << endl;


    for (int i = 0; i < dsXuong.size(); i++)
    {
    	cout << left << setw(15) << dsXuong[i].getMaXuong() << "|"
					 << setw(20) << dsXuong[i].getTenXuong() << "|"
					 << setw(30) << dsXuong[i].getMoTa() << "|"
					 << setw(15) << dsXuong[i].getHeSoCongViec() << endl;
        
    }
}

void lapBangChamCong(const vector<CongNhan>& dsCongNhan, const vector<XuongSanXuat>& dsXuong, vector<BangDanhSachChamCong>& dsChamCong)
{
    for (const auto& congNhan : dsCongNhan)
    {
        for (const auto& xuong : dsXuong)
        {
            int soNgayLam;
            cout << "Nhap so ngay lam viec cho cong nhan " << congNhan.getMaCongNhan()
                 << " tai xuong " << xuong.getMaXuong() << ": ";
            cin >> soNgayLam;

            BangDanhSachChamCong bangChamCong(congNhan.getMaCongNhan(), xuong.getMaXuong(), soNgayLam);
            dsChamCong.push_back(bangChamCong);
        }
    }
}


void xuatDanhSachChamCong(const vector<BangDanhSachChamCong>& dsChamCong)
{
    cout << left << setw(15) << "Ma cong nhan" << "|"
				 << setw(15) << "Ma xuong" << "|"
				 << setw(15) << "So ngay lam" << endl;

    for (const auto& chamCong : dsChamCong)
    {
        cout << left << setw(15) << chamCong.getMaCongNhan() <<"|"
					 << setw(15) << chamCong.getMaXuong() << "|"
					 << setw(15) << chamCong.getSoNgayLam() << endl;
    }
}

bool compareTheoTen(const BangDanhSachChamCong& a, const BangDanhSachChamCong& b)
{
    return a.getTenCongNhan() < b.getTenCongNhan();
}

bool compareTheoXuong(const BangDanhSachChamCong& a, const BangDanhSachChamCong& b)
{
    return a.getMaXuong() < b.getMaXuong();
}

int main(){
	
    vector<CongNhan> dsCongNhan;
    vector<XuongSanXuat> dsXuong;
    vector<BangDanhSachChamCong> dsChamCong;

    nhapDanhSachCongNhan(dsCongNhan);

    nhapDanhSachXuongSanXuat(dsXuong);

    xuatDanhSachCongNhan(dsCongNhan);

    xuatDanhSachXuongSanXuat(dsXuong);
    
    lapBangChamCong(dsCongNhan, dsXuong, dsChamCong);

	cout << "Danh sach cham cong truoc khi sap xep:" << endl;
    xuatDanhSachChamCong(dsChamCong);

    // sx theo ten
    sort(dsChamCong.begin(), dsChamCong.end(), compareTheoTen);

    cout << "\nDanh sach cham cong sau khi sap xep theo ten cong nhan:" << endl;
    xuatDanhSachChamCong(dsChamCong);
	
	// sx theo xuong
	sort(dsChamCong.begin(), dsChamCong.end(), compareTheoXuong);

    cout << "\nDanh sach cham cong sau khi sap xep theo xuong:" << endl;
    xuatDanhSachChamCong(dsChamCong);
	
    return 0;
}








