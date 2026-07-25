#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "TD_WorldSet.generated.h"
#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
    GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
    GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
    GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
    GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)
UCLASS()
class TOWERDEFENSE_API UTD_WorldSet : public UAttributeSet
{
	GENERATED_BODY()
public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UPROPERTY(ReplicatedUsing = OnRep_Level, BlueprintReadWrite, Category = TowerDefense)
	FGameplayAttributeData Level = 1.f;
	ATTRIBUTE_ACCESSORS(UTD_WorldSet, Level);

	UPROPERTY(ReplicatedUsing = OnRep_CastleDamage, BlueprintReadWrite, Category = TowerDefense)
	FGameplayAttributeData CastleDamage = 0.f;
	ATTRIBUTE_ACCESSORS(UTD_WorldSet, CastleDamage);

	UFUNCTION()
	void OnRep_Level(const FGameplayAttributeData& OldValue);
	UFUNCTION()
	void OnRep_CastleDamage(const FGameplayAttributeData& OldValue);
};