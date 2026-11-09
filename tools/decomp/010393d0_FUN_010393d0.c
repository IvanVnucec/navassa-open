
void FUN_010393d0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(DAT_01039790 + param_2 * 4);
  uVar1 = FUN_0103971c(DAT_01039790,0xf,*(byte *)(param_1 + 0x11) & 0xf);
  uVar1 = FUN_0103971c(uVar1,0x10,*(byte *)(param_1 + 0x11) & 0x10);
  FUN_0103971c(uVar1,0x20,*(byte *)(param_1 + 0x11) & 0x20);
  *(char *)(iVar3 + 0x134) = (char)*(undefined4 *)(param_1 + 0x14);
  *(char *)(iVar3 + 0x135) = (char)((uint)*(undefined4 *)(param_1 + 0x14) >> 8);
  uVar1 = pin_update(iVar3 + 0x136,0x1f,(uint)(*(int *)(param_1 + 0x14) << 8) >> 0x18);
  uVar1 = FUN_0103950c(uVar1,0x40,*(byte *)(param_1 + 0x29) & 0x40);
  FUN_0103950c(uVar1,0x20,*(byte *)(param_1 + 0x29) & 0x20);
  *(undefined1 *)(iVar3 + 0x12d) = *(undefined1 *)(param_1 + 0x2a);
  *(char *)(iVar3 + 0x12a) = (char)*(undefined4 *)(param_1 + 0x1c);
  *(char *)(iVar3 + 299) = (char)((uint)*(undefined4 *)(param_1 + 0x1c) >> 8);
  pin_update(iVar3 + 300,0x3f,*(uint *)(param_1 + 0x1c) >> 0x10 & 0x3f);
  uVar2 = (uint)(*(ushort *)(param_1 + 0x20) >> 0xc);
  uVar1 = FUN_0103950c(uVar2,0xf0,uVar2 << 4);
  uVar1 = FUN_0103950c(uVar1,7,*(ushort *)(param_1 + 0x20) >> 8 & 7);
  uVar1 = FUN_0103950c(uVar1,7,*(byte *)(param_1 + 0x20) & 7);
  FUN_0103950c(uVar1,0xf0,*(byte *)(param_1 + 0x20) & 0xf0);
  iVar4 = iVar3 + 0x121;
  *(undefined1 *)(iVar3 + 0x126) = *(undefined1 *)(param_1 + 0x22);
  FUN_010027dc(iVar3 + 0x122,0xff,*(undefined1 *)(param_1 + 0x23));
  *(char *)(iVar3 + 0x120) = (char)*(undefined2 *)(param_1 + 0x48);
  pin_update(iVar4,3,*(byte *)(param_1 + 0x4a) & 3);
  pin_update(iVar4,0xe0,0);
  pin_update(iVar4,0x1c,0x10);
  FUN_010027dc(iVar3 + 0x123,0x1f,*(undefined1 *)(param_1 + 0x28),param_4);
  return;
}

