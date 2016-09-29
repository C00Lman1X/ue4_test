// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/StaticMeshActor.h"
#include "Item.generated.h"

UENUM(BlueprintType)
enum class EItemType : uint8 {
	IT_Cube		UMETA(DisplayName="Cude"),
	IT_Sphere	UMETA(DisplayName = "Sphere"),
	IT_Unknown	UMETA(DisplayName = "Unknown")
};

/**
 * 
 */
UCLASS()
class FIRSTCPP_API AItem : public AStaticMeshActor
{
	GENERATED_BODY()

public:

	AItem();
	
	UFUNCTION(BlueprintImplementableEvent)
	bool OnCollected(ACharacter* character);

	UFUNCTION(BlueprintCallable, Category = "Pickup")
	EItemType GetType() const;

	UFUNCTION(BlueprintCallable, Category = "Pickup")
	void SetType(EItemType NewType);

protected:
	EItemType Type;
};
