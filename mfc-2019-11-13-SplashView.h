
// mfc-2019-11-13-SplashView.h : Cmfc20191113SplashView Ŭ������ �������̽�
//

#pragma once


class Cmfc20191113SplashView : public CView
{
protected: // serialization������ ��������ϴ�.
	Cmfc20191113SplashView();
	DECLARE_DYNCREATE(Cmfc20191113SplashView)

// Ư���Դϴ�.
public:
	Cmfc20191113SplashDoc* GetDocument() const;

// �۾��Դϴ�.
public:

// �������Դϴ�.
public:
	virtual void OnDraw(CDC* pDC);  // �� �並 �׸��� ���� �����ǵǾ����ϴ�.
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// �����Դϴ�.
public:
	virtual ~Cmfc20191113SplashView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // mfc-2019-11-13-SplashView.cpp�� ����� ����
inline Cmfc20191113SplashDoc* Cmfc20191113SplashView::GetDocument() const
   { return reinterpret_cast<Cmfc20191113SplashDoc*>(m_pDocument); }
#endif

