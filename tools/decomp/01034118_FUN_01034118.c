
undefined4
FUN_01034118(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            uint param_5,uint param_6,uint param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined1 uVar14;
  char cVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined4 local_cc;
  undefined4 local_c8;
  int local_c4;
  uint local_c0;
  float local_b0;
  float local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  
  uVar19 = CONCAT44(param_5,param_4);
  local_c4 = 0;
  local_c0 = 0;
  local_b0 = 0.0;
  local_ac = 0.0;
  uVar13 = 0;
  local_78 = DAT_010343c4;
  local_80 = DAT_010343c4;
  local_88 = DAT_010343c4;
  local_8c = param_3;
  local_70 = param_2;
  local_6c = param_1;
  uVar18 = DAT_010343c4;
  uVar1 = DAT_010343c4;
  while( true ) {
    uVar20 = local_78;
    uVar17 = (undefined4)((ulonglong)uVar1 >> 0x20);
    uVar16 = (undefined4)((ulonglong)uVar18 >> 0x20);
    cVar15 = param_7 <= uVar13;
    if ((bool)cVar15) break;
    cVar15 = CARRY4(param_6,uVar13);
    uVar14 = param_6 + uVar13 == 0;
    FUN_01024f34(param_5 & 0xff,param_6 + uVar13,&local_94,(int)&local_a0 + 4,&local_a0);
    FUN_010200bc(local_90);
    uVar19 = FUN_010343e0();
    uVar7 = (undefined4)((ulonglong)uVar19 >> 0x20);
    uVar12 = (undefined4)uVar19;
    FUN_010200bc(local_94);
    uVar19 = FUN_010343e0();
    uVar8 = (undefined4)((ulonglong)uVar19 >> 0x20);
    uVar2 = (undefined4)uVar19;
    uVar19 = FUN_0101f250(uVar2,uVar8,uVar2,uVar8);
    FUN_010343ec((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),uVar12,uVar7);
    uVar19 = FUN_010343d0();
    uVar9 = (undefined4)((ulonglong)uVar19 >> 0x20);
    uVar3 = (undefined4)uVar19;
    FUN_010200bc(local_98);
    uVar19 = FUN_010343e0();
    uVar10 = (undefined4)((ulonglong)uVar19 >> 0x20);
    uVar4 = (undefined4)uVar19;
    FUN_010200bc(local_a0._4_4_);
    uVar19 = FUN_010343e0();
    uVar11 = (undefined4)((ulonglong)uVar19 >> 0x20);
    uVar5 = (undefined4)uVar19;
    FUN_0101f250(uVar5,uVar11,uVar5,uVar11);
    FUN_0101f250(uVar4,uVar10,uVar4,uVar10);
    uVar19 = FUN_010343d0();
    local_a0 = uVar19;
    uVar19 = FUN_01012c10(local_6c);
    FUN_01012c58((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),uVar3,uVar9);
    if (!(bool)cVar15 || (bool)uVar14) {
      uVar19 = FUN_01012c10(local_70);
      FUN_01012c58(uVar3,uVar9,(int)uVar19,(int)((ulonglong)uVar19 >> 0x20));
      if (!(bool)cVar15 || (bool)uVar14) {
        local_78 = FUN_010343d8((undefined4)local_78,local_78._4_4_);
        FUN_0101f250(uVar2,uVar8,uVar5,uVar11);
        FUN_0101f250(uVar4,uVar10,uVar12,uVar7);
        uVar19 = FUN_010343d0();
        local_80 = FUN_010200e0((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(undefined4)local_80,
                                local_80._4_4_);
        uVar19 = FUN_0101f250(uVar2,uVar8,uVar4,uVar10);
        uVar20 = FUN_0101f250(uVar5,uVar11,uVar12,uVar7);
        uVar19 = FUN_01020278((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(int)uVar20,
                              (int)((ulonglong)uVar20 >> 0x20));
        local_88 = FUN_010200e0((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(undefined4)local_88,
                                local_88._4_4_);
        cVar15 = 0xfffffffe < local_c0;
        local_c0 = local_c0 + 1;
      }
    }
    uVar19 = FUN_01012c10(local_8c);
    FUN_01012c88((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),uVar3,uVar9);
    if (cVar15 == '\0') {
      local_c4 = local_c4 + 1;
    }
    fVar6 = (float)FUN_0101f3f4(uVar3,uVar9);
    if ((int)((uint)(local_b0 < fVar6) << 0x1f) < 0) {
      local_b0 = fVar6;
    }
    fVar6 = (float)FUN_0101f3f4((undefined4)local_a0,local_a0._4_4_);
    if ((int)((uint)(local_ac < fVar6) << 0x1f) < 0) {
      local_ac = fVar6;
    }
    uVar18 = FUN_010343d8((int)uVar18,uVar16);
    uVar19 = FUN_010200e0((int)uVar1,uVar17,(undefined4)local_a0,local_a0._4_4_);
    uVar13 = uVar13 + 1;
    uVar1 = uVar19;
  }
  FUN_010343ec((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(int)local_80,
               (int)((ulonglong)local_80 >> 0x20));
  uVar19 = FUN_0103442c();
  FUN_010200e0((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),uVar13,param_5);
  uVar12 = 0;
  uVar19 = FUN_01012c58();
  local_cc = uVar12;
  local_c8 = uVar12;
  if (cVar15 == '\0') {
    uVar19 = FUN_0102035c((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),(int)uVar19,
                          (int)((ulonglong)uVar19 >> 0x20));
    uVar20 = FUN_010343e8();
    FUN_0101f250((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),0,DAT_01034730);
    FUN_010343fc();
    uVar20 = FUN_010343f4();
    local_cc = (undefined4)uVar20;
    uVar19 = FUN_0103441c(local_cc,(int)((ulonglong)uVar20 >> 0x20),(int)uVar19,
                          (int)((ulonglong)uVar19 >> 0x20));
    FUN_0101f250((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),0,DAT_01034734);
    FUN_010343fc();
    local_c8 = FUN_010343f4();
  }
  uVar19 = FUN_0102025c(param_7);
  uVar12 = (undefined4)((ulonglong)uVar19 >> 0x20);
  FUN_0102035c((int)uVar18,uVar16,(int)uVar19,uVar12);
  local_a8 = FUN_0101f3f4();
  FUN_0102035c((int)uVar1,uVar17,(int)uVar19,uVar12);
  local_a4 = FUN_0101f3f4();
  FUN_0101206c(param_4,&local_cc,0x2c);
  return param_4;
}

