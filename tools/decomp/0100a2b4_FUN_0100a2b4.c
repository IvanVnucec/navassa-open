
int FUN_0100a2b4(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  byte local_28;
  undefined1 auStack_24 [2];
  short asStack_22 [7];
  
  FUN_0100a33a(auStack_24,&DAT_0100a3f8);
  iVar1 = FUN_0100a340();
  if (iVar1 != 0) {
    return iVar1;
  }
  if ((param_2 == 2) || (param_2 == 0)) {
    FUN_0100a330();
    FUN_01002880();
    uVar2 = FUN_0100a330();
    FUN_010028fc(uVar2,param_3);
    FUN_0100a330();
    FUN_01002896();
    if (param_2 == 2) goto LAB_0100a2fa;
  }
  if (param_2 != 1) {
    return 0;
  }
LAB_0100a2fa:
  FUN_0100a322();
  FUN_01002880();
  FUN_010028fc((int)asStack_22[(uint)local_28 * 2],param_3);
  FUN_0100a322();
  FUN_01002896();
  return 0;
}

