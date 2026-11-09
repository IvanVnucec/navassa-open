
void FUN_010332fa(uint param_1,uint param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  longlong lVar9;
  
  uVar1 = CONCAT44((param_2 + 1) - (uint)(param_1 != 0xffffffff),param_1 + 1);
  uVar6 = 1;
  uVar7 = 0;
  while( true ) {
    uVar3 = (uint)(uVar1 >> 0x21);
    uVar2 = (uint)((uVar1 & 0x100000000) != 0) << 0x1f | (uint)uVar1 >> 1;
    if ((uVar3 < uVar7) || (uVar3 <= uVar7 && uVar2 <= uVar6)) {
      uVar4 = uVar6 - uVar2;
      iVar5 = (uVar7 - uVar3) - (uint)(uVar6 < uVar2);
    }
    else {
      uVar4 = uVar2 - uVar6;
      iVar5 = (uVar3 - uVar7) - (uint)(uVar2 < uVar6);
    }
    if ((iVar5 == 0) && (uVar4 < 2)) break;
    lVar9 = FUN_0101369c(param_1,param_2,uVar2,uVar3);
    uVar1 = lVar9 + CONCAT44(uVar3,uVar2);
    uVar6 = uVar2;
    uVar7 = uVar3;
  }
  while( true ) {
    uVar6 = uVar3 * uVar2 + uVar2 * uVar3 + (int)((ulonglong)uVar2 * (ulonglong)uVar2 >> 0x20);
    if ((uVar6 < param_2) ||
       (uVar6 <= param_2 && (uint)((ulonglong)uVar2 * (ulonglong)uVar2) <= param_1)) break;
    bVar8 = uVar2 == 0;
    uVar2 = uVar2 - 1;
    uVar3 = uVar3 - bVar8;
  }
  return;
}

