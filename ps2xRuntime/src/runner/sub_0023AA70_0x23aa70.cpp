#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023AA70
// Address: 0x23aa70 - 0x23aff0
void sub_0023AA70_0x23aa70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AA70_0x23aa70");
#endif

    switch (ctx->pc) {
        case 0x23aa70u: goto label_23aa70;
        case 0x23aa74u: goto label_23aa74;
        case 0x23aa78u: goto label_23aa78;
        case 0x23aa7cu: goto label_23aa7c;
        case 0x23aa80u: goto label_23aa80;
        case 0x23aa84u: goto label_23aa84;
        case 0x23aa88u: goto label_23aa88;
        case 0x23aa8cu: goto label_23aa8c;
        case 0x23aa90u: goto label_23aa90;
        case 0x23aa94u: goto label_23aa94;
        case 0x23aa98u: goto label_23aa98;
        case 0x23aa9cu: goto label_23aa9c;
        case 0x23aaa0u: goto label_23aaa0;
        case 0x23aaa4u: goto label_23aaa4;
        case 0x23aaa8u: goto label_23aaa8;
        case 0x23aaacu: goto label_23aaac;
        case 0x23aab0u: goto label_23aab0;
        case 0x23aab4u: goto label_23aab4;
        case 0x23aab8u: goto label_23aab8;
        case 0x23aabcu: goto label_23aabc;
        case 0x23aac0u: goto label_23aac0;
        case 0x23aac4u: goto label_23aac4;
        case 0x23aac8u: goto label_23aac8;
        case 0x23aaccu: goto label_23aacc;
        case 0x23aad0u: goto label_23aad0;
        case 0x23aad4u: goto label_23aad4;
        case 0x23aad8u: goto label_23aad8;
        case 0x23aadcu: goto label_23aadc;
        case 0x23aae0u: goto label_23aae0;
        case 0x23aae4u: goto label_23aae4;
        case 0x23aae8u: goto label_23aae8;
        case 0x23aaecu: goto label_23aaec;
        case 0x23aaf0u: goto label_23aaf0;
        case 0x23aaf4u: goto label_23aaf4;
        case 0x23aaf8u: goto label_23aaf8;
        case 0x23aafcu: goto label_23aafc;
        case 0x23ab00u: goto label_23ab00;
        case 0x23ab04u: goto label_23ab04;
        case 0x23ab08u: goto label_23ab08;
        case 0x23ab0cu: goto label_23ab0c;
        case 0x23ab10u: goto label_23ab10;
        case 0x23ab14u: goto label_23ab14;
        case 0x23ab18u: goto label_23ab18;
        case 0x23ab1cu: goto label_23ab1c;
        case 0x23ab20u: goto label_23ab20;
        case 0x23ab24u: goto label_23ab24;
        case 0x23ab28u: goto label_23ab28;
        case 0x23ab2cu: goto label_23ab2c;
        case 0x23ab30u: goto label_23ab30;
        case 0x23ab34u: goto label_23ab34;
        case 0x23ab38u: goto label_23ab38;
        case 0x23ab3cu: goto label_23ab3c;
        case 0x23ab40u: goto label_23ab40;
        case 0x23ab44u: goto label_23ab44;
        case 0x23ab48u: goto label_23ab48;
        case 0x23ab4cu: goto label_23ab4c;
        case 0x23ab50u: goto label_23ab50;
        case 0x23ab54u: goto label_23ab54;
        case 0x23ab58u: goto label_23ab58;
        case 0x23ab5cu: goto label_23ab5c;
        case 0x23ab60u: goto label_23ab60;
        case 0x23ab64u: goto label_23ab64;
        case 0x23ab68u: goto label_23ab68;
        case 0x23ab6cu: goto label_23ab6c;
        case 0x23ab70u: goto label_23ab70;
        case 0x23ab74u: goto label_23ab74;
        case 0x23ab78u: goto label_23ab78;
        case 0x23ab7cu: goto label_23ab7c;
        case 0x23ab80u: goto label_23ab80;
        case 0x23ab84u: goto label_23ab84;
        case 0x23ab88u: goto label_23ab88;
        case 0x23ab8cu: goto label_23ab8c;
        case 0x23ab90u: goto label_23ab90;
        case 0x23ab94u: goto label_23ab94;
        case 0x23ab98u: goto label_23ab98;
        case 0x23ab9cu: goto label_23ab9c;
        case 0x23aba0u: goto label_23aba0;
        case 0x23aba4u: goto label_23aba4;
        case 0x23aba8u: goto label_23aba8;
        case 0x23abacu: goto label_23abac;
        case 0x23abb0u: goto label_23abb0;
        case 0x23abb4u: goto label_23abb4;
        case 0x23abb8u: goto label_23abb8;
        case 0x23abbcu: goto label_23abbc;
        case 0x23abc0u: goto label_23abc0;
        case 0x23abc4u: goto label_23abc4;
        case 0x23abc8u: goto label_23abc8;
        case 0x23abccu: goto label_23abcc;
        case 0x23abd0u: goto label_23abd0;
        case 0x23abd4u: goto label_23abd4;
        case 0x23abd8u: goto label_23abd8;
        case 0x23abdcu: goto label_23abdc;
        case 0x23abe0u: goto label_23abe0;
        case 0x23abe4u: goto label_23abe4;
        case 0x23abe8u: goto label_23abe8;
        case 0x23abecu: goto label_23abec;
        case 0x23abf0u: goto label_23abf0;
        case 0x23abf4u: goto label_23abf4;
        case 0x23abf8u: goto label_23abf8;
        case 0x23abfcu: goto label_23abfc;
        case 0x23ac00u: goto label_23ac00;
        case 0x23ac04u: goto label_23ac04;
        case 0x23ac08u: goto label_23ac08;
        case 0x23ac0cu: goto label_23ac0c;
        case 0x23ac10u: goto label_23ac10;
        case 0x23ac14u: goto label_23ac14;
        case 0x23ac18u: goto label_23ac18;
        case 0x23ac1cu: goto label_23ac1c;
        case 0x23ac20u: goto label_23ac20;
        case 0x23ac24u: goto label_23ac24;
        case 0x23ac28u: goto label_23ac28;
        case 0x23ac2cu: goto label_23ac2c;
        case 0x23ac30u: goto label_23ac30;
        case 0x23ac34u: goto label_23ac34;
        case 0x23ac38u: goto label_23ac38;
        case 0x23ac3cu: goto label_23ac3c;
        case 0x23ac40u: goto label_23ac40;
        case 0x23ac44u: goto label_23ac44;
        case 0x23ac48u: goto label_23ac48;
        case 0x23ac4cu: goto label_23ac4c;
        case 0x23ac50u: goto label_23ac50;
        case 0x23ac54u: goto label_23ac54;
        case 0x23ac58u: goto label_23ac58;
        case 0x23ac5cu: goto label_23ac5c;
        case 0x23ac60u: goto label_23ac60;
        case 0x23ac64u: goto label_23ac64;
        case 0x23ac68u: goto label_23ac68;
        case 0x23ac6cu: goto label_23ac6c;
        case 0x23ac70u: goto label_23ac70;
        case 0x23ac74u: goto label_23ac74;
        case 0x23ac78u: goto label_23ac78;
        case 0x23ac7cu: goto label_23ac7c;
        case 0x23ac80u: goto label_23ac80;
        case 0x23ac84u: goto label_23ac84;
        case 0x23ac88u: goto label_23ac88;
        case 0x23ac8cu: goto label_23ac8c;
        case 0x23ac90u: goto label_23ac90;
        case 0x23ac94u: goto label_23ac94;
        case 0x23ac98u: goto label_23ac98;
        case 0x23ac9cu: goto label_23ac9c;
        case 0x23aca0u: goto label_23aca0;
        case 0x23aca4u: goto label_23aca4;
        case 0x23aca8u: goto label_23aca8;
        case 0x23acacu: goto label_23acac;
        case 0x23acb0u: goto label_23acb0;
        case 0x23acb4u: goto label_23acb4;
        case 0x23acb8u: goto label_23acb8;
        case 0x23acbcu: goto label_23acbc;
        case 0x23acc0u: goto label_23acc0;
        case 0x23acc4u: goto label_23acc4;
        case 0x23acc8u: goto label_23acc8;
        case 0x23acccu: goto label_23accc;
        case 0x23acd0u: goto label_23acd0;
        case 0x23acd4u: goto label_23acd4;
        case 0x23acd8u: goto label_23acd8;
        case 0x23acdcu: goto label_23acdc;
        case 0x23ace0u: goto label_23ace0;
        case 0x23ace4u: goto label_23ace4;
        case 0x23ace8u: goto label_23ace8;
        case 0x23acecu: goto label_23acec;
        case 0x23acf0u: goto label_23acf0;
        case 0x23acf4u: goto label_23acf4;
        case 0x23acf8u: goto label_23acf8;
        case 0x23acfcu: goto label_23acfc;
        case 0x23ad00u: goto label_23ad00;
        case 0x23ad04u: goto label_23ad04;
        case 0x23ad08u: goto label_23ad08;
        case 0x23ad0cu: goto label_23ad0c;
        case 0x23ad10u: goto label_23ad10;
        case 0x23ad14u: goto label_23ad14;
        case 0x23ad18u: goto label_23ad18;
        case 0x23ad1cu: goto label_23ad1c;
        case 0x23ad20u: goto label_23ad20;
        case 0x23ad24u: goto label_23ad24;
        case 0x23ad28u: goto label_23ad28;
        case 0x23ad2cu: goto label_23ad2c;
        case 0x23ad30u: goto label_23ad30;
        case 0x23ad34u: goto label_23ad34;
        case 0x23ad38u: goto label_23ad38;
        case 0x23ad3cu: goto label_23ad3c;
        case 0x23ad40u: goto label_23ad40;
        case 0x23ad44u: goto label_23ad44;
        case 0x23ad48u: goto label_23ad48;
        case 0x23ad4cu: goto label_23ad4c;
        case 0x23ad50u: goto label_23ad50;
        case 0x23ad54u: goto label_23ad54;
        case 0x23ad58u: goto label_23ad58;
        case 0x23ad5cu: goto label_23ad5c;
        case 0x23ad60u: goto label_23ad60;
        case 0x23ad64u: goto label_23ad64;
        case 0x23ad68u: goto label_23ad68;
        case 0x23ad6cu: goto label_23ad6c;
        case 0x23ad70u: goto label_23ad70;
        case 0x23ad74u: goto label_23ad74;
        case 0x23ad78u: goto label_23ad78;
        case 0x23ad7cu: goto label_23ad7c;
        case 0x23ad80u: goto label_23ad80;
        case 0x23ad84u: goto label_23ad84;
        case 0x23ad88u: goto label_23ad88;
        case 0x23ad8cu: goto label_23ad8c;
        case 0x23ad90u: goto label_23ad90;
        case 0x23ad94u: goto label_23ad94;
        case 0x23ad98u: goto label_23ad98;
        case 0x23ad9cu: goto label_23ad9c;
        case 0x23ada0u: goto label_23ada0;
        case 0x23ada4u: goto label_23ada4;
        case 0x23ada8u: goto label_23ada8;
        case 0x23adacu: goto label_23adac;
        case 0x23adb0u: goto label_23adb0;
        case 0x23adb4u: goto label_23adb4;
        case 0x23adb8u: goto label_23adb8;
        case 0x23adbcu: goto label_23adbc;
        case 0x23adc0u: goto label_23adc0;
        case 0x23adc4u: goto label_23adc4;
        case 0x23adc8u: goto label_23adc8;
        case 0x23adccu: goto label_23adcc;
        case 0x23add0u: goto label_23add0;
        case 0x23add4u: goto label_23add4;
        case 0x23add8u: goto label_23add8;
        case 0x23addcu: goto label_23addc;
        case 0x23ade0u: goto label_23ade0;
        case 0x23ade4u: goto label_23ade4;
        case 0x23ade8u: goto label_23ade8;
        case 0x23adecu: goto label_23adec;
        case 0x23adf0u: goto label_23adf0;
        case 0x23adf4u: goto label_23adf4;
        case 0x23adf8u: goto label_23adf8;
        case 0x23adfcu: goto label_23adfc;
        case 0x23ae00u: goto label_23ae00;
        case 0x23ae04u: goto label_23ae04;
        case 0x23ae08u: goto label_23ae08;
        case 0x23ae0cu: goto label_23ae0c;
        case 0x23ae10u: goto label_23ae10;
        case 0x23ae14u: goto label_23ae14;
        case 0x23ae18u: goto label_23ae18;
        case 0x23ae1cu: goto label_23ae1c;
        case 0x23ae20u: goto label_23ae20;
        case 0x23ae24u: goto label_23ae24;
        case 0x23ae28u: goto label_23ae28;
        case 0x23ae2cu: goto label_23ae2c;
        case 0x23ae30u: goto label_23ae30;
        case 0x23ae34u: goto label_23ae34;
        case 0x23ae38u: goto label_23ae38;
        case 0x23ae3cu: goto label_23ae3c;
        case 0x23ae40u: goto label_23ae40;
        case 0x23ae44u: goto label_23ae44;
        case 0x23ae48u: goto label_23ae48;
        case 0x23ae4cu: goto label_23ae4c;
        case 0x23ae50u: goto label_23ae50;
        case 0x23ae54u: goto label_23ae54;
        case 0x23ae58u: goto label_23ae58;
        case 0x23ae5cu: goto label_23ae5c;
        case 0x23ae60u: goto label_23ae60;
        case 0x23ae64u: goto label_23ae64;
        case 0x23ae68u: goto label_23ae68;
        case 0x23ae6cu: goto label_23ae6c;
        case 0x23ae70u: goto label_23ae70;
        case 0x23ae74u: goto label_23ae74;
        case 0x23ae78u: goto label_23ae78;
        case 0x23ae7cu: goto label_23ae7c;
        case 0x23ae80u: goto label_23ae80;
        case 0x23ae84u: goto label_23ae84;
        case 0x23ae88u: goto label_23ae88;
        case 0x23ae8cu: goto label_23ae8c;
        case 0x23ae90u: goto label_23ae90;
        case 0x23ae94u: goto label_23ae94;
        case 0x23ae98u: goto label_23ae98;
        case 0x23ae9cu: goto label_23ae9c;
        case 0x23aea0u: goto label_23aea0;
        case 0x23aea4u: goto label_23aea4;
        case 0x23aea8u: goto label_23aea8;
        case 0x23aeacu: goto label_23aeac;
        case 0x23aeb0u: goto label_23aeb0;
        case 0x23aeb4u: goto label_23aeb4;
        case 0x23aeb8u: goto label_23aeb8;
        case 0x23aebcu: goto label_23aebc;
        case 0x23aec0u: goto label_23aec0;
        case 0x23aec4u: goto label_23aec4;
        case 0x23aec8u: goto label_23aec8;
        case 0x23aeccu: goto label_23aecc;
        case 0x23aed0u: goto label_23aed0;
        case 0x23aed4u: goto label_23aed4;
        case 0x23aed8u: goto label_23aed8;
        case 0x23aedcu: goto label_23aedc;
        case 0x23aee0u: goto label_23aee0;
        case 0x23aee4u: goto label_23aee4;
        case 0x23aee8u: goto label_23aee8;
        case 0x23aeecu: goto label_23aeec;
        case 0x23aef0u: goto label_23aef0;
        case 0x23aef4u: goto label_23aef4;
        case 0x23aef8u: goto label_23aef8;
        case 0x23aefcu: goto label_23aefc;
        case 0x23af00u: goto label_23af00;
        case 0x23af04u: goto label_23af04;
        case 0x23af08u: goto label_23af08;
        case 0x23af0cu: goto label_23af0c;
        case 0x23af10u: goto label_23af10;
        case 0x23af14u: goto label_23af14;
        case 0x23af18u: goto label_23af18;
        case 0x23af1cu: goto label_23af1c;
        case 0x23af20u: goto label_23af20;
        case 0x23af24u: goto label_23af24;
        case 0x23af28u: goto label_23af28;
        case 0x23af2cu: goto label_23af2c;
        case 0x23af30u: goto label_23af30;
        case 0x23af34u: goto label_23af34;
        case 0x23af38u: goto label_23af38;
        case 0x23af3cu: goto label_23af3c;
        case 0x23af40u: goto label_23af40;
        case 0x23af44u: goto label_23af44;
        case 0x23af48u: goto label_23af48;
        case 0x23af4cu: goto label_23af4c;
        case 0x23af50u: goto label_23af50;
        case 0x23af54u: goto label_23af54;
        case 0x23af58u: goto label_23af58;
        case 0x23af5cu: goto label_23af5c;
        case 0x23af60u: goto label_23af60;
        case 0x23af64u: goto label_23af64;
        case 0x23af68u: goto label_23af68;
        case 0x23af6cu: goto label_23af6c;
        case 0x23af70u: goto label_23af70;
        case 0x23af74u: goto label_23af74;
        case 0x23af78u: goto label_23af78;
        case 0x23af7cu: goto label_23af7c;
        case 0x23af80u: goto label_23af80;
        case 0x23af84u: goto label_23af84;
        case 0x23af88u: goto label_23af88;
        case 0x23af8cu: goto label_23af8c;
        case 0x23af90u: goto label_23af90;
        case 0x23af94u: goto label_23af94;
        case 0x23af98u: goto label_23af98;
        case 0x23af9cu: goto label_23af9c;
        case 0x23afa0u: goto label_23afa0;
        case 0x23afa4u: goto label_23afa4;
        case 0x23afa8u: goto label_23afa8;
        case 0x23afacu: goto label_23afac;
        case 0x23afb0u: goto label_23afb0;
        case 0x23afb4u: goto label_23afb4;
        case 0x23afb8u: goto label_23afb8;
        case 0x23afbcu: goto label_23afbc;
        case 0x23afc0u: goto label_23afc0;
        case 0x23afc4u: goto label_23afc4;
        case 0x23afc8u: goto label_23afc8;
        case 0x23afccu: goto label_23afcc;
        case 0x23afd0u: goto label_23afd0;
        case 0x23afd4u: goto label_23afd4;
        case 0x23afd8u: goto label_23afd8;
        case 0x23afdcu: goto label_23afdc;
        case 0x23afe0u: goto label_23afe0;
        case 0x23afe4u: goto label_23afe4;
        case 0x23afe8u: goto label_23afe8;
        case 0x23afecu: goto label_23afec;
        default: break;
    }

    ctx->pc = 0x23aa70u;

label_23aa70:
    // 0x23aa70: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x23aa70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_23aa74:
    // 0x23aa74: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x23aa74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_23aa78:
    // 0x23aa78: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x23aa78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_23aa7c:
    // 0x23aa7c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x23aa7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_23aa80:
    // 0x23aa80: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x23aa80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_23aa84:
    // 0x23aa84: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x23aa84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_23aa88:
    // 0x23aa88: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23aa88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_23aa8c:
    // 0x23aa8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23aa8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_23aa90:
    // 0x23aa90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23aa90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_23aa94:
    // 0x23aa94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23aa94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_23aa98:
    // 0x23aa98: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x23aa98u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_23aa9c:
    // 0x23aa9c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_23aaa0:
    if (ctx->pc == 0x23AAA0u) {
        ctx->pc = 0x23AAA0u;
            // 0x23aaa0: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23AAA4u;
        goto label_23aaa4;
    }
    ctx->pc = 0x23AA9Cu;
    {
        const bool branch_taken_0x23aa9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AA9Cu;
            // 0x23aaa0: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aa9c) {
            ctx->pc = 0x23AAB0u;
            goto label_23aab0;
        }
    }
    ctx->pc = 0x23AAA4u;
label_23aaa4:
    // 0x23aaa4: 0x86a20006  lh          $v0, 0x6($s5)
    ctx->pc = 0x23aaa4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
label_23aaa8:
    // 0x23aaa8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23aaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23aaac:
    // 0x23aaac: 0xa6a20006  sh          $v0, 0x6($s5)
    ctx->pc = 0x23aaacu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 6), (uint16_t)GPR_U32(ctx, 2));
label_23aab0:
    // 0x23aab0: 0x8ea4000c  lw          $a0, 0xC($s5)
    ctx->pc = 0x23aab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_23aab4:
    // 0x23aab4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23aab4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23aab8:
    // 0x23aab8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x23aab8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_23aabc:
    // 0x23aabc: 0x320f809  jalr        $t9
label_23aac0:
    if (ctx->pc == 0x23AAC0u) {
        ctx->pc = 0x23AAC0u;
            // 0x23aac0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x23AAC4u;
        goto label_23aac4;
    }
    ctx->pc = 0x23AABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23AAC4u);
        ctx->pc = 0x23AAC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AABCu;
            // 0x23aac0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23AAC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23AAC4u; }
            if (ctx->pc != 0x23AAC4u) { return; }
        }
        }
    }
    ctx->pc = 0x23AAC4u;
label_23aac4:
    // 0x23aac4: 0xafb50090  sw          $s5, 0x90($sp)
    ctx->pc = 0x23aac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 21));
label_23aac8:
    // 0x23aac8: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x23aac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_23aacc:
    // 0x23aacc: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x23aaccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
label_23aad0:
    // 0x23aad0: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x23aad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_23aad4:
    // 0x23aad4: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x23aad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
label_23aad8:
    // 0x23aad8: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x23aad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_23aadc:
    // 0x23aadc: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
label_23aae0:
    if (ctx->pc == 0x23AAE0u) {
        ctx->pc = 0x23AAE0u;
            // 0x23aae0: 0x8fa200d0  lw          $v0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->pc = 0x23AAE4u;
        goto label_23aae4;
    }
    ctx->pc = 0x23AADCu;
    {
        const bool branch_taken_0x23aadc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23aadc) {
            ctx->pc = 0x23AAE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23AADCu;
            // 0x23aae0: 0x8fa200d0  lw          $v0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23AAE8u;
            goto label_23aae8;
        }
    }
    ctx->pc = 0x23AAE4u;
label_23aae4:
    // 0x23aae4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x23aae4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_23aae8:
    // 0x23aae8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_23aaec:
    if (ctx->pc == 0x23AAECu) {
        ctx->pc = 0x23AAECu;
            // 0x23aaec: 0xafa2009c  sw          $v0, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
        ctx->pc = 0x23AAF0u;
        goto label_23aaf0;
    }
    ctx->pc = 0x23AAE8u;
    {
        const bool branch_taken_0x23aae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AAE8u;
            // 0x23aaec: 0xafa2009c  sw          $v0, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aae8) {
            ctx->pc = 0x23AAF8u;
            goto label_23aaf8;
        }
    }
    ctx->pc = 0x23AAF0u;
label_23aaf0:
    // 0x23aaf0: 0x10000002  b           . + 4 + (0x2 << 2)
label_23aaf4:
    if (ctx->pc == 0x23AAF4u) {
        ctx->pc = 0x23AAF4u;
            // 0x23aaf4: 0x94620010  lhu         $v0, 0x10($v1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->pc = 0x23AAF8u;
        goto label_23aaf8;
    }
    ctx->pc = 0x23AAF0u;
    {
        const bool branch_taken_0x23aaf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AAF0u;
            // 0x23aaf4: 0x94620010  lhu         $v0, 0x10($v1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aaf0) {
            ctx->pc = 0x23AAFCu;
            goto label_23aafc;
        }
    }
    ctx->pc = 0x23AAF8u;
label_23aaf8:
    // 0x23aaf8: 0x97a200d4  lhu         $v0, 0xD4($sp)
    ctx->pc = 0x23aaf8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 212)));
label_23aafc:
    // 0x23aafc: 0xa7a200a0  sh          $v0, 0xA0($sp)
    ctx->pc = 0x23aafcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 160), (uint16_t)GPR_U32(ctx, 2));
label_23ab00:
    // 0x23ab00: 0x92a2001c  lbu         $v0, 0x1C($s5)
    ctx->pc = 0x23ab00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 28)));
label_23ab04:
    // 0x23ab04: 0x8fa50094  lw          $a1, 0x94($sp)
    ctx->pc = 0x23ab04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_23ab08:
    // 0x23ab08: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x23ab08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_23ab0c:
    // 0x23ab0c: 0xa3a200a3  sb          $v0, 0xA3($sp)
    ctx->pc = 0x23ab0cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 163), (uint8_t)GPR_U32(ctx, 2));
label_23ab10:
    // 0x23ab10: 0x90a200a8  lbu         $v0, 0xA8($a1)
    ctx->pc = 0x23ab10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 168)));
label_23ab14:
    // 0x23ab14: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x23ab14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_23ab18:
    // 0x23ab18: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x23ab18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_23ab1c:
    // 0x23ab1c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_23ab20:
    if (ctx->pc == 0x23AB20u) {
        ctx->pc = 0x23AB20u;
            // 0x23ab20: 0x27b00090  addiu       $s0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x23AB24u;
        goto label_23ab24;
    }
    ctx->pc = 0x23AB1Cu;
    {
        const bool branch_taken_0x23ab1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AB20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AB1Cu;
            // 0x23ab20: 0x27b00090  addiu       $s0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ab1c) {
            ctx->pc = 0x23AB50u;
            goto label_23ab50;
        }
    }
    ctx->pc = 0x23AB24u;
label_23ab24:
    // 0x23ab24: 0x90c200a8  lbu         $v0, 0xA8($a2)
    ctx->pc = 0x23ab24u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 168)));
label_23ab28:
    // 0x23ab28: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x23ab28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_23ab2c:
    // 0x23ab2c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x23ab2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_23ab30:
    // 0x23ab30: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_23ab34:
    if (ctx->pc == 0x23AB34u) {
        ctx->pc = 0x23AB34u;
            // 0x23ab34: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x23AB38u;
        goto label_23ab38;
    }
    ctx->pc = 0x23AB30u;
    {
        const bool branch_taken_0x23ab30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ab30) {
            ctx->pc = 0x23AB34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23AB30u;
            // 0x23ab34: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23AB54u;
            goto label_23ab54;
        }
    }
    ctx->pc = 0x23AB38u;
label_23ab38:
    // 0x23ab38: 0x8ca30094  lw          $v1, 0x94($a1)
    ctx->pc = 0x23ab38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
label_23ab3c:
    // 0x23ab3c: 0x8cc20094  lw          $v0, 0x94($a2)
    ctx->pc = 0x23ab3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 148)));
label_23ab40:
    // 0x23ab40: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_23ab44:
    if (ctx->pc == 0x23AB44u) {
        ctx->pc = 0x23AB48u;
        goto label_23ab48;
    }
    ctx->pc = 0x23AB40u;
    {
        const bool branch_taken_0x23ab40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23ab40) {
            ctx->pc = 0x23AB50u;
            goto label_23ab50;
        }
    }
    ctx->pc = 0x23AB48u;
label_23ab48:
    // 0x23ab48: 0xc090168  jal         func_2405A0
label_23ab4c:
    if (ctx->pc == 0x23AB4Cu) {
        ctx->pc = 0x23AB4Cu;
            // 0x23ab4c: 0x8ca40008  lw          $a0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->pc = 0x23AB50u;
        goto label_23ab50;
    }
    ctx->pc = 0x23AB48u;
    SET_GPR_U32(ctx, 31, 0x23AB50u);
    ctx->pc = 0x23AB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23AB48u;
            // 0x23ab4c: 0x8ca40008  lw          $a0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2405A0u;
    if (runtime->hasFunction(0x2405A0u)) {
        auto targetFn = runtime->lookupFunction(0x2405A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AB50u; }
        if (ctx->pc != 0x23AB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002405A0_0x2405a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AB50u; }
        if (ctx->pc != 0x23AB50u) { return; }
    }
    ctx->pc = 0x23AB50u;
label_23ab50:
    // 0x23ab50: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x23ab50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_23ab54:
    // 0x23ab54: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x23ab54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23ab58:
    // 0x23ab58: 0x90a200a8  lbu         $v0, 0xA8($a1)
    ctx->pc = 0x23ab58u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 168)));
label_23ab5c:
    // 0x23ab5c: 0x908300a8  lbu         $v1, 0xA8($a0)
    ctx->pc = 0x23ab5cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 168)));
label_23ab60:
    // 0x23ab60: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x23ab60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_23ab64:
    // 0x23ab64: 0x38630007  xori        $v1, $v1, 0x7
    ctx->pc = 0x23ab64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)7);
label_23ab68:
    // 0x23ab68: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x23ab68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_23ab6c:
    // 0x23ab6c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x23ab6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_23ab70:
    // 0x23ab70: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x23ab70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_23ab74:
    // 0x23ab74: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x23ab74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_23ab78:
    // 0x23ab78: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x23ab78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_23ab7c:
    // 0x23ab7c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_23ab80:
    if (ctx->pc == 0x23AB80u) {
        ctx->pc = 0x23AB80u;
            // 0x23ab80: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->pc = 0x23AB84u;
        goto label_23ab84;
    }
    ctx->pc = 0x23AB7Cu;
    {
        const bool branch_taken_0x23ab7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ab7c) {
            ctx->pc = 0x23AB80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23AB7Cu;
            // 0x23ab80: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x23ABB8u;
            goto label_23abb8;
        }
    }
    ctx->pc = 0x23AB84u;
label_23ab84:
    // 0x23ab84: 0x94840074  lhu         $a0, 0x74($a0)
    ctx->pc = 0x23ab84u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 116)));
label_23ab88:
    // 0x23ab88: 0x94a30074  lhu         $v1, 0x74($a1)
    ctx->pc = 0x23ab88u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 116)));
label_23ab8c:
    // 0x23ab8c: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x23ab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_23ab90:
    // 0x23ab90: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x23ab90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_23ab94:
    // 0x23ab94: 0x50200005  beql        $at, $zero, . + 4 + (0x5 << 2)
label_23ab98:
    if (ctx->pc == 0x23AB98u) {
        ctx->pc = 0x23AB98u;
            // 0x23ab98: 0x64102a  slt         $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->pc = 0x23AB9Cu;
        goto label_23ab9c;
    }
    ctx->pc = 0x23AB94u;
    {
        const bool branch_taken_0x23ab94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ab94) {
            ctx->pc = 0x23AB98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23AB94u;
            // 0x23ab98: 0x64102a  slt         $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x23ABACu;
            goto label_23abac;
        }
    }
    ctx->pc = 0x23AB9Cu;
label_23ab9c:
    // 0x23ab9c: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x23ab9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23aba0:
    // 0x23aba0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x23aba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_23aba4:
    // 0x23aba4: 0x10000005  b           . + 4 + (0x5 << 2)
label_23aba8:
    if (ctx->pc == 0x23ABA8u) {
        ctx->pc = 0x23ABA8u;
            // 0x23aba8: 0xa202001a  sb          $v0, 0x1A($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x23ABACu;
        goto label_23abac;
    }
    ctx->pc = 0x23ABA4u;
    {
        const bool branch_taken_0x23aba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ABA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23ABA4u;
            // 0x23aba8: 0xa202001a  sb          $v0, 0x1A($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aba4) {
            ctx->pc = 0x23ABBCu;
            goto label_23abbc;
        }
    }
    ctx->pc = 0x23ABACu;
label_23abac:
    // 0x23abac: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x23abacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_23abb0:
    // 0x23abb0: 0x10000002  b           . + 4 + (0x2 << 2)
label_23abb4:
    if (ctx->pc == 0x23ABB4u) {
        ctx->pc = 0x23ABB4u;
            // 0x23abb4: 0xa202001a  sb          $v0, 0x1A($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x23ABB8u;
        goto label_23abb8;
    }
    ctx->pc = 0x23ABB0u;
    {
        const bool branch_taken_0x23abb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ABB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23ABB0u;
            // 0x23abb4: 0xa202001a  sb          $v0, 0x1A($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23abb0) {
            ctx->pc = 0x23ABBCu;
            goto label_23abbc;
        }
    }
    ctx->pc = 0x23ABB8u;
label_23abb8:
    // 0x23abb8: 0xa202001a  sb          $v0, 0x1A($s0)
    ctx->pc = 0x23abb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26), (uint8_t)GPR_U32(ctx, 2));
label_23abbc:
    // 0x23abbc: 0x9203001a  lbu         $v1, 0x1A($s0)
    ctx->pc = 0x23abbcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26)));
label_23abc0:
    // 0x23abc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23abc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23abc4:
    // 0x23abc4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23abc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23abc8:
    // 0x23abc8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x23abc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_23abcc:
    // 0x23abcc: 0x8c710004  lw          $s1, 0x4($v1)
    ctx->pc = 0x23abccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_23abd0:
    // 0x23abd0: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x23abd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_23abd4:
    // 0x23abd4: 0xaea40008  sw          $a0, 0x8($s5)
    ctx->pc = 0x23abd4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 4));
label_23abd8:
    // 0x23abd8: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x23abd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_23abdc:
    // 0x23abdc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23abdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23abe0:
    // 0x23abe0: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x23abe0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
label_23abe4:
    // 0x23abe4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x23abe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_23abe8:
    // 0x23abe8: 0x94720000  lhu         $s2, 0x0($v1)
    ctx->pc = 0x23abe8u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_23abec:
    // 0x23abec: 0xa202001b  sb          $v0, 0x1B($s0)
    ctx->pc = 0x23abecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27), (uint8_t)GPR_U32(ctx, 2));
label_23abf0:
    // 0x23abf0: 0x16420017  bne         $s2, $v0, . + 4 + (0x17 << 2)
label_23abf4:
    if (ctx->pc == 0x23ABF4u) {
        ctx->pc = 0x23ABF4u;
            // 0x23abf4: 0xa2000012  sb          $zero, 0x12($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x23ABF8u;
        goto label_23abf8;
    }
    ctx->pc = 0x23ABF0u;
    {
        const bool branch_taken_0x23abf0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x23ABF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23ABF0u;
            // 0x23abf4: 0xa2000012  sb          $zero, 0x12($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23abf0) {
            ctx->pc = 0x23AC50u;
            goto label_23ac50;
        }
    }
    ctx->pc = 0x23ABF8u;
label_23abf8:
    // 0x23abf8: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x23abf8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
label_23abfc:
    // 0x23abfc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x23abfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_23ac00:
    // 0x23ac00: 0xa2020012  sb          $v0, 0x12($s0)
    ctx->pc = 0x23ac00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 2));
label_23ac04:
    // 0x23ac04: 0x8ea5000c  lw          $a1, 0xC($s5)
    ctx->pc = 0x23ac04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_23ac08:
    // 0x23ac08: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x23ac08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_23ac0c:
    // 0x23ac0c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x23ac0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_23ac10:
    // 0x23ac10: 0x320f809  jalr        $t9
label_23ac14:
    if (ctx->pc == 0x23AC14u) {
        ctx->pc = 0x23AC14u;
            // 0x23ac14: 0x27a400ec  addiu       $a0, $sp, 0xEC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
        ctx->pc = 0x23AC18u;
        goto label_23ac18;
    }
    ctx->pc = 0x23AC10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23AC18u);
        ctx->pc = 0x23AC14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AC10u;
            // 0x23ac14: 0x27a400ec  addiu       $a0, $sp, 0xEC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23AC18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23AC18u; }
            if (ctx->pc != 0x23AC18u) { return; }
        }
        }
    }
    ctx->pc = 0x23AC18u;
label_23ac18:
    // 0x23ac18: 0x27a200ec  addiu       $v0, $sp, 0xEC
    ctx->pc = 0x23ac18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 236));
label_23ac1c:
    // 0x23ac1c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x23ac1cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_23ac20:
    // 0x23ac20: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_23ac24:
    if (ctx->pc == 0x23AC24u) {
        ctx->pc = 0x23AC24u;
            // 0x23ac24: 0x8eb90000  lw          $t9, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->pc = 0x23AC28u;
        goto label_23ac28;
    }
    ctx->pc = 0x23AC20u;
    {
        const bool branch_taken_0x23ac20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ac20) {
            ctx->pc = 0x23AC24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23AC20u;
            // 0x23ac24: 0x8eb90000  lw          $t9, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23AC38u;
            goto label_23ac38;
        }
    }
    ctx->pc = 0x23AC28u;
label_23ac28:
    // 0x23ac28: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x23ac28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
label_23ac2c:
    // 0x23ac2c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x23ac2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_23ac30:
    // 0x23ac30: 0xa2020012  sb          $v0, 0x12($s0)
    ctx->pc = 0x23ac30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 2));
label_23ac34:
    // 0x23ac34: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x23ac34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_23ac38:
    // 0x23ac38: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x23ac38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_23ac3c:
    // 0x23ac3c: 0x320f809  jalr        $t9
label_23ac40:
    if (ctx->pc == 0x23AC40u) {
        ctx->pc = 0x23AC40u;
            // 0x23ac40: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23AC44u;
        goto label_23ac44;
    }
    ctx->pc = 0x23AC3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23AC44u);
        ctx->pc = 0x23AC40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AC3Cu;
            // 0x23ac40: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23AC44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23AC44u; }
            if (ctx->pc != 0x23AC44u) { return; }
        }
        }
    }
    ctx->pc = 0x23AC44u;
label_23ac44:
    // 0x23ac44: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x23ac44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_23ac48:
    // 0x23ac48: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x23ac48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_23ac4c:
    // 0x23ac4c: 0xa202001b  sb          $v0, 0x1B($s0)
    ctx->pc = 0x23ac4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27), (uint8_t)GPR_U32(ctx, 2));
label_23ac50:
    // 0x23ac50: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x23ac50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_23ac54:
    // 0x23ac54: 0x56420005  bnel        $s2, $v0, . + 4 + (0x5 << 2)
label_23ac58:
    if (ctx->pc == 0x23AC58u) {
        ctx->pc = 0x23AC58u;
            // 0x23ac58: 0x8ea40010  lw          $a0, 0x10($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
        ctx->pc = 0x23AC5Cu;
        goto label_23ac5c;
    }
    ctx->pc = 0x23AC54u;
    {
        const bool branch_taken_0x23ac54 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x23ac54) {
            ctx->pc = 0x23AC58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23AC54u;
            // 0x23ac58: 0x8ea40010  lw          $a0, 0x10($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23AC6Cu;
            goto label_23ac6c;
        }
    }
    ctx->pc = 0x23AC5Cu;
label_23ac5c:
    // 0x23ac5c: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x23ac5cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
label_23ac60:
    // 0x23ac60: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x23ac60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_23ac64:
    // 0x23ac64: 0xa2020012  sb          $v0, 0x12($s0)
    ctx->pc = 0x23ac64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 2));
label_23ac68:
    // 0x23ac68: 0x8ea40010  lw          $a0, 0x10($s5)
    ctx->pc = 0x23ac68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_23ac6c:
    // 0x23ac6c: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
label_23ac70:
    if (ctx->pc == 0x23AC70u) {
        ctx->pc = 0x23AC70u;
            // 0x23ac70: 0xa6000016  sh          $zero, 0x16($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x23AC74u;
        goto label_23ac74;
    }
    ctx->pc = 0x23AC6Cu;
    {
        const bool branch_taken_0x23ac6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ac6c) {
            ctx->pc = 0x23AC70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23AC6Cu;
            // 0x23ac70: 0xa6000016  sh          $zero, 0x16($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23AC90u;
            goto label_23ac90;
        }
    }
    ctx->pc = 0x23AC74u;
label_23ac74:
    // 0x23ac74: 0xc087390  jal         func_21CE40
label_23ac78:
    if (ctx->pc == 0x23AC78u) {
        ctx->pc = 0x23AC78u;
            // 0x23ac78: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x23AC7Cu;
        goto label_23ac7c;
    }
    ctx->pc = 0x23AC74u;
    SET_GPR_U32(ctx, 31, 0x23AC7Cu);
    ctx->pc = 0x23AC78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23AC74u;
            // 0x23ac78: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CE40u;
    if (runtime->hasFunction(0x21CE40u)) {
        auto targetFn = runtime->lookupFunction(0x21CE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AC7Cu; }
        if (ctx->pc != 0x23AC7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CE40_0x21ce40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AC7Cu; }
        if (ctx->pc != 0x23AC7Cu) { return; }
    }
    ctx->pc = 0x23AC7Cu;
label_23ac7c:
    // 0x23ac7c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x23ac7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_23ac80:
    // 0x23ac80: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x23ac80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
label_23ac84:
    // 0x23ac84: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23ac84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_23ac88:
    // 0x23ac88: 0xa2020012  sb          $v0, 0x12($s0)
    ctx->pc = 0x23ac88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 2));
label_23ac8c:
    // 0x23ac8c: 0xa6000016  sh          $zero, 0x16($s0)
    ctx->pc = 0x23ac8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 0));
label_23ac90:
    // 0x23ac90: 0xa6000018  sh          $zero, 0x18($s0)
    ctx->pc = 0x23ac90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 0));
label_23ac94:
    // 0x23ac94: 0xa6000014  sh          $zero, 0x14($s0)
    ctx->pc = 0x23ac94u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
label_23ac98:
    // 0x23ac98: 0xaeb00028  sw          $s0, 0x28($s5)
    ctx->pc = 0x23ac98u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 40), GPR_U32(ctx, 16));
label_23ac9c:
    // 0x23ac9c: 0x1200002c  beqz        $s0, . + 4 + (0x2C << 2)
label_23aca0:
    if (ctx->pc == 0x23ACA0u) {
        ctx->pc = 0x23ACA0u;
            // 0x23aca0: 0x8ea20008  lw          $v0, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->pc = 0x23ACA4u;
        goto label_23aca4;
    }
    ctx->pc = 0x23AC9Cu;
    {
        const bool branch_taken_0x23ac9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ACA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AC9Cu;
            // 0x23aca0: 0x8ea20008  lw          $v0, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ac9c) {
            ctx->pc = 0x23AD50u;
            goto label_23ad50;
        }
    }
    ctx->pc = 0x23ACA4u;
label_23aca4:
    // 0x23aca4: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x23aca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_23aca8:
    // 0x23aca8: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x23aca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_23acac:
    // 0x23acac: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x23acacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_23acb0:
    // 0x23acb0: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
label_23acb4:
    if (ctx->pc == 0x23ACB4u) {
        ctx->pc = 0x23ACB4u;
            // 0x23acb4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23ACB8u;
        goto label_23acb8;
    }
    ctx->pc = 0x23ACB0u;
    {
        const bool branch_taken_0x23acb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23acb0) {
            ctx->pc = 0x23ACB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23ACB0u;
            // 0x23acb4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23ACB8u;
            goto label_23acb8;
        }
    }
    ctx->pc = 0x23ACB8u;
label_23acb8:
    // 0x23acb8: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x23acb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
label_23acbc:
    // 0x23acbc: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x23acbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_23acc0:
    // 0x23acc0: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x23acc0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_23acc4:
    // 0x23acc4: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
label_23acc8:
    if (ctx->pc == 0x23ACC8u) {
        ctx->pc = 0x23ACC8u;
            // 0x23acc8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23ACCCu;
        goto label_23accc;
    }
    ctx->pc = 0x23ACC4u;
    {
        const bool branch_taken_0x23acc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23acc4) {
            ctx->pc = 0x23ACC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23ACC4u;
            // 0x23acc8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23ACCCu;
            goto label_23accc;
        }
    }
    ctx->pc = 0x23ACCCu;
label_23accc:
    // 0x23accc: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x23acccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
label_23acd0:
    // 0x23acd0: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x23acd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_23acd4:
    // 0x23acd4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x23acd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_23acd8:
    // 0x23acd8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23acd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_23acdc:
    // 0x23acdc: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x23acdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_23ace0:
    // 0x23ace0: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x23ace0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_23ace4:
    // 0x23ace4: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x23ace4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_23ace8:
    // 0x23ace8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23ace8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_23acec:
    // 0x23acec: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x23acecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
label_23acf0:
    // 0x23acf0: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x23acf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_23acf4:
    // 0x23acf4: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x23acf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_23acf8:
    // 0x23acf8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23acf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_23acfc:
    // 0x23acfc: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x23acfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
label_23ad00:
    // 0x23ad00: 0x8ea80028  lw          $t0, 0x28($s5)
    ctx->pc = 0x23ad00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
label_23ad04:
    // 0x23ad04: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x23ad04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_23ad08:
    // 0x23ad08: 0x8fa500c4  lw          $a1, 0xC4($sp)
    ctx->pc = 0x23ad08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_23ad0c:
    // 0x23ad0c: 0x95070018  lhu         $a3, 0x18($t0)
    ctx->pc = 0x23ad0cu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 24)));
label_23ad10:
    // 0x23ad10: 0x95040016  lhu         $a0, 0x16($t0)
    ctx->pc = 0x23ad10u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 22)));
label_23ad14:
    // 0x23ad14: 0x95060014  lhu         $a2, 0x14($t0)
    ctx->pc = 0x23ad14u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 20)));
label_23ad18:
    // 0x23ad18: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x23ad18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_23ad1c:
    // 0x23ad1c: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x23ad1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_23ad20:
    // 0x23ad20: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x23ad20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_23ad24:
    // 0x23ad24: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x23ad24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_23ad28:
    // 0x23ad28: 0xa5030016  sh          $v1, 0x16($t0)
    ctx->pc = 0x23ad28u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 22), (uint16_t)GPR_U32(ctx, 3));
label_23ad2c:
    // 0x23ad2c: 0xa5070018  sh          $a3, 0x18($t0)
    ctx->pc = 0x23ad2cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 24), (uint16_t)GPR_U32(ctx, 7));
label_23ad30:
    // 0x23ad30: 0xa5050014  sh          $a1, 0x14($t0)
    ctx->pc = 0x23ad30u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 20), (uint16_t)GPR_U32(ctx, 5));
label_23ad34:
    // 0x23ad34: 0x8ea40028  lw          $a0, 0x28($s5)
    ctx->pc = 0x23ad34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
label_23ad38:
    // 0x23ad38: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x23ad38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_23ad3c:
    // 0x23ad3c: 0x94840014  lhu         $a0, 0x14($a0)
    ctx->pc = 0x23ad3cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
label_23ad40:
    // 0x23ad40: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x23ad40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23ad44:
    // 0x23ad44: 0x50200001  beql        $at, $zero, . + 4 + (0x1 << 2)
label_23ad48:
    if (ctx->pc == 0x23AD48u) {
        ctx->pc = 0x23AD48u;
            // 0x23ad48: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23AD4Cu;
        goto label_23ad4c;
    }
    ctx->pc = 0x23AD44u;
    {
        const bool branch_taken_0x23ad44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ad44) {
            ctx->pc = 0x23AD48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23AD44u;
            // 0x23ad48: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23AD4Cu;
            goto label_23ad4c;
        }
    }
    ctx->pc = 0x23AD4Cu;
label_23ad4c:
    // 0x23ad4c: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x23ad4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_23ad50:
    // 0x23ad50: 0x96240074  lhu         $a0, 0x74($s1)
    ctx->pc = 0x23ad50u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 116)));
label_23ad54:
    // 0x23ad54: 0x26330070  addiu       $s3, $s1, 0x70
    ctx->pc = 0x23ad54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_23ad58:
    // 0x23ad58: 0x1880000b  blez        $a0, . + 4 + (0xB << 2)
label_23ad5c:
    if (ctx->pc == 0x23AD5Cu) {
        ctx->pc = 0x23AD5Cu;
            // 0x23ad5c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23AD60u;
        goto label_23ad60;
    }
    ctx->pc = 0x23AD58u;
    {
        const bool branch_taken_0x23ad58 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x23AD5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AD58u;
            // 0x23ad5c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ad58) {
            ctx->pc = 0x23AD88u;
            goto label_23ad88;
        }
    }
    ctx->pc = 0x23AD60u;
label_23ad60:
    // 0x23ad60: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x23ad60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_23ad64:
    // 0x23ad64: 0x92030013  lbu         $v1, 0x13($s0)
    ctx->pc = 0x23ad64u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 19)));
label_23ad68:
    // 0x23ad68: 0x90a20013  lbu         $v0, 0x13($a1)
    ctx->pc = 0x23ad68u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 19)));
label_23ad6c:
    // 0x23ad6c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x23ad6cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_23ad70:
    // 0x23ad70: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_23ad74:
    if (ctx->pc == 0x23AD74u) {
        ctx->pc = 0x23AD78u;
        goto label_23ad78;
    }
    ctx->pc = 0x23AD70u;
    {
        const bool branch_taken_0x23ad70 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ad70) {
            ctx->pc = 0x23AD88u;
            goto label_23ad88;
        }
    }
    ctx->pc = 0x23AD78u;
label_23ad78:
    // 0x23ad78: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x23ad78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_23ad7c:
    // 0x23ad7c: 0x284102a  slt         $v0, $s4, $a0
    ctx->pc = 0x23ad7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_23ad80:
    // 0x23ad80: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_23ad84:
    if (ctx->pc == 0x23AD84u) {
        ctx->pc = 0x23AD84u;
            // 0x23ad84: 0x24a50024  addiu       $a1, $a1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
        ctx->pc = 0x23AD88u;
        goto label_23ad88;
    }
    ctx->pc = 0x23AD80u;
    {
        const bool branch_taken_0x23ad80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AD80u;
            // 0x23ad84: 0x24a50024  addiu       $a1, $a1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ad80) {
            ctx->pc = 0x23AD68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23ad68;
        }
    }
    ctx->pc = 0x23AD88u;
label_23ad88:
    // 0x23ad88: 0x96620006  lhu         $v0, 0x6($s3)
    ctx->pc = 0x23ad88u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
label_23ad8c:
    // 0x23ad8c: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x23ad8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
label_23ad90:
    // 0x23ad90: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x23ad90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_23ad94:
    // 0x23ad94: 0x50200002  beql        $at, $zero, . + 4 + (0x2 << 2)
label_23ad98:
    if (ctx->pc == 0x23AD98u) {
        ctx->pc = 0x23AD98u;
            // 0x23ad98: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23AD9Cu;
        goto label_23ad9c;
    }
    ctx->pc = 0x23AD94u;
    {
        const bool branch_taken_0x23ad94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ad94) {
            ctx->pc = 0x23AD98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23AD94u;
            // 0x23ad98: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23ADA0u;
            goto label_23ada0;
        }
    }
    ctx->pc = 0x23AD9Cu;
label_23ad9c:
    // 0x23ad9c: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x23ad9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23ada0:
    // 0x23ada0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x23ada0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23ada4:
    // 0x23ada4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23ada4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23ada8:
    // 0x23ada8: 0xc08ecd4  jal         func_23B350
label_23adac:
    if (ctx->pc == 0x23ADACu) {
        ctx->pc = 0x23ADACu;
            // 0x23adac: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23ADB0u;
        goto label_23adb0;
    }
    ctx->pc = 0x23ADA8u;
    SET_GPR_U32(ctx, 31, 0x23ADB0u);
    ctx->pc = 0x23ADACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23ADA8u;
            // 0x23adac: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B350u;
    if (runtime->hasFunction(0x23B350u)) {
        auto targetFn = runtime->lookupFunction(0x23B350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23ADB0u; }
        if (ctx->pc != 0x23ADB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023B350_0x23b350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23ADB0u; }
        if (ctx->pc != 0x23ADB0u) { return; }
    }
    ctx->pc = 0x23ADB0u;
label_23adb0:
    // 0x23adb0: 0x96620004  lhu         $v0, 0x4($s3)
    ctx->pc = 0x23adb0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
label_23adb4:
    // 0x23adb4: 0x242082a  slt         $at, $s2, $v0
    ctx->pc = 0x23adb4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_23adb8:
    // 0x23adb8: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_23adbc:
    if (ctx->pc == 0x23ADBCu) {
        ctx->pc = 0x23ADC0u;
        goto label_23adc0;
    }
    ctx->pc = 0x23ADB8u;
    {
        const bool branch_taken_0x23adb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23adb8) {
            ctx->pc = 0x23ADF0u;
            goto label_23adf0;
        }
    }
    ctx->pc = 0x23ADC0u;
label_23adc0:
    // 0x23adc0: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x23adc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_23adc4:
    // 0x23adc4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x23adc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_23adc8:
    // 0x23adc8: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x23adc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_23adcc:
    // 0x23adcc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x23adccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_23add0:
    // 0x23add0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x23add0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_23add4:
    // 0x23add4: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x23add4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_23add8:
    // 0x23add8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23add8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23addc:
    // 0x23addc: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x23addcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
label_23ade0:
    // 0x23ade0: 0x96620004  lhu         $v0, 0x4($s3)
    ctx->pc = 0x23ade0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
label_23ade4:
    // 0x23ade4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x23ade4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_23ade8:
    // 0x23ade8: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_23adec:
    if (ctx->pc == 0x23ADECu) {
        ctx->pc = 0x23ADECu;
            // 0x23adec: 0x24840024  addiu       $a0, $a0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
        ctx->pc = 0x23ADF0u;
        goto label_23adf0;
    }
    ctx->pc = 0x23ADE8u;
    {
        const bool branch_taken_0x23ade8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23ADECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23ADE8u;
            // 0x23adec: 0x24840024  addiu       $a0, $a0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ade8) {
            ctx->pc = 0x23ADCCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23adcc;
        }
    }
    ctx->pc = 0x23ADF0u;
label_23adf0:
    // 0x23adf0: 0x8eb00028  lw          $s0, 0x28($s5)
    ctx->pc = 0x23adf0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
label_23adf4:
    // 0x23adf4: 0x82a5001d  lb          $a1, 0x1D($s5)
    ctx->pc = 0x23adf4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 29)));
label_23adf8:
    // 0x23adf8: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x23adf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_23adfc:
    // 0x23adfc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x23adfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23ae00:
    // 0x23ae00: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x23ae00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_23ae04:
    // 0x23ae04: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23ae04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23ae08:
    // 0x23ae08: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x23ae08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_23ae0c:
    // 0x23ae0c: 0x320f809  jalr        $t9
label_23ae10:
    if (ctx->pc == 0x23AE10u) {
        ctx->pc = 0x23AE10u;
            // 0x23ae10: 0x26330070  addiu       $s3, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->pc = 0x23AE14u;
        goto label_23ae14;
    }
    ctx->pc = 0x23AE0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23AE14u);
        ctx->pc = 0x23AE10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AE0Cu;
            // 0x23ae10: 0x26330070  addiu       $s3, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23AE14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23AE14u; }
            if (ctx->pc != 0x23AE14u) { return; }
        }
        }
    }
    ctx->pc = 0x23AE14u;
label_23ae14:
    // 0x23ae14: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x23ae14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_23ae18:
    // 0x23ae18: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x23ae18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_23ae1c:
    // 0x23ae1c: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x23ae1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_23ae20:
    // 0x23ae20: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x23ae20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_23ae24:
    // 0x23ae24: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x23ae24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_23ae28:
    // 0x23ae28: 0xa6020020  sh          $v0, 0x20($s0)
    ctx->pc = 0x23ae28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 2));
label_23ae2c:
    // 0x23ae2c: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x23ae2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_23ae30:
    // 0x23ae30: 0x50600042  beql        $v1, $zero, . + 4 + (0x42 << 2)
label_23ae34:
    if (ctx->pc == 0x23AE34u) {
        ctx->pc = 0x23AE34u;
            // 0x23ae34: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->pc = 0x23AE38u;
        goto label_23ae38;
    }
    ctx->pc = 0x23AE30u;
    {
        const bool branch_taken_0x23ae30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ae30) {
            ctx->pc = 0x23AE34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23AE30u;
            // 0x23ae34: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23AF3Cu;
            goto label_23af3c;
        }
    }
    ctx->pc = 0x23AE38u;
label_23ae38:
    // 0x23ae38: 0x8e22008c  lw          $v0, 0x8C($s1)
    ctx->pc = 0x23ae38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_23ae3c:
    // 0x23ae3c: 0x8e320088  lw          $s2, 0x88($s1)
    ctx->pc = 0x23ae3cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_23ae40:
    // 0x23ae40: 0x8e370084  lw          $s7, 0x84($s1)
    ctx->pc = 0x23ae40u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_23ae44:
    // 0x23ae44: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x23ae44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_23ae48:
    // 0x23ae48: 0x2432821  addu        $a1, $s2, $v1
    ctx->pc = 0x23ae48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_23ae4c:
    // 0x23ae4c: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x23ae4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_23ae50:
    // 0x23ae50: 0x45082a  slt         $at, $v0, $a1
    ctx->pc = 0x23ae50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_23ae54:
    // 0x23ae54: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_23ae58:
    if (ctx->pc == 0x23AE58u) {
        ctx->pc = 0x23AE58u;
            // 0x23ae58: 0x26360084  addiu       $s6, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->pc = 0x23AE5Cu;
        goto label_23ae5c;
    }
    ctx->pc = 0x23AE54u;
    {
        const bool branch_taken_0x23ae54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AE58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AE54u;
            // 0x23ae58: 0x26360084  addiu       $s6, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ae54) {
            ctx->pc = 0x23AE68u;
            goto label_23ae68;
        }
    }
    ctx->pc = 0x23AE5Cu;
label_23ae5c:
    // 0x23ae5c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x23ae5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_23ae60:
    // 0x23ae60: 0xc0a725c  jal         func_29C970
label_23ae64:
    if (ctx->pc == 0x23AE64u) {
        ctx->pc = 0x23AE64u;
            // 0x23ae64: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x23AE68u;
        goto label_23ae68;
    }
    ctx->pc = 0x23AE60u;
    SET_GPR_U32(ctx, 31, 0x23AE68u);
    ctx->pc = 0x23AE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23AE60u;
            // 0x23ae64: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AE68u; }
        if (ctx->pc != 0x23AE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AE68u; }
        if (ctx->pc != 0x23AE68u) { return; }
    }
    ctx->pc = 0x23AE68u;
label_23ae68:
    // 0x23ae68: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x23ae68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_23ae6c:
    // 0x23ae6c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23ae6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23ae70:
    // 0x23ae70: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x23ae70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_23ae74:
    // 0x23ae74: 0xaec20004  sw          $v0, 0x4($s6)
    ctx->pc = 0x23ae74u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
label_23ae78:
    // 0x23ae78: 0x8ed20000  lw          $s2, 0x0($s6)
    ctx->pc = 0x23ae78u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_23ae7c:
    // 0x23ae7c: 0x1a800010  blez        $s4, . + 4 + (0x10 << 2)
label_23ae80:
    if (ctx->pc == 0x23AE80u) {
        ctx->pc = 0x23AE80u;
            // 0x23ae80: 0x257b823  subu        $s7, $s2, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
        ctx->pc = 0x23AE84u;
        goto label_23ae84;
    }
    ctx->pc = 0x23AE7Cu;
    {
        const bool branch_taken_0x23ae7c = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x23AE80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AE7Cu;
            // 0x23ae80: 0x257b823  subu        $s7, $s2, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ae7c) {
            ctx->pc = 0x23AEC0u;
            goto label_23aec0;
        }
    }
    ctx->pc = 0x23AE84u;
label_23ae84:
    // 0x23ae84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23ae84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23ae88:
    // 0x23ae88: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x23ae88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_23ae8c:
    // 0x23ae8c: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x23ae8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_23ae90:
    // 0x23ae90: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x23ae90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_23ae94:
    // 0x23ae94: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_23ae98:
    if (ctx->pc == 0x23AE98u) {
        ctx->pc = 0x23AE9Cu;
        goto label_23ae9c;
    }
    ctx->pc = 0x23AE94u;
    {
        const bool branch_taken_0x23ae94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ae94) {
            ctx->pc = 0x23AEB0u;
            goto label_23aeb0;
        }
    }
    ctx->pc = 0x23AE9Cu;
label_23ae9c:
    // 0x23ae9c: 0x571821  addu        $v1, $v0, $s7
    ctx->pc = 0x23ae9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_23aea0:
    // 0x23aea0: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x23aea0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
label_23aea4:
    // 0x23aea4: 0x94820020  lhu         $v0, 0x20($a0)
    ctx->pc = 0x23aea4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 32)));
label_23aea8:
    // 0x23aea8: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x23aea8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23aeac:
    // 0x23aeac: 0x0  nop
    ctx->pc = 0x23aeacu;
    // NOP
label_23aeb0:
    // 0x23aeb0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x23aeb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_23aeb4:
    // 0x23aeb4: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x23aeb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_23aeb8:
    // 0x23aeb8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_23aebc:
    if (ctx->pc == 0x23AEBCu) {
        ctx->pc = 0x23AEBCu;
            // 0x23aebc: 0x24a50024  addiu       $a1, $a1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
        ctx->pc = 0x23AEC0u;
        goto label_23aec0;
    }
    ctx->pc = 0x23AEB8u;
    {
        const bool branch_taken_0x23aeb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AEB8u;
            // 0x23aebc: 0x24a50024  addiu       $a1, $a1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aeb8) {
            ctx->pc = 0x23AE88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23ae88;
        }
    }
    ctx->pc = 0x23AEC0u;
label_23aec0:
    // 0x23aec0: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x23aec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_23aec4:
    // 0x23aec4: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x23aec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_23aec8:
    // 0x23aec8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23aec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23aecc:
    // 0x23aecc: 0x96060020  lhu         $a2, 0x20($s0)
    ctx->pc = 0x23aeccu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
label_23aed0:
    // 0x23aed0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x23aed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23aed4:
    // 0x23aed4: 0x2462021  addu        $a0, $s2, $a2
    ctx->pc = 0x23aed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
label_23aed8:
    // 0x23aed8: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x23aed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_23aedc:
    // 0x23aedc: 0xc0a8450  jal         func_2A1140
label_23aee0:
    if (ctx->pc == 0x23AEE0u) {
        ctx->pc = 0x23AEE0u;
            // 0x23aee0: 0x523023  subu        $a2, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->pc = 0x23AEE4u;
        goto label_23aee4;
    }
    ctx->pc = 0x23AEDCu;
    SET_GPR_U32(ctx, 31, 0x23AEE4u);
    ctx->pc = 0x23AEE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23AEDCu;
            // 0x23aee0: 0x523023  subu        $a2, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1140u;
    if (runtime->hasFunction(0x2A1140u)) {
        auto targetFn = runtime->lookupFunction(0x2A1140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AEE4u; }
        if (ctx->pc != 0x23AEE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1140_0x2a1140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AEE4u; }
        if (ctx->pc != 0x23AEE4u) { return; }
    }
    ctx->pc = 0x23AEE4u;
label_23aee4:
    // 0x23aee4: 0xae12001c  sw          $s2, 0x1C($s0)
    ctx->pc = 0x23aee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 18));
label_23aee8:
    // 0x23aee8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x23aee8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_23aeec:
    // 0x23aeec: 0x96620004  lhu         $v0, 0x4($s3)
    ctx->pc = 0x23aeecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
label_23aef0:
    // 0x23aef0: 0x96030020  lhu         $v1, 0x20($s0)
    ctx->pc = 0x23aef0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
label_23aef4:
    // 0x23aef4: 0x222082a  slt         $at, $s1, $v0
    ctx->pc = 0x23aef4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_23aef8:
    // 0x23aef8: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_23aefc:
    if (ctx->pc == 0x23AEFCu) {
        ctx->pc = 0x23AEFCu;
            // 0x23aefc: 0x2e32021  addu        $a0, $s7, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
        ctx->pc = 0x23AF00u;
        goto label_23af00;
    }
    ctx->pc = 0x23AEF8u;
    {
        const bool branch_taken_0x23aef8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AEF8u;
            // 0x23aefc: 0x2e32021  addu        $a0, $s7, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aef8) {
            ctx->pc = 0x23AF3Cu;
            goto label_23af3c;
        }
    }
    ctx->pc = 0x23AF00u;
label_23af00:
    // 0x23af00: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x23af00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_23af04:
    // 0x23af04: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x23af04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_23af08:
    // 0x23af08: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x23af08u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_23af0c:
    // 0x23af0c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x23af0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_23af10:
    // 0x23af10: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x23af10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_23af14:
    // 0x23af14: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x23af14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_23af18:
    // 0x23af18: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_23af1c:
    if (ctx->pc == 0x23AF1Cu) {
        ctx->pc = 0x23AF1Cu;
            // 0x23af1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23AF20u;
        goto label_23af20;
    }
    ctx->pc = 0x23AF18u;
    {
        const bool branch_taken_0x23af18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23af18) {
            ctx->pc = 0x23AF1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23AF18u;
            // 0x23af1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23AF24u;
            goto label_23af24;
        }
    }
    ctx->pc = 0x23AF20u;
label_23af20:
    // 0x23af20: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23af20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_23af24:
    // 0x23af24: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x23af24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
label_23af28:
    // 0x23af28: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x23af28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_23af2c:
    // 0x23af2c: 0x96620004  lhu         $v0, 0x4($s3)
    ctx->pc = 0x23af2cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
label_23af30:
    // 0x23af30: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x23af30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_23af34:
    // 0x23af34: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_23af38:
    if (ctx->pc == 0x23AF38u) {
        ctx->pc = 0x23AF38u;
            // 0x23af38: 0x24a50024  addiu       $a1, $a1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
        ctx->pc = 0x23AF3Cu;
        goto label_23af3c;
    }
    ctx->pc = 0x23AF34u;
    {
        const bool branch_taken_0x23af34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AF38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AF34u;
            // 0x23af38: 0x24a50024  addiu       $a1, $a1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23af34) {
            ctx->pc = 0x23AF0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23af0c;
        }
    }
    ctx->pc = 0x23AF3Cu;
label_23af3c:
    // 0x23af3c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x23af3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23af40:
    // 0x23af40: 0x96070020  lhu         $a3, 0x20($s0)
    ctx->pc = 0x23af40u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
label_23af44:
    // 0x23af44: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x23af44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_23af48:
    // 0x23af48: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x23af48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_23af4c:
    // 0x23af4c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23af4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23af50:
    // 0x23af50: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x23af50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_23af54:
    // 0x23af54: 0x320f809  jalr        $t9
label_23af58:
    if (ctx->pc == 0x23AF58u) {
        ctx->pc = 0x23AF58u;
            // 0x23af58: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23AF5Cu;
        goto label_23af5c;
    }
    ctx->pc = 0x23AF54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23AF5Cu);
        ctx->pc = 0x23AF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AF54u;
            // 0x23af58: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23AF5Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23AF5Cu; }
            if (ctx->pc != 0x23AF5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x23AF5Cu;
label_23af5c:
    // 0x23af5c: 0x9204001a  lbu         $a0, 0x1A($s0)
    ctx->pc = 0x23af5cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26)));
label_23af60:
    // 0x23af60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23af60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23af64:
    // 0x23af64: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x23af64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_23af68:
    // 0x23af68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23af68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23af6c:
    // 0x23af6c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x23af6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_23af70:
    // 0x23af70: 0x8c710004  lw          $s1, 0x4($v1)
    ctx->pc = 0x23af70u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_23af74:
    // 0x23af74: 0x8e23007c  lw          $v1, 0x7C($s1)
    ctx->pc = 0x23af74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
label_23af78:
    // 0x23af78: 0xa6030022  sh          $v1, 0x22($s0)
    ctx->pc = 0x23af78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 3));
label_23af7c:
    // 0x23af7c: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x23af7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_23af80:
    // 0x23af80: 0x8e24007c  lw          $a0, 0x7C($s1)
    ctx->pc = 0x23af80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
label_23af84:
    // 0x23af84: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x23af84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_23af88:
    // 0x23af88: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x23af88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_23af8c:
    // 0x23af8c: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
label_23af90:
    if (ctx->pc == 0x23AF90u) {
        ctx->pc = 0x23AF90u;
            // 0x23af90: 0x8e24007c  lw          $a0, 0x7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
        ctx->pc = 0x23AF94u;
        goto label_23af94;
    }
    ctx->pc = 0x23AF8Cu;
    {
        const bool branch_taken_0x23af8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x23af8c) {
            ctx->pc = 0x23AF90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23AF8Cu;
            // 0x23af90: 0x8e24007c  lw          $a0, 0x7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23AFA4u;
            goto label_23afa4;
        }
    }
    ctx->pc = 0x23AF94u;
label_23af94:
    // 0x23af94: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x23af94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_23af98:
    // 0x23af98: 0xc0a728c  jal         func_29CA30
label_23af9c:
    if (ctx->pc == 0x23AF9Cu) {
        ctx->pc = 0x23AF9Cu;
            // 0x23af9c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x23AFA0u;
        goto label_23afa0;
    }
    ctx->pc = 0x23AF98u;
    SET_GPR_U32(ctx, 31, 0x23AFA0u);
    ctx->pc = 0x23AF9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23AF98u;
            // 0x23af9c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AFA0u; }
        if (ctx->pc != 0x23AFA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23AFA0u; }
        if (ctx->pc != 0x23AFA0u) { return; }
    }
    ctx->pc = 0x23AFA0u;
label_23afa0:
    // 0x23afa0: 0x8e24007c  lw          $a0, 0x7C($s1)
    ctx->pc = 0x23afa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
label_23afa4:
    // 0x23afa4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x23afa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_23afa8:
    // 0x23afa8: 0xae23007c  sw          $v1, 0x7C($s1)
    ctx->pc = 0x23afa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 3));
label_23afac:
    // 0x23afac: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x23afacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_23afb0:
    // 0x23afb0: 0x8e230078  lw          $v1, 0x78($s1)
    ctx->pc = 0x23afb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_23afb4:
    // 0x23afb4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23afb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_23afb8:
    // 0x23afb8: 0xac750000  sw          $s5, 0x0($v1)
    ctx->pc = 0x23afb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 21));
label_23afbc:
    // 0x23afbc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x23afbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_23afc0:
    // 0x23afc0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x23afc0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_23afc4:
    // 0x23afc4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x23afc4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_23afc8:
    // 0x23afc8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x23afc8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_23afcc:
    // 0x23afcc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x23afccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_23afd0:
    // 0x23afd0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23afd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23afd4:
    // 0x23afd4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23afd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23afd8:
    // 0x23afd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23afd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23afdc:
    // 0x23afdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23afdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23afe0:
    // 0x23afe0: 0x3e00008  jr          $ra
label_23afe4:
    if (ctx->pc == 0x23AFE4u) {
        ctx->pc = 0x23AFE4u;
            // 0x23afe4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x23AFE8u;
        goto label_23afe8;
    }
    ctx->pc = 0x23AFE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AFE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23AFE0u;
            // 0x23afe4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23AFE8u;
label_23afe8:
    // 0x23afe8: 0x0  nop
    ctx->pc = 0x23afe8u;
    // NOP
label_23afec:
    // 0x23afec: 0x0  nop
    ctx->pc = 0x23afecu;
    // NOP
}
