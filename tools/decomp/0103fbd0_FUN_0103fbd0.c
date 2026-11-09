
undefined4 FUN_0103fbd0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x5f) != '\0') {
    FUN_010327e8(*DAT_01040378);
    FUN_0101c154(*(int *)(param_1 + 0x14) + 0x1c,param_2,*(undefined1 *)(param_3 + 0x40),0);
    FUN_01025880(param_2,*(int *)(param_1 + 0x14) + 0x2c);
    FUN_0101c0c0(*(int *)(param_1 + 0x14) + 8,param_2,*(undefined4 *)(param_1 + 0x3c),0);
    FUN_0103b7bc(param_2,*(undefined4 *)(param_1 + 0x3c),
                 *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x4a));
  }
  uVar1 = DAT_01040364;
  FUN_0103f48c(DAT_01040364,0x38,0);
  FUN_0103f48c(uVar1,0x4d,0);
  FUN_0100974e(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),param_2);
  return 0;
}

