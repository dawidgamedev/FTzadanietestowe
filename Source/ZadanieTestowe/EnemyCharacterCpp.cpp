// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyCharacterCpp.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"

// Sets default values
AEnemyCharacterCpp::AEnemyCharacterCpp()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	bCanMovement = true;
	EnemyHP = 100;

}

// Called when the game starts or when spawned
void AEnemyCharacterCpp::BeginPlay()
{
	Super::BeginPlay();

	PlayerCharacter = Cast<APlayerCharacterCpp>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0)); 
}

// Called every frame
void AEnemyCharacterCpp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (EnemyHP < 1)
	{
		this->Destroy();
		PlayerCharacter->KillCount++;
		PlayerCharacter->NearestEnemyDistance = 100000;
		PlayerCharacter->bEnemyDetected = false;
	}

}

// Called to bind functionality to input
void AEnemyCharacterCpp::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

