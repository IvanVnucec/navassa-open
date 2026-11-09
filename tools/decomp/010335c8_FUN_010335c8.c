
undefined8 FUN_010335c8(int param_1,int param_2,uint param_3,undefined1 param_4)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  undefined1 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int local_120;
  undefined1 auStack_11c [212];
  
  iVar8 = DAT_010343cc + param_1 * 0x1ac;
  local_120 = 0;
  bVar1 = true;
  *(undefined4 *)(iVar8 + 0xb4) = 0;
  uVar9 = 0;
  iVar10 = param_2;
  do {
    uVar12 = param_3 <= uVar9;
    if ((bool)uVar12) {
LAB_01033838:
      return CONCAT44(param_2,local_120);
    }
    iVar5 = iVar8 + *(int *)(iVar8 + 0xb4) * 8;
    FUN_01024f34(param_1,iVar10,iVar5 + 0x30,iVar5 + 0x18,iVar8 + *(int *)(iVar8 + 0xb4) * 4 + 0x48)
    ;
    iVar5 = iVar8 + *(int *)(iVar8 + 0xb4) * 8;
    puVar7 = (undefined4 *)(iVar5 + 0x18);
    FUN_010200bc(*(undefined4 *)(iVar8 + 0x18c));
    iVar10 = iVar10 + 1;
    FUN_0103387a();
    uVar13 = FUN_0103386e();
    uVar2 = (undefined4)uVar13;
    FUN_010200bc(*(undefined4 *)(iVar8 + 400));
    FUN_01033864();
    uVar14 = FUN_0103386e();
    FUN_01020278(uVar2,(int)((ulonglong)uVar13 >> 0x20),(int)uVar14,(int)((ulonglong)uVar14 >> 0x20)
                );
    FUN_010345e0();
    FUN_010343fc();
    uVar2 = FUN_010343f4();
    *puVar7 = uVar2;
    FUN_010200bc(*(undefined4 *)(iVar8 + 0x18c));
    FUN_01033864();
    uVar13 = FUN_0103386e();
    uVar2 = (undefined4)uVar13;
    FUN_010200bc(*(undefined4 *)(iVar8 + 400));
    FUN_01033876();
    uVar14 = FUN_0103386e();
    FUN_010200e0((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),uVar2,(int)((ulonglong)uVar13 >> 0x20)
                );
    FUN_010345e0();
    FUN_010343fc();
    uVar2 = FUN_010343f4();
    FUN_0103387a();
    FUN_01033876();
    uVar13 = FUN_0103386e();
    uVar3 = (undefined4)uVar13;
    FUN_010200bc(uVar2);
    FUN_01033864();
    uVar14 = FUN_0103386e();
    uVar3 = FUN_010200e0((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),uVar3,
                         (int)((ulonglong)uVar13 >> 0x20));
    FUN_0103ba18(uVar3);
    uVar13 = FUN_010205a4();
    uVar3 = (undefined4)((ulonglong)uVar13 >> 0x20);
    uVar14 = FUN_010205a4();
    bVar11 = false;
    FUN_01012c58((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),1,&DAT_41000000);
    if (!(bool)uVar12 || bVar11) {
      FUN_0103387a();
      uVar14 = FUN_01033ce8();
      FUN_0102035c((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),(int)uVar13,uVar3);
      FUN_010343fc();
      uVar4 = FUN_010343f4();
      *puVar7 = uVar4;
      FUN_010200bc(uVar2);
      uVar14 = FUN_01033ce8();
      FUN_0102035c((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),(int)uVar13,uVar3);
      FUN_010343fc();
      uVar2 = FUN_010343f4();
    }
    *(undefined4 *)(iVar5 + 0x1c) = uVar2;
    iVar5 = DAT_010343cc;
    iVar6 = iVar8 + *(int *)(iVar8 + 0xb4) * 8;
    uVar2 = FUN_01033366(*(undefined4 *)(iVar6 + 0x18),*(undefined4 *)(iVar6 + 0x1c));
    iVar5 = iVar5 + param_1 * 0x5c;
    FUN_0103337e(iVar8 + *(int *)(iVar8 + 0xb4) * 0x20 + 0x54,uVar2,*(undefined4 *)(iVar5 + 0x360));
    if (2 < (int)uVar9) {
      iVar6 = 1;
      do {
        if (*(int *)(iVar8 + iVar6 * 4 + 0x48) != *(int *)(iVar8 + 0x48)) goto LAB_010337b0;
        bVar11 = true;
        while( true ) {
          iVar6 = iVar6 + 1;
          if (2 < iVar6) {
            if (!bVar11) goto LAB_01033610;
            uVar2 = FUN_01033476(param_1,auStack_11c,iVar8 + 0x54,iVar8 + 0x18,iVar8 + 0x30,
                                 *(undefined4 *)(iVar8 + 0xb4),*(undefined1 *)(iVar5 + 0x35a));
            FUN_01024f24(param_1,auStack_11c);
            if (bVar1) {
              uVar3 = 0;
              uVar12 = FUN_01024e6a(uVar2);
              *(undefined4 *)(iVar8 + 0xb8) = uVar2;
              FUN_01024e8e(param_1,uVar12,uVar3);
              FUN_01024eba(param_1,param_4);
              FUN_01024eca(param_1,1);
              bVar1 = false;
            }
            FUN_01024ee0(param_1);
            local_120 = FUN_01024ef0(param_1);
            if (local_120 != 0) goto LAB_01033838;
            FUN_01024eca(param_1,0);
            goto LAB_01033610;
          }
          if (bVar11) break;
LAB_010337b0:
          bVar11 = false;
        }
      } while( true );
    }
LAB_01033610:
    *(int *)(iVar8 + 0xb4) = (*(int *)(iVar8 + 0xb4) + 1) % 3;
    uVar9 = uVar9 + 1;
  } while( true );
}

