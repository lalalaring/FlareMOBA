#include "Flare.h"
#include "StandardGameMode.h"

AStandardGameMode::AStandardGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	/*// use our custom PlayerController class
	PlayerControllerClass = AIRGamePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<AIRGameCharacter> PlayerPawnBPClass(TEXT("/Game/Blueprints/Character/Human/Human_Character"));
	static ConstructorHelpers::FClassFinder<AHUD> PlayerHUD(TEXT("/Game/HUD/IRPlayerHUD"));

	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	if (PlayerHUD.Class != NULL)
	{
		HUDClass = PlayerHUD.Class;
	}*/
}