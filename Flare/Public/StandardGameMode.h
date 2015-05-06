#pragma once

#include "GameFramework/GameMode.h"
#include "StandardGameMode.generated.h"

UCLASS()
class AStandardGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	AStandardGameMode(const FObjectInitializer& ObjectInitializer);
};