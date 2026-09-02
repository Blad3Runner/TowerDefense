#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "TD_CombatSet.generated.h"
#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
    GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
    GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
    GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
    GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)
UCLASS()
class TOWERDEFENSE_API UTD_CombatSet : public UAttributeSet
{
	GENERATED_BODY()
public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;

	UPROPERTY(ReplicatedUsing = OnRep_Health, BlueprintReadWrite, Category = TowerDefense)
	FGameplayAttributeData Health = 0.f;
	ATTRIBUTE_ACCESSORS(UTD_CombatSet, Health);

	UPROPERTY(ReplicatedUsing = OnRep_MaxHealth, BlueprintReadWrite, Category = TowerDefense)
	FGameplayAttributeData MaxHealth = 0.f;
	ATTRIBUTE_ACCESSORS(UTD_CombatSet, MaxHealth);

	UPROPERTY(ReplicatedUsing = OnRep_Damage, BlueprintReadWrite, Category = TowerDefense)
	FGameplayAttributeData Damage = 0.f;
	ATTRIBUTE_ACCESSORS(UTD_CombatSet, Damage);

	UPROPERTY(ReplicatedUsing = OnRep_Shield, BlueprintReadWrite, Category = TowerDefense)
	FGameplayAttributeData Shield = 0.f;
	ATTRIBUTE_ACCESSORS(UTD_CombatSet, Shield);

	UPROPERTY(ReplicatedUsing = OnRep_FireRate, BlueprintReadWrite, Category = TowerDefense)
	FGameplayAttributeData FireRate = 0.f;
	ATTRIBUTE_ACCESSORS(UTD_CombatSet, FireRate);

	UPROPERTY(ReplicatedUsing = OnRep_BulletSpeed, BlueprintReadWrite, Category = TowerDefense)
	FGameplayAttributeData BulletSpeed = 0.f;
	ATTRIBUTE_ACCESSORS(UTD_CombatSet, BulletSpeed);

	UPROPERTY(ReplicatedUsing = OnRep_Range, BlueprintReadWrite, Category = TowerDefense)
	FGameplayAttributeData Range = 0.f;
	ATTRIBUTE_ACCESSORS(UTD_CombatSet, Range);

	UPROPERTY(ReplicatedUsing = OnRep_HealValue, BlueprintReadWrite, Category = TowerDefense)
	FGameplayAttributeData HealValue = 0.f;
	ATTRIBUTE_ACCESSORS(UTD_CombatSet, HealValue);

	UPROPERTY(ReplicatedUsing = OnRep_BoostMult, BlueprintReadWrite, Category = TowerDefense)
	FGameplayAttributeData BoostMult = 1.f;
	ATTRIBUTE_ACCESSORS(UTD_CombatSet, BoostMult);

	UFUNCTION()
	void OnRep_Health(const FGameplayAttributeData& OldValue);
	UFUNCTION()
	void OnRep_MaxHealth(const FGameplayAttributeData& OldValue);
	UFUNCTION()
	void OnRep_Damage(const FGameplayAttributeData& OldValue);
	UFUNCTION()
	void OnRep_Shield(const FGameplayAttributeData& OldValue);
	UFUNCTION()
	void OnRep_FireRate(const FGameplayAttributeData& OldValue);
	UFUNCTION()
	void OnRep_BulletSpeed(const FGameplayAttributeData& OldValue);
	UFUNCTION()
	void OnRep_Range(const FGameplayAttributeData& OldValue);
	UFUNCTION()
	void OnRep_HealValue(const FGameplayAttributeData& OldValue);
	UFUNCTION()
	void OnRep_BoostMult(const FGameplayAttributeData& OldValue);
};