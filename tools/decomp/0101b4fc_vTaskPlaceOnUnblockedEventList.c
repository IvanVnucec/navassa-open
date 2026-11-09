
void vTaskPlaceOnUnblockedEventList(undefined4 param_1,undefined4 param_2,int param_3)

{
  int extraout_r1;
  
  nmi_signal_helper();
  FUN_0101b4ee();
  vListInsert(param_1,extraout_r1 + 0x18);
  if (param_3 != 0) {
    param_2 = 0xffffffff;
  }
  prvAddCurrentTaskToDelayedList(param_2,param_3);
  return;
}

