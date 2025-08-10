// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BattleBase.generated.h"

UCLASS()
class RPGBATTLESIM_API ABattleBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABattleBase();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	int MaxHP = 10;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	int CurrHP = 10;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	int ATK = 5;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	int DEF = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	int SPD = 1;


	UFUNCTION(BlueprintCallable, Category = "Stats")
	void ApplyDamage(int DamageAmount);
	UFUNCTION(BlueprintCallable, Category = "Stats")
	void Attack(int DamageAmount, ABattleBase* Target);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
