
// 舒尔特表Dlg.h : 头文件
//

#pragma once
#include "afxwin.h"


// C舒尔特表Dlg 对话框
class C舒尔特表Dlg : public CDialogEx
{
// 构造
public:
	C舒尔特表Dlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_MY_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	DECLARE_MESSAGE_MAP()
	CMenu menu;
public:
	afx_msg void On32771();
	char nandu;
	afx_msg void Onkunnan();
	afx_msg void OnBnClickedButton();
protected:
	HICON m_hIcon;
	CFont *font;
public:
	afx_msg void OnBnClickedOk();
	void bukejian();
	void kejian();
	char kaishi;//开始按钮
	clock_t start;//时间上的开始
	int shuzi;
	afx_msg void shuoming();
	HICON hicon;
};
