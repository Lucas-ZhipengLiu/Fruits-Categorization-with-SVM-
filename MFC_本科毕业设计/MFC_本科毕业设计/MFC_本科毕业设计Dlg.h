
// MFC_本科毕业设计Dlg.h : 头文件
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


// CMFC_本科毕业设计Dlg 对话框
class CMFC_本科毕业设计Dlg : public CDialogEx
{
// 构造
public:
	CMFC_本科毕业设计Dlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFC__DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
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
