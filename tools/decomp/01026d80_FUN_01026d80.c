
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01026d80(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  local_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  iVar1 = FUN_01011244(*(undefined4 *)(param_1 + 100),*(undefined4 *)(*(int *)(param_1 + 4) + 0x20),
                       *(undefined4 *)(param_1 + 0x5c),*(undefined1 *)(param_1 + 0x60));
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x4c) = 1;
    *(undefined4 *)(param_1 + 0x48) = 1;
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
  }
  if ((int)param_2 < 0) {
    _DAT_41000000 = 1 << (-param_2 & 0xff);
    _DAT_41000004 = 0;
  }
  else {
    _DAT_41000000 = 0;
    _DAT_41000004 = 1 << (param_2 & 0xff);
  }
  do {
    if (*(int *)(param_1 + 0x4c) != 0) goto LAB_01026ec0;
    iVar1 = FUN_01011350(*(undefined1 *)(param_1 + 0x59),0);
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        *(undefined4 *)(param_1 + 0x4c) = 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x4c) = 1;
        *(undefined4 *)(param_1 + 0x48) = 1;
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
      }
      goto LAB_01026ec0;
    }
    FUN_010113be(param_2,&local_2c,&local_30);
    puVar4 = (uint *)(param_1 + 0x70);
    uVar5 = *puVar4 + local_2c;
    iVar1 = *(int *)(param_1 + 0x74) + ((int)local_2c >> 0x1f) + (uint)CARRY4(*puVar4,local_2c);
    *puVar4 = uVar5;
    *(int *)(param_1 + 0x74) = iVar1;
    uVar3 = *(uint *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x78) = uVar3 + local_30;
    *(uint *)(param_1 + 0x7c) =
         ((int)local_30 >> 0x1f) + *(int *)(param_1 + 0x7c) + (uint)CARRY4(uVar3,local_30);
    uVar3 = *(int *)(param_1 + 0x68) + 1;
    *(uint *)(param_1 + 0x68) = uVar3;
  } while (uVar3 < *(byte *)(*(int *)(param_1 + 4) + 0x1d));
  iVar6 = *(int *)(param_1 + 8);
  if ((int)param_2 < 0) {
    local_28 = -param_2;
    if (iVar6 != 0) {
      iVar6 = iVar6 + param_2 * -4;
      uVar2 = FUN_01026ecc();
      *(undefined4 *)(iVar6 + 0x120) = uVar2;
      uVar2 = FUN_01026ecc(uVar5,iVar1,*(undefined4 *)(param_1 + 0x68));
      *(undefined4 *)(iVar6 + 0x60) = uVar2;
    }
    *(uint *)(param_1 + 0x24) = param_2;
    *(uint *)(param_1 + 0x38) = uVar5;
    *(int *)(param_1 + 0x3c) = iVar1;
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x78);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x7c);
    *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) & ~(1 << (local_28 & 0xff));
  }
  else {
    local_28 = param_2;
    if (iVar6 != 0) {
      uVar2 = FUN_01026ecc();
      *(undefined4 *)(iVar6 + param_2 * 4 + 0xc0) = uVar2;
      uVar2 = FUN_01026ecc(uVar5,iVar1,*(undefined4 *)(param_1 + 0x68));
      *(undefined4 *)(iVar6 + local_28 * 4) = uVar2;
    }
    *(uint *)(param_1 + 0x20) = param_2;
    *(uint *)(param_1 + 0x28) = uVar5;
    *(int *)(param_1 + 0x2c) = iVar1;
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x78);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x7c);
    *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & ~(1 << (local_28 & 0xff));
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *puVar4 = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
LAB_01026ec0:
  return CONCAT44(local_2c,local_30);
}

