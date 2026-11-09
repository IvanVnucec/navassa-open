
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_010380b8(void)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  int iVar7;
  int unaff_r4;
  
  FUN_010381e0();
  FUN_0103cfd2();
  uVar4 = DAT_01038548;
  uVar3 = DAT_01038544;
  puVar2 = DAT_01038540;
  uVar1 = DAT_01038538;
  FUN_01025880((char)*(ushort *)(unaff_r4 + 0x12),
               DAT_0103853c + (uint)*(ushort *)(unaff_r4 + 0x12) * 0x80 + 0x2dc);
  uVar6 = FUN_010117d2((char)*(undefined2 *)(unaff_r4 + 0x12),0);
  puVar2[1] = uVar6;
  FUN_010381e8();
  pin_update(uVar3,0x10,0x10);
  pin_update(uVar1,2,(*(ushort *)(unaff_r4 + 0x12) & 0x7f) << 1);
  pin_update(uVar1,4,(*(ushort *)(unaff_r4 + 0x12) & 0x3f) << 2);
  FUN_010378c4(uVar4,0x4d,1);
  pin_update(uVar1,1,(char)*(undefined2 *)(unaff_r4 + 0x12));
  FUN_010378c4(uVar4,0x38,1);
  puVar5 = DAT_0103854c;
  if (*(char *)(unaff_r4 + 0x10) != '\0') {
    DAT_0103854c[2] = 0;
    *puVar2 = 0x1f;
    puVar2 = DAT_01038550;
    _DAT_4100000c = 0;
    _DAT_4100003e = 0;
    *DAT_01038550 = 0;
    puVar2[1] = 0;
    _DAT_41000000 = 0;
    _DAT_41000004 = 0;
    puVar5[9] = 2;
    *puVar5 = 0x96;
    FUN_01015c54(0);
    FUN_01015c80(0,100,0,0);
    do {
      iVar7 = FUN_01015d78(0);
      if (iVar7 != 0) break;
    } while (-1 < (int)((uint)(ushort)puVar5[9] << 0x1e));
    FUN_01015d2e(0);
    *DAT_01038554 = 0xf110;
  }
  puVar2 = DAT_01038558;
  DAT_01038558[1] = 0x200;
  puVar5[6] = 0xc00;
  puVar2[2] = 0x200;
  if ((*(char *)(unaff_r4 + 0x14) == '\0') && ((*(byte *)(unaff_r4 + 0x16) & 0x30) != 0)) {
    puVar5[7] = 0xfbff;
  }
  else {
    puVar5[7] = 0xf7ff;
  }
  *(undefined1 *)(unaff_r4 + 0x10) = 0;
  FUN_010381e8();
  *puVar2 = *(undefined2 *)(unaff_r4 + 0x16);
  FUN_010028e0(2);
  return 0;
}

