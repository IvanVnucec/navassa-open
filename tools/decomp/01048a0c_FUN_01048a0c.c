
void FUN_01048a0c(uint param_1,uint param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 unaff_r9;
  
  iVar5 = DAT_01048b34;
  uVar1 = *(undefined1 *)(DAT_01048b40 + param_1);
  uVar4 = -(uint)(param_2 == 0) >> 0x1f;
  FUN_010489ec(param_1,uVar4);
  *(byte *)(iVar5 + param_1 + 0xb) = (byte)(-(uint)(param_2 == 0) >> 0x1f);
  if (param_1 < 2) {
    unaff_r9 = 0;
  }
  else if (param_1 - 2 < 2) {
    unaff_r9 = 5;
  }
  iVar2 = thunk_FUN_01006ce2(param_1);
  iVar5 = iVar5 + iVar2;
  if (*(char *)(iVar5 + 0x18) != '\0') goto LAB_01048ada;
  if (iVar2 == 0) {
    thunk_FUN_01013a76(0xc,uVar4);
    uVar3 = 0xd;
LAB_01048a74:
    thunk_FUN_01013a76(uVar3,uVar4);
  }
  else if (iVar2 == 1) {
    thunk_FUN_01013a76(0xe,uVar4);
    uVar3 = 0xf;
    goto LAB_01048a74;
  }
  uVar4 = param_2;
  if (param_2 != 0) {
    uVar4 = 1;
  }
  if (*(byte *)(iVar5 + 6) != uVar4) {
    thunk_FUN_01009094(iVar2,param_2);
  }
  if (param_2 == 0) {
    thunk_FUN_01006dfc(1,unaff_r9,uVar1);
    thunk_FUN_01008de0(DAT_01048b68,iVar2);
    thunk_FUN_01008f08(iVar2,*(undefined1 *)(DAT_01048b58 + iVar2 + 0xbc));
  }
  else if (*(char *)(iVar5 + 6) != '\x01') {
    FUN_01048b0a();
  }
  iVar5 = DAT_01048b54 + iVar2 * 0x60;
  if (*(char *)(iVar5 + 0x10) == '\0') {
    thunk_FUN_01007728(iVar2,uVar1,1);
    FUN_01048b02();
    *(undefined1 *)(iVar5 + 0x11) = 0;
  }
LAB_01048ada:
  if ((int)param_1 < 2) {
    return;
  }
  if (param_2 == 0) {
    thunk_FUN_01036000(uVar1,0,0);
  }
  thunk_FUN_01036000(uVar1,1,param_2 == 0);
  return;
}

