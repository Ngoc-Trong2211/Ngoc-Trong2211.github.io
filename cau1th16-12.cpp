#include<bits/stdc++.h>

using namespace std;

class NGUOI {
	private:
		string hoten;
		int tuoi;
		string diachi;
	public:
		NGUOI(){}
		NGUOI(string Hoten, int Tuoi, string Diachi){
			hoten = Hoten;
			tuoi = Tuoi;
			diachi = Diachi;
		}
		
		int getTuoi() const {
        	return tuoi;
    	}
		
		void nhap(){
			cout << "Nhap ho ten: " ;
			cin.ignore();
			getline (cin, hoten);
			cout << "Nhap tuoi: "; cin >> tuoi;
			cout << "Nhap dia chi: "; cin.ignore();
			getline (cin, diachi);
		}
		
		virtual void xuat(){
            cout << endl << "Ho ten bac si la: " << hoten << endl;
            cout << "Tuoi cua bac si la: " << tuoi << endl;
            cout << "Dia chi cua bac si la: " << diachi << endl;
        }
};

class BACSI : public NGUOI{
	private:
		string MaBS;
		double songaylamviec;
		double tiencong;
	public:
		BACSI() : NGUOI(){}
		BACSI(string Hoten, int Tuoi, string Diachi, string MBS, double Songaylamviec, double Tiencong) : NGUOI(Hoten, Tuoi, Diachi){
			MaBS = MBS;
			songaylamviec = Songaylamviec;
			tiencong = Tiencong;
		}
		
		double getSoNgayLamViec(){
			return songaylamviec;
		} 
		
		void nhap(){
			NGUOI::nhap();
			cout << "Nhap ma bac si: " ;
			getline (cin, MaBS) ;
			cout << "Nhap so ngay lam viec: "; cin >> songaylamviec;
			cout << "Nhap tien cong/ngay: "; cin >> tiencong;
		}
		
		void xuat() override {
            NGUOI::xuat();
            cout << "Ma bac si la: " << MaBS << endl;
            cout << "So ngay lam viec cua bac si la: " << songaylamviec << endl;
            cout << "Tien cong/ngay cua bac si la: " << tiencong << endl;
            cout << "Tien cong thang: " << tiencongthang() << endl;
        }
		
		double tiencongthang(){
			return songaylamviec*tiencong;
		}
};

int main(){
	int n;
	cout << "Nhap so luong nguoi: ";
	cin >> n;

	// Khai bao mang chua danh sach nguoi
	NGUOI *nguoi[n];
	BACSI *bacsi[n];

	// Nhap thong tin cho nguoi
	for (int i = 0; i < n; i++) {
        int loai;
        cout << "Ban muon nhap thong tin cho BENH NHAN hay BAC SI (1/2)? ";
        cin >> loai;

        switch (loai) {
            case 1: {
                NGUOI *benhNhan = new NGUOI;
                benhNhan->nhap();
                nguoi[i] = benhNhan;
                break;
            }
            case 2: {
                BACSI *bacSi = new BACSI;
                bacSi->nhap();
                nguoi[i] = bacSi;
                break;
            }
        }
    }

	// Xuat thong tin danh sach nguoi
for (int i = 0; i < n; i++)
{
    nguoi[i]->xuat();
}


	// Tim danh sach benh nhan co tuoi <= 10
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (nguoi[i]->getTuoi() <= 10)
		{
			count++;
		}
	}

	// Khai bao mang chua danh sach benh nhan co tuoi <= 10
	NGUOI *benhNhanList[count];
	int index = 0;
	for (int i = 0; i < n; i++)
	{
		if (nguoi[i]->getTuoi() <= 10)
		{
			benhNhanList[index++] = nguoi[i];
		}
	}

	// Xuat thong tin danh sach benh nhan co tuoi <= 10
	cout << "Danh sach benh nhan co tuoi <= 10: " << endl;
	for (int i = 0; i < count; i++)
	{
		benhNhanList[i]->xuat();
	}

	// Tim bac si co so ngay lam viec nhieu nhat
	BACSI *maxBacSi = NULL;
	for (int i = 0; i < n; i++)
	{
		if (maxBacSi == NULL || bacsi[i]->getSoNgayLamViec() > maxBacSi->getSoNgayLamViec())
		{
			maxBacSi = dynamic_cast<BACSI *>(bacsi[i]);
		}
	}

	// Xuat thong tin bac si co so ngay lam viec nhieu nhat
	cout << "Bac si co so ngay lam viec nhieu nhat: " << endl;
	maxBacSi->xuat();
	
	for (int i = 0; i < n; i++)
{
    delete nguoi[i];
    delete bacsi[i];
}

	
	return 0;
}
