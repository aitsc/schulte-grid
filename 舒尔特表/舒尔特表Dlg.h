
// ����ر�Dlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"


// C����ر�Dlg �Ի���
class C����ر�Dlg : public CDialogEx
{
// ����
public:
	C����ر�Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_MY_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	// ���ɵ���Ϣӳ�亯��
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
	char kaishi;//��ʼ��ť
	clock_t start;//ʱ���ϵĿ�ʼ
	int shuzi;
	afx_msg void shuoming();
	HICON hicon;
};
