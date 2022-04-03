// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerCharacterCpp.h"
#include "EnemyCharacterCpp.generated.h"

UCLASS()
class ZADANIETESTOWE_API AEnemyCharacterCpp : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemyCharacterCpp();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		bool bCanMovement;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		int EnemyHP;

	APlayerCharacterCpp* PlayerCharacter; 

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
