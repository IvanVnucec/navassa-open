
undefined4 FUN_0101bc50(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0101bf00;
  iVar2 = *(int *)(DAT_0101bf00 + 0xc);
  if (iVar2 != 0) {
    iVar2 = 1;
  }
  nmi_signal_helper(iVar2);
  return *(undefined4 *)(iVar1 + 0xc);
}

