#include "ISteamUser016.h"

class ISteamUser016_wrapper
{
public:
	virtual HSteamUser  GetHSteamUser ()	{
		char log[1024];
		sprintf(log,"GetHSteamUser() "		);
		OutputDebugStringA(log);
		HSteamUser  ret = m_pWrapper->GetHSteamUser();
		sprintf(log," returned 0x%X",ret);
		OutputDebugStringA(log);
		OutputDebugStringA("\n");
		return ret;
	}
	virtual bool  BLoggedOn ()	{
		char log[1024];
		sprintf(log,"BLoggedOn() "		);
		OutputDebugStringA(log);
		bool  ret = m_pWrapper->BLoggedOn();
		sprintf(log," returned 0x%X",ret);
		OutputDebugStringA(log);
		OutputDebugStringA("\n");
		return ret;
	}
	virtual CSteamID  GetSteamID ()	{
		char log[1024];
		sprintf(log,"GetSteamID() "		);
		OutputDebugStringA(log);
		CSteamID  ret = m_pWrapper->GetSteamID();
		sprintf(log," returned 0x%X",ret);
		OutputDebugStringA(log);
		OutputDebugStringA("\n");
		return ret;
	}
	virtual int  InitiateGameConnection ( void *pAuthBlob,  int cbMaxAuthBlob,  CSteamID steamIDGameServer,  uint32 unIPServer,  uint16 usPortServer,  bool bSecure )	{
		char log[1024];
		sprintf(log,"InitiateGameConnection() pAuthBlob=0x%X cbMaxAuthBlob=0x%X steamIDGameServer=0x%X unIPServer=0x%X usPortServer=0x%X bSecure=0x%X ",
			pAuthBlob,
			cbMaxAuthBlob,
			steamIDGameServer,
			unIPServer,
			usPortServer,
			bSecure		);
		OutputDebugStringA(log);
		int  ret = m_pWrapper->InitiateGameConnection(pAuthBlob, cbMaxAuthBlob, steamIDGameServer, unIPServer, usPortServer, bSecure);
		sprintf(log," returned 0x%X",ret);
		OutputDebugStringA(log);
		OutputDebugStringA("\n");
		return ret;
	}
	virtual void  TerminateGameConnection ( uint32 unIPServer,  uint16 usPortServer )	{
		char log[1024];
		sprintf(log,"TerminateGameConnection() unIPServer=0x%X usPortServer=0x%X ",
			unIPServer,
			usPortServer		);
		OutputDebugStringA(log);
		unIPServer, usPortServer);
		OutputDebugStringA("\n");
	}
	virtual void  TrackAppUsageEvent ( CGameID gameID,  int eAppUsageEvent,  const char *pchExtraInfo = "" )	{
		char log[1024];
		sprintf(log,"TrackAppUsageEvent() gameID=0x%X eAppUsageEvent=0x%X ""=%s ",
			gameID,
			eAppUsageEvent,
			""		);
		OutputDebugStringA(log);
		gameID, eAppUsageEvent, "");
		OutputDebugStringA("\n");
	}
	virtual bool  GetUserDataFolder ( char *pchBuffer,  int cubBuffer )	{
		char log[1024];
		sprintf(log,"GetUserDataFolder() pchBuffer=%s cubBuffer=0x%X ",
			pchBuffer,
			cubBuffer		);
		OutputDebugStringA(log);
		bool  ret = m_pWrapper->GetUserDataFolder(pchBuffer, cubBuffer);
		sprintf(log," returned 0x%X",ret);
		OutputDebugStringA(log);
		OutputDebugStringA("\n");
		return ret;
	}
	virtual void  StartVoiceRecording ( )	{
		char log[1024];
		sprintf(log,"StartVoiceRecording() "		);
		OutputDebugStringA(log);
		);
		OutputDebugStringA("\n");
	}
	virtual void  StopVoiceRecording ( )	{
		char log[1024];
		sprintf(log,"StopVoiceRecording() "		);
		OutputDebugStringA(log);
		);
		OutputDebugStringA("\n");
	}
	virtual EVoiceResult  GetAvailableVoice (uint32 *pcbCompressed,  uint32 *pcbUncompressed,  uint32 nUncompressedVoiceDesiredSampleRate)	{
		char log[1024];
		sprintf(log,"GetAvailableVoice() pcbCompressed=0x%X pcbUncompressed=0x%X nUncompressedVoiceDesiredSampleRate=0x%X ",
			pcbCompressed,
			pcbUncompressed,
			nUncompressedVoiceDesiredSampleRate		);
		OutputDebugStringA(log);
		EVoiceResult  ret = m_pWrapper->GetAvailableVoice(pcbCompressed, pcbUncompressed, nUncompressedVoiceDesiredSampleRate);
		sprintf(log," returned 0x%X",ret);
		OutputDebugStringA(log);
		OutputDebugStringA("\n");
		return ret;
	}
	virtual EVoiceResult  GetVoice ( bool bWantCompressed,  void *pDestBuffer,  uint32 cbDestBufferSize,  uint32 *nBytesWritten,  bool bWantUncompressed,  void *pUncompressedDestBuffer,  uint32 cbUncompressedDestBufferSize,  uint32 *nUncompressBytesWritten,  uint32 nUncompressedVoiceDesiredSampleRate )	{
		char log[1024];
		sprintf(log,"GetVoice() bWantCompressed=0x%X pDestBuffer=0x%X cbDestBufferSize=0x%X nBytesWritten=0x%X bWantUncompressed=0x%X pUncompressedDestBuffer=0x%X cbUncompressedDestBufferSize=0x%X nUncompressBytesWritten=0x%X nUncompressedVoiceDesiredSampleRate=0x%X ",
			bWantCompressed,
			pDestBuffer,
			cbDestBufferSize,
			nBytesWritten,
			bWantUncompressed,
			pUncompressedDestBuffer,
			cbUncompressedDestBufferSize,
			nUncompressBytesWritten,
			nUncompressedVoiceDesiredSampleRate		);
		OutputDebugStringA(log);
		EVoiceResult  ret = m_pWrapper->GetVoice(bWantCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, bWantUncompressed, pUncompressedDestBuffer, cbUncompressedDestBufferSize, nUncompressBytesWritten, nUncompressedVoiceDesiredSampleRate);
		sprintf(log," returned 0x%X",ret);
		OutputDebugStringA(log);
		OutputDebugStringA("\n");
		return ret;
	}
	virtual EVoiceResult  DecompressVoice ( const void *pCompressed,  uint32 cbCompressed,  void *pDestBuffer,  uint32 cbDestBufferSize,  uint32 *nBytesWritten,  uint32 nDesiredSampleRate )	{
		char log[1024];
		sprintf(log,"DecompressVoice() pCompressed=0x%X cbCompressed=0x%X pDestBuffer=0x%X cbDestBufferSize=0x%X nBytesWritten=0x%X nDesiredSampleRate=0x%X ",
			pCompressed,
			cbCompressed,
			pDestBuffer,
			cbDestBufferSize,
			nBytesWritten,
			nDesiredSampleRate		);
		OutputDebugStringA(log);
		EVoiceResult  ret = m_pWrapper->DecompressVoice(pCompressed, cbCompressed, pDestBuffer, cbDestBufferSize, nBytesWritten, nDesiredSampleRate);
		sprintf(log," returned 0x%X",ret);
		OutputDebugStringA(log);
		OutputDebugStringA("\n");
		return ret;
	}
	virtual uint32  GetVoiceOptimalSampleRate ()	{
		char log[1024];
		sprintf(log,"GetVoiceOptimalSampleRate() "		);
		OutputDebugStringA(log);
		uint32  ret = m_pWrapper->GetVoiceOptimalSampleRate();
		sprintf(log," returned 0x%X",ret);
		OutputDebugStringA(log);
		OutputDebugStringA("\n");
		return ret;
	}
	virtual HAuthTicket  GetAuthSessionTicket ( void *pTicket,  int cbMaxTicket,  uint32 *pcbTicket )	{
		char log[1024];
		sprintf(log,"GetAuthSessionTicket() pTicket=0x%X cbMaxTicket=0x%X pcbTicket=0x%X ",
			pTicket,
			cbMaxTicket,
			pcbTicket		);
		OutputDebugStringA(log);
		HAuthTicket  ret = m_pWrapper->GetAuthSessionTicket(pTicket, cbMaxTicket, pcbTicket);
		sprintf(log," returned 0x%X",ret);
		OutputDebugStringA(log);
		OutputDebugStringA("\n");
		return ret;
	}
	virtual EBeginAuthSessionResult  BeginAuthSession ( const void *pAuthTicket,  int cbAuthTicket,  CSteamID steamID )	{
		char log[1024];
		sprintf(log,"BeginAuthSession() pAuthTicket=0x%X cbAuthTicket=0x%X steamID=0x%X ",
			pAuthTicket,
			cbAuthTicket,
			steamID		);
		OutputDebugStringA(log);
		EBeginAuthSessionResult  ret = m_pWrapper->BeginAuthSession(pAuthTicket, cbAuthTicket, steamID);
		sprintf(log," returned 0x%X",ret);
		OutputDebugStringA(log);
		OutputDebugStringA("\n");
		return ret;
	}
	virtual void  EndAuthSession ( CSteamID steamID )	{
		char log[1024];
		sprintf(log,"EndAuthSession() steamID=0x%X ",
			steamID		);
		OutputDebugStringA(log);
		steamID);
		OutputDebugStringA("\n");
	}
	virtual void  CancelAuthTicket ( HAuthTicket hAuthTicket )	{
		char log[1024];
		sprintf(log,"CancelAuthTicket() hAuthTicket=0x%X ",
			hAuthTicket		);
		OutputDebugStringA(log);
		hAuthTicket);
		OutputDebugStringA("\n");
	}
	virtual EUserHasLicenseForAppResult  UserHasLicenseForApp ( CSteamID steamID,  AppId_t appID )	{
		char log[1024];
		sprintf(log,"UserHasLicenseForApp() steamID=0x%X appID=0x%X ",
			steamID,
			appID		);
		OutputDebugStringA(log);
		EUserHasLicenseForAppResult  ret = m_pWrapper->UserHasLicenseForApp(steamID, appID);
		sprintf(log," returned 0x%X",ret);
		OutputDebugStringA(log);
		OutputDebugStringA("\n");
		return ret;
	}
	virtual bool  BIsBehindNAT ()	{
		char log[1024];
		sprintf(log,"BIsBehindNAT() "		);
		OutputDebugStringA(log);
		bool  ret = m_pWrapper->BIsBehindNAT();
		sprintf(log," returned 0x%X",ret);
		OutputDebugStringA(log);
		OutputDebugStringA("\n");
		return ret;
	}
	virtual void  AdvertiseGame ( CSteamID steamIDGameServer,  uint32 unIPServer,  uint16 usPortServer )	{
		char log[1024];
		sprintf(log,"AdvertiseGame() steamIDGameServer=0x%X unIPServer=0x%X usPortServer=0x%X ",
			steamIDGameServer,
			unIPServer,
			usPortServer		);
		OutputDebugStringA(log);
		steamIDGameServer, unIPServer, usPortServer);
		OutputDebugStringA("\n");
	}
	virtual SteamAPICall_t  RequestEncryptedAppTicket ( void *pDataToInclude,  int cbDataToInclude )	{
		char log[1024];
		sprintf(log,"RequestEncryptedAppTicket() pDataToInclude=0x%X cbDataToInclude=0x%X ",
			pDataToInclude,
			cbDataToInclude		);
		OutputDebugStringA(log);
		SteamAPICall_t  ret = m_pWrapper->RequestEncryptedAppTicket(pDataToInclude, cbDataToInclude);
		sprintf(log," returned 0x%X",ret);
		OutputDebugStringA(log);
		OutputDebugStringA("\n");
		return ret;
	}
	virtual bool  GetEncryptedAppTicket ( void *pTicket,  int cbMaxTicket,  uint32 *pcbTicket )	{
		char log[1024];
		sprintf(log,"GetEncryptedAppTicket() pTicket=0x%X cbMaxTicket=0x%X pcbTicket=0x%X ",
			pTicket,
			cbMaxTicket,
			pcbTicket		);
		OutputDebugStringA(log);
		bool  ret = m_pWrapper->GetEncryptedAppTicket(pTicket, cbMaxTicket, pcbTicket);
		sprintf(log," returned 0x%X",ret);
		OutputDebugStringA(log);
		OutputDebugStringA("\n");
		return ret;
	}
};
