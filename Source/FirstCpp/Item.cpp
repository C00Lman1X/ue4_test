// Fill out your copyright notice in the Description page of Project Settings.

#include "FirstCpp.h"
#include "Item.h"

AItem::AItem()
{
	Type = EItemType::IT_Unknown;
}

EItemType AItem::GetType() const
{
	return Type;
}

void AItem::SetType(EItemType NewType)
{
	Type = NewType;
}
