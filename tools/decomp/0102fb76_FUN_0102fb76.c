
undefined8 FUN_0102fb76(undefined4 param_1,uint *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  
  uVar2 = *param_2;
  iVar1 = 0;
  if (*(char *)(DAT_0102fbd4 + 0x19) != '\x01' || *(char *)(DAT_0102fbd4 + 0x18) != '\x01') {
    return CONCAT44(param_4,0x2908);
  }
  *(undefined1 *)(DAT_0102fbd4 + 0x1a) = 0;
  bVar3 = 0;
  do {
    if (((int)((uVar2 >> (uint)bVar3) << 0x1f) < 0) && (iVar1 = FUN_0102f85c(bVar3,1), iVar1 != 0))
    break;
    bVar3 = bVar3 + 1;
  } while (bVar3 < 2);
  return CONCAT44(param_4,iVar1);
}

