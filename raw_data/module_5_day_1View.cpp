
// module_5_day_1View.cpp: Cmodule5day1View 클래스의 구현
//

#include "stdafx.h"
// SHARED_HANDLERS는 미리 보기, 축소판 그림 및 검색 필터 처리기를 구현하는 ATL 프로젝트에서 정의할 수 있으며
// 해당 프로젝트와 문서 코드를 공유하도록 해 줍니다.
#ifndef SHARED_HANDLERS
#include "module_5_day_1.h"
#endif

#include "module_5_day_1Doc.h"
#include "module_5_day_1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cmodule5day1View

IMPLEMENT_DYNCREATE(Cmodule5day1View, CView)

BEGIN_MESSAGE_MAP(Cmodule5day1View, CView)
	// 표준 인쇄 명령입니다.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &Cmodule5day1View::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_COMMAND(ID_DOWN_SAMPLING, &Cmodule5day1View::OnDownSampling)
	ON_COMMAND(ID_UP_SAMPLING, &Cmodule5day1View::OnUpSampling)
	ON_COMMAND(ID_QUANTIZATION, &Cmodule5day1View::OnQuantization)
	ON_COMMAND(ID_SUM_CONSTANT, &Cmodule5day1View::OnSumConstant)
	ON_COMMAND(ID_SUB_CONSTANT, &Cmodule5day1View::OnSubConstant)
	ON_COMMAND(ID_MUL_CONSTANT, &Cmodule5day1View::OnMulConstant)
	ON_COMMAND(ID_DIV_CONSTANT, &Cmodule5day1View::OnDivConstant)
	ON_COMMAND(ID_AND_OPERATE, &Cmodule5day1View::OnAndOperate)
	ON_COMMAND(ID_OR_OPERATE, &Cmodule5day1View::OnOrOperate)
	ON_COMMAND(ID_XOR_OPERATE, &Cmodule5day1View::OnXorOperate)
	ON_COMMAND(ID_NEGA_TRANSFORM, &Cmodule5day1View::OnNegaTransform)
	ON_COMMAND(ID_GAMMA_CORRECTION, &Cmodule5day1View::OnGammaCorrection)
	ON_COMMAND(ID_BINARIZATION, &Cmodule5day1View::OnBinarization)
	ON_COMMAND(ID_STRESS_TRANSFORM, &Cmodule5day1View::OnStressTransform)
	ON_COMMAND(ID_HISTO_STRETCH, &Cmodule5day1View::OnHistoStretch)
	ON_COMMAND(ID_END_IN_SEARCH, &Cmodule5day1View::OnEndInSearch)
	ON_COMMAND(ID_HISTOGRAM, &Cmodule5day1View::OnHistogram)
	ON_COMMAND(ID_HISTO_EQUAL, &Cmodule5day1View::OnHistoEqual)
	ON_COMMAND(ID_HISTO_SPEC, &Cmodule5day1View::OnHistoSpec)
	ON_COMMAND(ID_EMBOSSING, &Cmodule5day1View::OnEmbossing)
	ON_COMMAND(ID_BLURR, &Cmodule5day1View::OnBlurr)
	ON_COMMAND(ID_GAUSSIAN_FILTER, &Cmodule5day1View::OnGaussianFilter)
	ON_COMMAND(ID_SHARPENING, &Cmodule5day1View::OnSharpening)
	ON_COMMAND(ID_HRF_SHARP, &Cmodule5day1View::OnHrfSharp)
	ON_COMMAND(ID_LRF_SHARP, &Cmodule5day1View::OnLrfSharp)
	ON_COMMAND(ID_DIFF_OPERATOR_HOR, &Cmodule5day1View::OnDiffOperatorHor)
	ON_COMMAND(ID_HOMOGEN_OPERATOR, &Cmodule5day1View::OnHomogenOperator)
	ON_COMMAND(ID_LAPLACIAN, &Cmodule5day1View::OnLaplacian)
	ON_COMMAND(ID_NEAREST, &Cmodule5day1View::OnNearest)
	ON_COMMAND(ID_BILINEAR, &Cmodule5day1View::OnBilinear)
	ON_COMMAND(ID_MEDIAN_SUB, &Cmodule5day1View::OnMedianSub)
	ON_COMMAND(ID_MEAN_SUB, &Cmodule5day1View::OnMeanSub)
	ON_COMMAND(ID_TRANSLATION, &Cmodule5day1View::OnTranslation)
	ON_COMMAND(ID_MIRROR_HOR, &Cmodule5day1View::OnMirrorHor)
	ON_COMMAND(ID_MIRROR_VER, &Cmodule5day1View::OnMirrorVer)
	ON_COMMAND(ID_ROTATION, &Cmodule5day1View::OnRotation)
	ON_COMMAND(ID_FRAME_SUM, &Cmodule5day1View::OnFrameSum)
	ON_COMMAND(ID_FRAME_SUB, &Cmodule5day1View::OnFrameSub)
	ON_COMMAND(ID_FRAME_MUL, &Cmodule5day1View::OnFrameMul)
	ON_COMMAND(ID_FRAME_DIV, &Cmodule5day1View::OnFrameDiv)
	ON_COMMAND(ID_FRAME_AND, &Cmodule5day1View::OnFrameAnd)
	ON_COMMAND(ID_FRAME_OR, &Cmodule5day1View::OnFrameOr)
	ON_COMMAND(ID_FRAME_COMB, &Cmodule5day1View::OnFrameComb)
	ON_COMMAND(ID_BINARY_EROSION, &Cmodule5day1View::OnBinaryErosion)
	ON_COMMAND(ID_BINARY_DILATION, &Cmodule5day1View::OnBinaryDilation)
	ON_COMMAND(ID_GRAY_EROSION, &Cmodule5day1View::OnGrayErosion)
	ON_COMMAND(ID_GRAY_DILATION, &Cmodule5day1View::OnGrayDilation)
	ON_COMMAND(ID_LOW_PASS_FILTER, &Cmodule5day1View::OnLowPassFilter)
	ON_COMMAND(ID_HIGH_PASS_FILTER, &Cmodule5day1View::OnHighPassFilter)
	ON_COMMAND(ID_MEAN_FILTER, &Cmodule5day1View::OnMeanFilter)
	ON_COMMAND(ID_MEDIAN_FILTER, &Cmodule5day1View::OnMedianFilter)
	ON_COMMAND(ID_MAX_FILTER, &Cmodule5day1View::OnMaxFilter)
	ON_COMMAND(ID_MIN_FILTER, &Cmodule5day1View::OnMinFilter)
	ON_COMMAND(ID_FFT_2D, &Cmodule5day1View::OnFft2d)
	ON_COMMAND(ID_IFFT_2D, &Cmodule5day1View::OnIfft2d)
	ON_COMMAND(ID_LPF_FREQUENCY, &Cmodule5day1View::OnLpfFrequency)
	ON_COMMAND(ID_HPF_FREQUENCY, &Cmodule5day1View::OnHpfFrequency)
END_MESSAGE_MAP()

// Cmodule5day1View 생성/소멸

Cmodule5day1View::Cmodule5day1View() noexcept
{
	// TODO: 여기에 생성 코드를 추가합니다.

}

Cmodule5day1View::~Cmodule5day1View()
{
}

BOOL Cmodule5day1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.

	return CView::PreCreateWindow(cs);
}

// Cmodule5day1View 그리기

void Cmodule5day1View::OnDraw(CDC* pDC)
{
	Cmodule5day1Doc* pDoc = GetDocument(); // 도큐먼트 클래스 참조
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here

	int i, j;
	unsigned char R, G, B;
	// 입력 영상 출력
	for (i = 0; i < pDoc->m_height; i++) {
		for (j = 0; j < pDoc->m_width; j++) {
			R = pDoc->m_InputImage[i*pDoc->m_width + j];
			G = B = R;
			pDC->SetPixel(j + 5, i + 5, RGB(R, G, B));
		}
	}

	// 축소된 영상 출력
	for (i = 0; i < pDoc->m_Re_height; i++) {
		for (j = 0; j < pDoc->m_Re_width; j++) {
			R = pDoc->m_OutputImage[i*pDoc->m_Re_width + j];
			G = B = R;
			pDC->SetPixel(j + pDoc->m_width + 10, i + 5, RGB(R, G, B));
		}
	}

}



// Cmodule5day1View 인쇄


void Cmodule5day1View::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL Cmodule5day1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 기본적인 준비
	return DoPreparePrinting(pInfo);
}

void Cmodule5day1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄하기 전에 추가 초기화 작업을 추가합니다.
}

void Cmodule5day1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄 후 정리 작업을 추가합니다.
}

void Cmodule5day1View::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void Cmodule5day1View::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// Cmodule5day1View 진단

#ifdef _DEBUG
void Cmodule5day1View::AssertValid() const
{
	CView::AssertValid();
}

void Cmodule5day1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cmodule5day1Doc* Cmodule5day1View::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cmodule5day1Doc)));
	return (Cmodule5day1Doc*)m_pDocument;
}
#endif //_DEBUG


// Cmodule5day1View 메시지 처리기


void Cmodule5day1View::OnDownSampling()
{
	// TODO: Add your command handler code here
	Cmodule5day1Doc* pDoc = GetDocument(); // Doc 클래스 참조
	ASSERT_VALID(pDoc);

	pDoc->OnDownSampling(); // Doc 클래스에 OnDownSampling 함수 호출

	Invalidate(TRUE); // 화면 갱신

}


void Cmodule5day1View::OnUpSampling()
{
	// TODO: Add your command handler code here
	Cmodule5day1Doc* pDoc = GetDocument(); // Doc 클래스 참조
	ASSERT_VALID(pDoc);

	pDoc->OnUpSampling(); // Doc 클래스에 OnUpSampling 함수 호출

	Invalidate(TRUE); // 화면 갱신

}


void Cmodule5day1View::OnQuantization()
{
	// TODO: Add your command handler code here
	Cmodule5day1Doc* pDoc = GetDocument(); // Doc 클래스 참조
	ASSERT_VALID(pDoc);

	pDoc->OnQuantization(); // Doc 클래스에 OnQuantization 함수 호출

	Invalidate(TRUE); // 화면 갱신

}


void Cmodule5day1View::OnSumConstant()
{
	// TODO: Add your command handler code here
	Cmodule5day1Doc* pDoc = GetDocument();
	// 도큐먼트 클래스 참조
	ASSERT_VALID(pDoc); // 인스턴스 주소를 가져옴

	pDoc->OnSumConstant();

	Invalidate(TRUE);

}


void Cmodule5day1View::OnSubConstant()
{
	// TODO: Add your command handler code here
	Cmodule5day1Doc* pDoc = GetDocument();// 도큐먼트 클래스 참조
	ASSERT_VALID(pDoc); // 인스턴스 주소를 가져옴

	pDoc->OnSubConstant();

	Invalidate(TRUE);

}


void Cmodule5day1View::OnMulConstant()
{
	// TODO: Add your command handler code here
	Cmodule5day1Doc* pDoc = GetDocument(); // 도큐먼트 클래스 참조
	ASSERT_VALID(pDoc); // 인스턴스 주소를 가져옴

	pDoc->OnMulConstant();

	Invalidate(TRUE);

}


void Cmodule5day1View::OnDivConstant()
{
	Cmodule5day1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc); //인스턴스 주소를 가져옴

	pDoc->OnDivConstant();

	Invalidate(TRUE);
}


void Cmodule5day1View::OnAndOperate()
{
	Cmodule5day1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnAndOperate();

	Invalidate(TRUE);

}


void Cmodule5day1View::OnOrOperate()
{
	Cmodule5day1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnOrOperate();

	Invalidate(TRUE);

}


void Cmodule5day1View::OnXorOperate()
{
	Cmodule5day1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	pDoc->OnXorOperate();
	Invalidate(TRUE);

}


void Cmodule5day1View::OnNegaTransform()
{
	Cmodule5day1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnNegaTransform();

	Invalidate(TRUE);

}


void Cmodule5day1View::OnGammaCorrection()
{
	Cmodule5day1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnGammaCorrection();

	Invalidate(TRUE);

}


void Cmodule5day1View::OnBinarization()
{
	Cmodule5day1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnBinarization();

	Invalidate(TRUE);

}


void Cmodule5day1View::OnStressTransform()
{
	Cmodule5day1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnStressTransform();

	Invalidate(TRUE);
}


void Cmodule5day1View::OnHistoStretch()
{
	Cmodule5day1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnHistoStretch();

	Invalidate(TRUE);

}


void Cmodule5day1View::OnEndInSearch()
{
	Cmodule5day1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnEndInSearch();

	Invalidate(TRUE);
}


void Cmodule5day1View::OnHistogram()
{
	Cmodule5day1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnHistogram();
	Invalidate(TRUE);

}


void Cmodule5day1View::OnHistoEqual()
{
	Cmodule5day1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnHistoEqual();

	Invalidate(TRUE);

}


void Cmodule5day1View::OnHistoSpec()
{
	Cmodule5day1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnHistoSpec();

	Invalidate(TRUE);

}


void Cmodule5day1View::OnEmbossing()
{
	Cmodule5day1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnEmbossing();

	Invalidate(TRUE);

}


void Cmodule5day1View::OnBlurr()
{
	Cmodule5day1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnBlurr();

	Invalidate(TRUE);
}


void Cmodule5day1View::OnGaussianFilter()
{
	Cmodule5day1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnGaussianFilter();

	Invalidate(TRUE);
}


void Cmodule5day1View::OnSharpening()
{
	Cmodule5day1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnSharpening();

	Invalidate(TRUE);
}


void Cmodule5day1View::OnHrfSharp()
{
	Cmodule5day1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnHrfSharp();

	Invalidate(TRUE);
}


void Cmodule5day1View::OnLrfSharp()
{
	Cmodule5day1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnLrfSharp();

	Invalidate(TRUE);
}


void Cmodule5day1View::OnDiffOperatorHor()
{
	Cmodule5day1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnDiffOperatorHor();

	Invalidate(TRUE);
}


void Cmodule5day1View::OnHomogenOperator()
{
	Cmodule5day1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnHomogenOperator();

	Invalidate(TRUE);
}


void Cmodule5day1View::OnLaplacian()
{
	Cmodule5day1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnLaplacian();

	Invalidate(TRUE);
}


void Cmodule5day1View::OnNearest()
{
	Cmodule5day1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnNearest();

	Invalidate(TRUE);
}


void Cmodule5day1View::OnBilinear()
{
	Cmodule5day1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnBilinear();

	Invalidate(TRUE);
}


void Cmodule5day1View::OnMedianSub()
{
	Cmodule5day1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnMedianSub();

	Invalidate(TRUE);
}


void Cmodule5day1View::OnMeanSub()
{
	Cmodule5day1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnMeanSub();

	Invalidate(TRUE);
}


void Cmodule5day1View::OnTranslation()
{
	Cmodule5day1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnTranslation();

	Invalidate(TRUE);
}


void Cmodule5day1View::OnMirrorHor()
{
	Cmodule5day1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnMirrorHor();

	Invalidate(TRUE);
}


void Cmodule5day1View::OnMirrorVer()
{
	Cmodule5day1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnMirrorVer();

	Invalidate(TRUE);
}


void Cmodule5day1View::OnRotation()
{
	Cmodule5day1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnRotation();

	Invalidate(TRUE);
}


void Cmodule5day1View::OnFrameSum()
{
	Cmodule5day1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnFrameSum();

	Invalidate(TRUE);
}


void Cmodule5day1View::OnFrameSub()
{
	Cmodule5day1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnFrameSub();

	Invalidate(TRUE);
}


void Cmodule5day1View::OnFrameMul()
{
	Cmodule5day1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnFrameMul();

	Invalidate(TRUE);
}


void Cmodule5day1View::OnFrameDiv()
{
	Cmodule5day1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnFrameDiv();

	Invalidate(TRUE); 
}


void Cmodule5day1View::OnFrameAnd()
{
	Cmodule5day1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnFrameAnd();

	Invalidate(TRUE);
}


void Cmodule5day1View::OnFrameOr()
{
	Cmodule5day1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnFrameOr();

	Invalidate(TRUE);
}


void Cmodule5day1View::OnFrameComb()
{
	Cmodule5day1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnFrameComb();

	Invalidate(TRUE);
}


void Cmodule5day1View::OnBinaryErosion()
{
	Cmodule5day1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnBinaryErosion();

	Invalidate(TRUE);
}


void Cmodule5day1View::OnBinaryDilation()
{
	Cmodule5day1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnBinaryDilation();

	Invalidate(TRUE);
}


void Cmodule5day1View::OnGrayErosion()
{
	Cmodule5day1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnGrayErosion();

	Invalidate(TRUE);
}


void Cmodule5day1View::OnGrayDilation()
{
	Cmodule5day1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnGrayDilation();

	Invalidate(TRUE);
}


void Cmodule5day1View::OnLowPassFilter()
{
	Cmodule5day1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnLowPassFilter();

	Invalidate(TRUE);
}


void Cmodule5day1View::OnHighPassFilter()
{
	Cmodule5day1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnHighPassFilter();

	Invalidate(TRUE);
}


void Cmodule5day1View::OnMeanFilter()
{
	Cmodule5day1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnMeanFilter();

	Invalidate(TRUE);
}


void Cmodule5day1View::OnMedianFilter()
{
	Cmodule5day1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnMedianFilter();

	Invalidate(TRUE);
}


void Cmodule5day1View::OnMaxFilter()
{
	Cmodule5day1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnMaxFilter();

	Invalidate(TRUE);
}


void Cmodule5day1View::OnMinFilter()
{
	Cmodule5day1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnMinFilter();

	Invalidate(TRUE);
}


void Cmodule5day1View::OnFft2d()
{
	Cmodule5day1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnFft2d();

	Invalidate(TRUE);
}


void Cmodule5day1View::OnIfft2d()
{
	Cmodule5day1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnIfft2d();

	Invalidate(TRUE);
}


void Cmodule5day1View::OnLpfFrequency()
{
	Cmodule5day1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnLpfFrequency();

	Invalidate(TRUE);
}


void Cmodule5day1View::OnHpfFrequency()
{
	Cmodule5day1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	pDoc->OnHpfFrequency();

	Invalidate(TRUE);
}
