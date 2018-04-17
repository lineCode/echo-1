#pragma once

#include <engine/core/util/StringUtil.h>

namespace Echo
{
	/**
	 * 命令行解析 2012-8-16 帝林
	 */
	class CMDLine
	{
	public:
		// 解析主入口
		static bool Parser(int argc, char* argv[]);

		// 释放
		static void Release();
	};

	/**
	 * EditorMode
	 */
	class EditorMode
	{
	public:
		// exec command
		bool exec(int argc, char* argv[]);
	};

	/**
	 * GameMode
	 */
	class GameMode
	{
	public:
		// exec command
		bool exec(const StringArray& argvs, int argc, char* argv[]);
	};
}