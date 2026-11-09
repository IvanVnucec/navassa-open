
void FUN_0100ba76(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 extraout_r1;
  undefined4 uVar2;
  undefined1 unaff_r4;
  undefined1 unaff_r5;
  undefined1 *puVar3;
  
  uVar2 = param_4;
  iVar1 = FUN_0100bbd8();
  if (param_3 == 0) {
    *(undefined1 *)(iVar1 + 0x1dd) = unaff_r4;
    *(char *)(iVar1 + 0x1dc) = (char)uVar2;
    *(undefined1 *)(iVar1 + 0x1e1) = unaff_r5;
    puVar3 = (undefined1 *)(iVar1 + 0x1e0);
  }
  else {
    *(undefined1 *)(iVar1 + 0x1db) = unaff_r4;
    *(char *)(iVar1 + 0x1da) = (char)uVar2;
    *(undefined1 *)(iVar1 + 0x1df) = unaff_r5;
    puVar3 = (undefined1 *)(iVar1 + 0x1de);
  }
  *puVar3 = extraout_r1;
  pin_update(iVar1 + 0x1e2,1,1,param_4);
  return;
}

