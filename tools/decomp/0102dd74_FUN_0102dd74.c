
void FUN_0102dd74(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 *in_r3;
  undefined4 *unaff_r4;
  
  puVar1 = (undefined4 *)FUN_0102ddba();
  iVar2 = FUN_0102ddc4(*in_r3,*puVar1);
  if (iVar2 != 0) {
    FUN_0102ddcc();
    *unaff_r4 = 0xdd;
    boot_msg(1,extraout_r1,3);
    return;
  }
  return;
}

