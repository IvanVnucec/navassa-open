
undefined4 FUN_0100df0e(undefined4 param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_24 [12];
  byte local_18;
  undefined4 uStack_14;
  
  uVar1 = *DAT_0100e038;
  uVar4 = *param_2 >> 2 & 1 ^ 1;
  uStack_14 = param_4;
  FUN_0101ddf6(uVar4,auStack_24);
  iVar3 = uVar4 * 0x110;
  iVar5 = DAT_0100e020 + iVar3;
  uVar2 = *(undefined4 *)(*(int *)(iVar5 + 0xe4) + (uint)local_18 * 4);
  FUN_0100df5e((uint)local_18,uVar2,uVar1,iVar3,uVar2);
  if (*DAT_0100e0b0 != '\0') {
    FUN_0100e0bc(iVar5,uVar1);
  }
  return 0;
}

