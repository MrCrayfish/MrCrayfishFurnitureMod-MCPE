#pragma once
class AppPlatform;

class AppPlatformListener {
	AppPlatform* _platform;

public:
	AppPlatformListener();
	
	virtual ~AppPlatformListener();
	virtual void onLowMemory();
	virtual void onAppSuspended();
	virtual void onAppResumed();
	virtual void onAppFocusLost();
	virtual void onAppFocusGained();
	virtual void onAppTerminated();
};

