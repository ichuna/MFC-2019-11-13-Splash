
// mfc-2019-11-13-SplashView.cpp : Cmfc20191113SplashView Ŭ������ ����
//

#include "stdafx.h"
// SHARED_HANDLERS�� �̸� ����, ����� �׸� �� �˻� ���� ó���⸦ �����ϴ� ATL ������Ʈ���� ������ �� ������
// �ش� ������Ʈ�� ���� �ڵ带 �����ϵ��� �� �ݴϴ�.
#ifndef SHARED_HANDLERS
#include "mfc-2019-11-13-Splash.h"
#endif

#include "mfc-2019-11-13-SplashDoc.h"
#include "mfc-2019-11-13-SplashView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cmfc20191113SplashView

IMPLEMENT_DYNCREATE(Cmfc20191113SplashView, CView)

BEGIN_MESSAGE_MAP(Cmfc20191113SplashView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// Cmfc20191113SplashView ����/�Ҹ�

Cmfc20191113SplashView::Cmfc20191113SplashView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

Cmfc20191113SplashView::~Cmfc20191113SplashView()
{
}

BOOL Cmfc20191113SplashView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.

	return CView::PreCreateWindow(cs);
}

// Cmfc20191113SplashView �׸���

void Cmfc20191113SplashView::OnDraw(CDC* /*pDC*/)
{
	Cmfc20191113SplashDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// Cmfc20191113SplashView �μ�

BOOL Cmfc20191113SplashView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void Cmfc20191113SplashView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void Cmfc20191113SplashView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// Cmfc20191113SplashView ����

#ifdef _DEBUG
void Cmfc20191113SplashView::AssertValid() const
{
	CView::AssertValid();
}

void Cmfc20191113SplashView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cmfc20191113SplashDoc* Cmfc20191113SplashView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cmfc20191113SplashDoc)));
	return (Cmfc20191113SplashDoc*)m_pDocument;
}
#endif //_DEBUG


// Cmfc20191113SplashView �޽��� ó����
