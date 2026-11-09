
undefined8 FUN_010176c8(uint param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  iVar1 = *(int *)(DAT_01018060 + param_1 * 4);
  local_20 = DAT_01017778;
  uStack_1c = DAT_0101777c;
  if (param_3 == 5) {
    iVar5 = 0;
    uVar6 = 1;
  }
  else if (param_3 == 6) {
    iVar5 = 1;
    uVar6 = 0;
  }
  else {
    iVar5 = 0;
    uVar6 = 0;
  }
  iVar7 = *(int *)(DAT_01018064 + param_1 * 4) + 0x1e0;
  uVar4 = 0xc >> (param_1 & 0xff);
  if (param_2 == 1) {
    uVar3 = ((uint)*(byte *)((int)&local_20 + param_3) << 0x19) >> 0x18;
    if ((int)(uVar4 << 0x1f) < 0) {
      uVar2 = 6;
      iVar7 = iVar1 + 0x12;
      uVar6 = uVar3;
    }
    else {
      uVar2 = pin_update(iVar1,6,uVar3);
      uVar2 = FUN_01017d82(uVar2,4,iVar5 << 2);
      FUN_01017d82(uVar2,2,iVar5 << 1);
      uVar2 = 1;
    }
  }
  else {
    if (param_2 != 2) goto LAB_01017774;
    if ((int)(uVar4 << 0x1f) < 0) {
      uVar2 = 1;
      iVar7 = iVar1 + 0x1c;
      uVar6 = (uint)*(byte *)((int)&local_20 + param_3);
    }
    else {
      uVar2 = pin_update(iVar1 + 0xe,1,(uint)*(byte *)((int)&local_20 + param_3));
      uVar2 = FUN_01017d82(uVar2,0x40,iVar5 << 6);
      FUN_01017d82(uVar2,0x20,iVar5 << 5);
      uVar6 = uVar6 << 4;
      uVar2 = 0x10;
    }
  }
  pin_update(iVar7,uVar2,uVar6);
LAB_01017774:
  return CONCAT44(uStack_1c,local_20);
}

