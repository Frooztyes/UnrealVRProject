// Fill out your copyright notice in the Description page of Project Settings.


#include "MyMinecart.h"

// Sets default values
AMyMinecart::AMyMinecart()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyMinecart::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyMinecart::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

