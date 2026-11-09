
undefined4 FUN_010292d6(void)

{
  short sVar1;
  bool bVar2;
  uint *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_r3;
  uint uVar7;
  uint uVar8;
  
  puVar3 = DAT_01029370;
  if (*DAT_01029370 != 0) {
    uVar4 = set_priority(7);
    uVar6 = *puVar3;
    *puVar3 = 0;
    uVar8 = 0;
    do {
      if ((int)((uVar6 >> (uVar8 & 0xff)) << 0x1f) < 0) {
        bVar2 = false;
        uVar7 = 0;
        do {
          sVar1 = (&DAT_010293bc)[uVar8 * 2 + uVar7];
          iVar5 = FUN_010028e0((int)sVar1);
          if (iVar5 != 0) {
            FUN_01002880((int)sVar1);
            bVar2 = true;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < 2);
        if (bVar2) {
          *puVar3 = *puVar3 | 1 << (uVar8 & 0xff);
        }
        else {
          FUN_01002896((int)(short)(&DAT_010293bc)[uVar8 * 2]);
          FUN_01002896((int)(short)(&DAT_010293be)[uVar8 * 2]);
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < 2);
    uVar4 = restore_priority(uVar4,uVar6);
    return uVar4;
  }
  return in_r3;
}

