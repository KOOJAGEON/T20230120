// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
//include는 마지막 위에 넣어야하는데 거의 안쓴다. 여기 사이에만 만든다. 만들면 인크루드 느려진다.

#include "MyGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class T230120_API AMyGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	AMyGameModeBase();

	
};
