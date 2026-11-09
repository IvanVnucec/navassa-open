
undefined8 FUN_0102f42a(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iStack_18;
  undefined4 uStack_14;
  
  if (-1 < (int)((3U >> (param_1 & 0xff)) << 0x1f)) {
    return CONCAT44(param_4,0xc801);
  }
  iVar2 = *(int *)(DAT_0102f498 + param_2 * 8 + param_1 * 4);
  iStack_18 = iVar2 + 0x2c;
  iVar1 = 0;
  if (-1 < (int)((3U >> (param_1 & 0xff)) << 0x1f)) {
    iVar1 = 0xc801;
  }
  if (-1 < (int)((0x1fU >> (param_2 & 0xff)) << 0x1f)) {
    return CONCAT44(iStack_18,0xe700);
  }
  if (((iVar1 == 0) && (uStack_14 = param_4, iVar1 = FUN_0103476a(iStack_18,&iStack_18), iVar1 == 0)
      ) && (iVar1 = FUN_0102f4a2(), iVar1 == 0)) {
    iVar1 = FUN_0103b8a6(param_1,param_2,iVar2 + 0x48);
  }
  return CONCAT44(iStack_18,iVar1);
}

