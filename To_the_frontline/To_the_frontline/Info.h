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

// �ִ� ���� ��
#define MAX_STRING_SIZE 64

// Ű���� ������� ó���ϱ� ���� ���� ��ȣ
#define LEFT	75
#define RIGHT	77
#define UP		72
#define DOWN	80
#define ENTER	13

// ���� ���� �̸��� ����� ��ġ
#define SCName_X	0
#define SCName_Y	0

// �÷��̾� ������ ����� ��ġ
#define Info_X 4
#define Info_Y 4

// �������� ������ ����� ��ġ
#define Stage_X 10
#define Stage_Y 0


// �ܼ� ȭ�� ���� �Լ�
extern void GoToXY(SHORT x, SHORT y);			// ���� �ؽ�Ʈ�� ��µ� �ܼ� ��ǥ(x,y)�� �����ϴ� �Լ�
extern void SetTextColor(int num);					// ���� �ؽ�Ʈ�� ����� �ٲ��ִ� �Լ� (0 ~ 15��)
extern void SetCursorVisible(bool bVisible);			// �Է� Ŀ���� ���̰�/�Ⱥ��̰� �ϴ� �Լ�

// ���� �����
class Poketmon;
class Player;
class Stage;
class Exp;
class Button;

// ��ŸƮ ���ϸ� ����Ʈ, �� ���ϸ� ����Ʈ ���� �ؽ�Ʈ ���Ϸκ��� �ҷ���
//extern void LoadPoketmonList(vector<Poketmon*>* PoketmonList, string FileName);
//
//// ���ϸ� ����Ʈ�� �ؽ�Ʈ ���Ϸ� ����
//extern void SavePoketmonList(vector<Poketmon*>* PoketmonList, string FileName);
//
//// �÷��̾� ������ �ؽ�Ʈ ���Ϸκ��� �ҷ���
//extern void LoadPlayerInfo(Player* player, string FileName);
//
//// �÷��̾� ������ �ؽ�Ʈ ���Ϸ� ����
//extern void SavePlayerInfo(Player* player, string FileName);
//
//// �������� ������ �ؽ�Ʈ ���Ϸκ��� �ҷ���
//extern void LoadStageList(vector<Stage*>* StageList, string FileName);
//
//// ����ġǥ�� �ؽ�Ʈ ���Ϸκ��� �ҷ���
//extern void LoadExpTable(vector<Exp*>* ExpTable, string FileName);