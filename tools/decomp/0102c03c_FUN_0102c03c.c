
void FUN_0102c03c(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  
  puVar2 = DAT_0102c060;
  puVar1 = DAT_0102c05c;
  *DAT_0102c05c = 0;
  puVar1[2] = 0;
  puVar1[1] = *puVar2 / 1000 - 1;
  *puVar1 = 7;
  return;
}

