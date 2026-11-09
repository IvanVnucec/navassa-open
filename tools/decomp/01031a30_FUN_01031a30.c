
int FUN_01031a30(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 local_40 [4];
  int local_3c [4];
  undefined4 uStack_2c;
  undefined4 local_28;
  
  uVar2 = (uint)*(byte *)(param_1 + 1);
  iVar4 = *(int *)(DAT_010325f0 + param_2 * 8 + uVar2 * 4);
  uVar5 = *(undefined4 *)(DAT_010325f4 + param_2 * 8 + uVar2 * 4);
  local_40[0] = *(undefined1 *)(iVar4 + 0x2a);
  local_3c[0] = DAT_01031b64;
  local_3c[1] = DAT_01031b68;
  local_3c[2] = DAT_01031b6c;
  local_3c[3] = DAT_01031b70;
  uStack_2c = DAT_01031b74;
  local_28 = DAT_01031b78;
  if (((uint)*DAT_010325fc & 1 << (local_3c[param_2] + (uint)*(byte *)(param_1 + 1) & 0xff)) == 0) {
    return 0xe706;
  }
  iVar1 = FUN_0100aa68(*(undefined1 *)(param_1 + 2),
                       *(int *)(DAT_010325f8 + param_2 * 8 + uVar2 * 4) + 0x38,param_4);
  if (iVar1 == 0) {
    if (param_2 == 2) {
      uVar3 = 1;
    }
    else {
      uVar3 = 3;
    }
    iVar1 = FUN_0101a690(*(char *)(param_1 + 1) + '\x02',uVar3,0,param_4);
  }
  if (iVar1 == 0) {
    iVar1 = FUN_01018f6c(*(undefined1 *)(param_1 + 1),iVar4 + 0x8c,uVar5,param_4);
  }
  if (iVar1 == 0) {
    iVar1 = FUN_0101310a(*(undefined1 *)(param_1 + 2),param_2,param_4);
  }
  if (iVar1 == 0) {
    iVar1 = FUN_010131de(*(undefined1 *)(param_1 + 2),iVar4 + 100,param_4);
  }
  if (iVar1 == 0) {
    FUN_0101cde8(*(undefined1 *)(param_1 + 1),param_2,param_3,param_4);
    iVar1 = FUN_0102f49c(*(undefined1 *)(param_1 + 2),iVar4 + 0x2c,param_4);
  }
  if (param_4 == 0 && iVar1 == 0) {
    FUN_0101cff4(*(undefined1 *)(param_1 + 1),param_2,local_40);
    FUN_0102f3e4(*(undefined1 *)(param_1 + 2),param_2);
    *(int *)(*(int *)(DAT_01032740 + (uint)*(byte *)(param_1 + 2) * 4) + 4) = param_2;
  }
  return iVar1;
}

