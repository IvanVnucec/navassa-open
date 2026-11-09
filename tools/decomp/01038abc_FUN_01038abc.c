
void FUN_01038abc(int param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined4 local_48;
  
  uVar15 = 0x800000;
  uVar16 = 0;
  local_48 = 0;
  do {
    uVar5 = DAT_01038c1c;
    uVar9 = 0x800000 - local_48;
    iVar10 = -((int)local_48 >> 0x1f) - (uint)(0x800000 < local_48);
    uVar13 = *(uint *)(param_1 + uVar16 * 4);
    uVar11 = *(uint *)(param_1 + (uVar16 + 0x19) * 4);
    uVar6 = local_48 + 0x800000;
    iVar14 = ((int)local_48 >> 0x1f) + (uint)(0xff7fffff < local_48);
    iVar7 = param_1 + uVar16 * -4;
    uVar1 = (longlong)(int)uVar15 * (longlong)(int)uVar13 +
            ((longlong)
             (int)(iVar10 * uVar11 +
                  uVar9 * ((int)uVar11 >> 0x1f) +
                  (int)((ulonglong)uVar9 * (ulonglong)uVar11 >> 0x20)) << 0x20 |
            (ulonglong)uVar9 * (ulonglong)uVar11 & 0xffffffff);
    uVar12 = *(uint *)(iVar7 + 0x60);
    uVar4 = -*(int *)(iVar7 + 0xc4);
    lVar2 = (longlong)(int)uVar15 * (longlong)(int)-uVar12 +
            ((longlong)(int)(uVar1 >> 0x20) << 0x20 | uVar1 & 0xffffffff) +
            CONCAT44(iVar14 * uVar4 +
                     uVar6 * ((int)uVar4 >> 0x1f) +
                     (int)((ulonglong)uVar6 * (ulonglong)uVar4 >> 0x20),
                     (int)((ulonglong)uVar6 * (ulonglong)uVar4));
    iVar8 = (int)((ulonglong)lVar2 >> 0x20);
    uVar1 = (longlong)(int)uVar15 * (longlong)(int)uVar4 +
            (longlong)(int)uVar15 * (longlong)(int)-uVar11 +
            CONCAT44(iVar10 * uVar13 +
                     uVar9 * ((int)uVar13 >> 0x1f) +
                     (int)((ulonglong)uVar9 * (ulonglong)uVar13 >> 0x20),
                     (int)((ulonglong)uVar9 * (ulonglong)uVar13)) +
            CONCAT44(iVar14 * uVar12 +
                     uVar6 * ((int)uVar12 >> 0x1f) +
                     (int)((ulonglong)uVar6 * (ulonglong)uVar12 >> 0x20),
                     (int)((ulonglong)uVar6 * (ulonglong)uVar12)) >> 0x17;
    lVar3 = (ulonglong)DAT_01038c1c * (uVar1 & 0xffffffff);
    *(uint *)(param_2 + uVar16 * 8) =
         (uint)lVar3 >> 0x17 |
         (DAT_01038c1c * (int)(uVar1 >> 0x20) + (int)((ulonglong)lVar3 >> 0x20)) * 0x200;
    iVar7 = DAT_01038c20;
    lVar3 = (ulonglong)uVar5 * (ulonglong)((uint)lVar2 >> 0x17 | iVar8 * 0x200);
    *(uint *)(param_2 + uVar16 * 8 + 4) =
         (uint)lVar3 >> 0x17 | (uVar5 * (iVar8 >> 0x17) + (int)((ulonglong)lVar3 >> 0x20)) * 0x200;
    uVar16 = uVar16 + 1;
    lVar3 = (longlong)iVar7 * (longlong)(int)local_48 +
            ((longlong)(int)((ulonglong)((longlong)DAT_01038c24 * (longlong)(int)uVar15) >> 0x20) <<
             0x20 | (longlong)DAT_01038c24 * (longlong)(int)uVar15 & 0xffffffffU);
    lVar2 = (longlong)iVar7 * (longlong)(int)uVar15 +
            ((longlong)(int)((ulonglong)((longlong)DAT_01038c24 * (longlong)(int)-local_48) >> 0x20)
             << 0x20 | (longlong)DAT_01038c24 * (longlong)(int)-local_48 & 0xffffffffU);
    local_48 = (uint)lVar3 >> 0x17 | (int)((ulonglong)lVar3 >> 0x20) << 9;
    uVar15 = (uint)lVar2 >> 0x17 | (int)((ulonglong)lVar2 >> 0x20) << 9;
  } while (uVar16 < 0x18);
  FUN_01038964(param_2,param_1);
  return;
}

