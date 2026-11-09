
undefined8 FUN_01020862(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined4 local_48;
  undefined4 local_44;
  byte local_40;
  undefined2 local_3e;
  undefined1 local_3c;
  undefined2 local_3a;
  undefined1 local_38;
  
  if (param_1 < 2) {
    uVar7 = *param_2;
    uVar15 = FUN_0102025c(uVar7);
    uVar15 = FUN_0102035c(0,DAT_01020f50,(int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
    uVar8 = FUN_01020cd4();
    uVar16 = FUN_01012c10(uVar8);
    FUN_0101f250((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar15,
                 (int)((ulonglong)uVar15 >> 0x20));
    uVar8 = FUN_01035c84();
    cVar1 = *(char *)((int)param_2 + 6);
    cVar2 = *(char *)(param_2 + 1);
    fVar13 = (float)param_2[3];
    fVar14 = (float)param_2[2];
    cVar3 = *(char *)((int)param_2 + 5);
    if (*(char *)((int)param_2 + 7) != '\0') {
      fVar14 = (float)FUN_01011240(0x41200000);
      fVar13 = (float)FUN_01011240(0x41200000);
    }
    uVar6 = FUN_01012c10(fVar14);
    FUN_01035f9e(uVar6);
    uVar4 = FUN_01020992();
    fVar9 = (float)FUN_01020cca();
    fVar10 = (float)FUN_01020cd4();
    uVar6 = FUN_01012c10(fVar13);
    FUN_01035f9e(uVar6);
    uVar5 = FUN_01020992();
    fVar11 = (float)FUN_01020cca();
    fVar12 = (float)FUN_01020cd4();
    local_3e = (undefined2)(int)(fVar14 * fVar9 * fVar10);
    local_3a = (undefined2)(int)(fVar13 * fVar11 * fVar12);
    local_48 = uVar7;
    local_44 = uVar8;
    local_40 = cVar1 << 5 | cVar2 << 6 | cVar3 << 4 | 1;
    local_3c = uVar4;
    local_38 = uVar5;
    uVar8 = FUN_010207e8(param_1,&local_48);
  }
  else {
    uVar8 = 0x6100;
  }
  return CONCAT44(param_4,uVar8);
}

