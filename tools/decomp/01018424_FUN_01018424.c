
void FUN_01018424(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  
  iVar1 = DAT_01018e2c;
  iVar2 = 0;
  bVar4 = 0;
  do {
    if ((((((uint)*(byte *)(param_1 + 3) & 1 << (uint)bVar4) != 0) && (iVar2 == 0)) &&
        (iVar2 = FUN_01018330(bVar4), iVar2 == 0)) &&
       ((iVar2 = FUN_010184a4(0,2), iVar2 == 0 &&
        (*(char *)(iVar1 + (uint)bVar4 * 0xbc + 0x48) != '\0')))) {
      iVar2 = FUN_010184a4(0,3);
    }
    bVar4 = bVar4 + 1;
  } while (bVar4 < 2);
  bVar4 = 0;
  do {
    uVar3 = 1 << (uint)bVar4;
    if (((*(byte *)(param_1 + 8) & uVar3) != 0) && (iVar2 == 0)) {
      iVar2 = FUN_0101947a(bVar4);
    }
    if (((*(byte *)(param_1 + 4) & uVar3) != 0) && (iVar2 == 0)) {
      iVar2 = FUN_010184a4(0,0);
    }
    if (((*(byte *)(param_1 + 5) & uVar3) != 0) && (iVar2 == 0)) {
      iVar2 = FUN_010184a4(0,1);
    }
    bVar4 = bVar4 + 1;
  } while (bVar4 < 2);
  return;
}

