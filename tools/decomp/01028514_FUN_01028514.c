
undefined8 FUN_01028514(float *param_1,float param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float local_20;
  float local_1c;
  uint uStack_18;
  
  param_1[0x80] = 4.2039e-45;
  param_1[0x81] = (float)(param_4 & 0xfffffffe | param_3 & 0xfffffffe);
  param_1[0x82] = (float)(param_3 & 0xfffffffe);
  param_1[0x83] = (float)(param_4 & 0xfffffffe);
  param_1[0x81] = (float)((uint)param_1[0x81] & 0xfffffff8);
  param_1[0x82] = (float)((uint)param_1[0x82] & 0xfffffff8);
  param_1[0x83] = (float)((uint)param_1[0x83] & 0xfffffff8);
  param_1[0x81] = (float)((uint)param_1[0x81] & 0x7fffff);
  param_1[0x82] = (float)((uint)param_1[0x82] & 0x7fffff);
  param_1[0x83] = (float)((uint)param_1[0x83] & 0x7fffff);
  uVar2 = 0x18;
  do {
    uVar1 = uVar2;
    if ((((int)(((uint)param_1[0x81] >> (uVar1 & 0xff)) << 0x1f) < 0) ||
        ((int)(((uint)param_1[0x82] >> (uVar1 & 0xff)) << 0x1f) < 0)) ||
       ((int)(((uint)param_1[0x83] >> (uVar1 & 0xff)) << 0x1f) < 0)) break;
    uVar2 = uVar1 - 1;
    uVar1 = 0;
  } while (-1 < (int)uVar2);
  uVar2 = 0;
  do {
    uVar4 = uVar2;
    if ((int)uVar1 < (int)uVar2) {
      uVar4 = uVar1;
    }
    param_1[uVar2 + 1] = param_1[uVar4 + 1];
    param_1[uVar2 + 0x35] = param_1[uVar4 + 1];
    uVar3 = uVar2 + 1;
    param_1[uVar2 + 0x1a] = param_1[uVar4 + 0x1a];
    param_1[uVar2 + 0x4e] = param_1[uVar4 + 0x1a] - *param_1;
    param_1[uVar2 + 0x67] = -param_1[uVar4 + 0x1a] - *param_1;
    param_1[uVar2 + 0x10d] = param_1[uVar2 + 1];
    param_1[uVar2 + 0x126] = param_1[uVar2 + 0x1a];
    param_1[0x10c] = *param_1;
    uVar2 = uVar3;
  } while ((int)uVar3 < 0x19);
  local_20 = param_2;
  local_1c = (float)param_3;
  uStack_18 = param_4;
  FUN_01028766(param_1 + 0x8a);
  local_20 = param_1[1];
  local_1c = *param_1;
  FUN_01028772(param_1 + 0x8a,param_2,&local_20);
  param_1[0x10c] = *param_1;
  *(char *)(param_1 + 0x13f) = SUB41(param_2,0);
  param_1[0x140] = param_1[0x80];
  param_1[0x141] = param_1[0x81];
  param_1[0x142] = param_1[0x82];
  param_1[0x143] = param_1[0x83];
  return CONCAT44(local_1c,local_20);
}

