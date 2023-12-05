#include <bits/stdc++.h>

using namespace std;

class Logging {
public:
    static void log(const string& message) {
        cout << "log" << message << endl;
    }
};

class Matrix {
private:
    int rows;
    int cols;
    int** data;

public:
    Matrix(int rows, int cols) : rows(rows), cols(cols) {
        data = new int*[rows];
        for (int i = 0; i < rows; ++i) {
            data[i] = new int[cols];
        }
    }

    ~Matrix() {
        for (int i = 0; i < rows; ++i) {
            delete[] data[i];
        }
        delete[] data;
    }

    Matrix operator+(const Matrix& other) const {
        Logging::log("Cong");

        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result.data[i][j] = data[i][j] + other.data[i][j];
            }
        }
        return result;
    }

    Matrix operator-(const Matrix& other) const {
        Logging::log("Tru");

        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result.data[i][j] = data[i][j] - other.data[i][j];
            }
        }
        return result;
    }

    Matrix operator*(const Matrix& other) const {
        Logging::log("Nhan");

        Matrix result(rows, other.cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < other.cols; ++j) {
                for (int k = 0; k < cols; ++k) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }
        return result;
    }

    Matrix operator/(const Matrix& other) const {
        Logging::log("Chia");

        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result.data[i][j] = data[i][j] / other.data[i][j];
            }
        }
        return result;
    }

    void inputMatrix() {
        cout << "Nhap:" << endl;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cin >> data[i][j];
            }
        }
    }
    void print() const {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << data[i][j] << ' ';
            }
            cout << endl;
        }
    }
};

int main() {
    int rows1, cols1, rows2, cols2;
    cout << "Ma tran 1: ";
    cin >> rows1 >> cols1;

    cout << "Ma tran 2: ";
    cin >> rows2 >> cols2;
    
    Matrix matrix1(rows1, cols1);
    Matrix matrix2(rows2, cols2);

    matrix1.inputMatrix();
    matrix2.inputMatrix();

    if (rows1 != rows2 || cols1 != cols2) {
cerr << "Khong cong tru dc" << endl;
    }else{
    	(matrix1 + matrix2).print();
    	(matrix1 - matrix2).print();
	}
	 if (rows1 != cols2) {
        cerr << "Khong chia va nhan dc" << endl;
    }else{
    (matrix1 * matrix2).print();
    (matrix1 / matrix2).print();
	}

    return 0;
}
