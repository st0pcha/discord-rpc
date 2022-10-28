#pragma once
#include <discord_register.h>
#include <discord_rpc.h>
#include <Windows.h>

class Discord {
public:
	void Initialize(const char *clientId);
	void Update(const char *state, const char* details, int64_t startTime, const char* largeImageKey,
		const char *largeImageText, const char* smallImageKey, const char* smallImageText);
};