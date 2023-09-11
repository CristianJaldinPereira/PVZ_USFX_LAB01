// Fill out your copyright notice in the Description page of Project Settings.


#include "Sol.h"
#include "MovimientoAleatorio.h"

// Sets default values
ASol::ASol()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;




	MeshSol = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sol Mesh"));
	
	//Para que se muevan todos los actores que se añadan al juego 
	ComponenteMovimiento = CreateDefaultSubobject<UMovimientoAleatorio>(TEXT("Movimiento"));

	RootComponent = MeshSol;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SolMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'"));

	MeshSol->SetStaticMesh(SolMesh.Object);
}

// Called when the game starts or when spawned
void ASol::BeginPlay()
{
	Super::BeginPlay();	
	
}

// Called every frame
void ASol::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);	

}

