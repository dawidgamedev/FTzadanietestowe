// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacterCpp.h"

// Sets default values
APlayerCharacterCpp::APlayerCharacterCpp()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
	shootdamage = 50;
	shootdistance = 1000;
	bPlayerCanShoot = true;
	bEndGame = false;
	bEnemyDetected = false;
	KillCount = 0;
	NearestEnemyDistance = 1000000;
	EnemiesCount = 3;
}

// Called when the game starts or when spawned
void APlayerCharacterCpp::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void APlayerCharacterCpp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (KillCount == EnemiesCount)
	{
		GetCharacterMovement()->MaxWalkSpeed = 0;
		bEndGame = true;
	}
}

// Called to bind functionality to input
void APlayerCharacterCpp::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}	

void APlayerCharacterCpp::ShootFunction(FVector BulletLocation, FRotator BulletRotation)
{
	GetWorld()->SpawnActor<AActor>(BulletActor, BulletLocation, BulletRotation);	
	bPlayerCanShoot = false;
	GetWorldTimerManager().SetTimer(ShootTimer, this, &APlayerCharacterCpp::ShootTimerFunction, 2.0f, false);
}

void APlayerCharacterCpp::ShootTimerFunction()
{
	bPlayerCanShoot = true;
}

