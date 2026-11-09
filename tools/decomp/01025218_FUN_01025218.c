
undefined4 FUN_01025218(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_01025468;
  if (*(int *)(DAT_01025468 + 0x18) == 0) {
    uVar2 = FUN_01025c68(DAT_01025468 + 0x1c);
    *(undefined4 *)(iVar1 + 0x18) = uVar2;
  }
  return *(undefined4 *)(iVar1 + 0x18);
}

