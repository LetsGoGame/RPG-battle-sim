// Fill out your copyright notice in the Description page of Project Settings.


#include "BattleBase.h"

// Sets default values
ABattleBase::ABattleBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABattleBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABattleBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABattleBase::ApplyDamage(int DamageAmount)
{
    // Reduce HP
    CurrHP -= DamageAmount;

    // Clamp so it never goes below 0 or above MaxHP
    CurrHP = FMath::Clamp(CurrHP, 0, MaxHP);

    // Optional: print to log for debugging
    UE_LOG(LogTemp, Warning, TEXT("HP is now: %d"), CurrHP);

    // Optional: check if character is dead
    if (CurrHP <= 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("Character is Dead"));
        // Here you could trigger a death animation or event
    }
}

void ABattleBase::Attack(int DamageAmount, ABattleBase* Enemy)
{

}