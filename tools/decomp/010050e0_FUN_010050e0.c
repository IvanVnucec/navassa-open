
void FUN_010050e0(uint param_1,int param_2)

{
  char cVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  bool bVar12;
  undefined1 auStack_40 [28];
  
  iVar4 = DAT_01005510;
  iVar3 = DAT_0100550c;
  puVar2 = DAT_01005508;
  uVar11 = 0;
  do {
    if ((int)((param_1 >> (uVar11 & 0xff)) << 0x1f) < 0) {
      iVar6 = DAT_010054f4 + uVar11;
      pcVar7 = (char *)(iVar6 + 0x68a0);
      if (*(char *)(iVar4 + 0x77d) == '\x01') {
        cVar1 = '\x01';
        if (*pcVar7 != '\x01') {
          cVar1 = *(char *)(iVar6 + 0x68a2);
        }
        if (*pcVar7 != '\x01' && cVar1 != '\x01') {
          bVar12 = *(char *)(iVar6 + 0x68a4) != '\x01';
          if (bVar12) {
            pcVar7 = (char *)(uint)*(byte *)(iVar6 + 0x68a6);
          }
          if (bVar12 && pcVar7 != (char *)0x1) {
            bVar12 = false;
            uVar10 = 0x1e;
            goto LAB_0100513c;
          }
        }
        uVar10 = 0x1e;
LAB_01005136:
        bVar12 = true;
        if (param_2 != 0) goto LAB_0100513c;
      }
      else {
        if (*(char *)(iVar3 + 0x20) != '\x01') {
          iVar6 = DAT_010052c8 + uVar11;
          pcVar7 = (char *)(iVar6 + 0x1bc0);
          cVar1 = *pcVar7;
          bVar12 = cVar1 != '\x01';
          if (bVar12) {
            cVar1 = *(char *)(iVar6 + 0x1bc2);
          }
          if (bVar12 && cVar1 != '\x01') {
            bVar12 = *(char *)(iVar6 + 0x1bc4) != '\x01';
            if (bVar12) {
              pcVar7 = (char *)(uint)*(byte *)(iVar6 + 0x1bc6);
            }
            if (bVar12 && pcVar7 != (char *)0x1) {
              bVar12 = false;
              uVar10 = 1;
              goto LAB_0100513c;
            }
          }
          uVar10 = 1;
          goto LAB_01005136;
        }
        cVar1 = *pcVar7;
        if (cVar1 != '\x01') {
          pcVar7 = (char *)(uint)*(byte *)(iVar6 + 0x68a6);
        }
        if (cVar1 == '\x01' || pcVar7 == (char *)0x1) {
          uVar10 = 0x1f;
          goto LAB_01005136;
        }
        bVar12 = false;
        uVar10 = 0x1f;
LAB_0100513c:
        FUN_010052cc(auStack_40);
        FUN_010106d0(uVar11 & 0xff,auStack_40);
        FUN_01010684(uVar11 & 0xff);
      }
      uVar8 = 1 << (uVar11 & 0xff);
      if (bVar12 || param_2 != 0) {
        uVar5 = 0;
        if (((*(char *)(iVar4 + 0x77d) != '\0') || (*(char *)(iVar3 + 0x20) == '\x01')) &&
           (param_2 == 0)) {
          iVar6 = *(int *)(DAT_01005518 + (uint)*(byte *)(DAT_01005514 + uVar11) * 4);
          uVar5 = FUN_010026f0(*(undefined1 *)(iVar6 + 0x2c),*(undefined4 *)(iVar6 + 4),
                               *DAT_010054f0,DAT_010054f0[1],uVar10);
        }
        iVar6 = *(int *)(DAT_0100551c + uVar11 * 4) + 0x3c;
        pin_update(iVar6,1,1);
        if (((*puVar2 & uVar8) != 0) &&
           ((*(char *)(iVar4 + 0x77d) != '\0' || (*(char *)(iVar3 + 0x20) == '\0')))) {
          FUN_01004eea(uVar11 & 0xff,uVar5);
        }
        if (((uint)*puVar2 & 1 << (uVar11 + 4 & 0xff)) != 0) {
          FUN_01004f66(uVar11 & 0xff,1,uVar5);
        }
        if (((uint)*puVar2 & 1 << (uVar11 + 6 & 0xff)) != 0) {
          FUN_01004f66(uVar11 & 0xff,2,uVar5);
        }
        if (((uint)*puVar2 & 1 << (uVar11 + 8 & 0xff)) != 0) {
          FUN_01004f66(uVar11 & 0xff,3,uVar5);
        }
        iVar9 = FUN_01010950(uVar11 & 0xff);
        FUN_0101093a(uVar11 & 0xff,3U - iVar9 & 0xff);
        FUN_0101093a(uVar11 & 0xff,iVar9);
        pin_update(iVar6,1,0);
      }
      FUN_010108ae(uVar11 & 0xff);
      FUN_0101091a(uVar11 & 0xff);
      if ((*DAT_010054f8 & uVar8) != 0) {
        FUN_01010a48(uVar11 & 0xff,*(undefined1 *)(DAT_01005444 + 1),
                     *(undefined1 *)(DAT_01005444 + 2));
        FUN_01010e02(uVar11 & 0xff,1,0);
      }
    }
    uVar11 = uVar11 + 1;
    if (1 < (int)uVar11) {
      return;
    }
  } while( true );
}

