
undefined4 FUN_01004544(undefined4 param_1,uint *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined1 auStack_38 [28];
  
  iVar6 = DAT_010050d0;
  iVar5 = DAT_010050cc;
  iVar4 = DAT_010050c8;
  iVar3 = DAT_010050c4;
  cVar2 = (char)param_2[1];
  if (cVar2 == '\0' || cVar2 == '\x02') {
    spi_notify_thunk(DAT_010050c4,0xba);
  }
  else if (cVar2 == '\x01') {
    uVar10 = 0;
    do {
      if ((int)((*param_2 >> (uVar10 & 0xff)) << 0x1f) < 0) {
        FUN_010052cc(auStack_38);
        FUN_010106d0(uVar10 & 0xff,auStack_38);
        uVar7 = FUN_01010684(uVar10 & 0xff);
        cVar2 = *(char *)(iVar6 + 0x77d);
        if (cVar2 != '\x01') {
          uVar7 = (uint)*(byte *)(iVar5 + 0x20);
        }
        if (cVar2 == '\x01' || uVar7 == 1) {
          *(undefined4 *)(iVar4 + uVar10 * 4) = 0;
          *(undefined4 *)(iVar4 + 8 + uVar10 * 4) = 0;
          *(undefined4 *)(iVar4 + 0x10 + uVar10 * 4) = 0;
        }
        uVar7 = 0x68a0;
        iVar9 = DAT_010050d4 + uVar10;
        iVar11 = DAT_010050d8 + uVar10;
        cVar1 = *(char *)((int)param_2 + 5);
        if (cVar1 == '\0') {
          if (cVar2 != '\x01') {
            uVar7 = (uint)*(byte *)(iVar5 + 0x20);
          }
          if (cVar2 != '\x01' && uVar7 != 1) {
            *(undefined1 *)(iVar11 + 0x1bc0) = 0;
            *(undefined1 *)(iVar11 + 0x1bc4) = 0;
            *(undefined1 *)(iVar11 + 0x1bc2) = 0;
            *(undefined1 *)(iVar11 + 0x1bc6) = 0;
          }
          else {
            *(undefined1 *)(iVar9 + 0x68a0) = 0;
            *(undefined1 *)(iVar9 + 0x68a4) = 0;
            *(undefined1 *)(iVar9 + 0x68a2) = 0;
            *(undefined1 *)(iVar9 + 0x68a6) = 0;
          }
        }
        else if (cVar1 == '\x01') {
          if (cVar2 != '\x01') {
            uVar7 = (uint)*(byte *)(iVar5 + 0x20);
          }
          if (cVar2 != '\x01' && uVar7 != 1) {
            *(undefined1 *)(iVar11 + 0x1bc0) = 0;
          }
          else {
            *(undefined1 *)(iVar9 + 0x68a0) = 0;
          }
        }
        else {
          if (cVar1 == '\x02') {
            cVar1 = '\x02';
            if (cVar2 != '\x01') {
              cVar1 = *(char *)(iVar5 + 0x20);
            }
            if (cVar2 != '\x01' && cVar1 != '\x01') {
              *(undefined1 *)(iVar11 + 0x1bc4) = 0;
              *(undefined1 *)(iVar11 + 0x1bc2) = 0;
              *(undefined1 *)(iVar11 + 0x1bc6) = 0;
            }
            else {
              *(undefined1 *)(iVar9 + 0x68a4) = 0;
              *(undefined1 *)(iVar9 + 0x68a2) = 0;
              *(undefined1 *)(iVar9 + 0x68a6) = 0;
            }
          }
          else {
            if (cVar1 != '\x03') goto LAB_0100465e;
            uVar8 = 3;
            if (cVar2 == '\x01') {
              uVar8 = 0;
            }
            if (cVar2 == '\x01') {
              *(undefined1 *)(iVar9 + 0x68a4) = uVar8;
            }
            else {
              *(undefined1 *)(iVar11 + 0x1bc4) = 0;
            }
          }
          FUN_0100d7b8(iVar3 + uVar10 * 0x5d,0x5d);
        }
      }
LAB_0100465e:
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < 2);
  }
  return 0;
}

