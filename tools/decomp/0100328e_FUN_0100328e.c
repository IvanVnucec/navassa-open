
longlong FUN_0100328e(int param_1,short param_2,short param_3,uint param_4,undefined4 param_5,
                     undefined4 param_6,undefined1 param_7,undefined4 param_8,undefined4 param_9,
                     undefined4 param_10)

{
  int iVar1;
  undefined1 *puVar2;
  
  puVar2 = DAT_01003314;
  *DAT_01003314 = param_7;
  puVar2[1] = 0;
  FUN_01009cf0(0,0,param_8,param_9);
  iVar1 = DAT_010032f4;
  FUN_01009d1c(param_5,param_6,0);
  FUN_01002fa0(0,iVar1 + param_1 * 0xc80 + param_2 * 0x640 + param_3 * 0x19,param_10);
  return (ulonglong)param_4 << 0x20;
}

