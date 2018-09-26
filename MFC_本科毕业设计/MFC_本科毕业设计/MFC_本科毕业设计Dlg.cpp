
// MFC_本科毕业设计Dlg.cpp : 实现文件
//

#include "stdafx.h"
#include "MFC_本科毕业设计.h"
#include "MFC_本科毕业设计Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CMFC_本科毕业设计Dlg 对话框



CMFC_本科毕业设计Dlg::CMFC_本科毕业设计Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_MFC__DIALOG, pParent)
	, begin_bg(0)
	, B_0(0)
	, B_1(0)
	, B_2(0)
	, G_0(0)
	, G_1(0)
	, G_2(0)
	, R_0(0)
	, R_1(0)
	, R_2(0)
	, Area_0(0)
	, Area_1(0)
	, Area_2(0)
	, Perimeter_0(0)
	, Perimeter_1(0)
	, Perimeter_2(0)
	, Radian_0(0)
	, Radian_1(0)
	, Radian_2(0)
	, Result_0(0)
	, Result_1(_T(""))
	, Result_00(_T(""))
	, Result_2(_T(""))
	, cout_string(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFC_本科毕业设计Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT23, begin_bg);
	DDX_Text(pDX, IDC_EDIT1, B_0);
	DDX_Text(pDX, IDC_EDIT2, B_1);
	DDX_Text(pDX, IDC_EDIT3, B_2);
	DDX_Text(pDX, IDC_EDIT5, G_0);
	DDX_Text(pDX, IDC_EDIT4, G_1);
	DDX_Text(pDX, IDC_EDIT6, G_2);
	DDX_Text(pDX, IDC_EDIT8, R_0);
	DDX_Text(pDX, IDC_EDIT9, R_1);
	DDX_Text(pDX, IDC_EDIT7, R_2);
	DDX_Text(pDX, IDC_EDIT12, Area_0);
	DDX_Text(pDX, IDC_EDIT11, Area_1);
	DDX_Text(pDX, IDC_EDIT10, Area_2);
	DDX_Text(pDX, IDC_EDIT15, Perimeter_0);
	DDX_Text(pDX, IDC_EDIT14, Perimeter_1);
	DDX_Text(pDX, IDC_EDIT13, Perimeter_2);
	DDX_Text(pDX, IDC_EDIT18, Radian_0);
	DDX_Text(pDX, IDC_EDIT17, Radian_1);
	DDX_Text(pDX, IDC_EDIT16, Radian_2);
	DDX_Text(pDX, IDC_EDIT19, Result_0);
	DDX_Text(pDX, IDC_EDIT20, Result_1);
	DDX_Text(pDX, IDC_EDIT24, Result_00);
	DDX_Text(pDX, IDC_EDIT21, Result_2);
	DDX_Text(pDX, IDC_EDIT22, cout_string);
}

BEGIN_MESSAGE_MAP(CMFC_本科毕业设计Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CMFC_本科毕业设计Dlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CMFC_本科毕业设计Dlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CMFC_本科毕业设计Dlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CMFC_本科毕业设计Dlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &CMFC_本科毕业设计Dlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &CMFC_本科毕业设计Dlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &CMFC_本科毕业设计Dlg::OnBnClickedButton7)
END_MESSAGE_MAP()


// CMFC_本科毕业设计Dlg 消息处理程序

BOOL CMFC_本科毕业设计Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	namedWindow("view1", WINDOW_AUTOSIZE);//生成 OpenCV 自带窗口
	HWND hWnd = (HWND)cvGetWindowHandle("view1");// 获取窗口句柄
	HWND hParent = ::GetParent(hWnd);//获取父句柄
	::SetParent(hWnd, GetDlgItem(IDC_STATIC1)->m_hWnd);//设置为图片控件父句柄，图片控件ID为 IDC_STATIC1
	::ShowWindow(hParent, SW_HIDE);//隐藏 OpenCV 创建的窗口

	namedWindow("view2", WINDOW_AUTOSIZE);
	HWND hWnd2 = (HWND)cvGetWindowHandle("view2");
	HWND hParent2 = ::GetParent(hWnd2);
	::SetParent(hWnd2, GetDlgItem(IDC_STATIC2)->m_hWnd);
	::ShowWindow(hParent2, SW_HIDE);

	namedWindow("view3", WINDOW_AUTOSIZE);
	HWND hWnd3 = (HWND)cvGetWindowHandle("view3");
	HWND hParent3 = ::GetParent(hWnd3);
	::SetParent(hWnd3, GetDlgItem(IDC_STATIC3)->m_hWnd);
	::ShowWindow(hParent3, SW_HIDE);

	namedWindow("view4", WINDOW_AUTOSIZE);
	HWND hWnd4 = (HWND)cvGetWindowHandle("view4");
	HWND hParent4 = ::GetParent(hWnd4);
	::SetParent(hWnd4, GetDlgItem(IDC_STATIC4)->m_hWnd);
	::ShowWindow(hParent4, SW_HIDE);


	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CMFC_本科毕业设计Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CMFC_本科毕业设计Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CMFC_本科毕业设计Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CMFC_本科毕业设计Dlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	int count = 0;
	Mat frame, frame_video, frame_copy, dst2;
	Mat draw;
	VideoCapture capture;
	capture.open(1);
	capture >> frame;
	Mat imgAll = Mat::zeros(frame.rows, frame.cols, CV_32FC1);
	Mat imgAll2 = Mat::zeros(frame.rows, frame.cols, CV_8UC1);
	begin_bg = 0;

	while (true)
	{
		string str1 = "view1";
		capture >> frame_video;
		imshow_s(frame_video, IDC_STATIC1, str1);
		if (begin_bg == 0 || begin_bg == 2)
		{
			if (begin_bg == 0)
			{
				cout_string = " ....................... \r\n 摄像头打开成功！";
				UpdateData(FALSE);
			}
			Result_00 = "0";
			Result_1 = "0";
			Result_2 = "0";
			waitKey(30);
		}
		//按下按钮 建立背景模型
		if (count < 30 && begin_bg == 1)//前30帧，用于建立背景模型
		{
			vector<Mat>color;
			capture >> frame;
			blur(frame, frame, Size(3, 3));
			split(frame, color);
			color[0].convertTo(color[0], CV_32FC1);

			for (int i = 0; i < frame.rows; i++)//通过遍历图像所有像素点进行图像累加
			{
				for (int j = 0; j < frame.cols; j++)
				{
					//像素点累加
					imgAll.at<float>(i, j) = imgAll.at<float>(i, j) + color[0].at<float>(i, j);
				}
			}
			waitKey(30);
		}
		if (count == 30 && begin_bg == 1)//等于30帧时，求累加后图像的平均值作为背景模型
		{
			for (int i = 0; i < frame.rows; i++)//遍历图像所有像素点
			{
				for (int j = 0; j < frame.cols; j++)
				{
					imgAll.at<float>(i, j) = imgAll.at<float>(i, j) / count;//求平均值
				}
			}
			cout_string = " ....................... \r\n 摄像头打开成功！\r\n ....................... \r\n 背景模型建立成功！";
			UpdateData(FALSE);
			begin_bg = 2;
		}

		//按下按钮 提取前景目标
		if (count > 30 && begin_bg == 3)//超过30帧，背景模型建立结束，寻找目标物体
		{
			Mat diff(480, 640, CV_32FC1), canny, dst, dst2;
			vector<Mat>color_new;
			capture >> frame;
			blur(frame, frame, Size(3, 3));
			split(frame, color_new);
			color_new[0].convertTo(color_new[0], CV_32FC1);
			absdiff(imgAll, color_new[0], diff);

			//通过图像像素遍历法做差，若超出设定阙值，则认定为目标物体
			for (int i = 0; i < frame.rows; i++)
			{
				for (int j = 0; j < frame.cols; j++)
				{
					if (diff.at<float>(i, j) < 90)//阙值此时设定为90
						diff.at<float>(i, j) = 0.0;//背景设置为黑色
					else
						diff.at<float>(i, j) = 255.0;//目标物体设置为白色
				}
			}

			diff.convertTo(frame, CV_8UC1);
			string str2 = "view2";
			imshow_s(frame, IDC_STATIC2, str2);
			cout_string = " ....................... \r\n 摄像头打开成功！\r\n ....................... \r\n 背景模型建立成功！ \r\n ....................... \r\n 找到目标物体！";
			UpdateData(FALSE);
			begin_bg = 2;
		}

		if (count > 30 && begin_bg == 4)
		{
			//imshow("1", frame);
			string str3 = "view3";
			Mat dst;
			Mat element1 = getStructuringElement(MORPH_ELLIPSE, Size(30, 30));
			morphologyEx(frame, dst, MORPH_CLOSE, element1);

			Mat element2 = getStructuringElement(MORPH_ELLIPSE, Size(20, 20));
			morphologyEx(dst, dst2, MORPH_OPEN, element2);
			imshow_s(dst2, IDC_STATIC3, str3);
			cout_string = " ....................... \r\n 摄像头打开成功！\r\n ....................... \r\n 背景模型建立成功！ \r\n ....................... \r\n 找到目标物体！ \r\n ....................... \r\n 形态学处理完成！";
			UpdateData(FALSE);
			begin_bg = 2;
			//imshow("形态学处理后", dst2);
		}

		if (count > 30 && begin_bg == 5)
		{
			Mat canny;
			Canny(dst2, canny, 30, 60);
			//imshow("canny", canny);

			vector<vector<Point>> contours;
			vector<Vec4i> hierarchy;
			findContours(canny, contours, hierarchy, CV_RETR_EXTERNAL, CV_CHAIN_APPROX_NONE);
			Vec<double, 5> Area;//形状特征参数初始化
			Vec<double, 5> Perimeter;
			Vec<double, 5> Radian;

			//findContours(canny, contours, hierarchy, CV_RETR_EXTERNAL, CV_CHAIN_APPROX_NONE);

			draw = Mat::zeros(dst2.rows, dst2.cols, CV_8UC3);
			for (int index = 0; index<contours.size(); index++)
			{

				if (index == 0)//目标物体1
				{
					Scalar color(255, 0, 0);//纯蓝色标记
					drawContours(draw, contours, index, color, CV_FILLED, 8);
				}
				if (index == 1)//目标物体2
				{
					Scalar color(0, 255, 0);//纯绿色标记
					drawContours(draw, contours, index, color, CV_FILLED, 8);
				}
				if (index == 2)//目标物体3
				{
					Scalar color(0, 0, 255);//纯红色标记
					drawContours(draw, contours, index, color, CV_FILLED, 8);
				}

				Area[index] = contourArea(contours[index]);//求取形状特征参数
				Perimeter[index] = arcLength(contours[index], true);
				Radian[index] = 4 * 3.14*Area[index] / (Perimeter[index] * Perimeter[index]);//弧度 = 4π*面积/周长^2
			}
			//imshow("draw", draw);

			//提取颜色特征
			double B0 = 0.0, G0 = 0.0, R0 = 0.0, Sum0 = 0.0;//初始化特征参数
			double B1 = 0.0, G1 = 0.0, R1 = 0.0, Sum1 = 0.0;
			double B2 = 0.0, G2 = 0.0, R2 = 0.0, Sum2 = 0.0;
			for (int x = 0; x<draw.rows; x++)//遍历所有行数
			{
				for (int y = 0; y<draw.cols; y++)//遍历所有列数
				{
					for (int c = 0; c<3; c++)//遍历所有通道数
					{
						if (draw.at<Vec3b>(x, y)[c]>250)//判定是否为目标物体位置
						{
							if (c == 0)//目标物体1
							{
								//提取原摄像头图像对应位置下的颜色参数
								B0 = B0 + frame_video.at<Vec3b>(x, y)[0];
								G0 = G0 + frame_video.at<Vec3b>(x, y)[1];
								R0 = R0 + frame_video.at<Vec3b>(x, y)[2];
							}
							if (c == 1)//目标物体2
							{
								B1 = B1 + frame_video.at<Vec3b>(x, y)[0];
								G1 = G1 + frame_video.at<Vec3b>(x, y)[1];
								R1 = R1 + frame_video.at<Vec3b>(x, y)[2];
							}
							if (c == 2)//目标物体3
							{
								B2 = B2 + frame_video.at<Vec3b>(x, y)[0];
								G2 = G2 + frame_video.at<Vec3b>(x, y)[1];
								R2 = R2 + frame_video.at<Vec3b>(x, y)[2];
							}
						}
					}
				}
			}
			Sum0 = B0 + G0 + R0;//物体1总像素值
			if (Sum0 >10000)
			{
				B0 = B0 / Sum0;//物体1最终颜色信息参数
				G0 = G0 / Sum0;
				R0 = R0 / Sum0;
			}

			Sum1 = B1 + G1 + R1;//物体2总像素值
			if (Sum1 >10000)
			{
				B1 = B1 / Sum1;//物体2最终颜色信息参数
				G1 = G1 / Sum1;
				R1 = R1 / Sum1;
			}

			Sum2 = B2 + G2 + R2;//物体3总像素值
			if (Sum2 >10000)
			{
				B2 = B2 / Sum2;//物体3最终颜色信息参数
				G2 = G2 / Sum2;
				R2 = R2 / Sum2;
			}
			B_0 = B0; G_0 = G0; R_0 = R0; Area_0 = Area[0]; Perimeter_0 = Perimeter[0]; Radian_0 = Radian[0];
			B_1 = B1; G_1 = G1; R_1 = R1; Area_1 = Area[1]; Perimeter_1 = Perimeter[1]; Radian_1 = Radian[1];
			B_2 = B2; G_2 = G2; R_2 = R2; Area_2 = Area[2]; Perimeter_2 = Perimeter[2]; Radian_2 = Radian[2];
			cout_string = " ....................... \r\n 摄像头打开成功！\r\n ....................... \r\n 背景模型建立成功！ \r\n ....................... \r\n 找到目标物体！ \r\n ....................... \r\n 形态学处理完成！ \r\n ....................... \r\n 特征参数提取成功！";
			UpdateData(FALSE);
			begin_bg = 2;
		}

		if (count > 30 && begin_bg == 6)
		{
			frame_copy = frame_video;
			vector<Mat> channels;
			split(frame_copy, channels);
			for (int x = 0; x<draw.rows; x++)//遍历所有行数
			{
				for (int y = 0; y<draw.cols; y++)//遍历所有列数
				{
					if (draw.at<Vec3b>(x, y)[0] < 10 && draw.at<Vec3b>(x, y)[1] < 10 && draw.at<Vec3b>(x, y)[2] < 10)
					{
						channels[0].at<uchar>(x, y) = 0;
						channels[1].at<uchar>(x, y) = 0;
						channels[2].at<uchar>(x, y) = 0;
					}
				}
			}
			string str4 = "view4";
			merge(channels, frame_copy);
			imshow_s(frame_copy, IDC_STATIC4, str4);
			cout_string = " ....................... \r\n 摄像头打开成功！\r\n ....................... \r\n 背景模型建立成功！ \r\n ....................... \r\n 找到目标物体！ \r\n ....................... \r\n 形态学处理完成！ \r\n ....................... \r\n 特征参数提取成功！ \r\n ....................... \r\n 目标还原成功！";
			UpdateData(FALSE);
			begin_bg = 2;
		}

		if (count > 30 && begin_bg == 7)
		{
			//CvSVM svm;
			Ptr<SVM> svm = SVM::create();
			svm->load("svmdata.xml");

			FileStorage fs("other.xml", FileStorage::READ);
			Mat Min;
			fs["Min"] >> Min;
			Mat Max;
			fs["Max"] >> Max;

			Mat feature1 = Mat::zeros(1, 6, CV_32FC1);
			feature1.col(0) = B_0;
			feature1.col(1) = G_0;
			feature1.col(2) = R_0;
			feature1.col(3) = Area_0;
			feature1.col(4) = Perimeter_0;
			feature1.col(5) = Radian_0;

			Mat feature2 = Mat::zeros(1, 6, CV_32FC1);
			feature2.col(0) = B_1;
			feature2.col(1) = G_1;
			feature2.col(2) = R_1;
			feature2.col(3) = Area_1;
			feature2.col(4) = Perimeter_1;
			feature2.col(5) = Radian_1;

			Mat feature3 = Mat::zeros(1, 6, CV_32FC1);
			feature3.col(0) = B_2;
			feature3.col(1) = G_2;
			feature3.col(2) = R_2;
			feature3.col(3) = Area_2;
			feature3.col(4) = Perimeter_2;
			feature3.col(5) = Radian_2;

			for (int i = 0; i<feature1.cols; i++)
			{
				feature1.col(i) = -1 + (feature1.col(i) - Min.col(i)) / (Max.col(i) - Min.col(i)) * 2;
				//feature1.col(i) = feature1.col(i) - 1;
			}
			Mat testPredict(1, 1, CV_32SC1);
			float result_00 = svm->predict(feature1);
			float result_1 = svm->predict(feature2);
			float result_2 = svm->predict(feature3);

			UpdateData(FALSE);
			begin_bg = 2;
		}

		if (begin_bg == 1 || begin_bg == 2 || begin_bg == 3)
		{
			count++;
		}
	}
}


void CMFC_本科毕业设计Dlg::imshow_s(Mat img, int a, string view)
{
	Mat img_s;
	CRect rect;
	GetDlgItem(a)->GetClientRect(&rect);//获取图片控件的尺寸
	resize(img, img_s, Size(rect.Width(), rect.Height()));//尺寸归一化
	imshow(view, img_s);//显示归一化后的图像
}


void CMFC_本科毕业设计Dlg::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	begin_bg = 1;//按下 Button2，将标记位修改为1
}


void CMFC_本科毕业设计Dlg::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	begin_bg = 3;//按下 Button3，将标记位修改为3
}


void CMFC_本科毕业设计Dlg::OnBnClickedButton4()
{
	// TODO: 在此添加控件通知处理程序代码
	begin_bg = 4;//按下 Button4，将标记位修改为4
}


void CMFC_本科毕业设计Dlg::OnBnClickedButton5()
{
	// TODO: 在此添加控件通知处理程序代码
	begin_bg = 6;
}


void CMFC_本科毕业设计Dlg::OnBnClickedButton6()
{
	// TODO: 在此添加控件通知处理程序代码
	begin_bg = 5;//按下 Button5，将标记位修改为5
}


void CMFC_本科毕业设计Dlg::OnBnClickedButton7()
{
	// TODO: 在此添加控件通知处理程序代码
	begin_bg = 7;
}
