// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DBItem.h"
#include "SideDBITem.generated.h"

/**
 * 
 */
UCLASS()
class LD41_GAME_API USideDBITem : public UDBItem
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USideDBITem* OpponentSide;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FColor Color;
	
};
