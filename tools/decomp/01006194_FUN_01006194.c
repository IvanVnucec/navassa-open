
undefined8 FUN_01006194(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  char cVar12;
  bool bVar13;
  uint in_fpscr;
  undefined4 uVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  iVar5 = DAT_01006390;
  iVar4 = DAT_0100638c;
  bVar1 = *param_1;
  iVar8 = *DAT_01006394;
  iVar9 = 0;
  iVar3 = DAT_01006394[1];
  uVar10 = 0;
  do {
    if ((int)((uint)(byte)((bVar1 >> 2) >> (uVar10 & 0xff)) << 0x1f) < 0) {
      iVar11 = iVar5 + uVar10 * 0xbc;
      bVar2 = *(byte *)(iVar11 + 0x90);
      if (bVar2 != 2) {
        iVar9 = 0xff1f;
      }
      cVar12 = 1 < bVar2;
      if (bVar2 == 2 && iVar9 == 0) {
        uVar14 = VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
        uVar16 = FUN_01012c10(uVar14);
        uVar7 = (uint)((ulonglong)uVar16 >> 0x20);
        bVar13 = false;
        FUN_01012c58((int)uVar16,uVar7 & 0x7fffffff,1,DAT_01006398);
        if ((bool)cVar12 && !bVar13) {
          fVar15 = (float)VectorUnsignedToFloat
                                    (*(undefined4 *)(iVar11 + 0x24),(byte)(in_fpscr >> 0x15) & 3);
          uVar17 = FUN_01012c10(fVar15 * DAT_01006378);
          FUN_01012c88((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),(int)uVar16,uVar7 & 0x7fffffff);
          if (cVar12 != '\0') {
            if (*(char *)(iVar5 + 0x77c) == '\x01' && (char)iVar3 == '\0') {
              iVar9 = 0xff20;
            }
            else {
              piVar6 = (int *)(DAT_0100639c + uVar10 * 0xc);
              if (*(char *)((int)piVar6 + 9) == '\x01') {
                *piVar6 = *(int *)(iVar11 + 0xa4);
                *(undefined1 *)((int)piVar6 + 9) = 0;
                *(undefined1 *)(iVar11 + 0xaf) = 1;
                *(undefined2 *)(iVar11 + 0xac) = 0;
                *(undefined1 *)(iVar11 + 0xae) = 0;
                *(undefined4 *)(iVar11 + 0xa8) = *(undefined4 *)(uVar10 * 0x54 + iVar4 + 0x48);
              }
              *(int *)(iVar11 + 0xa4) = iVar8 + *piVar6;
              piVar6[1] = iVar8;
              if ((char)iVar3 == '\0') {
                *(undefined1 *)(piVar6 + 2) = 1;
              }
              else {
                FUN_01012f06(uVar10 + 2 & 0xff,iVar11 + 0x90);
              }
            }
            goto LAB_01006282;
          }
        }
        iVar9 = 0xff1e;
      }
    }
LAB_01006282:
    uVar10 = uVar10 + 1;
    if (1 < (int)uVar10) {
      return CONCAT44(param_4,iVar9);
    }
  } while( true );
}

