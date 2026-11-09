
void FUN_010151ce(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint extraout_r1;
  uint extraout_r1_00;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  
  iVar4 = DAT_01015388;
  bVar2 = *param_1;
  uVar3 = FUN_01014694(4);
  uVar3 = bVar2 & uVar3;
  iVar5 = 0;
  uVar6 = 0;
  do {
    if ((int)((uVar3 >> (uVar6 & 0xff)) << 0x1f) < 0) {
      iVar5 = FUN_0101468e(*(undefined4 *)(iVar4 + uVar6 * 4));
    }
    do {
      pbVar1 = DAT_010154a8;
      uVar6 = uVar6 + 1;
      if (3 < (int)uVar6) {
        bVar2 = FUN_01014694(0xc);
        *pbVar1 = bVar2;
        bVar2 = 1;
        uVar6 = extraout_r1;
        do {
          iVar4 = FUN_0102b506(bVar2,uVar6);
          uVar6 = *(uint *)(iVar4 + 0x14);
          if (((uVar6 & *pbVar1) == 0) && (uVar6 = (uint)*(byte *)(iVar4 + 0x1c), 1 < uVar6)) {
            FUN_0102b584();
            uVar6 = extraout_r1_00;
          }
          bVar2 = bVar2 + 1;
        } while (bVar2 < 0x14);
        stream_flag_set_0x21(*DAT_01015464);
        if (*(char *)(DAT_01015420 + 0x780) == '\0') {
          thunk_EXT_FUN_200347f8(uVar3);
        }
        if (((int)(uVar3 << 0x1f) < 0) &&
           (*(char *)(DAT_01015444 + 0x14) == '\x01' || *(char *)(DAT_01015444 + 0x14) == '\x03')) {
          FUN_0102ceee();
        }
        if (*pbVar1 == 0) {
          uVar7 = FUN_0102e682();
          FUN_01015272((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),1);
        }
        FUN_010019f8(uVar3);
        FUN_010153b8(6,0,iVar5,param_4);
        return;
      }
    } while (iVar5 != 0);
  } while( true );
}

