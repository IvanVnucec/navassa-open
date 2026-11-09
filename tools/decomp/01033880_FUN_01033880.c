
undefined8 FUN_01033880(int param_1,uint param_2,int param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined4 *puVar14;
  char cVar15;
  undefined8 unaff_d10;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined4 local_200 [2];
  undefined8 local_1f8;
  
  for (uVar13 = 0; uVar13 < param_2; uVar13 = uVar13 + 1) {
    uVar8 = 0;
    do {
      puVar7 = (undefined4 *)(param_1 + uVar13 * 8 + uVar8 * 0x100);
      uVar18 = FUN_01036878(*puVar7,puVar7[1]);
      iVar12 = param_3 + uVar8 * 0xd0;
      iVar4 = param_3 + uVar13 * 0xd0;
      iVar3 = param_3 + uVar8 * 8;
      iVar11 = param_3 + uVar13 * 8;
      if (uVar13 == uVar8) {
        uVar18 = FUN_010200e0(0,0,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
        uVar10 = 0;
        while( true ) {
          uVar2 = (undefined4)((ulonglong)uVar18 >> 0x20);
          cVar15 = uVar8 <= uVar10;
          if ((int)uVar8 <= (int)uVar10) break;
          puVar7 = (undefined4 *)(iVar11 + uVar10 * 0xd0);
          puVar14 = (undefined4 *)(iVar3 + uVar10 * 0xd0);
          uVar18 = FUN_0101f250(*puVar14,puVar14[1],*puVar7,puVar7[1]);
          puVar7 = (undefined4 *)(iVar4 + uVar10 * 8);
          puVar14 = (undefined4 *)(iVar12 + uVar10 * 8);
          uVar10 = uVar10 + 1;
          uVar19 = FUN_0101f250(*puVar14,puVar14[1],*puVar7,puVar7[1]);
          FUN_010200e0((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(int)uVar18,
                       (int)((ulonglong)uVar18 >> 0x20));
          uVar18 = FUN_01033cdc();
        }
        FUN_01012c88((int)uVar18,uVar2,0,0);
        if (cVar15 == '\0') goto LAB_01033cbe;
        uVar18 = FUN_0103ba18((int)uVar18,uVar2);
        *(undefined8 *)(uVar13 * 0xd8 + param_3) = uVar18;
      }
      else {
        puVar7 = (undefined4 *)(param_1 + uVar13 * 0x100 + uVar8 * 8);
        uVar18 = FUN_01036878(*puVar7,puVar7[1]);
        iVar9 = 0;
        while( true ) {
          uVar2 = (undefined4)((ulonglong)uVar18 >> 0x20);
          if ((int)uVar8 <= iVar9) break;
          uVar19 = *(undefined8 *)(iVar4 + iVar9 * 8);
          puVar1 = (undefined8 *)(iVar9 * 0xd0 + iVar11);
          uVar17 = *puVar1;
          uVar5 = (undefined4)((ulonglong)uVar17 >> 0x20);
          uVar16 = (undefined4)uVar17;
          uVar17 = FUN_010343ec(puVar1,iVar3 + iVar9 * 0xd0,uVar16,uVar5);
          uVar6 = (undefined4)((ulonglong)uVar17 >> 0x20);
          uVar19 = FUN_01034424((int)uVar17,uVar6,(int)uVar19,(int)((ulonglong)uVar19 >> 0x20));
          FUN_010200e0((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(int)uVar17,uVar6);
          uVar19 = FUN_01033cdc();
          uVar19 = FUN_01034424((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),uVar16,uVar5);
          uVar17 = FUN_010343e8();
          uVar19 = FUN_01020278((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(int)uVar17,
                                (int)((ulonglong)uVar17 >> 0x20));
          uVar18 = FUN_010200e0((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(int)uVar18,uVar2);
          iVar9 = iVar9 + 1;
        }
        puVar7 = (undefined4 *)(iVar12 + uVar8 * 8);
        cVar15 = '\x01';
        FUN_0103bcfc(*puVar7,puVar7[1],0);
        if (cVar15 != '\0') goto LAB_01033cbe;
        unaff_d10 = FUN_01033cc8(0,DAT_010345dc,param_3,uVar8 * 0xd8 + param_3);
        uVar19 = FUN_01033ce8();
        *(undefined8 *)(iVar11 + uVar8 * 0xd0) = uVar19;
        uVar18 = FUN_01034424((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(int)uVar18,uVar2);
        *(undefined8 *)(iVar4 + uVar8 * 8) = uVar18;
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 <= (int)uVar13);
  }
  for (uVar13 = 0; uVar8 = param_2, uVar13 < param_2; uVar13 = uVar13 + 1) {
    puVar7 = (undefined4 *)(param_1 + param_2 * 8 + uVar13 * 0x100);
    FUN_01036878(*puVar7,puVar7[1]);
    puVar7 = (undefined4 *)(param_1 + param_2 * 0x100 + uVar13 * 8);
    uVar18 = FUN_01036878(*puVar7,puVar7[1]);
    iVar3 = uVar13 * 0xd0 + param_3;
    uVar8 = uVar13;
    while( true ) {
      uVar2 = (undefined4)((ulonglong)uVar18 >> 0x20);
      uVar8 = uVar8 - 1;
      if ((int)uVar8 < 0) break;
      unaff_d10 = *(undefined8 *)(iVar3 + uVar8 * 8);
      uVar19 = *(undefined8 *)(uVar8 * 0xd0 + param_3 + uVar13 * 8);
      uVar17 = FUN_010343e0(local_200[uVar8 * 4],local_200[uVar8 * 4 + 1]);
      uVar20 = FUN_0101f250(*(undefined4 *)(&local_1f8 + uVar8 * 2),
                            *(undefined4 *)((int)&local_1f8 + uVar8 * 0x10 + 4),(int)unaff_d10,
                            (int)((ulonglong)unaff_d10 >> 0x20));
      FUN_010200e0((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),(int)uVar17,
                   (int)((ulonglong)uVar17 >> 0x20));
      uVar17 = FUN_01033cdc();
      FUN_01034424((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),local_200[uVar8 * 4],
                   local_200[uVar8 * 4 + 1]);
      FUN_0101f250((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),
                   *(undefined4 *)(&local_1f8 + uVar8 * 2),
                   *(undefined4 *)((int)&local_1f8 + uVar8 * 0x10 + 4));
      uVar19 = FUN_01033cd0();
      uVar18 = FUN_010200e0((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(int)uVar18,uVar2);
    }
    puVar7 = (undefined4 *)(iVar3 + uVar13 * 8);
    cVar15 = '\x01';
    FUN_0103440e(0,puVar7,*puVar7,puVar7[1]);
    if (cVar15 != '\0') goto LAB_01033cbe;
    FUN_01033cc4();
    uVar19 = FUN_01034414();
    local_200[uVar13 * 4] = (int)uVar19;
    local_200[uVar13 * 4 + 1] = (int)((ulonglong)uVar19 >> 0x20);
    uVar18 = FUN_0101f250((int)uVar18,uVar2,(int)unaff_d10,(int)((ulonglong)unaff_d10 >> 0x20));
    *(int *)(&local_1f8 + uVar13 * 2) = (int)uVar18;
    *(int *)((int)&local_1f8 + uVar13 * 0x10 + 4) = (int)((ulonglong)uVar18 >> 0x20);
  }
  while (uVar8 = uVar8 - 1, -1 < (int)uVar8) {
    uVar18 = (&local_1f8)[uVar8 * 2];
    iVar4 = uVar8 * 0xd0 + param_3;
    iVar3 = param_3;
    uVar13 = uVar8;
    while( true ) {
      uVar13 = uVar13 + 1;
      cVar15 = uVar13 == param_2;
      uVar2 = (undefined4)((ulonglong)uVar18 >> 0x20);
      if (param_2 <= uVar13) break;
      unaff_d10 = *(undefined8 *)(iVar4 + uVar13 * 8);
      uVar19 = *(undefined8 *)(uVar13 * 0xd0 + param_3 + uVar8 * 8);
      uVar19 = FUN_0101f250(*(undefined4 *)(&local_1f8 + uVar13 * 2),
                            *(undefined4 *)((int)&local_1f8 + uVar13 * 0x10 + 4),(int)uVar19,
                            (int)((ulonglong)uVar19 >> 0x20));
      uVar6 = (undefined4)((ulonglong)unaff_d10 >> 0x20);
      FUN_010343ec((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(int)unaff_d10,uVar6);
      FUN_01033cd0();
      FUN_010343d8();
      uVar19 = FUN_010343e8();
      uVar17 = FUN_0101f250(*(undefined4 *)(&local_1f8 + uVar13 * 2),
                            *(undefined4 *)((int)&local_1f8 + uVar13 * 0x10 + 4),(int)unaff_d10,
                            uVar6);
      uVar19 = FUN_010200e0((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),(int)uVar19,
                            (int)((ulonglong)uVar19 >> 0x20));
      uVar18 = FUN_01020278((int)uVar18,uVar2,(int)uVar19,(int)((ulonglong)uVar19 >> 0x20));
      iVar3 = (int)uVar18;
    }
    puVar7 = (undefined4 *)(iVar4 + uVar8 * 8);
    FUN_0103440c(iVar3,iVar4,*puVar7,puVar7[1]);
    if (cVar15 != '\0') goto LAB_01033cbe;
    FUN_01033cc4();
    uVar19 = FUN_01034414();
    local_200[uVar8 * 4] = (int)uVar19;
    local_200[uVar8 * 4 + 1] = (int)((ulonglong)uVar19 >> 0x20);
    uVar18 = FUN_0101f250((int)uVar18,uVar2,(int)unaff_d10,(int)((ulonglong)unaff_d10 >> 0x20));
    *(int *)(&local_1f8 + uVar8 * 2) = (int)uVar18;
    *(int *)((int)&local_1f8 + uVar8 * 0x10 + 4) = (int)((ulonglong)uVar18 >> 0x20);
  }
  for (uVar13 = 0; uVar13 < param_2; uVar13 = uVar13 + 1) {
    iVar3 = param_4 + uVar13 * 8;
    uVar2 = FUN_0101f3f4(local_200[uVar13 * 4],local_200[uVar13 * 4 + 1]);
    *(undefined4 *)(param_4 + uVar13 * 8) = uVar2;
    uVar2 = FUN_0101f3f4(*(undefined4 *)(&local_1f8 + uVar13 * 2),
                         *(undefined4 *)((int)&local_1f8 + uVar13 * 0x10 + 4));
    uVar8 = *(uint *)(param_4 + uVar13 * 8);
    *(undefined4 *)(iVar3 + 4) = uVar2;
    if ((((int)(uVar8 << 1) >> 0x18 == -1) && ((uVar8 & 0x7fffff) != 0)) ||
       ((uVar8 = *(uint *)(iVar3 + 4), (int)(uVar8 << 1) >> 0x18 == -1 && ((uVar8 & 0x7fffff) != 0))
       )) goto LAB_01033cbe;
  }
  uVar2 = 0;
LAB_01033cb4:
  return CONCAT44(param_2,uVar2);
LAB_01033cbe:
  uVar2 = 0x4404;
  goto LAB_01033cb4;
}

