
void FUN_01048b7c(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = DAT_01048cbc;
  bVar2 = *(byte *)(DAT_01048cb4 + param_1);
  iVar6 = 0;
  if ((1 < param_1) &&
     (param_3 = (uint)*(byte *)((short)(ushort)bVar2 * 0xbc + DAT_01048cb8 + 0x3c), param_3 == 2)) {
    iVar6 = 1;
  }
  bVar1 = *(byte *)(DAT_01048cbc + (uint)bVar2) < 2;
  if (bVar1) {
    FUN_01048c42(0,param_1,param_3,param_4,param_4);
  }
  else {
    FUN_01048c42(1,param_1,param_3,param_4,param_4);
  }
  thunk_FUN_0102db6a(param_1,bVar1,iVar6 + 1);
  iVar3 = thunk_FUN_01006ce2(param_1);
  if ((*(char *)(iVar5 + (uint)bVar2) == '\0') || (*(char *)(iVar3 + DAT_01048cc0 + 2) != '\0')) {
    FUN_01048c68(0,param_1);
    thunk_FUN_0102db6a(param_1,1,iVar6);
  }
  else {
    FUN_01048c68(1,param_1);
    thunk_FUN_0102db6a(param_1,0,iVar6);
    if (param_1 < 2) {
      bVar2 = *(byte *)(*(int *)(DAT_01048cc4 + param_1 * 4) + 0x1ab);
    }
    else {
      bVar2 = *(byte *)(*(int *)(DAT_01048cc8 + param_1 * 4) + 0x1b6);
    }
    if ((bVar2 & 3) == 0) {
      uVar4 = 1;
      goto LAB_01048c3c;
    }
  }
  uVar4 = 0;
LAB_01048c3c:
  if (param_1 < 2) {
    iVar5 = *(int *)(DAT_01048cc4 + param_1 * 4) + 0x1b0;
  }
  else {
    iVar5 = *(int *)(DAT_01048cc8 + param_1 * 4) + 0x1bb;
  }
  (*DAT_01048b70)(iVar5,1,uVar4);
  return;
}

