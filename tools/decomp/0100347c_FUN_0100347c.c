
undefined4 FUN_0100347c(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_01003584;
  iVar3 = param_2[0xc];
  iVar2 = FUN_010034e2(param_1,param_2,*param_2,param_2[1]);
  *(int *)(iVar1 + param_1 * 4) =
       (short)param_1 * 0xc00 + DAT_01003588 + iVar3 * 0x600 + iVar2 * 0x100;
  iVar2 = FUN_010020bc();
  if (iVar2 == 0) {
    *(undefined4 *)(DAT_01003560 + param_1 * 0x110 + 0xe4) = *(undefined4 *)(iVar1 + param_1 * 4);
  }
  return 0;
}

