#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Spell.generated.h"

// Spell Data Struct
USTRUCT(BlueprintType)
struct FSpell
{
    GENERATED_BODY()

public:
    // Can be Attack or Heal
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spell")
        FString Type = TEXT("Attack");

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spell")
        FString Name = TEXT("None");

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spell")
        int Power = 0;

    // Optional constructor for quick creation
    FSpell() {}
    FSpell(const FString& InType, const FString& InName, int InPower)
        : Type(InType), Name(InName), Power(InPower) {}
};



// Spell List Class
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class RPGBATTLESIM_API USpellList : public UActorComponent
{
    GENERATED_BODY()

public:
    USpellList();

    // The list of spells this entity knows
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spells")
        TArray<FSpell> Spells;

    UFUNCTION(BlueprintCallable, Category = "Spells")
        void AddSpell(FString Type, FString Name, int Power);

protected:
    virtual void BeginPlay() override;

public:
    virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
};
