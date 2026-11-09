
undefined8 FUN_0102f0a6(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined2 *puVar1;
  int iVar2;
  byte bVar3;
  bool bVar4;
  
  puVar1 = DAT_0102f25c;
  bVar4 = param_1 == 0;
  if (bVar4) {
    param_1 = 1;
  }
  if (bVar4) {
    DAT_0102f25c[2] = (short)param_1;
    iVar2 = param_2;
  }
  else {
    iVar2 = 6;
  }
  if (!bVar4) {
    puVar1[2] = (short)iVar2;
  }
  bVar3 = 0;
  do {
    *puVar1 = *(undefined2 *)(param_3 + param_2 * 8 + (uint)bVar3 * 2 + 2);
    iVar2 = FUN_010221f6(DAT_0102f260,1,1,1);
    if (iVar2 == 0xe102) {
      return CONCAT44(param_4,0x2e01);
    }
    bVar3 = bVar3 + 1;
  } while (bVar3 < 3);
  return CONCAT44(param_4,iVar2);
}

