
void FUN_01002468(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 * 0xb0 + DAT_01002518;
  iVar2 = FUN_010009f6(iVar3 + 0x630,param_2,param_1,*(undefined4 *)(DAT_01002518 + 0x2c));
  puVar1 = DAT_01002798;
  if (iVar2 == 0) {
    *(undefined4 *)(iVar3 + 0x6b0) = 0;
    return;
  }
  *DAT_01002794 = &DAT_010027d0;
  *puVar1 = 0xcf3;
  boot_msg(1,iVar2,1);
  return;
}

