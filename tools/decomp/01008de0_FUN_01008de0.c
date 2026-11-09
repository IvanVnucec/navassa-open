
void FUN_01008de0(undefined4 param_1,uint param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  
  iVar6 = *(int *)(DAT_010091f8 + param_2 * 4);
  iVar2 = iVar6 + 0x4b;
  switch(param_2) {
  case 0:
    uVar3 = pin_update(DAT_010099fc,0x1f,0x12);
    uVar5 = 1;
    break;
  case 1:
    uVar3 = pin_update(DAT_01009a00,0x1f,0x12);
    uVar5 = 2;
    break;
  case 2:
    uVar3 = FUN_01008efe(iVar2);
    uVar5 = 0x10;
    break;
  case 3:
    uVar3 = FUN_01008efe(iVar2);
    uVar5 = 4;
    break;
  case 4:
    uVar3 = FUN_01008efe(iVar2);
    uVar5 = 8;
    break;
  default:
    goto switchD_01008dfc_default;
  }
  FUN_01009a60(uVar3,uVar5,0);
switchD_01008dfc_default:
  pin_update(iVar6 + 4,0x10,0);
  FUN_01009060(param_1,param_2);
  iVar2 = DAT_010091f0 + param_2 * 0x60;
  uVar3 = FUN_01008748(param_2);
  *(undefined4 *)(iVar2 + 0x1c) = uVar3;
  uVar3 = FUN_01009a60(uVar3,0x40,0);
  FUN_01009a60(uVar3,0x20,0);
  pin_update(iVar6 + 0x37,0xf,*(undefined1 *)(iVar2 + 0x45));
  uVar4 = FUN_0101614a((uint)(*(int *)(iVar2 + 0x1c) * 200) >> 0xf);
  FUN_01008ef8(uVar4,0x70,(uVar4 & 0xf) << 4);
  iVar2 = DAT_0100940c + param_2;
  *(byte *)(iVar2 + 0x10) = (byte)uVar4 & 7;
  pin_update(iVar6 + 3,0xf,0);
  FUN_01015e2c(0x14);
  uVar7 = pin_update(iVar6 + 0x3c,0x80,0);
  uVar3 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if (param_2 < 2) {
    FUN_01008ef6((int)uVar7,uVar3,3);
    uVar1 = 3;
  }
  else {
    FUN_01008ef6((int)uVar7,uVar3,0);
    uVar1 = 0;
  }
  *(undefined1 *)(iVar2 + 0x18) = uVar1;
  return;
}

