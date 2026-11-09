
void FUN_0103cda8(short param_1,short param_2,uint param_3,int param_4)

{
  undefined2 *puVar1;
  uint uVar2;
  
  puVar1 = DAT_0103d5e4;
  DAT_0103d5e4[7] = 0x10;
  puVar1[8] = param_1 + -1;
  puVar1[9] = 0x30;
  *(undefined4 *)(puVar1 + 1) = 0x8000000;
  *puVar1 = 0x2200;
  puVar1[3] = 0x1aU - param_2 | (0x1aU - param_2) * 0x100;
  if (param_4 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_01013658(param_3 << 0x17,((int)param_3 >> 0x1f) << 0x17 | param_3 >> 9,param_4,
                         param_4 >> 0x1f);
    uVar2 = uVar2 & 0xffffff;
  }
  *(uint *)(puVar1 + 5) = uVar2;
  return;
}

