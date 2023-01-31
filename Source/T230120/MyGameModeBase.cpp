// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"
// 여기에 순서가 중요하기 때문에  
#include"MyPlayerController.h"
#include"MyPawn.h"

AMyGameModeBase::AMyGameModeBase()
{
	DefaultPawnClass = AMyPawn::StaticClass(); //Meening 클래스 이름
	PlayerControllerClass = ::AMyPlayerController::StaticClass();
	
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(0, 3.0f, FColor::Red, TEXT("Hello world")); // 원래는 하면 안된다. 실행하는 방법이 다르기 때문에.
	}
}
