// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ObjectiveHud.generated.h"

/**
 * 
 */

class UTextBlock;

UCLASS()
class PROGRAMMINGDOORS_API UObjectiveHud : public UUserWidget
{
	GENERATED_BODY()

public:
	void UpdateObjectiveText(uint32 ObjectivesCompleted, uint32 TotalObjectives);
	
protected:
	UFUNCTION(BlueprintImplementableEvent)
	void UpdateObjectiveImage();

	UPROPERTY(meta = (BindWidget))
	UTextBlock* ObjectivesText;
};
