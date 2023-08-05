// Log.cpp : 定义 DLL 的导出函数。
//

#include "pch.h"
#include "framework.h"
#include "Log.h"


// 这是导出变量的一个示例
LOG_API int nLog=0;

// 这是导出函数的一个示例。
LOG_API int fnLog(void)
{
    return 0;
}

// 这是已导出类的构造函数。
CLog::CLog()
{
    return;
}

CLog& CLog::GetInstance()
{
    // TODO: 在此处插入 return 语句
    static CLog instance;
    return instance;
}

void CLog::SetLogFile(std::string filePath)
{
}

void CLog::SetLogLevel(LogLevel level)
{
    level_ = level;
}
