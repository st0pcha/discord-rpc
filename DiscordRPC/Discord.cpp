#include "Discord.h"
#include <discord_rpc.h>

void Discord::Initialize(const char *clientId) {
	DiscordEventHandlers handlers;
	memset(&handlers, 0, sizeof(handlers));
	Discord_Initialize(clientId, &handlers, 1, NULL);
}

void Discord::Update(const char *state, const char *details, int64_t startTime, const char *largeImageKey,
    const char *largeImageText, const char *smallImageKey, const char *smallImageText) {

    DiscordRichPresence discordPresence;
    memset(&discordPresence, 0, sizeof(discordPresence));
    discordPresence.state = state;
    discordPresence.details = details;
    discordPresence.startTimestamp = startTime;
    discordPresence.endTimestamp = NULL;
    discordPresence.largeImageKey = largeImageKey;
    discordPresence.largeImageText = largeImageText;
    discordPresence.smallImageKey = smallImageKey;
    discordPresence.smallImageText = smallImageText;
    Discord_UpdatePresence(&discordPresence);
}