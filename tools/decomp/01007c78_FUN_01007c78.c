
undefined4 FUN_01007c78(uint param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined8 uVar5;
  
  uVar1 = DAT_01007cc4;
  uVar3 = 0;
  bVar4 = 0;
  do {
    if ((param_1 & 1 << (uint)bVar4) != 0) {
      uVar5 = FUN_010067b6(bVar4);
      uVar2 = (int)((ulonglong)uVar5 >> 0x20) + -1 + (uint)CARRY4((uint)uVar5,DAT_01007cc0);
      if ((uVar2 != 0) && ((1 < uVar2 || (uVar1 <= (uint)uVar5 + DAT_01007cc0)))) {
        uVar3 = 0xe705;
      }
    }
    bVar4 = bVar4 + 1;
  } while (bVar4 < 4);
  return uVar3;
}

