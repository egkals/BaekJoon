#include <iostream>
#include <ctime>	// 현재 날짜나 시간 구하는 헤더파일
#include <iomanip>	// iostream 클래스에 영향을 줄 수 있는 조작자들의 설정들, setfill()과 setw() 함수를 사용하기 위함

using namespace std;

// 정의 되어 있는 시간 구조체
//struct tm {
//	int tm_sec;         // 초,  range 0 to 59      
//	int tm_min;         // 분, range 0 to 59             
//	int tm_hour;        // 시간, range 0 to 23  
//	int tm_mday;        // 일, range 1 to 31  
//	int tm_mon;         // 월, range 0 to 11     
//	int tm_year;        // 1900년 부터의 년                
//	int tm_wday;        // 요일, range 일(0) to 토(6) 
//	int tm_yday;        // 1년 중 경과 일, range 0 to 365 
//	int tm_isdst;       // 섬머타임 실시 여부 (양수, 0, 음수)              
//};

int main()
{
	//  time() 함수를 호출해 현재 날짜, 시간을 얻어 time_t 변수에 저장
	// time_t를 정수 or 부동소수점으로 정의하고 있음
	time_t timer = time(NULL);	// time 함수로 얻은 결과를 time_t 타입으로 리턴함
	struct tm* t = localtime(&timer);	// localtime() 함수를 호출해 포맷 변환

	//setfill('0') = 0으로 채우기 설정, setw(4) = 4로 필드 폭 설정 
	cout << setfill('0') << setw(4) << t->tm_year + 1900 << "-" << setw(2) << t->tm_mon + 1 << "-" << setw(2) << t->tm_mday;
	return 0;
}