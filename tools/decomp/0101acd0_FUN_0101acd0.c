
void FUN_0101acd0(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = *(int *)(DAT_0101ae34 + param_1 * 4);
  iVar5 = *(int *)(DAT_0101ae4c + param_1 * 4);
  iVar6 = *(int *)(DAT_0101ae38 + param_1 * 4);
  FUN_01035274(param_1);
  pin_update(iVar6 + 0xc4,1,1);
  pin_update(iVar6 + 0x1b4,2,2);
  iVar5 = iVar5 + 0x27;
  pin_update(iVar5,3,1);
  pin_update(iVar5,0xc,4);
  uVar2 = *(uint *)((short)param_1 * 0x54 + DAT_0101ae50 + 0x50);
  if ((((DAT_0101ae54 <= uVar2) || (DAT_0101ae58 + uVar2 < DAT_0101ae5c)) ||
      (DAT_0101ae60 + uVar2 < DAT_0101ae64)) ||
     ((DAT_0101ae68 + uVar2 < DAT_0101ae6c || (uVar2 <= DAT_0101ae6c)))) {
    FUN_0101aafc(uVar2,0xf);
  }
  cVar1 = *(char *)(DAT_0101ae3c + param_1 * 0xbc + 0x3f);
  if (cVar1 == '\0') {
    uVar3 = 7;
  }
  else if (cVar1 == '\x01') {
    uVar3 = 4;
  }
  else {
    uVar3 = 0;
  }
  uVar3 = FUN_010354fa(param_1,uVar3);
  uVar3 = FUN_0101ae70(uVar3,3,0);
  uVar3 = FUN_0101ae7a(uVar3,0x30,0);
  FUN_0101ae7a(uVar3,0xf,4);
  *(undefined1 *)(iVar4 + 0x3a) = 0x50;
  pin_update(iVar4 + 0x1c,3,2);
  uVar3 = pin_update(iVar4 + 0x11,3,3);
  uVar3 = FUN_0101ae70(uVar3,4,0);
  FUN_0101ae70(uVar3,0x18,8);
  pin_update(iVar4 + 0x6c,7,4);
  pin_update(iVar4 + 0x3b,0xe0,0x20);
  *(undefined1 *)(iVar4 + 0x1f) = 0;
  pin_update(iVar4 + 0x20,3,0);
  pin_update(iVar4 + 6,6,0);
  pin_update(iVar6 + 499,0x20,0);
  pin_update(iVar6 + 0x9c,4,4);
  return;
}

