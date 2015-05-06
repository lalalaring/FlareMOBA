#pragma once

USTRUCT()
struct FCharacterAutoAttack
{
	/** How long it will take from when the character starts auto attacking to finish the attack and do damage */
	UPROPERTY(EditDefaultsOnly, Category=Autoattack)
	float attackFinishDelay;

	/** the range from the target that the character can perform an auto attack */
	UPROPERTY(EditDefaultsOnly, Category=Autoattack)
	float attackRange;

	/** animation to play each time the character auto attacks */
	UPROPERTY(EditDefaultsOnly, Category=Autoattack)
	UAnimMontage* attackAnimation;
};