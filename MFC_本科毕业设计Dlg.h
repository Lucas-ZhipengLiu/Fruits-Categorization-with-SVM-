
// MFC_���Ʊ�ҵ���Dlg.h : ͷ�ļ�
//
#include "opencv2/highgui.hpp"
#include "opencv2/core.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/opencv.hpp"
#include "opencv2/ml.hpp"
#include "opencv2/imgcodecs.hpp"

using namespace cv;
using namespace cv::ml;
using namespace std;

#pragma once


// CMFC_���Ʊ�ҵ���Dlg �Ի���
class CMFC_���Ʊ�ҵ���Dlg : public CDialogEx
{
// ����
public:
	CMFC_���Ʊ�ҵ���Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFC__DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	int begin_bg;
	double B_0;
	double B_1;
	double B_2;
	double G_0;
	double G_1;
	double G_2;
	double R_0;
	double R_1;
	double R_2;
	double Area_0;
	double Area_1;
	double Area_2;
	double Perimeter_0;
	double Perimeter_1;
	double Perimeter_2;
	double Radian_0;
	double Radian_1;
	double Radian_2;
	double Result_0;
	CString Result_1;
	CString Result_00;
	CString Result_2;
	CString cout_string;
	afx_msg void OnBnClickedButton1();
	void imshow_s(Mat img, int a, string view);
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
};
