#pragma once

#include <memory.h>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Minor
{
	class MINOR_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};
}

// Core log macros
#define MIN_CORE_TRACE(...)		::Minor::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define MIN_CORE_INFO(...)		::Minor::Log::GetCoreLogger()->info(__VA_ARGS__)
#define MIN_CORE_WARN(...)		::Minor::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define MIN_CORE_ERROR(...)		::Minor::Log::GetCoreLogger()->error(__VA_ARGS__)
#define MIN_CORE_FATAL(...)		::Minor::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define MIN_TRACE(...)			::Minor::Log::GetClientLogger()->trace(__VA_ARGS__)
#define MIN_INFO(...)			::Minor::Log::GetClientLogger()->info(__VA_ARGS__)
#define MIN_WARN(...)			::Minor::Log::GetClientLogger()->warn(__VA_ARGS__)
#define MIN_ERROR(...)			::Minor::Log::GetClientLogger()->error(__VA_ARGS__)
#define MIN_FATAL(...)			::Minor::Log::GetClientLogger()->fatal(__VA_ARGS__)
