#include "mod_utils.hpp"
#include "hooks.hpp"
using namespace cocos2d;
using namespace gd;
using namespace cocos2d::extension;
using namespace std;
#include "SimpleIni.h"
inline CCLabelBMFont* (__cdecl* CCLabelBMFont_create)(const char*, const char*);
CCLabelBMFont* CCLabelBMFont_create_H(const char* str, const char* fntFile) 
{
    if (std::string(str) == "Settings for fucks_icon_kit") ShellExecute(NULL, ("open"), (CCFileUtils::sharedFileUtils()->fullPathForFilename("fucks_icon_kit.ini", 0).c_str()), NULL, NULL, 1);
    return CCLabelBMFont_create(str, fntFile);
}
void(__thiscall* LoadingLayer_loadingFinished)(LoadingLayer*);//0x18C790
void __fastcall LoadingLayer_loadingFinished_H(LoadingLayer* self, void*) 
{
    CSimpleIni fucks_icon_kit;
    fucks_icon_kit.LoadFile("fucks_icon_kit.ini");
    #define username GJAccountManager::sharedState()->m_sUsername.c_str()
    GameManager::sharedState()->setPlayerFrame(stoi(fucks_icon_kit.GetValue(username, "m_nPlayerFrame")));
    GameManager::sharedState()->setPlayerShip(stoi(fucks_icon_kit.GetValue(username, "m_nPlayerShip")));
    GameManager::sharedState()->setPlayerBall(stoi(fucks_icon_kit.GetValue(username, "m_nPlayerBall")));
    GameManager::sharedState()->setPlayerBird(stoi(fucks_icon_kit.GetValue(username, "m_nPlayerBird")));
    GameManager::sharedState()->setPlayerDart(stoi(fucks_icon_kit.GetValue(username, "m_nPlayerDart")));
    GameManager::sharedState()->setPlayerRobot(stoi(fucks_icon_kit.GetValue(username, "m_nPlayerRobot")));
    GameManager::sharedState()->setPlayerSpider(stoi(fucks_icon_kit.GetValue(username, "m_nPlayerSpider")));
    GameManager::sharedState()->setPlayerStreak(stoi(fucks_icon_kit.GetValue(username, "m_nPlayerStreak")));
    GameManager::sharedState()->setPlayerDeathEffect(stoi(fucks_icon_kit.GetValue(username, "m_nPlayerDeathEffect")));
    GameManager::sharedState()->setPlayerGlow(stoi(fucks_icon_kit.GetValue(username, "m_bPlayerGlow")));
    GameManager::sharedState()->setPlayerColor(stoi(fucks_icon_kit.GetValue(username, "m_nPlayerColor")));
    GameManager::sharedState()->setPlayerColor2(stoi(fucks_icon_kit.GetValue(username, "m_nPlayerColor2")));
    GameManager::sharedState()->setPlayerIconType(static_cast<IconType>(stoi(fucks_icon_kit.GetValue(username, "m_nPlayerIconType"))));
    LoadingLayer_loadingFinished(self);
}
inline void(__thiscall* trySaveGame)(AppDelegate*);
void __fastcall trySaveGame_H(AppDelegate* self, void*) 
{
    CSimpleIni fucks_icon_kit;
    fucks_icon_kit.LoadFile("fucks_icon_kit.ini");
    #define username GJAccountManager::sharedState()->m_sUsername.c_str()
    fucks_icon_kit.SetValue(username, "m_nPlayerFrame", to_string(GameManager::sharedState()->getPlayerFrame()).c_str());
    fucks_icon_kit.SetValue(username, "m_nPlayerShip", to_string(GameManager::sharedState()->getPlayerShip()).c_str());
    fucks_icon_kit.SetValue(username, "m_nPlayerBall", to_string(GameManager::sharedState()->getPlayerBall()).c_str());
    fucks_icon_kit.SetValue(username, "m_nPlayerBird", to_string(GameManager::sharedState()->getPlayerBird()).c_str());
    fucks_icon_kit.SetValue(username, "m_nPlayerDart", to_string(GameManager::sharedState()->getPlayerDart()).c_str());
    fucks_icon_kit.SetValue(username, "m_nPlayerRobot", to_string(GameManager::sharedState()->getPlayerRobot()).c_str());
    fucks_icon_kit.SetValue(username, "m_nPlayerSpider", to_string(GameManager::sharedState()->getPlayerSpider()).c_str());
    fucks_icon_kit.SetValue(username, "m_nPlayerStreak", to_string(GameManager::sharedState()->getPlayerStreak()).c_str());
    fucks_icon_kit.SetValue(username, "m_nPlayerDeathEffect", to_string(GameManager::sharedState()->getPlayerDeathEffect()).c_str());
    fucks_icon_kit.SetValue(username, "m_bPlayerGlow", to_string(GameManager::sharedState()->getPlayerGlow()).c_str());
    fucks_icon_kit.SetValue(username, "m_nPlayerColor", to_string(GameManager::sharedState()->getPlayerColor()).c_str());
    fucks_icon_kit.SetValue(username, "m_nPlayerColor2", to_string(GameManager::sharedState()->getPlayerColor2()).c_str());
    fucks_icon_kit.SetValue(username, "m_nPlayerIconType", to_string(GameManager::sharedState()->getPlayerIconType()).c_str());
    fucks_icon_kit.SaveFile("fucks_icon_kit.ini");
    trySaveGame(self);
}
DWORD WINAPI thread_func(void* hModule) 
{
    MH_SafeInitialize();
    CC_HOOK("?create@CCLabelBMFont@cocos2d@@SAPAV12@PBD0@Z", CCLabelBMFont_create);
    HOOK(base + 0x18C790, LoadingLayer_loadingFinished);
    HOOK(base + 0x3d5e0, trySaveGame);
    MH_EnableHook(MH_ALL_HOOKS);
    CSimpleIni fucks_icon_kit;
    fucks_icon_kit.LoadFile("fucks_icon_kit.ini");
    #define username GJAccountManager::sharedState()->m_sUsername.c_str()
    if (!(fucks_icon_kit.KeyExists(username, "m_nPlayerFrame")))
        fucks_icon_kit.SetValue(username, "m_nPlayerFrame", to_string(GameManager::sharedState()->getPlayerFrame()).c_str());
    if (!(fucks_icon_kit.KeyExists(username, "m_nPlayerShip")))
        fucks_icon_kit.SetValue(username, "m_nPlayerShip", to_string(GameManager::sharedState()->getPlayerShip()).c_str());
    if (!(fucks_icon_kit.KeyExists(username, "m_nPlayerBall")))
        fucks_icon_kit.SetValue(username, "m_nPlayerBall", to_string(GameManager::sharedState()->getPlayerBall()).c_str());
    if (!(fucks_icon_kit.KeyExists(username, "m_nPlayerBird")))
        fucks_icon_kit.SetValue(username, "m_nPlayerBird", to_string(GameManager::sharedState()->getPlayerBird()).c_str());
    if (!(fucks_icon_kit.KeyExists(username, "m_nPlayerDart")))
        fucks_icon_kit.SetValue(username, "m_nPlayerDart", to_string(GameManager::sharedState()->getPlayerDart()).c_str());
    if (!(fucks_icon_kit.KeyExists(username, "m_nPlayerRobot")))
        fucks_icon_kit.SetValue(username, "m_nPlayerRobot", to_string(GameManager::sharedState()->getPlayerRobot()).c_str());
    if (!(fucks_icon_kit.KeyExists(username, "m_nPlayerSpider")))
        fucks_icon_kit.SetValue(username, "m_nPlayerSpider", to_string(GameManager::sharedState()->getPlayerSpider()).c_str());
    if (!(fucks_icon_kit.KeyExists(username, "m_nPlayerStreak")))
        fucks_icon_kit.SetValue(username, "m_nPlayerStreak", to_string(GameManager::sharedState()->getPlayerStreak()).c_str());
    if (!(fucks_icon_kit.KeyExists(username, "m_nPlayerDeathEffect")))
        fucks_icon_kit.SetValue(username, "m_nPlayerDeathEffect", to_string(GameManager::sharedState()->getPlayerDeathEffect()).c_str());
    if (!(fucks_icon_kit.KeyExists(username, "m_bPlayerGlow")))
        fucks_icon_kit.SetValue(username, "m_bPlayerGlow", to_string(GameManager::sharedState()->getPlayerGlow()).c_str());
    if (!(fucks_icon_kit.KeyExists(username, "m_nPlayerColor")))
        fucks_icon_kit.SetValue(username, "m_nPlayerColor", to_string(GameManager::sharedState()->getPlayerColor()).c_str());
    if (!(fucks_icon_kit.KeyExists(username, "m_nPlayerColor2")))
        fucks_icon_kit.SetValue(username, "m_nPlayerColor2", to_string(GameManager::sharedState()->getPlayerColor2()).c_str());
    if (!(fucks_icon_kit.KeyExists(username, "m_nPlayerIconType")))
        fucks_icon_kit.SetValue(username, "m_nPlayerIconType", to_string(GameManager::sharedState()->getPlayerIconType()).c_str());
    fucks_icon_kit.SaveFile("fucks_icon_kit.ini");
    return 0;
}
BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) 
{
    if (ul_reason_for_call == DLL_PROCESS_ATTACH)
        CreateThread(0, 0, thread_func, hModule, 0, 0);
    return TRUE;
}
