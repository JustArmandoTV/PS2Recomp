#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F9020
// Address: 0x2f9020 - 0x2f9300
void sub_002F9020_0x2f9020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F9020_0x2f9020");
#endif

    switch (ctx->pc) {
        case 0x2f9020u: goto label_2f9020;
        case 0x2f9024u: goto label_2f9024;
        case 0x2f9028u: goto label_2f9028;
        case 0x2f902cu: goto label_2f902c;
        case 0x2f9030u: goto label_2f9030;
        case 0x2f9034u: goto label_2f9034;
        case 0x2f9038u: goto label_2f9038;
        case 0x2f903cu: goto label_2f903c;
        case 0x2f9040u: goto label_2f9040;
        case 0x2f9044u: goto label_2f9044;
        case 0x2f9048u: goto label_2f9048;
        case 0x2f904cu: goto label_2f904c;
        case 0x2f9050u: goto label_2f9050;
        case 0x2f9054u: goto label_2f9054;
        case 0x2f9058u: goto label_2f9058;
        case 0x2f905cu: goto label_2f905c;
        case 0x2f9060u: goto label_2f9060;
        case 0x2f9064u: goto label_2f9064;
        case 0x2f9068u: goto label_2f9068;
        case 0x2f906cu: goto label_2f906c;
        case 0x2f9070u: goto label_2f9070;
        case 0x2f9074u: goto label_2f9074;
        case 0x2f9078u: goto label_2f9078;
        case 0x2f907cu: goto label_2f907c;
        case 0x2f9080u: goto label_2f9080;
        case 0x2f9084u: goto label_2f9084;
        case 0x2f9088u: goto label_2f9088;
        case 0x2f908cu: goto label_2f908c;
        case 0x2f9090u: goto label_2f9090;
        case 0x2f9094u: goto label_2f9094;
        case 0x2f9098u: goto label_2f9098;
        case 0x2f909cu: goto label_2f909c;
        case 0x2f90a0u: goto label_2f90a0;
        case 0x2f90a4u: goto label_2f90a4;
        case 0x2f90a8u: goto label_2f90a8;
        case 0x2f90acu: goto label_2f90ac;
        case 0x2f90b0u: goto label_2f90b0;
        case 0x2f90b4u: goto label_2f90b4;
        case 0x2f90b8u: goto label_2f90b8;
        case 0x2f90bcu: goto label_2f90bc;
        case 0x2f90c0u: goto label_2f90c0;
        case 0x2f90c4u: goto label_2f90c4;
        case 0x2f90c8u: goto label_2f90c8;
        case 0x2f90ccu: goto label_2f90cc;
        case 0x2f90d0u: goto label_2f90d0;
        case 0x2f90d4u: goto label_2f90d4;
        case 0x2f90d8u: goto label_2f90d8;
        case 0x2f90dcu: goto label_2f90dc;
        case 0x2f90e0u: goto label_2f90e0;
        case 0x2f90e4u: goto label_2f90e4;
        case 0x2f90e8u: goto label_2f90e8;
        case 0x2f90ecu: goto label_2f90ec;
        case 0x2f90f0u: goto label_2f90f0;
        case 0x2f90f4u: goto label_2f90f4;
        case 0x2f90f8u: goto label_2f90f8;
        case 0x2f90fcu: goto label_2f90fc;
        case 0x2f9100u: goto label_2f9100;
        case 0x2f9104u: goto label_2f9104;
        case 0x2f9108u: goto label_2f9108;
        case 0x2f910cu: goto label_2f910c;
        case 0x2f9110u: goto label_2f9110;
        case 0x2f9114u: goto label_2f9114;
        case 0x2f9118u: goto label_2f9118;
        case 0x2f911cu: goto label_2f911c;
        case 0x2f9120u: goto label_2f9120;
        case 0x2f9124u: goto label_2f9124;
        case 0x2f9128u: goto label_2f9128;
        case 0x2f912cu: goto label_2f912c;
        case 0x2f9130u: goto label_2f9130;
        case 0x2f9134u: goto label_2f9134;
        case 0x2f9138u: goto label_2f9138;
        case 0x2f913cu: goto label_2f913c;
        case 0x2f9140u: goto label_2f9140;
        case 0x2f9144u: goto label_2f9144;
        case 0x2f9148u: goto label_2f9148;
        case 0x2f914cu: goto label_2f914c;
        case 0x2f9150u: goto label_2f9150;
        case 0x2f9154u: goto label_2f9154;
        case 0x2f9158u: goto label_2f9158;
        case 0x2f915cu: goto label_2f915c;
        case 0x2f9160u: goto label_2f9160;
        case 0x2f9164u: goto label_2f9164;
        case 0x2f9168u: goto label_2f9168;
        case 0x2f916cu: goto label_2f916c;
        case 0x2f9170u: goto label_2f9170;
        case 0x2f9174u: goto label_2f9174;
        case 0x2f9178u: goto label_2f9178;
        case 0x2f917cu: goto label_2f917c;
        case 0x2f9180u: goto label_2f9180;
        case 0x2f9184u: goto label_2f9184;
        case 0x2f9188u: goto label_2f9188;
        case 0x2f918cu: goto label_2f918c;
        case 0x2f9190u: goto label_2f9190;
        case 0x2f9194u: goto label_2f9194;
        case 0x2f9198u: goto label_2f9198;
        case 0x2f919cu: goto label_2f919c;
        case 0x2f91a0u: goto label_2f91a0;
        case 0x2f91a4u: goto label_2f91a4;
        case 0x2f91a8u: goto label_2f91a8;
        case 0x2f91acu: goto label_2f91ac;
        case 0x2f91b0u: goto label_2f91b0;
        case 0x2f91b4u: goto label_2f91b4;
        case 0x2f91b8u: goto label_2f91b8;
        case 0x2f91bcu: goto label_2f91bc;
        case 0x2f91c0u: goto label_2f91c0;
        case 0x2f91c4u: goto label_2f91c4;
        case 0x2f91c8u: goto label_2f91c8;
        case 0x2f91ccu: goto label_2f91cc;
        case 0x2f91d0u: goto label_2f91d0;
        case 0x2f91d4u: goto label_2f91d4;
        case 0x2f91d8u: goto label_2f91d8;
        case 0x2f91dcu: goto label_2f91dc;
        case 0x2f91e0u: goto label_2f91e0;
        case 0x2f91e4u: goto label_2f91e4;
        case 0x2f91e8u: goto label_2f91e8;
        case 0x2f91ecu: goto label_2f91ec;
        case 0x2f91f0u: goto label_2f91f0;
        case 0x2f91f4u: goto label_2f91f4;
        case 0x2f91f8u: goto label_2f91f8;
        case 0x2f91fcu: goto label_2f91fc;
        case 0x2f9200u: goto label_2f9200;
        case 0x2f9204u: goto label_2f9204;
        case 0x2f9208u: goto label_2f9208;
        case 0x2f920cu: goto label_2f920c;
        case 0x2f9210u: goto label_2f9210;
        case 0x2f9214u: goto label_2f9214;
        case 0x2f9218u: goto label_2f9218;
        case 0x2f921cu: goto label_2f921c;
        case 0x2f9220u: goto label_2f9220;
        case 0x2f9224u: goto label_2f9224;
        case 0x2f9228u: goto label_2f9228;
        case 0x2f922cu: goto label_2f922c;
        case 0x2f9230u: goto label_2f9230;
        case 0x2f9234u: goto label_2f9234;
        case 0x2f9238u: goto label_2f9238;
        case 0x2f923cu: goto label_2f923c;
        case 0x2f9240u: goto label_2f9240;
        case 0x2f9244u: goto label_2f9244;
        case 0x2f9248u: goto label_2f9248;
        case 0x2f924cu: goto label_2f924c;
        case 0x2f9250u: goto label_2f9250;
        case 0x2f9254u: goto label_2f9254;
        case 0x2f9258u: goto label_2f9258;
        case 0x2f925cu: goto label_2f925c;
        case 0x2f9260u: goto label_2f9260;
        case 0x2f9264u: goto label_2f9264;
        case 0x2f9268u: goto label_2f9268;
        case 0x2f926cu: goto label_2f926c;
        case 0x2f9270u: goto label_2f9270;
        case 0x2f9274u: goto label_2f9274;
        case 0x2f9278u: goto label_2f9278;
        case 0x2f927cu: goto label_2f927c;
        case 0x2f9280u: goto label_2f9280;
        case 0x2f9284u: goto label_2f9284;
        case 0x2f9288u: goto label_2f9288;
        case 0x2f928cu: goto label_2f928c;
        case 0x2f9290u: goto label_2f9290;
        case 0x2f9294u: goto label_2f9294;
        case 0x2f9298u: goto label_2f9298;
        case 0x2f929cu: goto label_2f929c;
        case 0x2f92a0u: goto label_2f92a0;
        case 0x2f92a4u: goto label_2f92a4;
        case 0x2f92a8u: goto label_2f92a8;
        case 0x2f92acu: goto label_2f92ac;
        case 0x2f92b0u: goto label_2f92b0;
        case 0x2f92b4u: goto label_2f92b4;
        case 0x2f92b8u: goto label_2f92b8;
        case 0x2f92bcu: goto label_2f92bc;
        case 0x2f92c0u: goto label_2f92c0;
        case 0x2f92c4u: goto label_2f92c4;
        case 0x2f92c8u: goto label_2f92c8;
        case 0x2f92ccu: goto label_2f92cc;
        case 0x2f92d0u: goto label_2f92d0;
        case 0x2f92d4u: goto label_2f92d4;
        case 0x2f92d8u: goto label_2f92d8;
        case 0x2f92dcu: goto label_2f92dc;
        case 0x2f92e0u: goto label_2f92e0;
        case 0x2f92e4u: goto label_2f92e4;
        case 0x2f92e8u: goto label_2f92e8;
        case 0x2f92ecu: goto label_2f92ec;
        case 0x2f92f0u: goto label_2f92f0;
        case 0x2f92f4u: goto label_2f92f4;
        case 0x2f92f8u: goto label_2f92f8;
        case 0x2f92fcu: goto label_2f92fc;
        default: break;
    }

    ctx->pc = 0x2f9020u;

label_2f9020:
    // 0x2f9020: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f9020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2f9024:
    // 0x2f9024: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f9024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f9028:
    // 0x2f9028: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f9028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2f902c:
    // 0x2f902c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2f902cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f9030:
    // 0x2f9030: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f9030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2f9034:
    // 0x2f9034: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f9034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2f9038:
    // 0x2f9038: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f9038u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f903c:
    // 0x2f903c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f903cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2f9040:
    // 0x2f9040: 0x8c8200c8  lw          $v0, 0xC8($a0)
    ctx->pc = 0x2f9040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
label_2f9044:
    // 0x2f9044: 0x8c430550  lw          $v1, 0x550($v0)
    ctx->pc = 0x2f9044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1360)));
label_2f9048:
    // 0x2f9048: 0x8062010d  lb          $v0, 0x10D($v1)
    ctx->pc = 0x2f9048u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 269)));
label_2f904c:
    // 0x2f904c: 0xa062010e  sb          $v0, 0x10E($v1)
    ctx->pc = 0x2f904cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 270), (uint8_t)GPR_U32(ctx, 2));
label_2f9050:
    // 0x2f9050: 0xa060010d  sb          $zero, 0x10D($v1)
    ctx->pc = 0x2f9050u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 269), (uint8_t)GPR_U32(ctx, 0));
label_2f9054:
    // 0x2f9054: 0x909000d8  lbu         $s0, 0xD8($a0)
    ctx->pc = 0x2f9054u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 216)));
label_2f9058:
    // 0x2f9058: 0xc04a576  jal         func_1295D8
label_2f905c:
    if (ctx->pc == 0x2F905Cu) {
        ctx->pc = 0x2F905Cu;
            // 0x2f905c: 0x26440018  addiu       $a0, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->pc = 0x2F9060u;
        goto label_2f9060;
    }
    ctx->pc = 0x2F9058u;
    SET_GPR_U32(ctx, 31, 0x2F9060u);
    ctx->pc = 0x2F905Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9058u;
            // 0x2f905c: 0x26440018  addiu       $a0, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9060u; }
        if (ctx->pc != 0x2F9060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9060u; }
        if (ctx->pc != 0x2F9060u) { return; }
    }
    ctx->pc = 0x2F9060u;
label_2f9060:
    // 0x2f9060: 0x2644001c  addiu       $a0, $s2, 0x1C
    ctx->pc = 0x2f9060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
label_2f9064:
    // 0x2f9064: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f9064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f9068:
    // 0x2f9068: 0xc04a576  jal         func_1295D8
label_2f906c:
    if (ctx->pc == 0x2F906Cu) {
        ctx->pc = 0x2F906Cu;
            // 0x2f906c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2F9070u;
        goto label_2f9070;
    }
    ctx->pc = 0x2F9068u;
    SET_GPR_U32(ctx, 31, 0x2F9070u);
    ctx->pc = 0x2F906Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9068u;
            // 0x2f906c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9070u; }
        if (ctx->pc != 0x2F9070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9070u; }
        if (ctx->pc != 0x2F9070u) { return; }
    }
    ctx->pc = 0x2F9070u;
label_2f9070:
    // 0x2f9070: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x2f9070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_2f9074:
    // 0x2f9074: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2f9078:
    if (ctx->pc == 0x2F9078u) {
        ctx->pc = 0x2F907Cu;
        goto label_2f907c;
    }
    ctx->pc = 0x2F9074u;
    {
        const bool branch_taken_0x2f9074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9074) {
            ctx->pc = 0x2F90A8u;
            goto label_2f90a8;
        }
    }
    ctx->pc = 0x2F907Cu;
label_2f907c:
    // 0x2f907c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2f907cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f9080:
    // 0x2f9080: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x2f9080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2f9084:
    // 0x2f9084: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f9084u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f9088:
    // 0x2f9088: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2f9088u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2f908c:
    // 0x2f908c: 0x320f809  jalr        $t9
label_2f9090:
    if (ctx->pc == 0x2F9090u) {
        ctx->pc = 0x2F9094u;
        goto label_2f9094;
    }
    ctx->pc = 0x2F908Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F9094u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F9094u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F9094u; }
            if (ctx->pc != 0x2F9094u) { return; }
        }
        }
    }
    ctx->pc = 0x2F9094u;
label_2f9094:
    // 0x2f9094: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2f9094u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2f9098:
    // 0x2f9098: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x2f9098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2f909c:
    // 0x2f909c: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
label_2f90a0:
    if (ctx->pc == 0x2F90A0u) {
        ctx->pc = 0x2F90A0u;
            // 0x2f90a0: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->pc = 0x2F90A4u;
        goto label_2f90a4;
    }
    ctx->pc = 0x2F909Cu;
    {
        const bool branch_taken_0x2f909c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f909c) {
            ctx->pc = 0x2F90A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F909Cu;
            // 0x2f90a0: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F9084u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f9084;
        }
    }
    ctx->pc = 0x2F90A4u;
label_2f90a4:
    // 0x2f90a4: 0x0  nop
    ctx->pc = 0x2f90a4u;
    // NOP
label_2f90a8:
    // 0x2f90a8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2f90a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2f90ac:
    // 0x2f90ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f90acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f90b0:
    // 0x2f90b0: 0xae430030  sw          $v1, 0x30($s2)
    ctx->pc = 0x2f90b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 3));
label_2f90b4:
    // 0x2f90b4: 0xae400034  sw          $zero, 0x34($s2)
    ctx->pc = 0x2f90b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
label_2f90b8:
    // 0x2f90b8: 0xa2420018  sb          $v0, 0x18($s2)
    ctx->pc = 0x2f90b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 24), (uint8_t)GPR_U32(ctx, 2));
label_2f90bc:
    // 0x2f90bc: 0x8e440044  lw          $a0, 0x44($s2)
    ctx->pc = 0x2f90bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_2f90c0:
    // 0x2f90c0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2f90c4:
    if (ctx->pc == 0x2F90C4u) {
        ctx->pc = 0x2F90C4u;
            // 0x2f90c4: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x2F90C8u;
        goto label_2f90c8;
    }
    ctx->pc = 0x2F90C0u;
    {
        const bool branch_taken_0x2f90c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f90c0) {
            ctx->pc = 0x2F90C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F90C0u;
            // 0x2f90c4: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F90DCu;
            goto label_2f90dc;
        }
    }
    ctx->pc = 0x2F90C8u;
label_2f90c8:
    // 0x2f90c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f90c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f90cc:
    // 0x2f90cc: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2f90ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2f90d0:
    // 0x2f90d0: 0x320f809  jalr        $t9
label_2f90d4:
    if (ctx->pc == 0x2F90D4u) {
        ctx->pc = 0x2F90D8u;
        goto label_2f90d8;
    }
    ctx->pc = 0x2F90D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F90D8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F90D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F90D8u; }
            if (ctx->pc != 0x2F90D8u) { return; }
        }
        }
    }
    ctx->pc = 0x2F90D8u;
label_2f90d8:
    // 0x2f90d8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2f90d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2f90dc:
    // 0x2f90dc: 0xae420044  sw          $v0, 0x44($s2)
    ctx->pc = 0x2f90dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
label_2f90e0:
    // 0x2f90e0: 0x8e44004c  lw          $a0, 0x4C($s2)
    ctx->pc = 0x2f90e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
label_2f90e4:
    // 0x2f90e4: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_2f90e8:
    if (ctx->pc == 0x2F90E8u) {
        ctx->pc = 0x2F90E8u;
            // 0x2f90e8: 0x8e420058  lw          $v0, 0x58($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
        ctx->pc = 0x2F90ECu;
        goto label_2f90ec;
    }
    ctx->pc = 0x2F90E4u;
    {
        const bool branch_taken_0x2f90e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f90e4) {
            ctx->pc = 0x2F90E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F90E4u;
            // 0x2f90e8: 0x8e420058  lw          $v0, 0x58($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F9104u;
            goto label_2f9104;
        }
    }
    ctx->pc = 0x2F90ECu;
label_2f90ec:
    // 0x2f90ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f90ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f90f0:
    // 0x2f90f0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2f90f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2f90f4:
    // 0x2f90f4: 0x320f809  jalr        $t9
label_2f90f8:
    if (ctx->pc == 0x2F90F8u) {
        ctx->pc = 0x2F90FCu;
        goto label_2f90fc;
    }
    ctx->pc = 0x2F90F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F90FCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F90FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F90FCu; }
            if (ctx->pc != 0x2F90FCu) { return; }
        }
        }
    }
    ctx->pc = 0x2F90FCu;
label_2f90fc:
    // 0x2f90fc: 0xae40004c  sw          $zero, 0x4C($s2)
    ctx->pc = 0x2f90fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 0));
label_2f9100:
    // 0x2f9100: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x2f9100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_2f9104:
    // 0x2f9104: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
label_2f9108:
    if (ctx->pc == 0x2F9108u) {
        ctx->pc = 0x2F9108u;
            // 0x2f9108: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F910Cu;
        goto label_2f910c;
    }
    ctx->pc = 0x2F9104u;
    {
        const bool branch_taken_0x2f9104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9104) {
            ctx->pc = 0x2F9108u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9104u;
            // 0x2f9108: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F9170u;
            goto label_2f9170;
        }
    }
    ctx->pc = 0x2F910Cu;
label_2f910c:
    // 0x2f910c: 0x2a010002  slti        $at, $s0, 0x2
    ctx->pc = 0x2f910cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_2f9110:
    // 0x2f9110: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
label_2f9114:
    if (ctx->pc == 0x2F9114u) {
        ctx->pc = 0x2F9114u;
            // 0x2f9114: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2F9118u;
        goto label_2f9118;
    }
    ctx->pc = 0x2F9110u;
    {
        const bool branch_taken_0x2f9110 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9110u;
            // 0x2f9114: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9110) {
            ctx->pc = 0x2F9148u;
            goto label_2f9148;
        }
    }
    ctx->pc = 0x2F9118u;
label_2f9118:
    // 0x2f9118: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x2f9118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_2f911c:
    // 0x2f911c: 0x2221006  srlv        $v0, $v0, $s1
    ctx->pc = 0x2f911cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
label_2f9120:
    // 0x2f9120: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f9120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2f9124:
    // 0x2f9124: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2f9128:
    if (ctx->pc == 0x2F9128u) {
        ctx->pc = 0x2F912Cu;
        goto label_2f912c;
    }
    ctx->pc = 0x2F9124u;
    {
        const bool branch_taken_0x2f9124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9124) {
            ctx->pc = 0x2F9138u;
            goto label_2f9138;
        }
    }
    ctx->pc = 0x2F912Cu;
label_2f912c:
    // 0x2f912c: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x2f912cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_2f9130:
    // 0x2f9130: 0xc0be1dc  jal         func_2F8770
label_2f9134:
    if (ctx->pc == 0x2F9134u) {
        ctx->pc = 0x2F9134u;
            // 0x2f9134: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F9138u;
        goto label_2f9138;
    }
    ctx->pc = 0x2F9130u;
    SET_GPR_U32(ctx, 31, 0x2F9138u);
    ctx->pc = 0x2F9134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9130u;
            // 0x2f9134: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F8770u;
    if (runtime->hasFunction(0x2F8770u)) {
        auto targetFn = runtime->lookupFunction(0x2F8770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9138u; }
        if (ctx->pc != 0x2F9138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F8770_0x2f8770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9138u; }
        if (ctx->pc != 0x2F9138u) { return; }
    }
    ctx->pc = 0x2F9138u;
label_2f9138:
    // 0x2f9138: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2f9138u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2f913c:
    // 0x2f913c: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x2f913cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_2f9140:
    // 0x2f9140: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
label_2f9144:
    if (ctx->pc == 0x2F9144u) {
        ctx->pc = 0x2F9144u;
            // 0x2f9144: 0x8e420058  lw          $v0, 0x58($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
        ctx->pc = 0x2F9148u;
        goto label_2f9148;
    }
    ctx->pc = 0x2F9140u;
    {
        const bool branch_taken_0x2f9140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9140) {
            ctx->pc = 0x2F9144u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9140u;
            // 0x2f9144: 0x8e420058  lw          $v0, 0x58($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F911Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f911c;
        }
    }
    ctx->pc = 0x2F9148u;
label_2f9148:
    // 0x2f9148: 0x8e440044  lw          $a0, 0x44($s2)
    ctx->pc = 0x2f9148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_2f914c:
    // 0x2f914c: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
label_2f9150:
    if (ctx->pc == 0x2F9150u) {
        ctx->pc = 0x2F9150u;
            // 0x2f9150: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F9154u;
        goto label_2f9154;
    }
    ctx->pc = 0x2F914Cu;
    {
        const bool branch_taken_0x2f914c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f914c) {
            ctx->pc = 0x2F9150u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F914Cu;
            // 0x2f9150: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F9184u;
            goto label_2f9184;
        }
    }
    ctx->pc = 0x2F9154u;
label_2f9154:
    // 0x2f9154: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f9154u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f9158:
    // 0x2f9158: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2f9158u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2f915c:
    // 0x2f915c: 0x320f809  jalr        $t9
label_2f9160:
    if (ctx->pc == 0x2F9160u) {
        ctx->pc = 0x2F9164u;
        goto label_2f9164;
    }
    ctx->pc = 0x2F915Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F9164u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F9164u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F9164u; }
            if (ctx->pc != 0x2F9164u) { return; }
        }
        }
    }
    ctx->pc = 0x2F9164u;
label_2f9164:
    // 0x2f9164: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2f9164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2f9168:
    // 0x2f9168: 0x10000005  b           . + 4 + (0x5 << 2)
label_2f916c:
    if (ctx->pc == 0x2F916Cu) {
        ctx->pc = 0x2F916Cu;
            // 0x2f916c: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x2F9170u;
        goto label_2f9170;
    }
    ctx->pc = 0x2F9168u;
    {
        const bool branch_taken_0x2f9168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F916Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9168u;
            // 0x2f916c: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9168) {
            ctx->pc = 0x2F9180u;
            goto label_2f9180;
        }
    }
    ctx->pc = 0x2F9170u;
label_2f9170:
    // 0x2f9170: 0xc0bdeb0  jal         func_2F7AC0
label_2f9174:
    if (ctx->pc == 0x2F9174u) {
        ctx->pc = 0x2F9178u;
        goto label_2f9178;
    }
    ctx->pc = 0x2F9170u;
    SET_GPR_U32(ctx, 31, 0x2F9178u);
    ctx->pc = 0x2F7AC0u;
    if (runtime->hasFunction(0x2F7AC0u)) {
        auto targetFn = runtime->lookupFunction(0x2F7AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9178u; }
        if (ctx->pc != 0x2F9178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7AC0_0x2f7ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9178u; }
        if (ctx->pc != 0x2F9178u) { return; }
    }
    ctx->pc = 0x2F9178u;
label_2f9178:
    // 0x2f9178: 0xc0bde48  jal         func_2F7920
label_2f917c:
    if (ctx->pc == 0x2F917Cu) {
        ctx->pc = 0x2F917Cu;
            // 0x2f917c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F9180u;
        goto label_2f9180;
    }
    ctx->pc = 0x2F9178u;
    SET_GPR_U32(ctx, 31, 0x2F9180u);
    ctx->pc = 0x2F917Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9178u;
            // 0x2f917c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7920u;
    if (runtime->hasFunction(0x2F7920u)) {
        auto targetFn = runtime->lookupFunction(0x2F7920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9180u; }
        if (ctx->pc != 0x2F9180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7920_0x2f7920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9180u; }
        if (ctx->pc != 0x2F9180u) { return; }
    }
    ctx->pc = 0x2F9180u;
label_2f9180:
    // 0x2f9180: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f9180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f9184:
    // 0x2f9184: 0xc0be25c  jal         func_2F8970
label_2f9188:
    if (ctx->pc == 0x2F9188u) {
        ctx->pc = 0x2F918Cu;
        goto label_2f918c;
    }
    ctx->pc = 0x2F9184u;
    SET_GPR_U32(ctx, 31, 0x2F918Cu);
    ctx->pc = 0x2F8970u;
    if (runtime->hasFunction(0x2F8970u)) {
        auto targetFn = runtime->lookupFunction(0x2F8970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F918Cu; }
        if (ctx->pc != 0x2F918Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F8970_0x2f8970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F918Cu; }
        if (ctx->pc != 0x2F918Cu) { return; }
    }
    ctx->pc = 0x2F918Cu;
label_2f918c:
    // 0x2f918c: 0xae4000cc  sw          $zero, 0xCC($s2)
    ctx->pc = 0x2f918cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 0));
label_2f9190:
    // 0x2f9190: 0x264400e8  addiu       $a0, $s2, 0xE8
    ctx->pc = 0x2f9190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 232));
label_2f9194:
    // 0x2f9194: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f9194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f9198:
    // 0x2f9198: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x2f9198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_2f919c:
    // 0x2f919c: 0xc04a576  jal         func_1295D8
label_2f91a0:
    if (ctx->pc == 0x2F91A0u) {
        ctx->pc = 0x2F91A0u;
            // 0x2f91a0: 0xae4000d0  sw          $zero, 0xD0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 0));
        ctx->pc = 0x2F91A4u;
        goto label_2f91a4;
    }
    ctx->pc = 0x2F919Cu;
    SET_GPR_U32(ctx, 31, 0x2F91A4u);
    ctx->pc = 0x2F91A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F919Cu;
            // 0x2f91a0: 0xae4000d0  sw          $zero, 0xD0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F91A4u; }
        if (ctx->pc != 0x2F91A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F91A4u; }
        if (ctx->pc != 0x2F91A4u) { return; }
    }
    ctx->pc = 0x2F91A4u;
label_2f91a4:
    // 0x2f91a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f91a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f91a8:
    // 0x2f91a8: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x2f91a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_2f91ac:
    // 0x2f91ac: 0xae420104  sw          $v0, 0x104($s2)
    ctx->pc = 0x2f91acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 2));
label_2f91b0:
    // 0x2f91b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f91b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f91b4:
    // 0x2f91b4: 0xae420100  sw          $v0, 0x100($s2)
    ctx->pc = 0x2f91b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 256), GPR_U32(ctx, 2));
label_2f91b8:
    // 0x2f91b8: 0xc04a576  jal         func_1295D8
label_2f91bc:
    if (ctx->pc == 0x2F91BCu) {
        ctx->pc = 0x2F91BCu;
            // 0x2f91bc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x2F91C0u;
        goto label_2f91c0;
    }
    ctx->pc = 0x2F91B8u;
    SET_GPR_U32(ctx, 31, 0x2F91C0u);
    ctx->pc = 0x2F91BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F91B8u;
            // 0x2f91bc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F91C0u; }
        if (ctx->pc != 0x2F91C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F91C0u; }
        if (ctx->pc != 0x2F91C0u) { return; }
    }
    ctx->pc = 0x2F91C0u;
label_2f91c0:
    // 0x2f91c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f91c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f91c4:
    // 0x2f91c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2f91c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f91c8:
    // 0x2f91c8: 0xa24200dd  sb          $v0, 0xDD($s2)
    ctx->pc = 0x2f91c8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 221), (uint8_t)GPR_U32(ctx, 2));
label_2f91cc:
    // 0x2f91cc: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2f91ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f91d0:
    // 0x2f91d0: 0xae4000e0  sw          $zero, 0xE0($s2)
    ctx->pc = 0x2f91d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 0));
label_2f91d4:
    // 0x2f91d4: 0xae4000e4  sw          $zero, 0xE4($s2)
    ctx->pc = 0x2f91d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 0));
label_2f91d8:
    // 0x2f91d8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2f91d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2f91dc:
    // 0x2f91dc: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
label_2f91e0:
    if (ctx->pc == 0x2F91E0u) {
        ctx->pc = 0x2F91E4u;
        goto label_2f91e4;
    }
    ctx->pc = 0x2F91DCu;
    {
        const bool branch_taken_0x2f91dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f91dc) {
            ctx->pc = 0x2F9218u;
            goto label_2f9218;
        }
    }
    ctx->pc = 0x2F91E4u;
label_2f91e4:
    // 0x2f91e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2f91e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2f91e8:
    // 0x2f91e8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2f91e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2f91ec:
    // 0x2f91ec: 0x320f809  jalr        $t9
label_2f91f0:
    if (ctx->pc == 0x2F91F0u) {
        ctx->pc = 0x2F91F4u;
        goto label_2f91f4;
    }
    ctx->pc = 0x2F91ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F91F4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F91F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F91F4u; }
            if (ctx->pc != 0x2F91F4u) { return; }
        }
        }
    }
    ctx->pc = 0x2F91F4u;
label_2f91f4:
    // 0x2f91f4: 0x28410007  slti        $at, $v0, 0x7
    ctx->pc = 0x2f91f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
label_2f91f8:
    // 0x2f91f8: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_2f91fc:
    if (ctx->pc == 0x2F91FCu) {
        ctx->pc = 0x2F9200u;
        goto label_2f9200;
    }
    ctx->pc = 0x2F91F8u;
    {
        const bool branch_taken_0x2f91f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f91f8) {
            ctx->pc = 0x2F9218u;
            goto label_2f9218;
        }
    }
    ctx->pc = 0x2F9200u;
label_2f9200:
    // 0x2f9200: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2f9200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2f9204:
    // 0x2f9204: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2f9208:
    if (ctx->pc == 0x2F9208u) {
        ctx->pc = 0x2F920Cu;
        goto label_2f920c;
    }
    ctx->pc = 0x2F9204u;
    {
        const bool branch_taken_0x2f9204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9204) {
            ctx->pc = 0x2F9218u;
            goto label_2f9218;
        }
    }
    ctx->pc = 0x2F920Cu;
label_2f920c:
    // 0x2f920c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f920cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f9210:
    // 0x2f9210: 0xac620050  sw          $v0, 0x50($v1)
    ctx->pc = 0x2f9210u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 2));
label_2f9214:
    // 0x2f9214: 0x0  nop
    ctx->pc = 0x2f9214u;
    // NOP
label_2f9218:
    // 0x2f9218: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2f9218u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2f921c:
    // 0x2f921c: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x2f921cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_2f9220:
    // 0x2f9220: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_2f9224:
    if (ctx->pc == 0x2F9224u) {
        ctx->pc = 0x2F9224u;
            // 0x2f9224: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x2F9228u;
        goto label_2f9228;
    }
    ctx->pc = 0x2F9220u;
    {
        const bool branch_taken_0x2f9220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9220u;
            // 0x2f9224: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9220) {
            ctx->pc = 0x2F91D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f91d8;
        }
    }
    ctx->pc = 0x2F9228u;
label_2f9228:
    // 0x2f9228: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2f9228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2f922c:
    // 0x2f922c: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x2f922cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_2f9230:
    // 0x2f9230: 0x8c420780  lw          $v0, 0x780($v0)
    ctx->pc = 0x2f9230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1920)));
label_2f9234:
    // 0x2f9234: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2f9234u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_2f9238:
    // 0x2f9238: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
label_2f923c:
    if (ctx->pc == 0x2F923Cu) {
        ctx->pc = 0x2F923Cu;
            // 0x2f923c: 0x824400d9  lb          $a0, 0xD9($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 217)));
        ctx->pc = 0x2F9240u;
        goto label_2f9240;
    }
    ctx->pc = 0x2F9238u;
    {
        const bool branch_taken_0x2f9238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f9238) {
            ctx->pc = 0x2F923Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9238u;
            // 0x2f923c: 0x824400d9  lb          $a0, 0xD9($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 217)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F92C4u;
            goto label_2f92c4;
        }
    }
    ctx->pc = 0x2F9240u;
label_2f9240:
    // 0x2f9240: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2f9240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_2f9244:
    // 0x2f9244: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x2f9244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2f9248:
    // 0x2f9248: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x2f9248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_2f924c:
    // 0x2f924c: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x2f924cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_2f9250:
    // 0x2f9250: 0x1043001b  beq         $v0, $v1, . + 4 + (0x1B << 2)
label_2f9254:
    if (ctx->pc == 0x2F9254u) {
        ctx->pc = 0x2F9258u;
        goto label_2f9258;
    }
    ctx->pc = 0x2F9250u;
    {
        const bool branch_taken_0x2f9250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f9250) {
            ctx->pc = 0x2F92C0u;
            goto label_2f92c0;
        }
    }
    ctx->pc = 0x2F9258u;
label_2f9258:
    // 0x2f9258: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2f9258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2f925c:
    // 0x2f925c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2f925cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2f9260:
    // 0x2f9260: 0x9066ee38  lbu         $a2, -0x11C8($v1)
    ctx->pc = 0x2f9260u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294962744)));
label_2f9264:
    // 0x2f9264: 0x3c05a520  lui         $a1, 0xA520
    ctx->pc = 0x2f9264u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42272 << 16));
label_2f9268:
    // 0x2f9268: 0x9044ee39  lbu         $a0, -0x11C7($v0)
    ctx->pc = 0x2f9268u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962745)));
label_2f926c:
    // 0x2f926c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2f926cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2f9270:
    // 0x2f9270: 0xa3a6004c  sb          $a2, 0x4C($sp)
    ctx->pc = 0x2f9270u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 6));
label_2f9274:
    // 0x2f9274: 0x9063ee3a  lbu         $v1, -0x11C6($v1)
    ctx->pc = 0x2f9274u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294962746)));
label_2f9278:
    // 0x2f9278: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2f9278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2f927c:
    // 0x2f927c: 0xa3a4004d  sb          $a0, 0x4D($sp)
    ctx->pc = 0x2f927cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 77), (uint8_t)GPR_U32(ctx, 4));
label_2f9280:
    // 0x2f9280: 0x824400d9  lb          $a0, 0xD9($s2)
    ctx->pc = 0x2f9280u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 217)));
label_2f9284:
    // 0x2f9284: 0xa3a3004e  sb          $v1, 0x4E($sp)
    ctx->pc = 0x2f9284u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 78), (uint8_t)GPR_U32(ctx, 3));
label_2f9288:
    // 0x2f9288: 0x9043ee3b  lbu         $v1, -0x11C5($v0)
    ctx->pc = 0x2f9288u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294962747)));
label_2f928c:
    // 0x2f928c: 0x8e4200c8  lw          $v0, 0xC8($s2)
    ctx->pc = 0x2f928cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 200)));
label_2f9290:
    // 0x2f9290: 0xa3a3004f  sb          $v1, 0x4F($sp)
    ctx->pc = 0x2f9290u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 79), (uint8_t)GPR_U32(ctx, 3));
label_2f9294:
    // 0x2f9294: 0x90420d98  lbu         $v0, 0xD98($v0)
    ctx->pc = 0x2f9294u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3480)));
label_2f9298:
    // 0x2f9298: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2f9298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_2f929c:
    // 0x2f929c: 0x8050004c  lb          $s0, 0x4C($v0)
    ctx->pc = 0x2f929cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 76)));
label_2f92a0:
    // 0x2f92a0: 0xc07293e  jal         func_1CA4F8
label_2f92a4:
    if (ctx->pc == 0x2F92A4u) {
        ctx->pc = 0x2F92A4u;
            // 0x2f92a4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F92A8u;
        goto label_2f92a8;
    }
    ctx->pc = 0x2F92A0u;
    SET_GPR_U32(ctx, 31, 0x2F92A8u);
    ctx->pc = 0x2F92A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F92A0u;
            // 0x2f92a4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA4F8u;
    if (runtime->hasFunction(0x1CA4F8u)) {
        auto targetFn = runtime->lookupFunction(0x1CA4F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F92A8u; }
        if (ctx->pc != 0x2F92A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA4F8_0x1ca4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F92A8u; }
        if (ctx->pc != 0x2F92A8u) { return; }
    }
    ctx->pc = 0x2F92A8u;
label_2f92a8:
    // 0x2f92a8: 0x824400da  lb          $a0, 0xDA($s2)
    ctx->pc = 0x2f92a8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 218)));
label_2f92ac:
    // 0x2f92ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2f92acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f92b0:
    // 0x2f92b0: 0xc07293e  jal         func_1CA4F8
label_2f92b4:
    if (ctx->pc == 0x2F92B4u) {
        ctx->pc = 0x2F92B4u;
            // 0x2f92b4: 0x3c05a520  lui         $a1, 0xA520 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42272 << 16));
        ctx->pc = 0x2F92B8u;
        goto label_2f92b8;
    }
    ctx->pc = 0x2F92B0u;
    SET_GPR_U32(ctx, 31, 0x2F92B8u);
    ctx->pc = 0x2F92B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F92B0u;
            // 0x2f92b4: 0x3c05a520  lui         $a1, 0xA520 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42272 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA4F8u;
    if (runtime->hasFunction(0x1CA4F8u)) {
        auto targetFn = runtime->lookupFunction(0x1CA4F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F92B8u; }
        if (ctx->pc != 0x2F92B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA4F8_0x1ca4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F92B8u; }
        if (ctx->pc != 0x2F92B8u) { return; }
    }
    ctx->pc = 0x2F92B8u;
label_2f92b8:
    // 0x2f92b8: 0x1000000a  b           . + 4 + (0xA << 2)
label_2f92bc:
    if (ctx->pc == 0x2F92BCu) {
        ctx->pc = 0x2F92BCu;
            // 0x2f92bc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x2F92C0u;
        goto label_2f92c0;
    }
    ctx->pc = 0x2F92B8u;
    {
        const bool branch_taken_0x2f92b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F92BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F92B8u;
            // 0x2f92bc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f92b8) {
            ctx->pc = 0x2F92E4u;
            goto label_2f92e4;
        }
    }
    ctx->pc = 0x2F92C0u;
label_2f92c0:
    // 0x2f92c0: 0x824400d9  lb          $a0, 0xD9($s2)
    ctx->pc = 0x2f92c0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 217)));
label_2f92c4:
    // 0x2f92c4: 0x3c05a520  lui         $a1, 0xA520
    ctx->pc = 0x2f92c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42272 << 16));
label_2f92c8:
    // 0x2f92c8: 0xc07293e  jal         func_1CA4F8
label_2f92cc:
    if (ctx->pc == 0x2F92CCu) {
        ctx->pc = 0x2F92CCu;
            // 0x2f92cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F92D0u;
        goto label_2f92d0;
    }
    ctx->pc = 0x2F92C8u;
    SET_GPR_U32(ctx, 31, 0x2F92D0u);
    ctx->pc = 0x2F92CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F92C8u;
            // 0x2f92cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA4F8u;
    if (runtime->hasFunction(0x1CA4F8u)) {
        auto targetFn = runtime->lookupFunction(0x1CA4F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F92D0u; }
        if (ctx->pc != 0x2F92D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA4F8_0x1ca4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F92D0u; }
        if (ctx->pc != 0x2F92D0u) { return; }
    }
    ctx->pc = 0x2F92D0u;
label_2f92d0:
    // 0x2f92d0: 0x824400da  lb          $a0, 0xDA($s2)
    ctx->pc = 0x2f92d0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 218)));
label_2f92d4:
    // 0x2f92d4: 0x3c05a520  lui         $a1, 0xA520
    ctx->pc = 0x2f92d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42272 << 16));
label_2f92d8:
    // 0x2f92d8: 0xc07293e  jal         func_1CA4F8
label_2f92dc:
    if (ctx->pc == 0x2F92DCu) {
        ctx->pc = 0x2F92DCu;
            // 0x2f92dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2F92E0u;
        goto label_2f92e0;
    }
    ctx->pc = 0x2F92D8u;
    SET_GPR_U32(ctx, 31, 0x2F92E0u);
    ctx->pc = 0x2F92DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F92D8u;
            // 0x2f92dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA4F8u;
    if (runtime->hasFunction(0x1CA4F8u)) {
        auto targetFn = runtime->lookupFunction(0x1CA4F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F92E0u; }
        if (ctx->pc != 0x2F92E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA4F8_0x1ca4f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F92E0u; }
        if (ctx->pc != 0x2F92E0u) { return; }
    }
    ctx->pc = 0x2F92E0u;
label_2f92e0:
    // 0x2f92e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f92e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2f92e4:
    // 0x2f92e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f92e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f92e8:
    // 0x2f92e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f92e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f92ec:
    // 0x2f92ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f92ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f92f0:
    // 0x2f92f0: 0x3e00008  jr          $ra
label_2f92f4:
    if (ctx->pc == 0x2F92F4u) {
        ctx->pc = 0x2F92F4u;
            // 0x2f92f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2F92F8u;
        goto label_2f92f8;
    }
    ctx->pc = 0x2F92F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F92F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F92F0u;
            // 0x2f92f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F92F8u;
label_2f92f8:
    // 0x2f92f8: 0x0  nop
    ctx->pc = 0x2f92f8u;
    // NOP
label_2f92fc:
    // 0x2f92fc: 0x0  nop
    ctx->pc = 0x2f92fcu;
    // NOP
}
