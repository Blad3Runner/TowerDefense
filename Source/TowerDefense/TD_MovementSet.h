#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "TD_MovementSet.generated.h"
#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
    GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
    GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
    GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
    GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)
UCLASS()
class TOWERDEFENSE_API UTD_MovementSet : public UAttributeSet
{
	GENERATED_BODY()
public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UPROPERTY(ReplicatedUsing = OnRep_Speed, BlueprintReadWrite, Category = TowerDefense)
	FGameplayAttributeData Speed = 0.f;
	ATTRIBUTE_ACCESSORS(UTD_MovementSet, Speed);

	UPROPERTY(ReplicatedUsing = OnRep_Size, BlueprintReadWrite, Category = TowerDefense)
	FGameplayAttributeData Size = 1.f;
	ATTRIBUTE_ACCESSORS(UTD_MovementSet, Size);

	UFUNCTION()
	void OnRep_Speed(const FGameplayAttributeData& OldValue);
	UFUNCTION()
	void OnRep_Size(const FGameplayAttributeData& OldValue);
};