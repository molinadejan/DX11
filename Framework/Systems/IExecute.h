#pragma once

class IExecute
{
public:
	virtual ~IExecute() = default;
	virtual void Initialize() = 0;	// : �ʱ�ȭ
	virtual void Ready() = 0;		
	virtual void Destroy() = 0;		// : ���α׷� ����

	virtual void Update() = 0;		// : �̵����� �� ����
	virtual void PreRender() = 0;	// : 
	virtual void Render() = 0;		// : 
	virtual void PostRender() = 0;

	virtual void ResizeScreen() = 0;	// : ȭ�� ������ ���� 
};