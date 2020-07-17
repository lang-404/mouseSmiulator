// 下列 ifdef 块是创建使从 DLL 导出更简单的
// 宏的标准方法。此 DLL 中的所有文件都是用命令行上定义的 MOUSESIMULATOR_EXPORTS
// 符号编译的。在使用此 DLL 的
// 任何其他项目上不应定义此符号。这样，源文件中包含此文件的任何其他项目都会将
// MOUSESIMULATOR_API 函数视为是从 DLL 导入的，而此 DLL 则将用此宏定义的
// 符号视为是被导出的。
#ifdef MOUSESIMULATOR_EXPORTS
#define MOUSESIMULATOR_API __declspec(dllexport)
#else
#define MOUSESIMULATOR_API __declspec(dllimport)
#endif

// 此类是从 MouseSimulator.dll 导出的
class MOUSESIMULATOR_API MouseSimulator {
public:
	MouseSimulator(void);
	// TODO:  在此添加您的方法。
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
