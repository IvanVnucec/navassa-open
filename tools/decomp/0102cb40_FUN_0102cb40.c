
int FUN_0102cb40(undefined4 param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint in_fpscr;
  float fVar8;
  uint uVar9;
  float fVar10;
  undefined4 local_40;
  undefined1 local_3c;
  undefined1 auStack_30 [4];
  float local_2c;
  
  iVar4 = DAT_0102ce48;
  puVar3 = DAT_0102ce44;
  pbVar2 = DAT_0102ce40;
  FUN_0101206c(&local_40,&LAB_0102ce8c,0x10);
  local_40 = *(undefined4 *)(pbVar2 + 4);
  *puVar3 = 0;
  FUN_0103a238(0);
  FUN_0103a4e6(1);
  uVar5 = FUN_0100d75a(0,*DAT_0102ce4c);
  fVar8 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
  fVar10 = (float)VectorUnsignedToFloat
                            (*(undefined4 *)(DAT_0102ce54 + 0x14),(byte)(in_fpscr >> 0x15) & 3);
  uVar9 = VectorFloatToUnsigned(fVar8 * fVar10 * DAT_0102ce38,3);
  do {
    if (uVar9 <= (uint)(*DAT_0102ce50 - *DAT_0102ce50)) break;
  } while (*(char *)(iVar4 + 1) == '\x02');
  if (*(char *)(iVar4 + 1) == '\x02') {
    bVar1 = pbVar2[1];
    if (bVar1 != 0) {
      local_3c = 0;
      *puVar3 = 1;
      FUN_01015c80(7,(uint)bVar1 * 1000,1,0);
    }
    FUN_01020bb4(0,0);
    iVar6 = FUN_01020862(0,&local_40);
    if (iVar6 == 0) {
      uVar5 = FUN_01020e38(0,local_40);
      *DAT_0102ce58 = 3;
      *DAT_0102ce5c = 0;
      iVar7 = 1;
      fVar8 = DAT_0102ce3c;
      while (iVar6 = FUN_01020cdc(0,uVar5,auStack_30), iVar6 == 0) {
        fVar8 = fVar8 + local_2c;
        if (*(char *)(iVar4 + 1) != '\x02') {
          return 0;
        }
        if ((int)(uint)*pbVar2 <= iVar7) {
          fVar10 = (float)VectorUnsignedToFloat((uint)*pbVar2,(byte)(in_fpscr >> 0x15) & 3);
          *(bool *)param_1 =
               fVar8 < fVar10 * *(float *)(pbVar2 + 0xc) ==
               (NAN(fVar8) || NAN(fVar10 * *(float *)(pbVar2 + 0xc)));
          return 0;
        }
        if (pbVar2[1] != 0) {
          while (iVar6 = FUN_01015d78(7), iVar6 == 0) {
            if (*(char *)(iVar4 + 1) != '\x02') {
              return 0;
            }
          }
          FUN_01015d8c(7);
        }
        iVar7 = iVar7 + 1;
      }
    }
  }
  else {
    iVar6 = 0xe101;
  }
  return iVar6;
}

