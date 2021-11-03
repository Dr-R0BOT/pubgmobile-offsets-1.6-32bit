#pragma once

#include "Includes.h"

namespace Offset
{
	const DWORD GWorld = 0x490A84;
	const DWORD GName = 0x1D5CEC + 0x14C;

	const DWORD PersistentLevel = 0x20;
	const DWORD NetDriver = 0x24;
	const DWORD ServerConnection = 0x60;
	const DWORD PlayerController = 0x60;
	const DWORD AcknowledgedPawn = 0x330;
	const DWORD EntityList = 0x70;
	const DWORD EntityCount = 0x78;

	const DWORD RootComponent = 0x14c;
	const DWORD CurrentStates = 0x910;

	// AActor
	const DWORD TeamId = 0x670;
	const DWORD PoseState = 0x39C;
	const DWORD IsBot = 0x6E8;
	const DWORD Name = 0x648;
	const DWORD Health = 0x928;
	const DWORD HealthMax = 0x92c;

	const DWORD CharacterMovement = 0x324;
	const DWORD LastUpdateVelocity = 0x260;
	const DWORD Velocity = 0xd4;

	const DWORD RelativeLocation = 0x120;
	const DWORD RelativeRotation = 0x124;
	const DWORD Position = 0x160;

	// Bone
	const DWORD Mesh = 0x320;
	const DWORD BodyAddv = 0x150;
	const DWORD MinLOD = 0x5B0;

	// Camera
	const DWORD PlayerCameraManager = 0x340;
	const DWORD CameraCache = 0x118;
	const DWORD POV = 0x10;
	const DWORD Location = 0x0;
	const DWORD Rotation = 0x18;
	const DWORD FOV = 0x24;

	// Instant hit
	const DWORD CurrentReloadWeapon = 0x1740;
	const DWORD ShootWeaponEntity = 0xa80;
	const DWORD BulletFireSpeed = 0x3d4;

	// NoRecoil
	const DWORD AccessoriesVRecoilFactor = 0x784;
	const DWORD AccessoriesHRecoilFactor = 0x788;
	const DWORD AccessoriesRecoveryFactor = 0x78c;
}
