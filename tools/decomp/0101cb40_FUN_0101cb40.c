
void FUN_0101cb40(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  bool bVar10;
  undefined8 uVar11;
  
  bVar1 = *(byte *)(param_1 + 1);
  iVar8 = *(int *)(DAT_0101cf24 + param_2 * 4);
  iVar7 = *(int *)(DAT_0101d59c + param_2 * 4);
  uVar9 = *(undefined4 *)(DAT_0101d5a0 + param_2 * 4);
  FUN_0101c27c(3,bVar1,param_2,0,param_4);
  uVar6 = 0;
  if (bVar1 < 5) {
    pin_update(iVar7 + 0xfb,7,*(undefined1 *)(param_1 + 1));
  }
  cVar2 = *(char *)(param_1 + 3);
  if (cVar2 == '\0') {
    FUN_0101ccc0(0,1,1);
    FUN_0101d52c();
    uVar6 = 1;
    uVar3 = extraout_r1;
  }
  else if (cVar2 == '\x01') {
    uVar3 = FUN_0101ccc0(1,1,0);
    FUN_0101ccc0(uVar3,2,2);
    FUN_0101c238(2,2,param_2,1);
    uVar3 = extraout_r1_00;
  }
  else {
    FUN_0101ccc0(cVar2,1,0);
    FUN_0101d52c();
    uVar3 = extraout_r1_01;
  }
  cVar2 = *(char *)(param_1 + 4);
  if (cVar2 == '\0') {
    uVar5 = 1;
  }
  else {
    if (cVar2 == '\x01') {
      uVar3 = FUN_0101d284();
      uVar5 = 2;
      goto LAB_0101cbe6;
    }
    uVar5 = 0;
  }
  uVar3 = FUN_0101ccb0(cVar2,uVar3,uVar5);
  uVar5 = 0;
LAB_0101cbe6:
  uVar11 = FUN_0101ccb2(uVar3,2,uVar5);
  FUN_0101c7da((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),*(undefined1 *)(param_1 + 2));
  pin_update(iVar8 + 0x94);
  if (*(char *)(param_1 + 2) == '\0') {
    FUN_0101ccc0(0,1,*(undefined1 *)(param_1 + 0x41));
  }
  uVar4 = (uint)*(byte *)(param_1 + 2);
  bVar10 = uVar4 == 0;
  if (bVar10) {
    uVar4 = (uint)*(byte *)(param_1 + 0x41);
  }
  if (!bVar10 || uVar4 != 1) {
    uVar4 = FUN_0101ccc0(uVar4,4,((uint)*(byte *)(param_1 + 0x42) << 0x1a) >> 0x18);
  }
  FUN_0101ccb2(uVar4,0x20,((uint)*(byte *)(param_1 + 5) << 0x1d) >> 0x18);
  FUN_0102598c(uVar9,0x10000,(uint)*(byte *)(param_1 + 0x40) << 0x10);
  FUN_0101ccc0(*(undefined1 *)(param_1 + 2),4);
  uVar9 = FUN_0101ccc0(*(undefined1 *)(param_1 + 5),1);
  FUN_0101c98c(uVar9,param_2);
  FUN_0101c238(3,(uVar6 | (uint)(*(byte *)(param_1 + 2) | *(byte *)(param_1 + 5)) << 4 |
                  (uint)*(byte *)(param_1 + 9) << 1 | (uint)*(byte *)(param_1 + 0x38) << 5 |
                 (*(byte *)(param_1 + 0x3a) ^ 1) << 2) & 0xff | 8,param_2,1);
  FUN_0101cb24();
  FUN_0101c27c(3,*(undefined1 *)(param_1 + 1),param_2);
  return;
}

