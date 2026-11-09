
void FUN_0101c9d0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(DAT_0101cf24 + param_2 * 4);
  iVar5 = *(int *)(DAT_0101d59c + param_2 * 4);
  FUN_0101c27c(2,*(undefined1 *)(param_1 + 3),param_2,0,param_4);
  pin_update(iVar5 + 0xfb,0x70,((uint)*(byte *)(param_1 + 3) << 0x1c) >> 0x18);
  cVar1 = *(char *)(param_1 + 4);
  bVar4 = 0;
  if (cVar1 == '\0') {
    FUN_0101cb2c();
    FUN_0101cb36();
    FUN_0101c238(3,1,param_2,1);
  }
  else if (cVar1 == '\x01') {
    uVar2 = FUN_0101cb2e(1,extraout_r1,0);
    FUN_0101cb30(uVar2,8,8);
    bVar4 = 2;
  }
  else {
    FUN_0101cb2e(cVar1,extraout_r1,0);
    FUN_0101cb36();
  }
  cVar1 = *(char *)(param_1 + 5);
  if (cVar1 == '\0') {
    uVar2 = 4;
  }
  else {
    if (cVar1 == '\x01') {
      uVar2 = FUN_0101d458();
      uVar3 = 8;
      goto LAB_0101ca66;
    }
    uVar2 = 0;
  }
  uVar2 = FUN_0101ccb2(cVar1,4,uVar2);
  uVar3 = 0;
LAB_0101ca66:
  FUN_0101ccb2(uVar2,8,uVar3);
  uVar2 = pin_update(iVar6 + 0x1d4,2,((uint)*(byte *)(param_1 + 0x40) << 0x19) >> 0x18);
  FUN_0101ccb2(uVar2,0x40,((uint)*(byte *)(param_1 + 6) << 0x1e) >> 0x18);
  FUN_0101c98a();
  bVar4 = bVar4 | *(char *)(param_1 + 0x38) << 5 | *(char *)(param_1 + 9) << 2 |
                  *(char *)(param_1 + 0x3b) << 3 | 0x11U |
          (byte)((-(uint)(*(char *)(param_1 + 6) == '\0') >> 0x1f) << 6);
  if ((*(char *)(param_1 + 9) == '\x01' || *(char *)(param_1 + 0x38) == '\x01') ||
     (*(char *)(param_1 + 0x3a) == '\0' || *(char *)(param_1 + 0x3b) == '\x01')) {
    bVar4 = bVar4 | 2;
  }
  FUN_0101c238(2,bVar4,param_2,1);
  FUN_0101cb24();
  FUN_0101c27c(2,*(undefined1 *)(param_1 + 3),param_2);
  return;
}

