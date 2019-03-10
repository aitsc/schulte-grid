
// 舒尔特表Dlg.cpp : 实现文件
//

#include "stdafx.h"
#include "舒尔特表.h"
#include "舒尔特表Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// C舒尔特表Dlg 对话框



C舒尔特表Dlg::C舒尔特表Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(C舒尔特表Dlg::IDD, pParent)
	, nandu(0)
	, kaishi(0)
	, shuzi(0)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MENU1);
	hicon = AfxGetApp()->LoadIcon(IDI_ICON1);
}

void C舒尔特表Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	//  DDX_Text(pDX, IDC_EDIT1, shijian);
}

BEGIN_MESSAGE_MAP(C舒尔特表Dlg, CDialogEx)
	ON_COMMAND(ID_32771, &C舒尔特表Dlg::On32771)
	ON_COMMAND(ID_32772, &C舒尔特表Dlg::Onkunnan)
	ON_BN_CLICKED(IDC_BUTTON1, &C舒尔特表Dlg::OnBnClickedButton)
	ON_BN_CLICKED(IDC_BUTTON2, &C舒尔特表Dlg::OnBnClickedButton)
	ON_BN_CLICKED(IDC_BUTTON3, &C舒尔特表Dlg::OnBnClickedButton)
	ON_BN_CLICKED(IDC_BUTTON4, &C舒尔特表Dlg::OnBnClickedButton)
	ON_BN_CLICKED(IDC_BUTTON5, &C舒尔特表Dlg::OnBnClickedButton)
	ON_BN_CLICKED(IDC_BUTTON6, &C舒尔特表Dlg::OnBnClickedButton)
	ON_BN_CLICKED(IDC_BUTTON7, &C舒尔特表Dlg::OnBnClickedButton)
	ON_BN_CLICKED(IDC_BUTTON8, &C舒尔特表Dlg::OnBnClickedButton)
	ON_BN_CLICKED(IDC_BUTTON9, &C舒尔特表Dlg::OnBnClickedButton)
	ON_BN_CLICKED(IDC_BUTTON10, &C舒尔特表Dlg::OnBnClickedButton)
	ON_BN_CLICKED(IDC_BUTTON11, &C舒尔特表Dlg::OnBnClickedButton)
	ON_BN_CLICKED(IDC_BUTTON12, &C舒尔特表Dlg::OnBnClickedButton)
	ON_BN_CLICKED(IDC_BUTTON13, &C舒尔特表Dlg::OnBnClickedButton)
	ON_BN_CLICKED(IDC_BUTTON14, &C舒尔特表Dlg::OnBnClickedButton)
	ON_BN_CLICKED(IDC_BUTTON15, &C舒尔特表Dlg::OnBnClickedButton)
	ON_BN_CLICKED(IDC_BUTTON16, &C舒尔特表Dlg::OnBnClickedButton)
	ON_BN_CLICKED(IDC_BUTTON17, &C舒尔特表Dlg::OnBnClickedButton)
	ON_BN_CLICKED(IDC_BUTTON18, &C舒尔特表Dlg::OnBnClickedButton)
	ON_BN_CLICKED(IDC_BUTTON19, &C舒尔特表Dlg::OnBnClickedButton)
	ON_BN_CLICKED(IDC_BUTTON20, &C舒尔特表Dlg::OnBnClickedButton)
	ON_BN_CLICKED(IDC_BUTTON21, &C舒尔特表Dlg::OnBnClickedButton)
	ON_BN_CLICKED(IDC_BUTTON22, &C舒尔特表Dlg::OnBnClickedButton)
	ON_BN_CLICKED(IDC_BUTTON23, &C舒尔特表Dlg::OnBnClickedButton)
	ON_BN_CLICKED(IDC_BUTTON24, &C舒尔特表Dlg::OnBnClickedButton)
	ON_BN_CLICKED(IDC_BUTTON25, &C舒尔特表Dlg::OnBnClickedButton)
	ON_BN_CLICKED(IDOK, &C舒尔特表Dlg::OnBnClickedOk)
	ON_COMMAND(ID_, &C舒尔特表Dlg::shuoming)
END_MESSAGE_MAP()


// C舒尔特表Dlg 消息处理程序

BOOL C舒尔特表Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	// TODO:  在此添加额外的初始化代码
	font = new CFont;
	font->CreatePointFont(200, _T("@微软雅黑"), NULL);
	GetDlgItem(IDC_BUTTON1)->SetFont(font);
	GetDlgItem(IDC_BUTTON2)->SetFont(font);
	GetDlgItem(IDC_BUTTON3)->SetFont(font);
	GetDlgItem(IDC_BUTTON4)->SetFont(font);
	GetDlgItem(IDC_BUTTON5)->SetFont(font);
	GetDlgItem(IDC_BUTTON6)->SetFont(font);
	GetDlgItem(IDC_BUTTON7)->SetFont(font);
	GetDlgItem(IDC_BUTTON8)->SetFont(font);
	GetDlgItem(IDC_BUTTON9)->SetFont(font);
	GetDlgItem(IDC_BUTTON10)->SetFont(font);
	GetDlgItem(IDC_BUTTON11)->SetFont(font);
	GetDlgItem(IDC_BUTTON12)->SetFont(font);
	GetDlgItem(IDC_BUTTON13)->SetFont(font);
	GetDlgItem(IDC_BUTTON14)->SetFont(font);
	GetDlgItem(IDC_BUTTON15)->SetFont(font);
	GetDlgItem(IDC_BUTTON16)->SetFont(font);
	GetDlgItem(IDC_BUTTON17)->SetFont(font);
	GetDlgItem(IDC_BUTTON18)->SetFont(font);
	GetDlgItem(IDC_BUTTON19)->SetFont(font);
	GetDlgItem(IDC_BUTTON20)->SetFont(font);
	GetDlgItem(IDC_BUTTON21)->SetFont(font);
	GetDlgItem(IDC_BUTTON22)->SetFont(font);
	GetDlgItem(IDC_BUTTON23)->SetFont(font);
	GetDlgItem(IDC_BUTTON24)->SetFont(font);
	GetDlgItem(IDC_BUTTON25)->SetFont(font);

	bukejian();
	SetIcon(hicon, false);
	menu.LoadMenu(IDR_MENU1);
	SetMenu(&menu);
	GetMenu()->GetSubMenu(0)->CheckMenuItem(0, MF_BYPOSITION | MF_CHECKED);
	GetMenu()->GetSubMenu(0)->CheckMenuItem(1, MF_BYPOSITION | MF_UNCHECKED);
	nandu = 0;
	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}


void C舒尔特表Dlg::On32771()
{
	// TODO:  在此添加命令处理程序代码
	GetMenu()->GetSubMenu(0)->CheckMenuItem(0, MF_BYPOSITION | MF_CHECKED);
	GetMenu()->GetSubMenu(0)->CheckMenuItem(1, MF_BYPOSITION | MF_UNCHECKED);
	nandu = 0;
	bukejian();
}


void C舒尔特表Dlg::Onkunnan()
{
	// TODO:  在此添加命令处理程序代码
	GetMenu()->GetSubMenu(0)->CheckMenuItem(0, MF_BYPOSITION | MF_UNCHECKED);
	GetMenu()->GetSubMenu(0)->CheckMenuItem(1, MF_BYPOSITION | MF_CHECKED);
	nandu = 1;
	bukejian();
}


void C舒尔特表Dlg::OnBnClickedButton()
{
	// TODO:  在此添加控件通知处理程序代码
	CString s;
	GetDlgItemText(GetFocus()->GetDlgCtrlID(), s);
	if (0==nandu)
	{
		if (_ttoi(s)==shuzi)
		{
			shuzi++;
			GetDlgItem(GetFocus()->GetDlgCtrlID())->EnableWindow(FALSE);
		}
		if (26 == shuzi)
		{
			double time;
			CString s;
			clock_t finish = clock(); //获取完成时间
			time = (double)(finish - start) / CLOCKS_PER_SEC;//毫秒转化为秒
			s.Format(L"恭喜完成，共用时%.2f秒!", time);
			MessageBox(s, L"简单模式");
			bukejian();
		}
	}
	else if (1==nandu)
	{
		if (_ttoi(s) == shuzi)
		{
			shuzi++;
			kejian();
		}
		if (26 == shuzi)
		{
			double time;
			CString s;
			clock_t finish = clock(); //获取完成时间
			time = (double)(finish - start) / CLOCKS_PER_SEC;//毫秒转化为秒
			s.Format(L"恭喜完成，共用时%.2f秒!", time);
			MessageBox(s, L"困难模式");
			bukejian();
		}
	}
}


void C舒尔特表Dlg::OnBnClickedOk()
{
	// TODO:  在此添加控件通知处理程序代码
	if (0==kaishi)
	{
		kejian();
		kaishi = 1;
		shuzi = 1;
		SetDlgItemText(IDOK, _T("结束"));
		start = clock();//获取开始时间
	}
	else if (1==kaishi)
	{
		bukejian();
	}
}


void C舒尔特表Dlg::bukejian()
{
	GetDlgItem(IDC_BUTTON1)->EnableWindow(FALSE);
	GetDlgItem(IDC_BUTTON2)->EnableWindow(FALSE);
	GetDlgItem(IDC_BUTTON3)->EnableWindow(FALSE);
	GetDlgItem(IDC_BUTTON4)->EnableWindow(FALSE);
	GetDlgItem(IDC_BUTTON5)->EnableWindow(FALSE);
	GetDlgItem(IDC_BUTTON6)->EnableWindow(FALSE);
	GetDlgItem(IDC_BUTTON7)->EnableWindow(FALSE);
	GetDlgItem(IDC_BUTTON8)->EnableWindow(FALSE);
	GetDlgItem(IDC_BUTTON9)->EnableWindow(FALSE);
	GetDlgItem(IDC_BUTTON10)->EnableWindow(FALSE);
	GetDlgItem(IDC_BUTTON11)->EnableWindow(FALSE);
	GetDlgItem(IDC_BUTTON12)->EnableWindow(FALSE);
	GetDlgItem(IDC_BUTTON13)->EnableWindow(FALSE);
	GetDlgItem(IDC_BUTTON14)->EnableWindow(FALSE);
	GetDlgItem(IDC_BUTTON15)->EnableWindow(FALSE);
	GetDlgItem(IDC_BUTTON16)->EnableWindow(FALSE);
	GetDlgItem(IDC_BUTTON17)->EnableWindow(FALSE);
	GetDlgItem(IDC_BUTTON18)->EnableWindow(FALSE);
	GetDlgItem(IDC_BUTTON19)->EnableWindow(FALSE);
	GetDlgItem(IDC_BUTTON20)->EnableWindow(FALSE);
	GetDlgItem(IDC_BUTTON21)->EnableWindow(FALSE);
	GetDlgItem(IDC_BUTTON22)->EnableWindow(FALSE);
	GetDlgItem(IDC_BUTTON23)->EnableWindow(FALSE);
	GetDlgItem(IDC_BUTTON24)->EnableWindow(FALSE);
	GetDlgItem(IDC_BUTTON25)->EnableWindow(FALSE);

	SetDlgItemText(IDC_BUTTON1, _T("1"));
	SetDlgItemText(IDC_BUTTON2, _T("2"));
	SetDlgItemText(IDC_BUTTON3, _T("3"));
	SetDlgItemText(IDC_BUTTON4, _T("4"));
	SetDlgItemText(IDC_BUTTON5, _T("5"));
	SetDlgItemText(IDC_BUTTON6, _T("6"));
	SetDlgItemText(IDC_BUTTON7, _T("7"));
	SetDlgItemText(IDC_BUTTON8, _T("8"));
	SetDlgItemText(IDC_BUTTON9, _T("9"));
	SetDlgItemText(IDC_BUTTON10, _T("10"));
	SetDlgItemText(IDC_BUTTON11, _T("11"));
	SetDlgItemText(IDC_BUTTON12, _T("12"));
	SetDlgItemText(IDC_BUTTON13, _T("13"));
	SetDlgItemText(IDC_BUTTON14, _T("14"));
	SetDlgItemText(IDC_BUTTON15, _T("15"));
	SetDlgItemText(IDC_BUTTON16, _T("16"));
	SetDlgItemText(IDC_BUTTON17, _T("17"));
	SetDlgItemText(IDC_BUTTON18, _T("18"));
	SetDlgItemText(IDC_BUTTON19, _T("19"));
	SetDlgItemText(IDC_BUTTON20, _T("20"));
	SetDlgItemText(IDC_BUTTON21, _T("21"));
	SetDlgItemText(IDC_BUTTON22, _T("22"));
	SetDlgItemText(IDC_BUTTON23, _T("23"));
	SetDlgItemText(IDC_BUTTON24, _T("24"));
	SetDlgItemText(IDC_BUTTON25, _T("25"));

	kaishi = 0;
	shuzi = 1;
	if (0==nandu)
	{
		SetDlgItemText(IDOK, _T("开始:简单模式"));
	}
	else if (1 == nandu)
	{
		SetDlgItemText(IDOK, _T("开始:困难模式"));
	}
	else
	{
		SetDlgItemText(IDOK, _T("开始"));
	}
}


void C舒尔特表Dlg::kejian()
{
	GetDlgItem(IDC_BUTTON1)->EnableWindow(TRUE);
	GetDlgItem(IDC_BUTTON2)->EnableWindow(TRUE);
	GetDlgItem(IDC_BUTTON3)->EnableWindow(TRUE);
	GetDlgItem(IDC_BUTTON4)->EnableWindow(TRUE);
	GetDlgItem(IDC_BUTTON5)->EnableWindow(TRUE);
	GetDlgItem(IDC_BUTTON6)->EnableWindow(TRUE);
	GetDlgItem(IDC_BUTTON7)->EnableWindow(TRUE);
	GetDlgItem(IDC_BUTTON8)->EnableWindow(TRUE);
	GetDlgItem(IDC_BUTTON9)->EnableWindow(TRUE);
	GetDlgItem(IDC_BUTTON10)->EnableWindow(TRUE);
	GetDlgItem(IDC_BUTTON11)->EnableWindow(TRUE);
	GetDlgItem(IDC_BUTTON12)->EnableWindow(TRUE);
	GetDlgItem(IDC_BUTTON13)->EnableWindow(TRUE);
	GetDlgItem(IDC_BUTTON14)->EnableWindow(TRUE);
	GetDlgItem(IDC_BUTTON15)->EnableWindow(TRUE);
	GetDlgItem(IDC_BUTTON16)->EnableWindow(TRUE);
	GetDlgItem(IDC_BUTTON17)->EnableWindow(TRUE);
	GetDlgItem(IDC_BUTTON18)->EnableWindow(TRUE);
	GetDlgItem(IDC_BUTTON19)->EnableWindow(TRUE);
	GetDlgItem(IDC_BUTTON20)->EnableWindow(TRUE);
	GetDlgItem(IDC_BUTTON21)->EnableWindow(TRUE);
	GetDlgItem(IDC_BUTTON22)->EnableWindow(TRUE);
	GetDlgItem(IDC_BUTTON23)->EnableWindow(TRUE);
	GetDlgItem(IDC_BUTTON24)->EnableWindow(TRUE);
	GetDlgItem(IDC_BUTTON25)->EnableWindow(TRUE);

	int shunxu[25], luanxu[25],i,j;
	CString s;
	for (i = 0; i < 25; i++)
	{
		shunxu[i] = i + 1;
	}
	for (i = 25; i>0; i--)
	{
		j = rand() % i;
		luanxu[i - 1] = shunxu[j];
		while (j < i - 1)
		{
			shunxu[j] = shunxu[j+1];
			j++;
		}
	}
	i = 0;
	SetDlgItemText(IDC_BUTTON1, (s.Format(L"%d",luanxu[i++]),s));
	SetDlgItemText(IDC_BUTTON2, (s.Format(L"%d", luanxu[i++]), s));
	SetDlgItemText(IDC_BUTTON3, (s.Format(L"%d", luanxu[i++]), s));
	SetDlgItemText(IDC_BUTTON4, (s.Format(L"%d", luanxu[i++]), s));
	SetDlgItemText(IDC_BUTTON5, (s.Format(L"%d", luanxu[i++]), s));
	SetDlgItemText(IDC_BUTTON6, (s.Format(L"%d", luanxu[i++]), s));
	SetDlgItemText(IDC_BUTTON7, (s.Format(L"%d", luanxu[i++]), s));
	SetDlgItemText(IDC_BUTTON8, (s.Format(L"%d", luanxu[i++]), s));
	SetDlgItemText(IDC_BUTTON9, (s.Format(L"%d", luanxu[i++]), s));
	SetDlgItemText(IDC_BUTTON10, (s.Format(L"%d", luanxu[i++]), s));
	SetDlgItemText(IDC_BUTTON11, (s.Format(L"%d", luanxu[i++]), s));
	SetDlgItemText(IDC_BUTTON12, (s.Format(L"%d", luanxu[i++]), s));
	SetDlgItemText(IDC_BUTTON13, (s.Format(L"%d", luanxu[i++]), s));
	SetDlgItemText(IDC_BUTTON14, (s.Format(L"%d", luanxu[i++]), s));
	SetDlgItemText(IDC_BUTTON15, (s.Format(L"%d", luanxu[i++]), s));
	SetDlgItemText(IDC_BUTTON16, (s.Format(L"%d", luanxu[i++]), s));
	SetDlgItemText(IDC_BUTTON17, (s.Format(L"%d", luanxu[i++]), s));
	SetDlgItemText(IDC_BUTTON18, (s.Format(L"%d", luanxu[i++]), s));
	SetDlgItemText(IDC_BUTTON19, (s.Format(L"%d", luanxu[i++]), s));
	SetDlgItemText(IDC_BUTTON20, (s.Format(L"%d", luanxu[i++]), s));
	SetDlgItemText(IDC_BUTTON21, (s.Format(L"%d", luanxu[i++]), s));
	SetDlgItemText(IDC_BUTTON22, (s.Format(L"%d", luanxu[i++]), s));
	SetDlgItemText(IDC_BUTTON23, (s.Format(L"%d", luanxu[i++]), s));
	SetDlgItemText(IDC_BUTTON24, (s.Format(L"%d", luanxu[i++]), s));
	SetDlgItemText(IDC_BUTTON25, (s.Format(L"%d", luanxu[i++]), s));
}


void C舒尔特表Dlg::shuoming()
{
	// TODO:  在此添加命令处理程序代码
	MessageBox(L"从1找到25,锻炼你的注意力哦");
}