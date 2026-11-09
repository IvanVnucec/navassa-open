
void FUN_0100c820(undefined4 param_1,float param_2,int param_3,undefined4 param_4,undefined4 param_5
                 ,undefined4 param_6)

{
  bool bVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  float extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  undefined4 extraout_s1_02;
  float extraout_s2;
  
  iVar6 = *(int *)(param_3 + 0xc);
  if (*(char *)(iVar6 + 0xa6) == '\0') {
    bVar1 = *(float *)(iVar6 + 0xa8) == 0.0;
    if (bVar1) {
      param_2 = *(float *)(iVar6 + 0xac);
    }
    bVar2 = param_2 == 0.0;
    if (bVar1 && (bVar1 && bVar2)) {
      param_2 = 1.0;
    }
    if (!bVar1 || (!bVar1 || !bVar2)) {
      param_2 = *(float *)(iVar6 + 0xb8);
    }
    puVar3 = (undefined4 *)
             FUN_0100c91c(*(float *)(iVar6 + 0xa8),param_2,1.0 - param_2,
                          *(undefined4 *)(param_3 + 0xb0),*(undefined4 *)(param_3 + 0xf8));
    *puVar3 = extraout_s0;
    iVar4 = FUN_0100c918(puVar3[1]);
    *(undefined4 *)(iVar4 + 4) = extraout_s0_00;
    iVar4 = FUN_0100c918(*(undefined4 *)(iVar4 + 8));
    *(undefined4 *)(iVar4 + 8) = extraout_s0_01;
    *(float *)(iVar4 + 0xc) =
         *(float *)(iVar4 + 0xc) * extraout_s2 +
         *(float *)(param_3 + 0xbc) * *(float *)(param_3 + 0xf8) * extraout_s1;
  }
  else if (*(char *)(iVar6 + 0xa6) == '\x01') {
    fVar5 = (float)FUN_0101f1f8(*(undefined4 *)(param_3 + 0xc0),*(undefined4 *)(param_3 + 0xc4));
    *(float *)(iVar6 + 0x1c) = fVar5 * *(float *)(param_3 + 0xfc);
    FUN_0101f1f8(*(undefined4 *)(param_3 + 200),*(undefined4 *)(param_3 + 0xcc));
    FUN_0100c92a();
    *(undefined4 *)(iVar6 + 0x20) = extraout_s1_00;
    FUN_0101f1f8(*(undefined4 *)(param_3 + 0xd0),*(undefined4 *)(param_3 + 0xd4));
    FUN_0100c92a();
    *(undefined4 *)(iVar6 + 0x24) = extraout_s1_01;
    FUN_0101f1f8(*(undefined4 *)(param_3 + 0xd8),*(undefined4 *)(param_3 + 0xdc));
    FUN_0100c92a();
    *(undefined4 *)(iVar6 + 0x28) = extraout_s1_02;
  }
  *(undefined4 *)(iVar6 + 0x2c) = 0;
  *(undefined4 *)(iVar6 + 0x30) = 0;
  FUN_0100d7b8((undefined4 *)(param_3 + 0xb0),0x30,param_6);
  return;
}

