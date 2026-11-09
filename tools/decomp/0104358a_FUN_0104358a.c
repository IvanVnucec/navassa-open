
undefined8 FUN_0104358a(undefined4 param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  undefined2 *puVar1;
  char *pcVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  uint local_28;
  
  local_28 = param_4 & 0xffff0000;
  iVar5 = FUN_01023138(*param_2,&local_28);
  iVar3 = DAT_01043684;
  pcVar2 = DAT_01043680;
  puVar1 = DAT_0104367c;
  if (iVar5 == 0) {
    bVar6 = 0;
    do {
      if (*(char *)((int)&local_28 + (uint)bVar6) != '\0') {
        iVar9 = *(int *)(iVar3 + (uint)bVar6 * 4);
        FUN_01022360(bVar6,0xffff);
        iVar7 = DAT_01043678 + (short)(ushort)bVar6 * 0x24c;
        param_2 = (undefined4 *)0x1;
        FUN_0100ef48(bVar6,*(undefined1 *)(iVar7 + 0x249),0,0,1,1);
        if (*pcVar2 != '\0') {
          iVar9 = iVar9 + 0xdb;
          pin_update(iVar9,0x20,0);
          bVar8 = 0;
          do {
            FUN_0100a5ca(bVar6,1,bVar8,iVar7 + (uint)bVar8 * 2 + 0xc2,1,0);
            bVar8 = bVar8 + 1;
          } while (bVar8 < 0x40);
          bVar8 = 0;
          do {
            uVar4 = FUN_010242e8(*(undefined4 *)(iVar7 + (uint)bVar8 * 4 + 0x144));
            *puVar1 = uVar4;
            param_2 = (undefined4 *)0x1;
            FUN_0100a5ca(bVar6,1,bVar8,puVar1,1,1);
            bVar8 = bVar8 + 1;
          } while (bVar8 < 0x40);
          pin_update(iVar9,0x20,0x20);
        }
      }
      bVar6 = bVar6 + 1;
    } while (bVar6 < 2);
  }
  return CONCAT44(param_2,iVar5);
}

