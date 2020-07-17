// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� MOUSESIMULATOR_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// MOUSESIMULATOR_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef MOUSESIMULATOR_EXPORTS
#define MOUSESIMULATOR_API __declspec(dllexport)
#else
#define MOUSESIMULATOR_API __declspec(dllimport)
#endif

// �����Ǵ� MouseSimulator.dll ������
class MOUSESIMULATOR_API MouseSimulator {
public:
	MouseSimulator(void);
	// TODO:  �ڴ�������ķ�����
	virtual ~MouseSimulator();

public:
	void GetNewCursor();
	void setMouseMoveEvent(int x, int y);
	void LeftClickEvent();
	void LeftDubbleClickEvent();
	void RightClickEvent();
	void MouseLeftDown();
	void MouseLeftUP();
	void MouseRollerClick();

private:
	int mouseX;
	int mouseY;
};

extern MOUSESIMULATOR_API int nMouseSimulator;

MOUSESIMULATOR_API int fnMouseSimulator(void);
