#include "Modules/ModuleManager.h"

class FMovieRenderStereoCameraModule : public IModuleInterface
{
public:
	virtual void StartupModule() override
	{

	}
	virtual void ShutdownModule() override
	{

	}
};

IMPLEMENT_MODULE(FMovieRenderStereoCameraModule, MovieRenderStereoCamera)