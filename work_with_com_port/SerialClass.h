#ifndef SERIALCLASS_H_INCLUDED
#define SERIALCLASS_H_INCLUDED

#define ARDUINO_WAIT_TIME 2000

#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

class Serial
{
private:
	// ���������� COM-�����
	HANDLE hSerial;
	// ������ ����������
	bool connected;
	// ��������� ���������� � ����������
	COMSTAT status;
	// ��������� ������
	DWORD errors;

public:
	// ������������� � ��������� COM-������
	Serial(LPCWSTR portName);
	// �������� ����������
	//NOTA: �� �����-�� �������� �� ������ ����������������
	// ����� ������������� ���������
	~Serial();
	// ��������� ������ � ����� � ���� nbChar ������, ���
	// ����� ��������� ���� � ���������� ������ 
	// ��������� ������
	// ���������� -1 ��� ������
	int ReadData(char *buffer, unsigned int nbChar);
	// ���������� ������ �� ������ � ����
	// ���������� true ��� �����
	bool WriteData(char *buffer, unsigned int nbChar);
	// ���������� ������ ����������
	bool IsConnected();


};

#endif // SERIALCLASS_H_INCLUDED