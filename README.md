
    MFC 라이브러리 : mfc-2019-11-13-Splash 프로젝트 개요
===============================================================
===============================================================
### C:\Users\software\Documents\Visual Studio 2015\Projects\mfc-2019-11-13-Splash\mfc-2019-11-13-Splash 경로에 파일 3개 추가 ###
#### 솔루션 탐색기에서 소스파일 -> 우클릭 -> 추가 -> 기존항목 cpp 추가 ####
#### 솔루션 탐색기에서 헤더파일 -> 우클릭 -> 추가 -> 기존항목  h 추가 ####
> 
> 기본 cpp 파일에 헤더파일 추가
> #include "Splash.h"
> 
> BOOL Cmfc20191113SplashApp::InitInstance(){
> 	함수안에
> 
> 		CSplash splash1(TEXT("splash.bmp"), RGB(255, 255, 255)); // 이미지 불러오고 RGB 255,255,255 세팅
> 		splash1.ShowSplash();	// 이미지 불러오기
> 		Sleep(3000);		// 3초간 브레이크
> 		splash1.CloseSplash();	// 이미지 종료
> 
> 	추가
> }
> 
