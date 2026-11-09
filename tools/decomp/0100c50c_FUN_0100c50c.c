
int FUN_0100c50c(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar3 = DAT_0100cac4 + param_1 * 0x110;
  iVar4 = *(int *)(iVar3 + 0xc);
  iVar1 = *(int *)(iVar3 + 4);
  **(undefined1 **)(iVar3 + 0x14) = *(undefined1 *)(iVar4 + 0x58);
  iVar2 = param_4;
  FUN_0100c4e2(*(int *)(iVar3 + 0x14) + 0xc,(int)*(short *)(iVar1 + 0x1a));
  iVar1 = (int)*(short *)(iVar4 + 0xa2);
  bVar5 = iVar1 == *(short *)(*(int *)(iVar3 + 0x14) + 0xc);
  if (bVar5) {
    iVar2 = (int)*(short *)(iVar4 + 0xa4);
  }
  if (bVar5) {
    iVar1 = (int)*(short *)(*(int *)(iVar3 + 0x14) + 0xe);
  }
  if (!bVar5 || iVar2 != iVar1) {
    FUN_0100c610();
    FUN_0100ba76(param_1);
    *(undefined4 *)(iVar4 + 0xa2) = *(undefined4 *)(*(int *)(iVar3 + 0x14) + 0xc);
    *(undefined1 *)(*(int *)(iVar3 + 0x10) + 0x46) = 1;
  }
  *(undefined1 *)(*(int *)(iVar3 + 0x14) + 0x10) = 1;
  return param_4;
}

