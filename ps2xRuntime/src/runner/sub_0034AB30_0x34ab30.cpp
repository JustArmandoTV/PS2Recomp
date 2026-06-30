#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0034AB30
// Address: 0x34ab30 - 0x34b020
void sub_0034AB30_0x34ab30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034AB30_0x34ab30");
#endif

    switch (ctx->pc) {
        case 0x34ab30u: goto label_34ab30;
        case 0x34ab34u: goto label_34ab34;
        case 0x34ab38u: goto label_34ab38;
        case 0x34ab3cu: goto label_34ab3c;
        case 0x34ab40u: goto label_34ab40;
        case 0x34ab44u: goto label_34ab44;
        case 0x34ab48u: goto label_34ab48;
        case 0x34ab4cu: goto label_34ab4c;
        case 0x34ab50u: goto label_34ab50;
        case 0x34ab54u: goto label_34ab54;
        case 0x34ab58u: goto label_34ab58;
        case 0x34ab5cu: goto label_34ab5c;
        case 0x34ab60u: goto label_34ab60;
        case 0x34ab64u: goto label_34ab64;
        case 0x34ab68u: goto label_34ab68;
        case 0x34ab6cu: goto label_34ab6c;
        case 0x34ab70u: goto label_34ab70;
        case 0x34ab74u: goto label_34ab74;
        case 0x34ab78u: goto label_34ab78;
        case 0x34ab7cu: goto label_34ab7c;
        case 0x34ab80u: goto label_34ab80;
        case 0x34ab84u: goto label_34ab84;
        case 0x34ab88u: goto label_34ab88;
        case 0x34ab8cu: goto label_34ab8c;
        case 0x34ab90u: goto label_34ab90;
        case 0x34ab94u: goto label_34ab94;
        case 0x34ab98u: goto label_34ab98;
        case 0x34ab9cu: goto label_34ab9c;
        case 0x34aba0u: goto label_34aba0;
        case 0x34aba4u: goto label_34aba4;
        case 0x34aba8u: goto label_34aba8;
        case 0x34abacu: goto label_34abac;
        case 0x34abb0u: goto label_34abb0;
        case 0x34abb4u: goto label_34abb4;
        case 0x34abb8u: goto label_34abb8;
        case 0x34abbcu: goto label_34abbc;
        case 0x34abc0u: goto label_34abc0;
        case 0x34abc4u: goto label_34abc4;
        case 0x34abc8u: goto label_34abc8;
        case 0x34abccu: goto label_34abcc;
        case 0x34abd0u: goto label_34abd0;
        case 0x34abd4u: goto label_34abd4;
        case 0x34abd8u: goto label_34abd8;
        case 0x34abdcu: goto label_34abdc;
        case 0x34abe0u: goto label_34abe0;
        case 0x34abe4u: goto label_34abe4;
        case 0x34abe8u: goto label_34abe8;
        case 0x34abecu: goto label_34abec;
        case 0x34abf0u: goto label_34abf0;
        case 0x34abf4u: goto label_34abf4;
        case 0x34abf8u: goto label_34abf8;
        case 0x34abfcu: goto label_34abfc;
        case 0x34ac00u: goto label_34ac00;
        case 0x34ac04u: goto label_34ac04;
        case 0x34ac08u: goto label_34ac08;
        case 0x34ac0cu: goto label_34ac0c;
        case 0x34ac10u: goto label_34ac10;
        case 0x34ac14u: goto label_34ac14;
        case 0x34ac18u: goto label_34ac18;
        case 0x34ac1cu: goto label_34ac1c;
        case 0x34ac20u: goto label_34ac20;
        case 0x34ac24u: goto label_34ac24;
        case 0x34ac28u: goto label_34ac28;
        case 0x34ac2cu: goto label_34ac2c;
        case 0x34ac30u: goto label_34ac30;
        case 0x34ac34u: goto label_34ac34;
        case 0x34ac38u: goto label_34ac38;
        case 0x34ac3cu: goto label_34ac3c;
        case 0x34ac40u: goto label_34ac40;
        case 0x34ac44u: goto label_34ac44;
        case 0x34ac48u: goto label_34ac48;
        case 0x34ac4cu: goto label_34ac4c;
        case 0x34ac50u: goto label_34ac50;
        case 0x34ac54u: goto label_34ac54;
        case 0x34ac58u: goto label_34ac58;
        case 0x34ac5cu: goto label_34ac5c;
        case 0x34ac60u: goto label_34ac60;
        case 0x34ac64u: goto label_34ac64;
        case 0x34ac68u: goto label_34ac68;
        case 0x34ac6cu: goto label_34ac6c;
        case 0x34ac70u: goto label_34ac70;
        case 0x34ac74u: goto label_34ac74;
        case 0x34ac78u: goto label_34ac78;
        case 0x34ac7cu: goto label_34ac7c;
        case 0x34ac80u: goto label_34ac80;
        case 0x34ac84u: goto label_34ac84;
        case 0x34ac88u: goto label_34ac88;
        case 0x34ac8cu: goto label_34ac8c;
        case 0x34ac90u: goto label_34ac90;
        case 0x34ac94u: goto label_34ac94;
        case 0x34ac98u: goto label_34ac98;
        case 0x34ac9cu: goto label_34ac9c;
        case 0x34aca0u: goto label_34aca0;
        case 0x34aca4u: goto label_34aca4;
        case 0x34aca8u: goto label_34aca8;
        case 0x34acacu: goto label_34acac;
        case 0x34acb0u: goto label_34acb0;
        case 0x34acb4u: goto label_34acb4;
        case 0x34acb8u: goto label_34acb8;
        case 0x34acbcu: goto label_34acbc;
        case 0x34acc0u: goto label_34acc0;
        case 0x34acc4u: goto label_34acc4;
        case 0x34acc8u: goto label_34acc8;
        case 0x34acccu: goto label_34accc;
        case 0x34acd0u: goto label_34acd0;
        case 0x34acd4u: goto label_34acd4;
        case 0x34acd8u: goto label_34acd8;
        case 0x34acdcu: goto label_34acdc;
        case 0x34ace0u: goto label_34ace0;
        case 0x34ace4u: goto label_34ace4;
        case 0x34ace8u: goto label_34ace8;
        case 0x34acecu: goto label_34acec;
        case 0x34acf0u: goto label_34acf0;
        case 0x34acf4u: goto label_34acf4;
        case 0x34acf8u: goto label_34acf8;
        case 0x34acfcu: goto label_34acfc;
        case 0x34ad00u: goto label_34ad00;
        case 0x34ad04u: goto label_34ad04;
        case 0x34ad08u: goto label_34ad08;
        case 0x34ad0cu: goto label_34ad0c;
        case 0x34ad10u: goto label_34ad10;
        case 0x34ad14u: goto label_34ad14;
        case 0x34ad18u: goto label_34ad18;
        case 0x34ad1cu: goto label_34ad1c;
        case 0x34ad20u: goto label_34ad20;
        case 0x34ad24u: goto label_34ad24;
        case 0x34ad28u: goto label_34ad28;
        case 0x34ad2cu: goto label_34ad2c;
        case 0x34ad30u: goto label_34ad30;
        case 0x34ad34u: goto label_34ad34;
        case 0x34ad38u: goto label_34ad38;
        case 0x34ad3cu: goto label_34ad3c;
        case 0x34ad40u: goto label_34ad40;
        case 0x34ad44u: goto label_34ad44;
        case 0x34ad48u: goto label_34ad48;
        case 0x34ad4cu: goto label_34ad4c;
        case 0x34ad50u: goto label_34ad50;
        case 0x34ad54u: goto label_34ad54;
        case 0x34ad58u: goto label_34ad58;
        case 0x34ad5cu: goto label_34ad5c;
        case 0x34ad60u: goto label_34ad60;
        case 0x34ad64u: goto label_34ad64;
        case 0x34ad68u: goto label_34ad68;
        case 0x34ad6cu: goto label_34ad6c;
        case 0x34ad70u: goto label_34ad70;
        case 0x34ad74u: goto label_34ad74;
        case 0x34ad78u: goto label_34ad78;
        case 0x34ad7cu: goto label_34ad7c;
        case 0x34ad80u: goto label_34ad80;
        case 0x34ad84u: goto label_34ad84;
        case 0x34ad88u: goto label_34ad88;
        case 0x34ad8cu: goto label_34ad8c;
        case 0x34ad90u: goto label_34ad90;
        case 0x34ad94u: goto label_34ad94;
        case 0x34ad98u: goto label_34ad98;
        case 0x34ad9cu: goto label_34ad9c;
        case 0x34ada0u: goto label_34ada0;
        case 0x34ada4u: goto label_34ada4;
        case 0x34ada8u: goto label_34ada8;
        case 0x34adacu: goto label_34adac;
        case 0x34adb0u: goto label_34adb0;
        case 0x34adb4u: goto label_34adb4;
        case 0x34adb8u: goto label_34adb8;
        case 0x34adbcu: goto label_34adbc;
        case 0x34adc0u: goto label_34adc0;
        case 0x34adc4u: goto label_34adc4;
        case 0x34adc8u: goto label_34adc8;
        case 0x34adccu: goto label_34adcc;
        case 0x34add0u: goto label_34add0;
        case 0x34add4u: goto label_34add4;
        case 0x34add8u: goto label_34add8;
        case 0x34addcu: goto label_34addc;
        case 0x34ade0u: goto label_34ade0;
        case 0x34ade4u: goto label_34ade4;
        case 0x34ade8u: goto label_34ade8;
        case 0x34adecu: goto label_34adec;
        case 0x34adf0u: goto label_34adf0;
        case 0x34adf4u: goto label_34adf4;
        case 0x34adf8u: goto label_34adf8;
        case 0x34adfcu: goto label_34adfc;
        case 0x34ae00u: goto label_34ae00;
        case 0x34ae04u: goto label_34ae04;
        case 0x34ae08u: goto label_34ae08;
        case 0x34ae0cu: goto label_34ae0c;
        case 0x34ae10u: goto label_34ae10;
        case 0x34ae14u: goto label_34ae14;
        case 0x34ae18u: goto label_34ae18;
        case 0x34ae1cu: goto label_34ae1c;
        case 0x34ae20u: goto label_34ae20;
        case 0x34ae24u: goto label_34ae24;
        case 0x34ae28u: goto label_34ae28;
        case 0x34ae2cu: goto label_34ae2c;
        case 0x34ae30u: goto label_34ae30;
        case 0x34ae34u: goto label_34ae34;
        case 0x34ae38u: goto label_34ae38;
        case 0x34ae3cu: goto label_34ae3c;
        case 0x34ae40u: goto label_34ae40;
        case 0x34ae44u: goto label_34ae44;
        case 0x34ae48u: goto label_34ae48;
        case 0x34ae4cu: goto label_34ae4c;
        case 0x34ae50u: goto label_34ae50;
        case 0x34ae54u: goto label_34ae54;
        case 0x34ae58u: goto label_34ae58;
        case 0x34ae5cu: goto label_34ae5c;
        case 0x34ae60u: goto label_34ae60;
        case 0x34ae64u: goto label_34ae64;
        case 0x34ae68u: goto label_34ae68;
        case 0x34ae6cu: goto label_34ae6c;
        case 0x34ae70u: goto label_34ae70;
        case 0x34ae74u: goto label_34ae74;
        case 0x34ae78u: goto label_34ae78;
        case 0x34ae7cu: goto label_34ae7c;
        case 0x34ae80u: goto label_34ae80;
        case 0x34ae84u: goto label_34ae84;
        case 0x34ae88u: goto label_34ae88;
        case 0x34ae8cu: goto label_34ae8c;
        case 0x34ae90u: goto label_34ae90;
        case 0x34ae94u: goto label_34ae94;
        case 0x34ae98u: goto label_34ae98;
        case 0x34ae9cu: goto label_34ae9c;
        case 0x34aea0u: goto label_34aea0;
        case 0x34aea4u: goto label_34aea4;
        case 0x34aea8u: goto label_34aea8;
        case 0x34aeacu: goto label_34aeac;
        case 0x34aeb0u: goto label_34aeb0;
        case 0x34aeb4u: goto label_34aeb4;
        case 0x34aeb8u: goto label_34aeb8;
        case 0x34aebcu: goto label_34aebc;
        case 0x34aec0u: goto label_34aec0;
        case 0x34aec4u: goto label_34aec4;
        case 0x34aec8u: goto label_34aec8;
        case 0x34aeccu: goto label_34aecc;
        case 0x34aed0u: goto label_34aed0;
        case 0x34aed4u: goto label_34aed4;
        case 0x34aed8u: goto label_34aed8;
        case 0x34aedcu: goto label_34aedc;
        case 0x34aee0u: goto label_34aee0;
        case 0x34aee4u: goto label_34aee4;
        case 0x34aee8u: goto label_34aee8;
        case 0x34aeecu: goto label_34aeec;
        case 0x34aef0u: goto label_34aef0;
        case 0x34aef4u: goto label_34aef4;
        case 0x34aef8u: goto label_34aef8;
        case 0x34aefcu: goto label_34aefc;
        case 0x34af00u: goto label_34af00;
        case 0x34af04u: goto label_34af04;
        case 0x34af08u: goto label_34af08;
        case 0x34af0cu: goto label_34af0c;
        case 0x34af10u: goto label_34af10;
        case 0x34af14u: goto label_34af14;
        case 0x34af18u: goto label_34af18;
        case 0x34af1cu: goto label_34af1c;
        case 0x34af20u: goto label_34af20;
        case 0x34af24u: goto label_34af24;
        case 0x34af28u: goto label_34af28;
        case 0x34af2cu: goto label_34af2c;
        case 0x34af30u: goto label_34af30;
        case 0x34af34u: goto label_34af34;
        case 0x34af38u: goto label_34af38;
        case 0x34af3cu: goto label_34af3c;
        case 0x34af40u: goto label_34af40;
        case 0x34af44u: goto label_34af44;
        case 0x34af48u: goto label_34af48;
        case 0x34af4cu: goto label_34af4c;
        case 0x34af50u: goto label_34af50;
        case 0x34af54u: goto label_34af54;
        case 0x34af58u: goto label_34af58;
        case 0x34af5cu: goto label_34af5c;
        case 0x34af60u: goto label_34af60;
        case 0x34af64u: goto label_34af64;
        case 0x34af68u: goto label_34af68;
        case 0x34af6cu: goto label_34af6c;
        case 0x34af70u: goto label_34af70;
        case 0x34af74u: goto label_34af74;
        case 0x34af78u: goto label_34af78;
        case 0x34af7cu: goto label_34af7c;
        case 0x34af80u: goto label_34af80;
        case 0x34af84u: goto label_34af84;
        case 0x34af88u: goto label_34af88;
        case 0x34af8cu: goto label_34af8c;
        case 0x34af90u: goto label_34af90;
        case 0x34af94u: goto label_34af94;
        case 0x34af98u: goto label_34af98;
        case 0x34af9cu: goto label_34af9c;
        case 0x34afa0u: goto label_34afa0;
        case 0x34afa4u: goto label_34afa4;
        case 0x34afa8u: goto label_34afa8;
        case 0x34afacu: goto label_34afac;
        case 0x34afb0u: goto label_34afb0;
        case 0x34afb4u: goto label_34afb4;
        case 0x34afb8u: goto label_34afb8;
        case 0x34afbcu: goto label_34afbc;
        case 0x34afc0u: goto label_34afc0;
        case 0x34afc4u: goto label_34afc4;
        case 0x34afc8u: goto label_34afc8;
        case 0x34afccu: goto label_34afcc;
        case 0x34afd0u: goto label_34afd0;
        case 0x34afd4u: goto label_34afd4;
        case 0x34afd8u: goto label_34afd8;
        case 0x34afdcu: goto label_34afdc;
        case 0x34afe0u: goto label_34afe0;
        case 0x34afe4u: goto label_34afe4;
        case 0x34afe8u: goto label_34afe8;
        case 0x34afecu: goto label_34afec;
        case 0x34aff0u: goto label_34aff0;
        case 0x34aff4u: goto label_34aff4;
        case 0x34aff8u: goto label_34aff8;
        case 0x34affcu: goto label_34affc;
        case 0x34b000u: goto label_34b000;
        case 0x34b004u: goto label_34b004;
        case 0x34b008u: goto label_34b008;
        case 0x34b00cu: goto label_34b00c;
        case 0x34b010u: goto label_34b010;
        case 0x34b014u: goto label_34b014;
        case 0x34b018u: goto label_34b018;
        case 0x34b01cu: goto label_34b01c;
        default: break;
    }

    ctx->pc = 0x34ab30u;

label_34ab30:
    // 0x34ab30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34ab30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_34ab34:
    // 0x34ab34: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x34ab34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_34ab38:
    // 0x34ab38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34ab38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_34ab3c:
    // 0x34ab3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34ab3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_34ab40:
    // 0x34ab40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34ab40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_34ab44:
    // 0x34ab44: 0x8c457558  lw          $a1, 0x7558($v0)
    ctx->pc = 0x34ab44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30040)));
label_34ab48:
    // 0x34ab48: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_34ab4c:
    if (ctx->pc == 0x34AB4Cu) {
        ctx->pc = 0x34AB4Cu;
            // 0x34ab4c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34AB50u;
        goto label_34ab50;
    }
    ctx->pc = 0x34AB48u;
    {
        const bool branch_taken_0x34ab48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AB4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34AB48u;
            // 0x34ab4c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ab48) {
            ctx->pc = 0x34AB64u;
            goto label_34ab64;
        }
    }
    ctx->pc = 0x34AB50u;
label_34ab50:
    // 0x34ab50: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x34ab50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_34ab54:
    // 0x34ab54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34ab54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34ab58:
    // 0x34ab58: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x34ab58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
label_34ab5c:
    // 0x34ab5c: 0xc0ab89c  jal         func_2AE270
label_34ab60:
    if (ctx->pc == 0x34AB60u) {
        ctx->pc = 0x34AB60u;
            // 0x34ab60: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34AB64u;
        goto label_34ab64;
    }
    ctx->pc = 0x34AB5Cu;
    SET_GPR_U32(ctx, 31, 0x34AB64u);
    ctx->pc = 0x34AB60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34AB5Cu;
            // 0x34ab60: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AB64u; }
        if (ctx->pc != 0x34AB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AB64u; }
        if (ctx->pc != 0x34AB64u) { return; }
    }
    ctx->pc = 0x34AB64u;
label_34ab64:
    // 0x34ab64: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x34ab64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_34ab68:
    // 0x34ab68: 0x8c457578  lw          $a1, 0x7578($v0)
    ctx->pc = 0x34ab68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30072)));
label_34ab6c:
    // 0x34ab6c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_34ab70:
    if (ctx->pc == 0x34AB70u) {
        ctx->pc = 0x34AB74u;
        goto label_34ab74;
    }
    ctx->pc = 0x34AB6Cu;
    {
        const bool branch_taken_0x34ab6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ab6c) {
            ctx->pc = 0x34AB88u;
            goto label_34ab88;
        }
    }
    ctx->pc = 0x34AB74u;
label_34ab74:
    // 0x34ab74: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x34ab74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_34ab78:
    // 0x34ab78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34ab78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34ab7c:
    // 0x34ab7c: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x34ab7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
label_34ab80:
    // 0x34ab80: 0xc0ab89c  jal         func_2AE270
label_34ab84:
    if (ctx->pc == 0x34AB84u) {
        ctx->pc = 0x34AB84u;
            // 0x34ab84: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34AB88u;
        goto label_34ab88;
    }
    ctx->pc = 0x34AB80u;
    SET_GPR_U32(ctx, 31, 0x34AB88u);
    ctx->pc = 0x34AB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34AB80u;
            // 0x34ab84: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AB88u; }
        if (ctx->pc != 0x34AB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AB88u; }
        if (ctx->pc != 0x34AB88u) { return; }
    }
    ctx->pc = 0x34AB88u;
label_34ab88:
    // 0x34ab88: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x34ab88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_34ab8c:
    // 0x34ab8c: 0x8c45757c  lw          $a1, 0x757C($v0)
    ctx->pc = 0x34ab8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30076)));
label_34ab90:
    // 0x34ab90: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_34ab94:
    if (ctx->pc == 0x34AB94u) {
        ctx->pc = 0x34AB98u;
        goto label_34ab98;
    }
    ctx->pc = 0x34AB90u;
    {
        const bool branch_taken_0x34ab90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ab90) {
            ctx->pc = 0x34ABACu;
            goto label_34abac;
        }
    }
    ctx->pc = 0x34AB98u;
label_34ab98:
    // 0x34ab98: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x34ab98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_34ab9c:
    // 0x34ab9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34ab9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34aba0:
    // 0x34aba0: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x34aba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
label_34aba4:
    // 0x34aba4: 0xc0ab89c  jal         func_2AE270
label_34aba8:
    if (ctx->pc == 0x34ABA8u) {
        ctx->pc = 0x34ABA8u;
            // 0x34aba8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34ABACu;
        goto label_34abac;
    }
    ctx->pc = 0x34ABA4u;
    SET_GPR_U32(ctx, 31, 0x34ABACu);
    ctx->pc = 0x34ABA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34ABA4u;
            // 0x34aba8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34ABACu; }
        if (ctx->pc != 0x34ABACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34ABACu; }
        if (ctx->pc != 0x34ABACu) { return; }
    }
    ctx->pc = 0x34ABACu;
label_34abac:
    // 0x34abac: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x34abacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_34abb0:
    // 0x34abb0: 0x8c457560  lw          $a1, 0x7560($v0)
    ctx->pc = 0x34abb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30048)));
label_34abb4:
    // 0x34abb4: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
label_34abb8:
    if (ctx->pc == 0x34ABB8u) {
        ctx->pc = 0x34ABBCu;
        goto label_34abbc;
    }
    ctx->pc = 0x34ABB4u;
    {
        const bool branch_taken_0x34abb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x34abb4) {
            ctx->pc = 0x34ABECu;
            goto label_34abec;
        }
    }
    ctx->pc = 0x34ABBCu;
label_34abbc:
    // 0x34abbc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x34abbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_34abc0:
    // 0x34abc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34abc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34abc4:
    // 0x34abc4: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x34abc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
label_34abc8:
    // 0x34abc8: 0xc0ab89c  jal         func_2AE270
label_34abcc:
    if (ctx->pc == 0x34ABCCu) {
        ctx->pc = 0x34ABCCu;
            // 0x34abcc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34ABD0u;
        goto label_34abd0;
    }
    ctx->pc = 0x34ABC8u;
    SET_GPR_U32(ctx, 31, 0x34ABD0u);
    ctx->pc = 0x34ABCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34ABC8u;
            // 0x34abcc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34ABD0u; }
        if (ctx->pc != 0x34ABD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34ABD0u; }
        if (ctx->pc != 0x34ABD0u) { return; }
    }
    ctx->pc = 0x34ABD0u;
label_34abd0:
    // 0x34abd0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x34abd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_34abd4:
    // 0x34abd4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x34abd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_34abd8:
    // 0x34abd8: 0x8c647560  lw          $a0, 0x7560($v1)
    ctx->pc = 0x34abd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 30048)));
label_34abdc:
    // 0x34abdc: 0x8c430e68  lw          $v1, 0xE68($v0)
    ctx->pc = 0x34abdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_34abe0:
    // 0x34abe0: 0x8e2208a4  lw          $v0, 0x8A4($s1)
    ctx->pc = 0x34abe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2212)));
label_34abe4:
    // 0x34abe4: 0xac620200  sw          $v0, 0x200($v1)
    ctx->pc = 0x34abe4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 512), GPR_U32(ctx, 2));
label_34abe8:
    // 0x34abe8: 0xac6401f0  sw          $a0, 0x1F0($v1)
    ctx->pc = 0x34abe8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 496), GPR_U32(ctx, 4));
label_34abec:
    // 0x34abec: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x34abecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_34abf0:
    // 0x34abf0: 0x3c05000c  lui         $a1, 0xC
    ctx->pc = 0x34abf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12 << 16));
label_34abf4:
    // 0x34abf4: 0x8c463eb0  lw          $a2, 0x3EB0($v0)
    ctx->pc = 0x34abf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16048)));
label_34abf8:
    // 0x34abf8: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x34abf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_34abfc:
    // 0x34abfc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x34abfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_34ac00:
    // 0x34ac00: 0x8cc60090  lw          $a2, 0x90($a2)
    ctx->pc = 0x34ac00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 144)));
label_34ac04:
    // 0x34ac04: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x34ac04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_34ac08:
    // 0x34ac08: 0xae2607a0  sw          $a2, 0x7A0($s1)
    ctx->pc = 0x34ac08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1952), GPR_U32(ctx, 6));
label_34ac0c:
    // 0x34ac0c: 0x8c843eb0  lw          $a0, 0x3EB0($a0)
    ctx->pc = 0x34ac0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16048)));
label_34ac10:
    // 0x34ac10: 0x24840098  addiu       $a0, $a0, 0x98
    ctx->pc = 0x34ac10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 152));
label_34ac14:
    // 0x34ac14: 0xae240788  sw          $a0, 0x788($s1)
    ctx->pc = 0x34ac14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1928), GPR_U32(ctx, 4));
label_34ac18:
    // 0x34ac18: 0x8c6489f0  lw          $a0, -0x7610($v1)
    ctx->pc = 0x34ac18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937072)));
label_34ac1c:
    // 0x34ac1c: 0x8c46e3a8  lw          $a2, -0x1C58($v0)
    ctx->pc = 0x34ac1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960040)));
label_34ac20:
    // 0x34ac20: 0xc0a8a40  jal         func_2A2900
label_34ac24:
    if (ctx->pc == 0x34AC24u) {
        ctx->pc = 0x34AC24u;
            // 0x34ac24: 0x34a58000  ori         $a1, $a1, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
        ctx->pc = 0x34AC28u;
        goto label_34ac28;
    }
    ctx->pc = 0x34AC20u;
    SET_GPR_U32(ctx, 31, 0x34AC28u);
    ctx->pc = 0x34AC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34AC20u;
            // 0x34ac24: 0x34a58000  ori         $a1, $a1, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2900u;
    if (runtime->hasFunction(0x2A2900u)) {
        auto targetFn = runtime->lookupFunction(0x2A2900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AC28u; }
        if (ctx->pc != 0x34AC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2900_0x2a2900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AC28u; }
        if (ctx->pc != 0x34AC28u) { return; }
    }
    ctx->pc = 0x34AC28u;
label_34ac28:
    // 0x34ac28: 0xc040180  jal         func_100600
label_34ac2c:
    if (ctx->pc == 0x34AC2Cu) {
        ctx->pc = 0x34AC2Cu;
            // 0x34ac2c: 0x2404005c  addiu       $a0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->pc = 0x34AC30u;
        goto label_34ac30;
    }
    ctx->pc = 0x34AC28u;
    SET_GPR_U32(ctx, 31, 0x34AC30u);
    ctx->pc = 0x34AC2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34AC28u;
            // 0x34ac2c: 0x2404005c  addiu       $a0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AC30u; }
        if (ctx->pc != 0x34AC30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AC30u; }
        if (ctx->pc != 0x34AC30u) { return; }
    }
    ctx->pc = 0x34AC30u;
label_34ac30:
    // 0x34ac30: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_34ac34:
    if (ctx->pc == 0x34AC34u) {
        ctx->pc = 0x34AC34u;
            // 0x34ac34: 0x24040068  addiu       $a0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->pc = 0x34AC38u;
        goto label_34ac38;
    }
    ctx->pc = 0x34AC30u;
    {
        const bool branch_taken_0x34ac30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ac30) {
            ctx->pc = 0x34AC34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34AC30u;
            // 0x34ac34: 0x24040068  addiu       $a0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34AC44u;
            goto label_34ac44;
        }
    }
    ctx->pc = 0x34AC38u;
label_34ac38:
    // 0x34ac38: 0xc0d10e8  jal         func_3443A0
label_34ac3c:
    if (ctx->pc == 0x34AC3Cu) {
        ctx->pc = 0x34AC3Cu;
            // 0x34ac3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34AC40u;
        goto label_34ac40;
    }
    ctx->pc = 0x34AC38u;
    SET_GPR_U32(ctx, 31, 0x34AC40u);
    ctx->pc = 0x34AC3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34AC38u;
            // 0x34ac3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3443A0u;
    if (runtime->hasFunction(0x3443A0u)) {
        auto targetFn = runtime->lookupFunction(0x3443A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AC40u; }
        if (ctx->pc != 0x34AC40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003443A0_0x3443a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AC40u; }
        if (ctx->pc != 0x34AC40u) { return; }
    }
    ctx->pc = 0x34AC40u;
label_34ac40:
    // 0x34ac40: 0x24040068  addiu       $a0, $zero, 0x68
    ctx->pc = 0x34ac40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_34ac44:
    // 0x34ac44: 0xc040180  jal         func_100600
label_34ac48:
    if (ctx->pc == 0x34AC48u) {
        ctx->pc = 0x34AC4Cu;
        goto label_34ac4c;
    }
    ctx->pc = 0x34AC44u;
    SET_GPR_U32(ctx, 31, 0x34AC4Cu);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AC4Cu; }
        if (ctx->pc != 0x34AC4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AC4Cu; }
        if (ctx->pc != 0x34AC4Cu) { return; }
    }
    ctx->pc = 0x34AC4Cu;
label_34ac4c:
    // 0x34ac4c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_34ac50:
    if (ctx->pc == 0x34AC50u) {
        ctx->pc = 0x34AC50u;
            // 0x34ac50: 0x24040054  addiu       $a0, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->pc = 0x34AC54u;
        goto label_34ac54;
    }
    ctx->pc = 0x34AC4Cu;
    {
        const bool branch_taken_0x34ac4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ac4c) {
            ctx->pc = 0x34AC50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34AC4Cu;
            // 0x34ac50: 0x24040054  addiu       $a0, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34AC60u;
            goto label_34ac60;
        }
    }
    ctx->pc = 0x34AC54u;
label_34ac54:
    // 0x34ac54: 0xc0d1064  jal         func_344190
label_34ac58:
    if (ctx->pc == 0x34AC58u) {
        ctx->pc = 0x34AC58u;
            // 0x34ac58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34AC5Cu;
        goto label_34ac5c;
    }
    ctx->pc = 0x34AC54u;
    SET_GPR_U32(ctx, 31, 0x34AC5Cu);
    ctx->pc = 0x34AC58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34AC54u;
            // 0x34ac58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x344190u;
    if (runtime->hasFunction(0x344190u)) {
        auto targetFn = runtime->lookupFunction(0x344190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AC5Cu; }
        if (ctx->pc != 0x34AC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00344190_0x344190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AC5Cu; }
        if (ctx->pc != 0x34AC5Cu) { return; }
    }
    ctx->pc = 0x34AC5Cu;
label_34ac5c:
    // 0x34ac5c: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x34ac5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_34ac60:
    // 0x34ac60: 0xc040180  jal         func_100600
label_34ac64:
    if (ctx->pc == 0x34AC64u) {
        ctx->pc = 0x34AC68u;
        goto label_34ac68;
    }
    ctx->pc = 0x34AC60u;
    SET_GPR_U32(ctx, 31, 0x34AC68u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AC68u; }
        if (ctx->pc != 0x34AC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AC68u; }
        if (ctx->pc != 0x34AC68u) { return; }
    }
    ctx->pc = 0x34AC68u;
label_34ac68:
    // 0x34ac68: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_34ac6c:
    if (ctx->pc == 0x34AC6Cu) {
        ctx->pc = 0x34AC6Cu;
            // 0x34ac6c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34AC70u;
        goto label_34ac70;
    }
    ctx->pc = 0x34AC68u;
    {
        const bool branch_taken_0x34ac68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34AC68u;
            // 0x34ac6c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ac68) {
            ctx->pc = 0x34ACA0u;
            goto label_34aca0;
        }
    }
    ctx->pc = 0x34AC70u;
label_34ac70:
    // 0x34ac70: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x34ac70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_34ac74:
    // 0x34ac74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34ac74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34ac78:
    // 0x34ac78: 0x344591e3  ori         $a1, $v0, 0x91E3
    ctx->pc = 0x34ac78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37347);
label_34ac7c:
    // 0x34ac7c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x34ac7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34ac80:
    // 0x34ac80: 0xc10ca68  jal         func_4329A0
label_34ac84:
    if (ctx->pc == 0x34AC84u) {
        ctx->pc = 0x34AC84u;
            // 0x34ac84: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34AC88u;
        goto label_34ac88;
    }
    ctx->pc = 0x34AC80u;
    SET_GPR_U32(ctx, 31, 0x34AC88u);
    ctx->pc = 0x34AC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34AC80u;
            // 0x34ac84: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AC88u; }
        if (ctx->pc != 0x34AC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AC88u; }
        if (ctx->pc != 0x34AC88u) { return; }
    }
    ctx->pc = 0x34AC88u;
label_34ac88:
    // 0x34ac88: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x34ac88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_34ac8c:
    // 0x34ac8c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x34ac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_34ac90:
    // 0x34ac90: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x34ac90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_34ac94:
    // 0x34ac94: 0x244241c0  addiu       $v0, $v0, 0x41C0
    ctx->pc = 0x34ac94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16832));
label_34ac98:
    // 0x34ac98: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x34ac98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_34ac9c:
    // 0x34ac9c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x34ac9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_34aca0:
    // 0x34aca0: 0xc040180  jal         func_100600
label_34aca4:
    if (ctx->pc == 0x34ACA4u) {
        ctx->pc = 0x34ACA4u;
            // 0x34aca4: 0x24040054  addiu       $a0, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->pc = 0x34ACA8u;
        goto label_34aca8;
    }
    ctx->pc = 0x34ACA0u;
    SET_GPR_U32(ctx, 31, 0x34ACA8u);
    ctx->pc = 0x34ACA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34ACA0u;
            // 0x34aca4: 0x24040054  addiu       $a0, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34ACA8u; }
        if (ctx->pc != 0x34ACA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34ACA8u; }
        if (ctx->pc != 0x34ACA8u) { return; }
    }
    ctx->pc = 0x34ACA8u;
label_34aca8:
    // 0x34aca8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_34acac:
    if (ctx->pc == 0x34ACACu) {
        ctx->pc = 0x34ACACu;
            // 0x34acac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34ACB0u;
        goto label_34acb0;
    }
    ctx->pc = 0x34ACA8u;
    {
        const bool branch_taken_0x34aca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34ACACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34ACA8u;
            // 0x34acac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34aca8) {
            ctx->pc = 0x34ACE0u;
            goto label_34ace0;
        }
    }
    ctx->pc = 0x34ACB0u;
label_34acb0:
    // 0x34acb0: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x34acb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_34acb4:
    // 0x34acb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34acb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34acb8:
    // 0x34acb8: 0x344591e5  ori         $a1, $v0, 0x91E5
    ctx->pc = 0x34acb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37349);
label_34acbc:
    // 0x34acbc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x34acbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34acc0:
    // 0x34acc0: 0xc10ca68  jal         func_4329A0
label_34acc4:
    if (ctx->pc == 0x34ACC4u) {
        ctx->pc = 0x34ACC4u;
            // 0x34acc4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34ACC8u;
        goto label_34acc8;
    }
    ctx->pc = 0x34ACC0u;
    SET_GPR_U32(ctx, 31, 0x34ACC8u);
    ctx->pc = 0x34ACC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34ACC0u;
            // 0x34acc4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34ACC8u; }
        if (ctx->pc != 0x34ACC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34ACC8u; }
        if (ctx->pc != 0x34ACC8u) { return; }
    }
    ctx->pc = 0x34ACC8u;
label_34acc8:
    // 0x34acc8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x34acc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_34accc:
    // 0x34accc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x34acccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_34acd0:
    // 0x34acd0: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x34acd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_34acd4:
    // 0x34acd4: 0x24424190  addiu       $v0, $v0, 0x4190
    ctx->pc = 0x34acd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16784));
label_34acd8:
    // 0x34acd8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x34acd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_34acdc:
    // 0x34acdc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x34acdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_34ace0:
    // 0x34ace0: 0xc040180  jal         func_100600
label_34ace4:
    if (ctx->pc == 0x34ACE4u) {
        ctx->pc = 0x34ACE4u;
            // 0x34ace4: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->pc = 0x34ACE8u;
        goto label_34ace8;
    }
    ctx->pc = 0x34ACE0u;
    SET_GPR_U32(ctx, 31, 0x34ACE8u);
    ctx->pc = 0x34ACE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34ACE0u;
            // 0x34ace4: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34ACE8u; }
        if (ctx->pc != 0x34ACE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34ACE8u; }
        if (ctx->pc != 0x34ACE8u) { return; }
    }
    ctx->pc = 0x34ACE8u;
label_34ace8:
    // 0x34ace8: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_34acec:
    if (ctx->pc == 0x34ACECu) {
        ctx->pc = 0x34ACECu;
            // 0x34acec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34ACF0u;
        goto label_34acf0;
    }
    ctx->pc = 0x34ACE8u;
    {
        const bool branch_taken_0x34ace8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34ACECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34ACE8u;
            // 0x34acec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ace8) {
            ctx->pc = 0x34AD5Cu;
            goto label_34ad5c;
        }
    }
    ctx->pc = 0x34ACF0u;
label_34acf0:
    // 0x34acf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34acf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34acf4:
    // 0x34acf4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34acf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34acf8:
    // 0x34acf8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x34acf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34acfc:
    // 0x34acfc: 0xc10ca68  jal         func_4329A0
label_34ad00:
    if (ctx->pc == 0x34AD00u) {
        ctx->pc = 0x34AD00u;
            // 0x34ad00: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34AD04u;
        goto label_34ad04;
    }
    ctx->pc = 0x34ACFCu;
    SET_GPR_U32(ctx, 31, 0x34AD04u);
    ctx->pc = 0x34AD00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34ACFCu;
            // 0x34ad00: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AD04u; }
        if (ctx->pc != 0x34AD04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AD04u; }
        if (ctx->pc != 0x34AD04u) { return; }
    }
    ctx->pc = 0x34AD04u;
label_34ad04:
    // 0x34ad04: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x34ad04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_34ad08:
    // 0x34ad08: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x34ad08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_34ad0c:
    // 0x34ad0c: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x34ad0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_34ad10:
    // 0x34ad10: 0x244231f0  addiu       $v0, $v0, 0x31F0
    ctx->pc = 0x34ad10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12784));
label_34ad14:
    // 0x34ad14: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x34ad14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_34ad18:
    // 0x34ad18: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x34ad18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_34ad1c:
    // 0x34ad1c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x34ad1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_34ad20:
    // 0x34ad20: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x34ad20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
label_34ad24:
    // 0x34ad24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34ad24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34ad28:
    // 0x34ad28: 0xae030084  sw          $v1, 0x84($s0)
    ctx->pc = 0x34ad28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
label_34ad2c:
    // 0x34ad2c: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x34ad2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
label_34ad30:
    // 0x34ad30: 0xae03007c  sw          $v1, 0x7C($s0)
    ctx->pc = 0x34ad30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
label_34ad34:
    // 0x34ad34: 0xae030078  sw          $v1, 0x78($s0)
    ctx->pc = 0x34ad34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
label_34ad38:
    // 0x34ad38: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x34ad38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
label_34ad3c:
    // 0x34ad3c: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x34ad3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
label_34ad40:
    // 0x34ad40: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x34ad40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
label_34ad44:
    // 0x34ad44: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x34ad44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
label_34ad48:
    // 0x34ad48: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x34ad48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
label_34ad4c:
    // 0x34ad4c: 0xa2000057  sb          $zero, 0x57($s0)
    ctx->pc = 0x34ad4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 87), (uint8_t)GPR_U32(ctx, 0));
label_34ad50:
    // 0x34ad50: 0xa2000056  sb          $zero, 0x56($s0)
    ctx->pc = 0x34ad50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 86), (uint8_t)GPR_U32(ctx, 0));
label_34ad54:
    // 0x34ad54: 0xa2000055  sb          $zero, 0x55($s0)
    ctx->pc = 0x34ad54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 85), (uint8_t)GPR_U32(ctx, 0));
label_34ad58:
    // 0x34ad58: 0xa2000054  sb          $zero, 0x54($s0)
    ctx->pc = 0x34ad58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 0));
label_34ad5c:
    // 0x34ad5c: 0xc040180  jal         func_100600
label_34ad60:
    if (ctx->pc == 0x34AD60u) {
        ctx->pc = 0x34AD60u;
            // 0x34ad60: 0x24040054  addiu       $a0, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->pc = 0x34AD64u;
        goto label_34ad64;
    }
    ctx->pc = 0x34AD5Cu;
    SET_GPR_U32(ctx, 31, 0x34AD64u);
    ctx->pc = 0x34AD60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34AD5Cu;
            // 0x34ad60: 0x24040054  addiu       $a0, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AD64u; }
        if (ctx->pc != 0x34AD64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AD64u; }
        if (ctx->pc != 0x34AD64u) { return; }
    }
    ctx->pc = 0x34AD64u;
label_34ad64:
    // 0x34ad64: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_34ad68:
    if (ctx->pc == 0x34AD68u) {
        ctx->pc = 0x34AD68u;
            // 0x34ad68: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34AD6Cu;
        goto label_34ad6c;
    }
    ctx->pc = 0x34AD64u;
    {
        const bool branch_taken_0x34ad64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AD68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34AD64u;
            // 0x34ad68: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ad64) {
            ctx->pc = 0x34AD9Cu;
            goto label_34ad9c;
        }
    }
    ctx->pc = 0x34AD6Cu;
label_34ad6c:
    // 0x34ad6c: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x34ad6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_34ad70:
    // 0x34ad70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34ad70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34ad74:
    // 0x34ad74: 0x3445a120  ori         $a1, $v0, 0xA120
    ctx->pc = 0x34ad74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41248);
label_34ad78:
    // 0x34ad78: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x34ad78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34ad7c:
    // 0x34ad7c: 0xc10ca68  jal         func_4329A0
label_34ad80:
    if (ctx->pc == 0x34AD80u) {
        ctx->pc = 0x34AD80u;
            // 0x34ad80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34AD84u;
        goto label_34ad84;
    }
    ctx->pc = 0x34AD7Cu;
    SET_GPR_U32(ctx, 31, 0x34AD84u);
    ctx->pc = 0x34AD80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34AD7Cu;
            // 0x34ad80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AD84u; }
        if (ctx->pc != 0x34AD84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AD84u; }
        if (ctx->pc != 0x34AD84u) { return; }
    }
    ctx->pc = 0x34AD84u;
label_34ad84:
    // 0x34ad84: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x34ad84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_34ad88:
    // 0x34ad88: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x34ad88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_34ad8c:
    // 0x34ad8c: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x34ad8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_34ad90:
    // 0x34ad90: 0x24423220  addiu       $v0, $v0, 0x3220
    ctx->pc = 0x34ad90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12832));
label_34ad94:
    // 0x34ad94: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x34ad94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_34ad98:
    // 0x34ad98: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x34ad98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_34ad9c:
    // 0x34ad9c: 0xc075214  jal         func_1D4850
label_34ada0:
    if (ctx->pc == 0x34ADA0u) {
        ctx->pc = 0x34ADA4u;
        goto label_34ada4;
    }
    ctx->pc = 0x34AD9Cu;
    SET_GPR_U32(ctx, 31, 0x34ADA4u);
    ctx->pc = 0x1D4850u;
    if (runtime->hasFunction(0x1D4850u)) {
        auto targetFn = runtime->lookupFunction(0x1D4850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34ADA4u; }
        if (ctx->pc != 0x34ADA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4850_0x1d4850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34ADA4u; }
        if (ctx->pc != 0x34ADA4u) { return; }
    }
    ctx->pc = 0x34ADA4u;
label_34ada4:
    // 0x34ada4: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x34ada4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_34ada8:
    // 0x34ada8: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x34ada8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_34adac:
    // 0x34adac: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x34adacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_34adb0:
    // 0x34adb0: 0xc040140  jal         func_100500
label_34adb4:
    if (ctx->pc == 0x34ADB4u) {
        ctx->pc = 0x34ADB4u;
            // 0x34adb4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34ADB8u;
        goto label_34adb8;
    }
    ctx->pc = 0x34ADB0u;
    SET_GPR_U32(ctx, 31, 0x34ADB8u);
    ctx->pc = 0x34ADB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34ADB0u;
            // 0x34adb4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34ADB8u; }
        if (ctx->pc != 0x34ADB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34ADB8u; }
        if (ctx->pc != 0x34ADB8u) { return; }
    }
    ctx->pc = 0x34ADB8u;
label_34adb8:
    // 0x34adb8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_34adbc:
    if (ctx->pc == 0x34ADBCu) {
        ctx->pc = 0x34ADBCu;
            // 0x34adbc: 0xae220778  sw          $v0, 0x778($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1912), GPR_U32(ctx, 2));
        ctx->pc = 0x34ADC0u;
        goto label_34adc0;
    }
    ctx->pc = 0x34ADB8u;
    {
        const bool branch_taken_0x34adb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34adb8) {
            ctx->pc = 0x34ADBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34ADB8u;
            // 0x34adbc: 0xae220778  sw          $v0, 0x778($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1912), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34ADD4u;
            goto label_34add4;
        }
    }
    ctx->pc = 0x34ADC0u;
label_34adc0:
    // 0x34adc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34adc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34adc4:
    // 0x34adc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34adc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34adc8:
    // 0x34adc8: 0xc0f14dc  jal         func_3C5370
label_34adcc:
    if (ctx->pc == 0x34ADCCu) {
        ctx->pc = 0x34ADCCu;
            // 0x34adcc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34ADD0u;
        goto label_34add0;
    }
    ctx->pc = 0x34ADC8u;
    SET_GPR_U32(ctx, 31, 0x34ADD0u);
    ctx->pc = 0x34ADCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34ADC8u;
            // 0x34adcc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C5370u;
    if (runtime->hasFunction(0x3C5370u)) {
        auto targetFn = runtime->lookupFunction(0x3C5370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34ADD0u; }
        if (ctx->pc != 0x34ADD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C5370_0x3c5370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34ADD0u; }
        if (ctx->pc != 0x34ADD0u) { return; }
    }
    ctx->pc = 0x34ADD0u;
label_34add0:
    // 0x34add0: 0xae220778  sw          $v0, 0x778($s1)
    ctx->pc = 0x34add0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1912), GPR_U32(ctx, 2));
label_34add4:
    // 0x34add4: 0x24040068  addiu       $a0, $zero, 0x68
    ctx->pc = 0x34add4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_34add8:
    // 0x34add8: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x34add8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_34addc:
    // 0x34addc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x34addcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_34ade0:
    // 0x34ade0: 0xc040140  jal         func_100500
label_34ade4:
    if (ctx->pc == 0x34ADE4u) {
        ctx->pc = 0x34ADE4u;
            // 0x34ade4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34ADE8u;
        goto label_34ade8;
    }
    ctx->pc = 0x34ADE0u;
    SET_GPR_U32(ctx, 31, 0x34ADE8u);
    ctx->pc = 0x34ADE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34ADE0u;
            // 0x34ade4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34ADE8u; }
        if (ctx->pc != 0x34ADE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34ADE8u; }
        if (ctx->pc != 0x34ADE8u) { return; }
    }
    ctx->pc = 0x34ADE8u;
label_34ade8:
    // 0x34ade8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_34adec:
    if (ctx->pc == 0x34ADECu) {
        ctx->pc = 0x34ADECu;
            // 0x34adec: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x34ADF0u;
        goto label_34adf0;
    }
    ctx->pc = 0x34ADE8u;
    {
        const bool branch_taken_0x34ade8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ade8) {
            ctx->pc = 0x34ADECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34ADE8u;
            // 0x34adec: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34AE04u;
            goto label_34ae04;
        }
    }
    ctx->pc = 0x34ADF0u;
label_34adf0:
    // 0x34adf0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34adf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34adf4:
    // 0x34adf4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34adf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34adf8:
    // 0x34adf8: 0xc0f13f4  jal         func_3C4FD0
label_34adfc:
    if (ctx->pc == 0x34ADFCu) {
        ctx->pc = 0x34ADFCu;
            // 0x34adfc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34AE00u;
        goto label_34ae00;
    }
    ctx->pc = 0x34ADF8u;
    SET_GPR_U32(ctx, 31, 0x34AE00u);
    ctx->pc = 0x34ADFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34ADF8u;
            // 0x34adfc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C4FD0u;
    if (runtime->hasFunction(0x3C4FD0u)) {
        auto targetFn = runtime->lookupFunction(0x3C4FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AE00u; }
        if (ctx->pc != 0x34AE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C4FD0_0x3c4fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AE00u; }
        if (ctx->pc != 0x34AE00u) { return; }
    }
    ctx->pc = 0x34AE00u;
label_34ae00:
    // 0x34ae00: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x34ae00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_34ae04:
    // 0x34ae04: 0xae22077c  sw          $v0, 0x77C($s1)
    ctx->pc = 0x34ae04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1916), GPR_U32(ctx, 2));
label_34ae08:
    // 0x34ae08: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x34ae08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34ae0c:
    // 0x34ae0c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x34ae0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_34ae10:
    // 0x34ae10: 0xc040140  jal         func_100500
label_34ae14:
    if (ctx->pc == 0x34AE14u) {
        ctx->pc = 0x34AE14u;
            // 0x34ae14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34AE18u;
        goto label_34ae18;
    }
    ctx->pc = 0x34AE10u;
    SET_GPR_U32(ctx, 31, 0x34AE18u);
    ctx->pc = 0x34AE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34AE10u;
            // 0x34ae14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AE18u; }
        if (ctx->pc != 0x34AE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AE18u; }
        if (ctx->pc != 0x34AE18u) { return; }
    }
    ctx->pc = 0x34AE18u;
label_34ae18:
    // 0x34ae18: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_34ae1c:
    if (ctx->pc == 0x34AE1Cu) {
        ctx->pc = 0x34AE1Cu;
            // 0x34ae1c: 0xae220780  sw          $v0, 0x780($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1920), GPR_U32(ctx, 2));
        ctx->pc = 0x34AE20u;
        goto label_34ae20;
    }
    ctx->pc = 0x34AE18u;
    {
        const bool branch_taken_0x34ae18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ae18) {
            ctx->pc = 0x34AE1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34AE18u;
            // 0x34ae1c: 0xae220780  sw          $v0, 0x780($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1920), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34AE38u;
            goto label_34ae38;
        }
    }
    ctx->pc = 0x34AE20u;
label_34ae20:
    // 0x34ae20: 0x8e27077c  lw          $a3, 0x77C($s1)
    ctx->pc = 0x34ae20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1916)));
label_34ae24:
    // 0x34ae24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x34ae24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34ae28:
    // 0x34ae28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34ae28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34ae2c:
    // 0x34ae2c: 0xc0f15b8  jal         func_3C56E0
label_34ae30:
    if (ctx->pc == 0x34AE30u) {
        ctx->pc = 0x34AE30u;
            // 0x34ae30: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34AE34u;
        goto label_34ae34;
    }
    ctx->pc = 0x34AE2Cu;
    SET_GPR_U32(ctx, 31, 0x34AE34u);
    ctx->pc = 0x34AE30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34AE2Cu;
            // 0x34ae30: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C56E0u;
    if (runtime->hasFunction(0x3C56E0u)) {
        auto targetFn = runtime->lookupFunction(0x3C56E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AE34u; }
        if (ctx->pc != 0x34AE34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C56E0_0x3c56e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AE34u; }
        if (ctx->pc != 0x34AE34u) { return; }
    }
    ctx->pc = 0x34AE34u;
label_34ae34:
    // 0x34ae34: 0xae220780  sw          $v0, 0x780($s1)
    ctx->pc = 0x34ae34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1920), GPR_U32(ctx, 2));
label_34ae38:
    // 0x34ae38: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x34ae38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_34ae3c:
    // 0x34ae3c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x34ae3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_34ae40:
    // 0x34ae40: 0x8c43a348  lw          $v1, -0x5CB8($v0)
    ctx->pc = 0x34ae40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943560)));
label_34ae44:
    // 0x34ae44: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x34ae44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_34ae48:
    // 0x34ae48: 0xa0600038  sb          $zero, 0x38($v1)
    ctx->pc = 0x34ae48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 56), (uint8_t)GPR_U32(ctx, 0));
label_34ae4c:
    // 0x34ae4c: 0x8c4289c8  lw          $v0, -0x7638($v0)
    ctx->pc = 0x34ae4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937032)));
label_34ae50:
    // 0x34ae50: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x34ae50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_34ae54:
    // 0x34ae54: 0xc040180  jal         func_100600
label_34ae58:
    if (ctx->pc == 0x34AE58u) {
        ctx->pc = 0x34AE58u;
            // 0x34ae58: 0x28043  sra         $s0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 1));
        ctx->pc = 0x34AE5Cu;
        goto label_34ae5c;
    }
    ctx->pc = 0x34AE54u;
    SET_GPR_U32(ctx, 31, 0x34AE5Cu);
    ctx->pc = 0x34AE58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34AE54u;
            // 0x34ae58: 0x28043  sra         $s0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AE5Cu; }
        if (ctx->pc != 0x34AE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AE5Cu; }
        if (ctx->pc != 0x34AE5Cu) { return; }
    }
    ctx->pc = 0x34AE5Cu;
label_34ae5c:
    // 0x34ae5c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_34ae60:
    if (ctx->pc == 0x34AE60u) {
        ctx->pc = 0x34AE60u;
            // 0x34ae60: 0xae220770  sw          $v0, 0x770($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1904), GPR_U32(ctx, 2));
        ctx->pc = 0x34AE64u;
        goto label_34ae64;
    }
    ctx->pc = 0x34AE5Cu;
    {
        const bool branch_taken_0x34ae5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ae5c) {
            ctx->pc = 0x34AE60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34AE5Cu;
            // 0x34ae60: 0xae220770  sw          $v0, 0x770($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1904), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34AE74u;
            goto label_34ae74;
        }
    }
    ctx->pc = 0x34AE64u;
label_34ae64:
    // 0x34ae64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x34ae64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34ae68:
    // 0x34ae68: 0xc112bd8  jal         func_44AF60
label_34ae6c:
    if (ctx->pc == 0x34AE6Cu) {
        ctx->pc = 0x34AE6Cu;
            // 0x34ae6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34AE70u;
        goto label_34ae70;
    }
    ctx->pc = 0x34AE68u;
    SET_GPR_U32(ctx, 31, 0x34AE70u);
    ctx->pc = 0x34AE6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34AE68u;
            // 0x34ae6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44AF60u;
    if (runtime->hasFunction(0x44AF60u)) {
        auto targetFn = runtime->lookupFunction(0x44AF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AE70u; }
        if (ctx->pc != 0x34AE70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0044AF60_0x44af60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AE70u; }
        if (ctx->pc != 0x34AE70u) { return; }
    }
    ctx->pc = 0x34AE70u;
label_34ae70:
    // 0x34ae70: 0xae220770  sw          $v0, 0x770($s1)
    ctx->pc = 0x34ae70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1904), GPR_U32(ctx, 2));
label_34ae74:
    // 0x34ae74: 0xc112b5c  jal         func_44AD70
label_34ae78:
    if (ctx->pc == 0x34AE78u) {
        ctx->pc = 0x34AE78u;
            // 0x34ae78: 0x262408a0  addiu       $a0, $s1, 0x8A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2208));
        ctx->pc = 0x34AE7Cu;
        goto label_34ae7c;
    }
    ctx->pc = 0x34AE74u;
    SET_GPR_U32(ctx, 31, 0x34AE7Cu);
    ctx->pc = 0x34AE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34AE74u;
            // 0x34ae78: 0x262408a0  addiu       $a0, $s1, 0x8A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44AD70u;
    if (runtime->hasFunction(0x44AD70u)) {
        auto targetFn = runtime->lookupFunction(0x44AD70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AE7Cu; }
        if (ctx->pc != 0x34AE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0044AD70_0x44ad70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AE7Cu; }
        if (ctx->pc != 0x34AE7Cu) { return; }
    }
    ctx->pc = 0x34AE7Cu;
label_34ae7c:
    // 0x34ae7c: 0xc112b50  jal         func_44AD40
label_34ae80:
    if (ctx->pc == 0x34AE80u) {
        ctx->pc = 0x34AE80u;
            // 0x34ae80: 0x262408a0  addiu       $a0, $s1, 0x8A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2208));
        ctx->pc = 0x34AE84u;
        goto label_34ae84;
    }
    ctx->pc = 0x34AE7Cu;
    SET_GPR_U32(ctx, 31, 0x34AE84u);
    ctx->pc = 0x34AE80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34AE7Cu;
            // 0x34ae80: 0x262408a0  addiu       $a0, $s1, 0x8A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44AD40u;
    if (runtime->hasFunction(0x44AD40u)) {
        auto targetFn = runtime->lookupFunction(0x44AD40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AE84u; }
        if (ctx->pc != 0x34AE84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0044AD40_0x44ad40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AE84u; }
        if (ctx->pc != 0x34AE84u) { return; }
    }
    ctx->pc = 0x34AE84u;
label_34ae84:
    // 0x34ae84: 0x8e230790  lw          $v1, 0x790($s1)
    ctx->pc = 0x34ae84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1936)));
label_34ae88:
    // 0x34ae88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34ae88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34ae8c:
    // 0x34ae8c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x34ae8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_34ae90:
    // 0x34ae90: 0xae230790  sw          $v1, 0x790($s1)
    ctx->pc = 0x34ae90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1936), GPR_U32(ctx, 3));
label_34ae94:
    // 0x34ae94: 0x922308a9  lbu         $v1, 0x8A9($s1)
    ctx->pc = 0x34ae94u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2217)));
label_34ae98:
    // 0x34ae98: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
label_34ae9c:
    if (ctx->pc == 0x34AE9Cu) {
        ctx->pc = 0x34AE9Cu;
            // 0x34ae9c: 0x8e230790  lw          $v1, 0x790($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1936)));
        ctx->pc = 0x34AEA0u;
        goto label_34aea0;
    }
    ctx->pc = 0x34AE98u;
    {
        const bool branch_taken_0x34ae98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x34ae98) {
            ctx->pc = 0x34AE9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34AE98u;
            // 0x34ae9c: 0x8e230790  lw          $v1, 0x790($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1936)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34AEA8u;
            goto label_34aea8;
        }
    }
    ctx->pc = 0x34AEA0u;
label_34aea0:
    // 0x34aea0: 0x1000000d  b           . + 4 + (0xD << 2)
label_34aea4:
    if (ctx->pc == 0x34AEA4u) {
        ctx->pc = 0x34AEA8u;
        goto label_34aea8;
    }
    ctx->pc = 0x34AEA0u;
    {
        const bool branch_taken_0x34aea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34aea0) {
            ctx->pc = 0x34AED8u;
            goto label_34aed8;
        }
    }
    ctx->pc = 0x34AEA8u;
label_34aea8:
    // 0x34aea8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x34aea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_34aeac:
    // 0x34aeac: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x34aeacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
label_34aeb0:
    // 0x34aeb0: 0xae230790  sw          $v1, 0x790($s1)
    ctx->pc = 0x34aeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1936), GPR_U32(ctx, 3));
label_34aeb4:
    // 0x34aeb4: 0x8e2308a4  lw          $v1, 0x8A4($s1)
    ctx->pc = 0x34aeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2212)));
label_34aeb8:
    // 0x34aeb8: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
label_34aebc:
    if (ctx->pc == 0x34AEBCu) {
        ctx->pc = 0x34AEBCu;
            // 0x34aebc: 0x8e230790  lw          $v1, 0x790($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1936)));
        ctx->pc = 0x34AEC0u;
        goto label_34aec0;
    }
    ctx->pc = 0x34AEB8u;
    {
        const bool branch_taken_0x34aeb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x34aeb8) {
            ctx->pc = 0x34AEBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34AEB8u;
            // 0x34aebc: 0x8e230790  lw          $v1, 0x790($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1936)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34AEC8u;
            goto label_34aec8;
        }
    }
    ctx->pc = 0x34AEC0u;
label_34aec0:
    // 0x34aec0: 0x10000005  b           . + 4 + (0x5 << 2)
label_34aec4:
    if (ctx->pc == 0x34AEC4u) {
        ctx->pc = 0x34AEC8u;
        goto label_34aec8;
    }
    ctx->pc = 0x34AEC0u;
    {
        const bool branch_taken_0x34aec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34aec0) {
            ctx->pc = 0x34AED8u;
            goto label_34aed8;
        }
    }
    ctx->pc = 0x34AEC8u;
label_34aec8:
    // 0x34aec8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x34aec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_34aecc:
    // 0x34aecc: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x34aeccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
label_34aed0:
    // 0x34aed0: 0xae230790  sw          $v1, 0x790($s1)
    ctx->pc = 0x34aed0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1936), GPR_U32(ctx, 3));
label_34aed4:
    // 0x34aed4: 0xa22208a8  sb          $v0, 0x8A8($s1)
    ctx->pc = 0x34aed4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2216), (uint8_t)GPR_U32(ctx, 2));
label_34aed8:
    // 0x34aed8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x34aed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_34aedc:
    // 0x34aedc: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x34aedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_34aee0:
    // 0x34aee0: 0x8042008d  lb          $v0, 0x8D($v0)
    ctx->pc = 0x34aee0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 141)));
label_34aee4:
    // 0x34aee4: 0x401027  not         $v0, $v0
    ctx->pc = 0x34aee4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_34aee8:
    // 0x34aee8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x34aee8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_34aeec:
    // 0x34aeec: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
label_34aef0:
    if (ctx->pc == 0x34AEF0u) {
        ctx->pc = 0x34AEF4u;
        goto label_34aef4;
    }
    ctx->pc = 0x34AEECu;
    {
        const bool branch_taken_0x34aeec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34aeec) {
            ctx->pc = 0x34AFDCu;
            goto label_34afdc;
        }
    }
    ctx->pc = 0x34AEF4u;
label_34aef4:
    // 0x34aef4: 0xc040180  jal         func_100600
label_34aef8:
    if (ctx->pc == 0x34AEF8u) {
        ctx->pc = 0x34AEF8u;
            // 0x34aef8: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->pc = 0x34AEFCu;
        goto label_34aefc;
    }
    ctx->pc = 0x34AEF4u;
    SET_GPR_U32(ctx, 31, 0x34AEFCu);
    ctx->pc = 0x34AEF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34AEF4u;
            // 0x34aef8: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AEFCu; }
        if (ctx->pc != 0x34AEFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AEFCu; }
        if (ctx->pc != 0x34AEFCu) { return; }
    }
    ctx->pc = 0x34AEFCu;
label_34aefc:
    // 0x34aefc: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_34af00:
    if (ctx->pc == 0x34AF00u) {
        ctx->pc = 0x34AF00u;
            // 0x34af00: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34AF04u;
        goto label_34af04;
    }
    ctx->pc = 0x34AEFCu;
    {
        const bool branch_taken_0x34aefc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AF00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34AEFCu;
            // 0x34af00: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34aefc) {
            ctx->pc = 0x34AFDCu;
            goto label_34afdc;
        }
    }
    ctx->pc = 0x34AF04u;
label_34af04:
    // 0x34af04: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x34af04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_34af08:
    // 0x34af08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34af08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34af0c:
    // 0x34af0c: 0x3445423f  ori         $a1, $v0, 0x423F
    ctx->pc = 0x34af0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16959);
label_34af10:
    // 0x34af10: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x34af10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_34af14:
    // 0x34af14: 0xc10ca68  jal         func_4329A0
label_34af18:
    if (ctx->pc == 0x34AF18u) {
        ctx->pc = 0x34AF18u;
            // 0x34af18: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34AF1Cu;
        goto label_34af1c;
    }
    ctx->pc = 0x34AF14u;
    SET_GPR_U32(ctx, 31, 0x34AF1Cu);
    ctx->pc = 0x34AF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34AF14u;
            // 0x34af18: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AF1Cu; }
        if (ctx->pc != 0x34AF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34AF1Cu; }
        if (ctx->pc != 0x34AF1Cu) { return; }
    }
    ctx->pc = 0x34AF1Cu;
label_34af1c:
    // 0x34af1c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x34af1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_34af20:
    // 0x34af20: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x34af20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_34af24:
    // 0x34af24: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x34af24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_34af28:
    // 0x34af28: 0x244210c0  addiu       $v0, $v0, 0x10C0
    ctx->pc = 0x34af28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4288));
label_34af2c:
    // 0x34af2c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x34af2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_34af30:
    // 0x34af30: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x34af30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_34af34:
    // 0x34af34: 0x24030190  addiu       $v1, $zero, 0x190
    ctx->pc = 0x34af34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_34af38:
    // 0x34af38: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x34af38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_34af3c:
    // 0x34af3c: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x34af3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_34af40:
    // 0x34af40: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x34af40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_34af44:
    // 0x34af44: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x34af44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_34af48:
    // 0x34af48: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x34af48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_34af4c:
    // 0x34af4c: 0x320f809  jalr        $t9
label_34af50:
    if (ctx->pc == 0x34AF50u) {
        ctx->pc = 0x34AF54u;
        goto label_34af54;
    }
    ctx->pc = 0x34AF4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x34AF54u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x34AF54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x34AF54u; }
            if (ctx->pc != 0x34AF54u) { return; }
        }
        }
    }
    ctx->pc = 0x34AF54u;
label_34af54:
    // 0x34af54: 0x3c0243b9  lui         $v0, 0x43B9
    ctx->pc = 0x34af54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17337 << 16));
label_34af58:
    // 0x34af58: 0x240300c9  addiu       $v1, $zero, 0xC9
    ctx->pc = 0x34af58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
label_34af5c:
    // 0x34af5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x34af5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_34af60:
    // 0x34af60: 0x0  nop
    ctx->pc = 0x34af60u;
    // NOP
label_34af64:
    // 0x34af64: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x34af64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_34af68:
    // 0x34af68: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x34af68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_34af6c:
    // 0x34af6c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34af6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_34af70:
    // 0x34af70: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x34af70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_34af74:
    // 0x34af74: 0x0  nop
    ctx->pc = 0x34af74u;
    // NOP
label_34af78:
    // 0x34af78: 0xae040058  sw          $a0, 0x58($s0)
    ctx->pc = 0x34af78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 4));
label_34af7c:
    // 0x34af7c: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x34af7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
label_34af80:
    // 0x34af80: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x34af80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_34af84:
    // 0x34af84: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x34af84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_34af88:
    // 0x34af88: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x34af88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_34af8c:
    // 0x34af8c: 0x320f809  jalr        $t9
label_34af90:
    if (ctx->pc == 0x34AF90u) {
        ctx->pc = 0x34AF94u;
        goto label_34af94;
    }
    ctx->pc = 0x34AF8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x34AF94u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x34AF94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x34AF94u; }
            if (ctx->pc != 0x34AF94u) { return; }
        }
        }
    }
    ctx->pc = 0x34AF94u;
label_34af94:
    // 0x34af94: 0x3c03422c  lui         $v1, 0x422C
    ctx->pc = 0x34af94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16940 << 16));
label_34af98:
    // 0x34af98: 0x3c024c0a  lui         $v0, 0x4C0A
    ctx->pc = 0x34af98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19466 << 16));
label_34af9c:
    // 0x34af9c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x34af9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_34afa0:
    // 0x34afa0: 0x34446d80  ori         $a0, $v0, 0x6D80
    ctx->pc = 0x34afa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28032);
label_34afa4:
    // 0x34afa4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x34afa4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_34afa8:
    // 0x34afa8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34afa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34afac:
    // 0x34afac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x34afacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_34afb0:
    // 0x34afb0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34afb0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_34afb4:
    // 0x34afb4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x34afb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_34afb8:
    // 0x34afb8: 0x0  nop
    ctx->pc = 0x34afb8u;
    // NOP
label_34afbc:
    // 0x34afbc: 0xae050060  sw          $a1, 0x60($s0)
    ctx->pc = 0x34afbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 5));
label_34afc0:
    // 0x34afc0: 0xae040064  sw          $a0, 0x64($s0)
    ctx->pc = 0x34afc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 4));
label_34afc4:
    // 0x34afc4: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x34afc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
label_34afc8:
    // 0x34afc8: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x34afc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
label_34afcc:
    // 0x34afcc: 0xa2000080  sb          $zero, 0x80($s0)
    ctx->pc = 0x34afccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 128), (uint8_t)GPR_U32(ctx, 0));
label_34afd0:
    // 0x34afd0: 0xa2000081  sb          $zero, 0x81($s0)
    ctx->pc = 0x34afd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 129), (uint8_t)GPR_U32(ctx, 0));
label_34afd4:
    // 0x34afd4: 0xae030084  sw          $v1, 0x84($s0)
    ctx->pc = 0x34afd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
label_34afd8:
    // 0x34afd8: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x34afd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
label_34afdc:
    // 0x34afdc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x34afdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_34afe0:
    // 0x34afe0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x34afe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_34afe4:
    // 0x34afe4: 0x8c458a08  lw          $a1, -0x75F8($v0)
    ctx->pc = 0x34afe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_34afe8:
    // 0x34afe8: 0x601827  not         $v1, $v1
    ctx->pc = 0x34afe8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_34afec:
    // 0x34afec: 0x8ca20038  lw          $v0, 0x38($a1)
    ctx->pc = 0x34afecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
label_34aff0:
    // 0x34aff0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x34aff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_34aff4:
    // 0x34aff4: 0xaca20038  sw          $v0, 0x38($a1)
    ctx->pc = 0x34aff4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 2));
label_34aff8:
    // 0x34aff8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x34aff8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_34affc:
    // 0x34affc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x34affcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_34b000:
    // 0x34b000: 0x320f809  jalr        $t9
label_34b004:
    if (ctx->pc == 0x34B004u) {
        ctx->pc = 0x34B004u;
            // 0x34b004: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34B008u;
        goto label_34b008;
    }
    ctx->pc = 0x34B000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x34B008u);
        ctx->pc = 0x34B004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34B000u;
            // 0x34b004: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x34B008u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x34B008u; }
            if (ctx->pc != 0x34B008u) { return; }
        }
        }
    }
    ctx->pc = 0x34B008u;
label_34b008:
    // 0x34b008: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34b008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_34b00c:
    // 0x34b00c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34b00cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_34b010:
    // 0x34b010: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34b010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_34b014:
    // 0x34b014: 0x3e00008  jr          $ra
label_34b018:
    if (ctx->pc == 0x34B018u) {
        ctx->pc = 0x34B018u;
            // 0x34b018: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x34B01Cu;
        goto label_34b01c;
    }
    ctx->pc = 0x34B014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34B014u;
            // 0x34b018: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34B01Cu;
label_34b01c:
    // 0x34b01c: 0x0  nop
    ctx->pc = 0x34b01cu;
    // NOP
}
