
// MFC_���Ʊ�ҵ���Dlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MFC_���Ʊ�ҵ���.h"
#include "MFC_���Ʊ�ҵ���Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ʵ��
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


// CMFC_���Ʊ�ҵ���Dlg �Ի���



CMFC_���Ʊ�ҵ���Dlg::CMFC_���Ʊ�ҵ���Dlg(CWnd* pParent /*=NULL*/)
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

void CMFC_���Ʊ�ҵ���Dlg::DoDataExchange(CDataExchange* pDX)
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

BEGIN_MESSAGE_MAP(CMFC_���Ʊ�ҵ���Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CMFC_���Ʊ�ҵ���Dlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CMFC_���Ʊ�ҵ���Dlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CMFC_���Ʊ�ҵ���Dlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CMFC_���Ʊ�ҵ���Dlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &CMFC_���Ʊ�ҵ���Dlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &CMFC_���Ʊ�ҵ���Dlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &CMFC_���Ʊ�ҵ���Dlg::OnBnClickedButton7)
END_MESSAGE_MAP()


// CMFC_���Ʊ�ҵ���Dlg ��Ϣ�������

BOOL CMFC_���Ʊ�ҵ���Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ��������...���˵�����ӵ�ϵͳ�˵��С�

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
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

	// ���ô˶Ի����ͼ�ꡣ  ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO: �ڴ���Ӷ���ĳ�ʼ������

	namedWindow("view1", WINDOW_AUTOSIZE);//���� OpenCV �Դ�����
	HWND hWnd = (HWND)cvGetWindowHandle("view1");// ��ȡ���ھ��
	HWND hParent = ::GetParent(hWnd);//��ȡ�����
	::SetParent(hWnd, GetDlgItem(IDC_STATIC1)->m_hWnd);//����ΪͼƬ�ؼ��������ͼƬ�ؼ�IDΪ IDC_STATIC1
	::ShowWindow(hParent, SW_HIDE);//���� OpenCV �����Ĵ���

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


	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

void CMFC_���Ʊ�ҵ���Dlg::OnSysCommand(UINT nID, LPARAM lParam)
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

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ  ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CMFC_���Ʊ�ҵ���Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR CMFC_���Ʊ�ҵ���Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CMFC_���Ʊ�ҵ���Dlg::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
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
				cout_string = " ....................... \r\n ����ͷ�򿪳ɹ���";
				UpdateData(FALSE);
			}
			Result_00 = "0";
			Result_1 = "0";
			Result_2 = "0";
			waitKey(30);
		}
		//���°�ť ��������ģ��
		if (count < 30 && begin_bg == 1)//ǰ30֡�����ڽ�������ģ��
		{
			vector<Mat>color;
			capture >> frame;
			blur(frame, frame, Size(3, 3));
			split(frame, color);
			color[0].convertTo(color[0], CV_32FC1);

			for (int i = 0; i < frame.rows; i++)//ͨ������ͼ���������ص����ͼ���ۼ�
			{
				for (int j = 0; j < frame.cols; j++)
				{
					//���ص��ۼ�
					imgAll.at<float>(i, j) = imgAll.at<float>(i, j) + color[0].at<float>(i, j);
				}
			}
			waitKey(30);
		}
		if (count == 30 && begin_bg == 1)//����30֡ʱ�����ۼӺ�ͼ���ƽ��ֵ��Ϊ����ģ��
		{
			for (int i = 0; i < frame.rows; i++)//����ͼ���������ص�
			{
				for (int j = 0; j < frame.cols; j++)
				{
					imgAll.at<float>(i, j) = imgAll.at<float>(i, j) / count;//��ƽ��ֵ
				}
			}
			cout_string = " ....................... \r\n ����ͷ�򿪳ɹ���\r\n ....................... \r\n ����ģ�ͽ����ɹ���";
			UpdateData(FALSE);
			begin_bg = 2;
		}

		//���°�ť ��ȡǰ��Ŀ��
		if (count > 30 && begin_bg == 3)//����30֡������ģ�ͽ���������Ѱ��Ŀ������
		{
			Mat diff(480, 640, CV_32FC1), canny, dst, dst2;
			vector<Mat>color_new;
			capture >> frame;
			blur(frame, frame, Size(3, 3));
			split(frame, color_new);
			color_new[0].convertTo(color_new[0], CV_32FC1);
			absdiff(imgAll, color_new[0], diff);

			//ͨ��ͼ�����ر���������������趨��ֵ�����϶�ΪĿ������
			for (int i = 0; i < frame.rows; i++)
			{
				for (int j = 0; j < frame.cols; j++)
				{
					if (diff.at<float>(i, j) < 90)//��ֵ��ʱ�趨Ϊ90
						diff.at<float>(i, j) = 0.0;//��������Ϊ��ɫ
					else
						diff.at<float>(i, j) = 255.0;//Ŀ����������Ϊ��ɫ
				}
			}

			diff.convertTo(frame, CV_8UC1);
			string str2 = "view2";
			imshow_s(frame, IDC_STATIC2, str2);
			cout_string = " ....................... \r\n ����ͷ�򿪳ɹ���\r\n ....................... \r\n ����ģ�ͽ����ɹ��� \r\n ....................... \r\n �ҵ�Ŀ�����壡";
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
			cout_string = " ....................... \r\n ����ͷ�򿪳ɹ���\r\n ....................... \r\n ����ģ�ͽ����ɹ��� \r\n ....................... \r\n �ҵ�Ŀ�����壡 \r\n ....................... \r\n ��̬ѧ������ɣ�";
			UpdateData(FALSE);
			begin_bg = 2;
			//imshow("��̬ѧ�����", dst2);
		}

		if (count > 30 && begin_bg == 5)
		{
			Mat canny;
			Canny(dst2, canny, 30, 60);
			//imshow("canny", canny);

			vector<vector<Point>> contours;
			vector<Vec4i> hierarchy;
			findContours(canny, contours, hierarchy, CV_RETR_EXTERNAL, CV_CHAIN_APPROX_NONE);
			Vec<double, 5> Area;//��״����������ʼ��
			Vec<double, 5> Perimeter;
			Vec<double, 5> Radian;

			//findContours(canny, contours, hierarchy, CV_RETR_EXTERNAL, CV_CHAIN_APPROX_NONE);

			draw = Mat::zeros(dst2.rows, dst2.cols, CV_8UC3);
			for (int index = 0; index<contours.size(); index++)
			{

				if (index == 0)//Ŀ������1
				{
					Scalar color(255, 0, 0);//����ɫ���
					drawContours(draw, contours, index, color, CV_FILLED, 8);
				}
				if (index == 1)//Ŀ������2
				{
					Scalar color(0, 255, 0);//����ɫ���
					drawContours(draw, contours, index, color, CV_FILLED, 8);
				}
				if (index == 2)//Ŀ������3
				{
					Scalar color(0, 0, 255);//����ɫ���
					drawContours(draw, contours, index, color, CV_FILLED, 8);
				}

				Area[index] = contourArea(contours[index]);//��ȡ��״��������
				Perimeter[index] = arcLength(contours[index], true);
				Radian[index] = 4 * 3.14*Area[index] / (Perimeter[index] * Perimeter[index]);//���� = 4��*���/�ܳ�^2
			}
			//imshow("draw", draw);

			//��ȡ��ɫ����
			double B0 = 0.0, G0 = 0.0, R0 = 0.0, Sum0 = 0.0;//��ʼ����������
			double B1 = 0.0, G1 = 0.0, R1 = 0.0, Sum1 = 0.0;
			double B2 = 0.0, G2 = 0.0, R2 = 0.0, Sum2 = 0.0;
			for (int x = 0; x<draw.rows; x++)//������������
			{
				for (int y = 0; y<draw.cols; y++)//������������
				{
					for (int c = 0; c<3; c++)//��������ͨ����
					{
						if (draw.at<Vec3b>(x, y)[c]>250)//�ж��Ƿ�ΪĿ������λ��
						{
							if (c == 0)//Ŀ������1
							{
								//��ȡԭ����ͷͼ���Ӧλ���µ���ɫ����
								B0 = B0 + frame_video.at<Vec3b>(x, y)[0];
								G0 = G0 + frame_video.at<Vec3b>(x, y)[1];
								R0 = R0 + frame_video.at<Vec3b>(x, y)[2];
							}
							if (c == 1)//Ŀ������2
							{
								B1 = B1 + frame_video.at<Vec3b>(x, y)[0];
								G1 = G1 + frame_video.at<Vec3b>(x, y)[1];
								R1 = R1 + frame_video.at<Vec3b>(x, y)[2];
							}
							if (c == 2)//Ŀ������3
							{
								B2 = B2 + frame_video.at<Vec3b>(x, y)[0];
								G2 = G2 + frame_video.at<Vec3b>(x, y)[1];
								R2 = R2 + frame_video.at<Vec3b>(x, y)[2];
							}
						}
					}
				}
			}
			Sum0 = B0 + G0 + R0;//����1������ֵ
			if (Sum0 >10000)
			{
				B0 = B0 / Sum0;//����1������ɫ��Ϣ����
				G0 = G0 / Sum0;
				R0 = R0 / Sum0;
			}

			Sum1 = B1 + G1 + R1;//����2������ֵ
			if (Sum1 >10000)
			{
				B1 = B1 / Sum1;//����2������ɫ��Ϣ����
				G1 = G1 / Sum1;
				R1 = R1 / Sum1;
			}

			Sum2 = B2 + G2 + R2;//����3������ֵ
			if (Sum2 >10000)
			{
				B2 = B2 / Sum2;//����3������ɫ��Ϣ����
				G2 = G2 / Sum2;
				R2 = R2 / Sum2;
			}
			B_0 = B0; G_0 = G0; R_0 = R0; Area_0 = Area[0]; Perimeter_0 = Perimeter[0]; Radian_0 = Radian[0];
			B_1 = B1; G_1 = G1; R_1 = R1; Area_1 = Area[1]; Perimeter_1 = Perimeter[1]; Radian_1 = Radian[1];
			B_2 = B2; G_2 = G2; R_2 = R2; Area_2 = Area[2]; Perimeter_2 = Perimeter[2]; Radian_2 = Radian[2];
			cout_string = " ....................... \r\n ����ͷ�򿪳ɹ���\r\n ....................... \r\n ����ģ�ͽ����ɹ��� \r\n ....................... \r\n �ҵ�Ŀ�����壡 \r\n ....................... \r\n ��̬ѧ������ɣ� \r\n ....................... \r\n ����������ȡ�ɹ���";
			UpdateData(FALSE);
			begin_bg = 2;
		}

		if (count > 30 && begin_bg == 6)
		{
			frame_copy = frame_video;
			vector<Mat> channels;
			split(frame_copy, channels);
			for (int x = 0; x<draw.rows; x++)//������������
			{
				for (int y = 0; y<draw.cols; y++)//������������
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
			cout_string = " ....................... \r\n ����ͷ�򿪳ɹ���\r\n ....................... \r\n ����ģ�ͽ����ɹ��� \r\n ....................... \r\n �ҵ�Ŀ�����壡 \r\n ....................... \r\n ��̬ѧ������ɣ� \r\n ....................... \r\n ����������ȡ�ɹ��� \r\n ....................... \r\n Ŀ�껹ԭ�ɹ���";
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


void CMFC_���Ʊ�ҵ���Dlg::imshow_s(Mat img, int a, string view)
{
	Mat img_s;
	CRect rect;
	GetDlgItem(a)->GetClientRect(&rect);//��ȡͼƬ�ؼ��ĳߴ�
	resize(img, img_s, Size(rect.Width(), rect.Height()));//�ߴ��һ��
	imshow(view, img_s);//��ʾ��һ�����ͼ��
}


void CMFC_���Ʊ�ҵ���Dlg::OnBnClickedButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	begin_bg = 1;//���� Button2�������λ�޸�Ϊ1
}


void CMFC_���Ʊ�ҵ���Dlg::OnBnClickedButton3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	begin_bg = 3;//���� Button3�������λ�޸�Ϊ3
}


void CMFC_���Ʊ�ҵ���Dlg::OnBnClickedButton4()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	begin_bg = 4;//���� Button4�������λ�޸�Ϊ4
}


void CMFC_���Ʊ�ҵ���Dlg::OnBnClickedButton5()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	begin_bg = 6;
}


void CMFC_���Ʊ�ҵ���Dlg::OnBnClickedButton6()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	begin_bg = 5;//���� Button5�������λ�޸�Ϊ5
}


void CMFC_���Ʊ�ҵ���Dlg::OnBnClickedButton7()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	begin_bg = 7;
}
