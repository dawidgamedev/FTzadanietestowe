// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyCharacterCpp.h"

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
	
}

// Called every frame
void AEnemyCharacterCpp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEnemyCharacterCpp::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

