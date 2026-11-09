
undefined4 FUN_01017f2a(uint param_1,undefined4 param_2,undefined4 param_3,byte *param_4)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  
  iVar2 = DAT_010181c8;
  uVar4 = 0;
  do {
    if ((int)((param_1 >> (uVar4 & 0xff)) << 0x1f) < 0) {
      bVar1 = **(byte **)(iVar2 + uVar4 * 4);
      bVar3 = bVar1 & 3;
      if ((bVar1 & 3) != 0) {
        if (bVar3 != 3) {
          *param_4 = 2;
          goto LAB_01017f52;
        }
        bVar3 = 1;
      }
      *param_4 = bVar3;
    }
LAB_01017f52:
    uVar4 = uVar4 + 1;
    if (3 < (int)uVar4) {
      return 0;
    }
  } while( true );
}

