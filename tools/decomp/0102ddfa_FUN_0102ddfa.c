
void FUN_0102ddfa(void)

{
  int iVar1;
  undefined4 extraout_r1;
  int in_r3;
  undefined4 *unaff_r4;
  
  iVar1 = FUN_0102ddba();
  iVar1 = FUN_0102ddc4(*(undefined4 *)(in_r3 + 0xc),*(undefined4 *)(iVar1 + 0xc));
  if (iVar1 != 0) {
    FUN_0102ddcc();
    *unaff_r4 = 0x122;
    boot_msg(1,extraout_r1,3);
    return;
  }
  return;
}

