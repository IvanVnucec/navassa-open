
undefined4 FUN_010428e6(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((*(char *)(param_1 + 0x5f) != '\0') &&
     (FUN_010327e8(*DAT_010429f4), *(char *)(param_1 + 4) == '\x06')) {
    iVar2 = DAT_010429e0 + param_2 * 0x80;
    FUN_0101c154(iVar2 + 0x4cc,param_2,*(undefined1 *)(param_3 + 0x40),0);
    FUN_01025880(param_2,iVar2 + 0x4dc);
    FUN_0101c0c0(iVar2 + 0x3b8,param_2,2,0);
    FUN_0103b7bc(param_2,*(undefined4 *)(param_1 + 0x3c),
                 *(undefined1 *)(DAT_010429d4 + param_2 * 0xbc + 0x4d6));
  }
  uVar1 = DAT_010429f8;
  FUN_010425c8(DAT_010429f8,0x38,0);
  FUN_010425c8(uVar1,0x4d,0);
  return 0;
}

