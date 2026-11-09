
void FUN_0102969e(uint param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = 0;
  do {
    if ((int)((param_1 >> (uVar3 & 0xff)) << 0x1f) < 0) {
      cVar1 = *(char *)(DAT_0102994c + uVar3 * 0x80 + 0x2d8);
      iVar4 = DAT_01029954 + uVar3 * 0x14;
      iVar5 = DAT_01029950 + uVar3 * 0x18;
      if (cVar1 == '\0') {
        uVar2 = 0x20;
      }
      else {
        if (cVar1 != '\x01' && cVar1 != '\x02') goto LAB_010296e0;
        uVar2 = 0x80;
      }
      *(undefined4 *)(iVar5 + 8) = uVar2;
      *(undefined4 *)(iVar5 + 0xc) = 1;
      *(undefined4 *)(iVar4 + 8) = uVar2;
      *(undefined4 *)(iVar4 + 0xc) = 1;
    }
LAB_010296e0:
    uVar3 = uVar3 + 1;
    if (1 < uVar3) {
      return;
    }
  } while( true );
}

