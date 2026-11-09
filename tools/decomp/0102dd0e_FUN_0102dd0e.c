
undefined4 FUN_0102dd0e(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 < 5) {
    for (uVar2 = (uint)(byte)(&LAB_0102e650)[param_1];
        (int)uVar2 < (int)(uint)(byte)(&LAB_0102e650_1)[param_1]; uVar2 = uVar2 + 1) {
      iVar1 = uVar2 * 8;
      iVar3 = (int)*(short *)(&DAT_0102e56a + iVar1);
      FUN_010028ac(iVar3);
      FUN_01002880(iVar3);
      FUN_010028fc(iVar3,*(undefined4 *)(&DAT_0102e56c + iVar1));
      if ((&DAT_0102e568)[iVar1] != '\0') {
        FUN_01002896(iVar3);
      }
    }
  }
  return param_4;
}

