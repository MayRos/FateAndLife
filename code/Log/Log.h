#include <string>
#ifndef LOG_H
#define LOG_H

// 下列 ifdef 块是创建使从 DLL 导出更简单的
// 宏的标准方法。此 DLL 中的所有文件都是用命令行上定义的 LOG_EXPORTS
// 符号编译的。在使用此 DLL 的
// 任何项目上不应定义此符号。这样，源文件中包含此文件的任何其他项目都会将
// LOG_API 函数视为是从 DLL 导入的，而此 DLL 则将用此宏定义的
// 符号视为是被导出的。
#ifdef LOG_EXPORTS
#define LOG_API __declspec(dllexport)
#else
#define LOG_API __declspec(dllimport)
#endif

// 此类是从 dll 导出的
class LOG_API CLog {
public:
	enum LogLevel
	{
		Error,
		Warnning,
		Info,
		Debug
	};
	// TODO: 在此处添加方法。
	static CLog& GetInstance();
	void SetLogFile(std::string filePath);
	void SetLogLevel(LogLevel level);
private:
	LogLevel level_;
	CLog(void);
};

extern LOG_API int nLog;

LOG_API int fnLog(void);

#endif // !LOG_H