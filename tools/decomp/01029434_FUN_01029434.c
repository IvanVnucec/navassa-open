
void FUN_01029434(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  undefined2 *puVar8;
  short *extraout_r1;
  int extraout_r1_00;
  short sVar9;
  short *psVar10;
  uint uVar11;
  uint uVar12;
  ushort local_68;
  short local_66;
  ushort local_64;
  short local_62;
  ushort local_60;
  short local_5e;
  ushort local_5c;
  short local_5a;
  short local_54 [10];
  short local_40 [10];
  short local_2c [10];
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  FUN_0102963c(local_2c);
  FUN_0102963c(local_40);
  FUN_0102963c(local_54);
  FUN_0102963c(&local_68);
  uVar11 = 0;
  do {
    uVar12 = 0;
    do {
      if ((int)((param_1 >> (uVar12 & 0xff)) << 0x1f) < 0) {
        iVar6 = FUN_01011708(uVar11,uVar12 & 0xff);
        psVar7 = local_54 + uVar11 * 2;
        if (iVar6 == 0) {
          FUN_01029630(local_54,psVar7,1);
          psVar7 = extraout_r1;
        }
        psVar7[uVar12] = 0;
        sVar9 = 1;
        local_40[uVar11 * 2 + uVar12] = 1;
        psVar7 = local_2c;
      }
      else {
        sVar9 = 0;
        FUN_01029630(local_54,local_54 + uVar11 * 2);
        *(short *)(extraout_r1_00 + uVar12 * 2) = sVar9;
        psVar7 = local_40;
        local_2c[uVar11 * 2 + uVar12] = sVar9;
      }
      psVar7[uVar11 * 2 + uVar12] = sVar9;
      uVar12 = uVar12 + 1;
    } while (uVar12 < 2);
    uVar11 = uVar11 + 1;
  } while (uVar11 < 5);
  psVar7 = local_54;
  psVar10 = local_40;
  iVar6 = FUN_01029626(DAT_01029930);
  *(ushort *)(iVar6 + 6) =
       local_68 | local_66 << 2 | local_54[0] << 4 | local_54[1] << 5 | local_40[0] << 6 |
       local_40[1] << 7;
  sVar9 = psVar7[2];
  sVar1 = psVar7[3];
  sVar2 = psVar10[2];
  sVar3 = psVar10[3];
  iVar6 = FUN_01029626();
  *(ushort *)(iVar6 + 8) =
       local_64 | local_62 << 2 | sVar9 << 4 | sVar1 << 5 | sVar2 << 6 | sVar3 << 7 | 0x4000;
  sVar9 = psVar7[4];
  sVar1 = psVar7[5];
  sVar2 = psVar10[4];
  sVar3 = psVar10[5];
  puVar8 = (undefined2 *)FUN_01029626();
  puVar8[5] = local_60 | local_5e << 2 | sVar9 << 4 | sVar1 << 5 | sVar2 << 6 | sVar3 << 7 | 0x8000;
  iVar6 = DAT_01029938;
  uVar4 = DAT_01029934;
  puVar8[2] = local_5c | local_5a << 2 | psVar7[6] << 4 | psVar7[7] << 5 | psVar10[6] << 6 |
              psVar10[7] << 7 | local_2c[6] << 8 | local_2c[7] << 9 | 0xc000;
  *puVar8 = 0x493;
  iVar5 = DAT_01029940;
  if (*(char *)(iVar6 + 0x77d) == '\0') {
    *DAT_0102993c = 0xca0;
  }
  else {
    *DAT_0102993c = 0;
  }
  pin_update(uVar4,3,3);
  pin_update(uVar4,0xc,0xc);
  pin_update(uVar4,0x30,0x30);
  pin_update(DAT_01029944,1,1);
  uVar11 = 0;
  do {
    iVar6 = *(int *)(iVar5 + uVar11 * 4);
    pin_update(iVar6 + 0x40,0xc0,0x80);
    pin_update(iVar6 + 0x188,0xc0,0x80);
    pin_update(iVar6 + 0x1a2,0xc0,0x80);
    pin_update(iVar6 + 0x1bc,0xc0,0x80);
    uVar11 = uVar11 + 1;
  } while (uVar11 < 2);
  return;
}

