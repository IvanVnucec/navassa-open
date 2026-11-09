
int FUN_0103e618(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  uint uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined8 uVar9;
  uint local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 auStack_30 [20];
  undefined4 uStack_1c;
  
  uStack_1c = param_4;
  FUN_0102ee8c(param_3,*(undefined1 *)(param_1 + 5),0);
  FUN_0102eebe(param_3,*(undefined1 *)(param_1 + 5),0);
  FUN_0102eefc(param_3,*(undefined1 *)(param_1 + 5),0x200);
  FUN_0102ef44(param_3,*(undefined1 *)(param_1 + 5),0x200);
  *(undefined1 *)(param_1 + 0x66) = 0;
  fVar6 = (float)VectorFloatToUnsignedFixed(*(undefined4 *)(param_1 + 0x60),0x20,1);
  fVar8 = (float)VectorUnsignedToFloat(*(undefined4 *)(param_1 + 0x10),(byte)(in_fpscr >> 0x15) & 3)
  ;
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar8 < fVar6) << 0x1f;
  uVar5 = uVar1 | (uint)(NAN(fVar8) || NAN(fVar6)) << 0x1c;
  if ((byte)(uVar1 >> 0x1f) == ((byte)(uVar5 >> 0x1c) & 1)) {
    *(undefined1 *)(param_1 + 0x66) = 1;
    FUN_0101206c(auStack_30,&DAT_0103efb4,0x14);
    FUN_0101c0c0(auStack_30,param_3,param_2,0);
    FUN_0101206c(&local_40,&DAT_0103efc8,0x10);
    FUN_0101c154(&local_40,param_3,0,0);
    local_48 = DAT_0103efd8;
    local_44 = DAT_0103efdc;
    FUN_01025880(param_3,&local_48);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5c);
    uVar2 = DAT_0103e8f8;
    uVar7 = VectorUnsignedToFloat(*(undefined4 *)(param_1 + 0x5c),(byte)(uVar5 >> 0x15) & 3);
    *(undefined2 *)(param_1 + 100) = 0x60;
    uVar9 = FUN_0103e7c8(uVar7,uVar2);
    *(undefined8 *)(param_1 + 0x38) = uVar9;
  }
  uVar9 = FUN_0103efe0(param_3,param_2,*(undefined4 *)(param_1 + 0x58),
                       *(undefined2 *)(param_1 + 100));
  iVar4 = (int)uVar9;
  FUN_0103e8e8(iVar4,(int)((ulonglong)uVar9 >> 0x20),0x10);
  if (iVar4 == 0) {
    FUN_0103dff8(DAT_0103ef60,0x4d,0x31);
    iVar4 = FUN_01009518(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30),param_3,0);
    if (iVar4 == 0) {
      FUN_01009ae4(*(undefined4 *)(param_1 + 0x30),param_3,*(undefined1 *)(param_1 + 0x40),
                   *(undefined1 *)(param_1 + 0x41));
      FUN_010076da(param_3,0);
      local_3c = *(undefined4 *)(param_1 + 0x30);
      local_40 = *(undefined4 *)(param_1 + 0x2c);
      local_44 = 0;
      local_48 = (uint)*(byte *)(param_1 + 6);
      iVar4 = FUN_0102f0f0(param_3,local_40,*(undefined4 *)(param_1 + 0x38),
                           *(undefined4 *)(param_1 + 0x3c));
      iVar3 = DAT_0103ec88;
      if (iVar4 == 0) {
        if (*(char *)(param_1 + 4) == '\x03' || *(char *)(param_1 + 4) == '\x01') {
          FUN_01016b0a(param_3,1,*(undefined1 *)(*(int *)(DAT_0103ec88 + param_3 * 4) + 0x2f));
          FUN_01016b9e(param_3,*(undefined1 *)(*(int *)(iVar3 + param_3 * 4) + 0x2f));
        }
        if (*(char *)(param_1 + 4) == '\x04' || *(char *)(param_1 + 4) == '\x05') {
          FUN_01016b0a(param_3,1,*(undefined1 *)(*(int *)(iVar3 + param_3 * 4) + 0x30));
          FUN_01016b9e(param_3,*(undefined1 *)(*(int *)(iVar3 + param_3 * 4) + 0x30));
        }
        if (*(char *)(param_1 + 4) == '\x06') {
          pin_update(*(int *)(DAT_0103ee68 + param_3 * 4) + 0xc,2,2);
          FUN_01016c26(param_3);
        }
      }
    }
    else {
      FUN_0100974e(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30),param_3);
    }
  }
  return iVar4;
}

