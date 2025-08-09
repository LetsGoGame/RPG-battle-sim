// Fill out your copyright notice in the Description page of Project Settings.


#include "Spell.h"

// Sets default values for this component's properties
USpellList::USpellList()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void USpellList::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void USpellList::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void USpellList::AddSpell(FString Type, FString Name, int Power)
{
	Spells.Add(FSpell(Type, Name, Power));

	UE_LOG(LogTemp, Warning, TEXT("Added Spell: %s (%s) Power: %d"), *Name, *Type, Power);
}
