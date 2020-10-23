#pragma once

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <list>
#include <vector>
#include <string>
#include <time.h>

using namespace std;

#pragma warning (disable:4996)

// 최대 글자 수
#define MAX_STRING_SIZE 64

// 키보드 입출력을 처리하기 위한 고유 번호
#define LEFT	75
#define RIGHT	77
#define UP		72
#define DOWN	80
#define ENTER	13

// 현재 씬의 이름을 출력할 위치
#define SCName_X	0
#define SCName_Y	0

// 플레이어 정보를 출력할 위치
#define Info_X 4
#define Info_Y 4

// 스테이지 정보를 출력할 위치
#define Stage_X 10
#define Stage_Y 0


// 콘솔 화면 제어 함수
extern void GoToXY(SHORT x, SHORT y);			// 다음 텍스트가 출력될 콘솔 좌표(x,y)를 지정하는 함수
extern void SetTextColor(int num);					// 다음 텍스트의 색깔로 바꿔주는 함수 (0 ~ 15번)
extern void SetCursorVisible(bool bVisible);			// 입력 커서를 보이게/안보이게 하는 함수

// 파일 입출력
class Poketmon;
class Player;
class Stage;
class Exp;
class Button;

// 스타트 포켓몬 리스트, 적 포켓몬 리스트 등을 텍스트 파일로부터 불러옴
//extern void LoadPoketmonList(vector<Poketmon*>* PoketmonList, string FileName);
//
//// 포켓몬 리스트를 텍스트 파일로 저장
//extern void SavePoketmonList(vector<Poketmon*>* PoketmonList, string FileName);
//
//// 플레이어 정보를 텍스트 파일로부터 불러옴
//extern void LoadPlayerInfo(Player* player, string FileName);
//
//// 플레이어 정보를 텍스트 파일로 저장
//extern void SavePlayerInfo(Player* player, string FileName);
//
//// 스테이지 정보를 텍스트 파일로부터 불러옴
//extern void LoadStageList(vector<Stage*>* StageList, string FileName);
//
//// 경험치표를 텍스트 파일로부터 불러옴
//extern void LoadExpTable(vector<Exp*>* ExpTable, string FileName);