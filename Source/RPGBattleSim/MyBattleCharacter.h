// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BattleBase.h"
#include "MyBattleCharacter.generated.h"

class USpellList;


/**
 * 
 */
UCLASS()
class RPGBATTLESIM_API AMyBattleCharacter : public ABattleBase
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	int MP = 10;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	int TP = 10;

	UFUNCTION(BlueprintCallable, Category = "Stats")
	void Spell(USpellList* SpellCast, FString SpellName);
};
