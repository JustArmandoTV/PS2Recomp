#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E3140
// Address: 0x1e3140 - 0x1e3370
void sub_001E3140_0x1e3140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3140_0x1e3140");
#endif

    switch (ctx->pc) {
        case 0x1e3158u: goto label_1e3158;
        case 0x1e3160u: goto label_1e3160;
        case 0x1e3168u: goto label_1e3168;
        case 0x1e3174u: goto label_1e3174;
        case 0x1e317cu: goto label_1e317c;
        case 0x1e3184u: goto label_1e3184;
        case 0x1e318cu: goto label_1e318c;
        case 0x1e3198u: goto label_1e3198;
        case 0x1e31a4u: goto label_1e31a4;
        case 0x1e31b0u: goto label_1e31b0;
        case 0x1e31b8u: goto label_1e31b8;
        case 0x1e31c0u: goto label_1e31c0;
        case 0x1e31c8u: goto label_1e31c8;
        case 0x1e31d0u: goto label_1e31d0;
        case 0x1e31d8u: goto label_1e31d8;
        case 0x1e31e0u: goto label_1e31e0;
        case 0x1e31e8u: goto label_1e31e8;
        case 0x1e31f8u: goto label_1e31f8;
        case 0x1e3200u: goto label_1e3200;
        case 0x1e3208u: goto label_1e3208;
        case 0x1e3210u: goto label_1e3210;
        case 0x1e3218u: goto label_1e3218;
        case 0x1e3220u: goto label_1e3220;
        case 0x1e3228u: goto label_1e3228;
        case 0x1e32a4u: goto label_1e32a4;
        case 0x1e330cu: goto label_1e330c;
        default: break;
    }

    ctx->pc = 0x1e3140u;

    // 0x1e3140: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e3140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e3144: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e3144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e3148: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e3148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e314c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e314cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3150: 0xc081b94  jal         func_206E50
    ctx->pc = 0x1E3150u;
    SET_GPR_U32(ctx, 31, 0x1E3158u);
    ctx->pc = 0x1E3154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3150u;
            // 0x1e3154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206E50u;
    if (runtime->hasFunction(0x206E50u)) {
        auto targetFn = runtime->lookupFunction(0x206E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3158u; }
        if (ctx->pc != 0x1E3158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206E50_0x206e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3158u; }
        if (ctx->pc != 0x1E3158u) { return; }
    }
    ctx->pc = 0x1E3158u;
label_1e3158:
    // 0x1e3158: 0xc0791e8  jal         func_1E47A0
    ctx->pc = 0x1E3158u;
    SET_GPR_U32(ctx, 31, 0x1E3160u);
    ctx->pc = 0x1E315Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3158u;
            // 0x1e315c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E47A0u;
    if (runtime->hasFunction(0x1E47A0u)) {
        auto targetFn = runtime->lookupFunction(0x1E47A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3160u; }
        if (ctx->pc != 0x1E3160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E47A0_0x1e47a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3160u; }
        if (ctx->pc != 0x1E3160u) { return; }
    }
    ctx->pc = 0x1E3160u;
label_1e3160:
    // 0x1e3160: 0xc07c85c  jal         func_1F2170
    ctx->pc = 0x1E3160u;
    SET_GPR_U32(ctx, 31, 0x1E3168u);
    ctx->pc = 0x1E3164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3160u;
            // 0x1e3164: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F2170u;
    if (runtime->hasFunction(0x1F2170u)) {
        auto targetFn = runtime->lookupFunction(0x1F2170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3168u; }
        if (ctx->pc != 0x1E3168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F2170_0x1f2170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3168u; }
        if (ctx->pc != 0x1E3168u) { return; }
    }
    ctx->pc = 0x1E3168u;
label_1e3168:
    // 0x1e3168: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e3168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e316c: 0xc07fec4  jal         func_1FFB10
    ctx->pc = 0x1E316Cu;
    SET_GPR_U32(ctx, 31, 0x1E3174u);
    ctx->pc = 0x1E3170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E316Cu;
            // 0x1e3170: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB10u;
    if (runtime->hasFunction(0x1FFB10u)) {
        auto targetFn = runtime->lookupFunction(0x1FFB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3174u; }
        if (ctx->pc != 0x1E3174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FFB10_0x1ffb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3174u; }
        if (ctx->pc != 0x1E3174u) { return; }
    }
    ctx->pc = 0x1E3174u;
label_1e3174:
    // 0x1e3174: 0xc07a754  jal         func_1E9D50
    ctx->pc = 0x1E3174u;
    SET_GPR_U32(ctx, 31, 0x1E317Cu);
    ctx->pc = 0x1E3178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3174u;
            // 0x1e3178: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E9D50u;
    if (runtime->hasFunction(0x1E9D50u)) {
        auto targetFn = runtime->lookupFunction(0x1E9D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E317Cu; }
        if (ctx->pc != 0x1E317Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E9D50_0x1e9d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E317Cu; }
        if (ctx->pc != 0x1E317Cu) { return; }
    }
    ctx->pc = 0x1E317Cu;
label_1e317c:
    // 0x1e317c: 0xc07af50  jal         func_1EBD40
    ctx->pc = 0x1E317Cu;
    SET_GPR_U32(ctx, 31, 0x1E3184u);
    ctx->pc = 0x1E3180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E317Cu;
            // 0x1e3180: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EBD40u;
    if (runtime->hasFunction(0x1EBD40u)) {
        auto targetFn = runtime->lookupFunction(0x1EBD40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3184u; }
        if (ctx->pc != 0x1E3184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EBD40_0x1ebd40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3184u; }
        if (ctx->pc != 0x1E3184u) { return; }
    }
    ctx->pc = 0x1E3184u;
label_1e3184:
    // 0x1e3184: 0xc090bdc  jal         func_242F70
    ctx->pc = 0x1E3184u;
    SET_GPR_U32(ctx, 31, 0x1E318Cu);
    ctx->pc = 0x1E3188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3184u;
            // 0x1e3188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242F70u;
    if (runtime->hasFunction(0x242F70u)) {
        auto targetFn = runtime->lookupFunction(0x242F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E318Cu; }
        if (ctx->pc != 0x1E318Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00242F70_0x242f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E318Cu; }
        if (ctx->pc != 0x1E318Cu) { return; }
    }
    ctx->pc = 0x1E318Cu;
label_1e318c:
    // 0x1e318c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e318cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3190: 0xc07fec4  jal         func_1FFB10
    ctx->pc = 0x1E3190u;
    SET_GPR_U32(ctx, 31, 0x1E3198u);
    ctx->pc = 0x1E3194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3190u;
            // 0x1e3194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB10u;
    if (runtime->hasFunction(0x1FFB10u)) {
        auto targetFn = runtime->lookupFunction(0x1FFB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3198u; }
        if (ctx->pc != 0x1E3198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FFB10_0x1ffb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3198u; }
        if (ctx->pc != 0x1E3198u) { return; }
    }
    ctx->pc = 0x1E3198u;
label_1e3198:
    // 0x1e3198: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e3198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e319c: 0xc07fec4  jal         func_1FFB10
    ctx->pc = 0x1E319Cu;
    SET_GPR_U32(ctx, 31, 0x1E31A4u);
    ctx->pc = 0x1E31A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E319Cu;
            // 0x1e31a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB10u;
    if (runtime->hasFunction(0x1FFB10u)) {
        auto targetFn = runtime->lookupFunction(0x1FFB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E31A4u; }
        if (ctx->pc != 0x1E31A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FFB10_0x1ffb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E31A4u; }
        if (ctx->pc != 0x1E31A4u) { return; }
    }
    ctx->pc = 0x1E31A4u;
label_1e31a4:
    // 0x1e31a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e31a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e31a8: 0xc07fec4  jal         func_1FFB10
    ctx->pc = 0x1E31A8u;
    SET_GPR_U32(ctx, 31, 0x1E31B0u);
    ctx->pc = 0x1E31ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E31A8u;
            // 0x1e31ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB10u;
    if (runtime->hasFunction(0x1FFB10u)) {
        auto targetFn = runtime->lookupFunction(0x1FFB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E31B0u; }
        if (ctx->pc != 0x1E31B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FFB10_0x1ffb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E31B0u; }
        if (ctx->pc != 0x1E31B0u) { return; }
    }
    ctx->pc = 0x1E31B0u;
label_1e31b0:
    // 0x1e31b0: 0xc07f028  jal         func_1FC0A0
    ctx->pc = 0x1E31B0u;
    SET_GPR_U32(ctx, 31, 0x1E31B8u);
    ctx->pc = 0x1E31B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E31B0u;
            // 0x1e31b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FC0A0u;
    if (runtime->hasFunction(0x1FC0A0u)) {
        auto targetFn = runtime->lookupFunction(0x1FC0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E31B8u; }
        if (ctx->pc != 0x1E31B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FC0A0_0x1fc0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E31B8u; }
        if (ctx->pc != 0x1E31B8u) { return; }
    }
    ctx->pc = 0x1E31B8u;
label_1e31b8:
    // 0x1e31b8: 0xc07d2c0  jal         func_1F4B00
    ctx->pc = 0x1E31B8u;
    SET_GPR_U32(ctx, 31, 0x1E31C0u);
    ctx->pc = 0x1E31BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E31B8u;
            // 0x1e31bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F4B00u;
    if (runtime->hasFunction(0x1F4B00u)) {
        auto targetFn = runtime->lookupFunction(0x1F4B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E31C0u; }
        if (ctx->pc != 0x1E31C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4B00_0x1f4b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E31C0u; }
        if (ctx->pc != 0x1E31C0u) { return; }
    }
    ctx->pc = 0x1E31C0u;
label_1e31c0:
    // 0x1e31c0: 0xc07c510  jal         func_1F1440
    ctx->pc = 0x1E31C0u;
    SET_GPR_U32(ctx, 31, 0x1E31C8u);
    ctx->pc = 0x1E31C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E31C0u;
            // 0x1e31c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F1440u;
    if (runtime->hasFunction(0x1F1440u)) {
        auto targetFn = runtime->lookupFunction(0x1F1440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E31C8u; }
        if (ctx->pc != 0x1E31C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F1440_0x1f1440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E31C8u; }
        if (ctx->pc != 0x1E31C8u) { return; }
    }
    ctx->pc = 0x1E31C8u;
label_1e31c8:
    // 0x1e31c8: 0xc07b220  jal         func_1EC880
    ctx->pc = 0x1E31C8u;
    SET_GPR_U32(ctx, 31, 0x1E31D0u);
    ctx->pc = 0x1E31CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E31C8u;
            // 0x1e31cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC880u;
    if (runtime->hasFunction(0x1EC880u)) {
        auto targetFn = runtime->lookupFunction(0x1EC880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E31D0u; }
        if (ctx->pc != 0x1E31D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EC880_0x1ec880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E31D0u; }
        if (ctx->pc != 0x1E31D0u) { return; }
    }
    ctx->pc = 0x1E31D0u;
label_1e31d0:
    // 0x1e31d0: 0xc0910d4  jal         func_244350
    ctx->pc = 0x1E31D0u;
    SET_GPR_U32(ctx, 31, 0x1E31D8u);
    ctx->pc = 0x1E31D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E31D0u;
            // 0x1e31d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x244350u;
    if (runtime->hasFunction(0x244350u)) {
        auto targetFn = runtime->lookupFunction(0x244350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E31D8u; }
        if (ctx->pc != 0x1E31D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00244350_0x244350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E31D8u; }
        if (ctx->pc != 0x1E31D8u) { return; }
    }
    ctx->pc = 0x1E31D8u;
label_1e31d8:
    // 0x1e31d8: 0xc09152c  jal         func_2454B0
    ctx->pc = 0x1E31D8u;
    SET_GPR_U32(ctx, 31, 0x1E31E0u);
    ctx->pc = 0x1E31DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E31D8u;
            // 0x1e31dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2454B0u;
    if (runtime->hasFunction(0x2454B0u)) {
        auto targetFn = runtime->lookupFunction(0x2454B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E31E0u; }
        if (ctx->pc != 0x1E31E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002454B0_0x2454b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E31E0u; }
        if (ctx->pc != 0x1E31E0u) { return; }
    }
    ctx->pc = 0x1E31E0u;
label_1e31e0:
    // 0x1e31e0: 0xc07bfb4  jal         func_1EFED0
    ctx->pc = 0x1E31E0u;
    SET_GPR_U32(ctx, 31, 0x1E31E8u);
    ctx->pc = 0x1E31E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E31E0u;
            // 0x1e31e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EFED0u;
    if (runtime->hasFunction(0x1EFED0u)) {
        auto targetFn = runtime->lookupFunction(0x1EFED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E31E8u; }
        if (ctx->pc != 0x1E31E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EFED0_0x1efed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E31E8u; }
        if (ctx->pc != 0x1E31E8u) { return; }
    }
    ctx->pc = 0x1E31E8u;
label_1e31e8:
    // 0x1e31e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e31e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e31ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e31ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e31f0: 0xc092944  jal         func_24A510
    ctx->pc = 0x1E31F0u;
    SET_GPR_U32(ctx, 31, 0x1E31F8u);
    ctx->pc = 0x1E31F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E31F0u;
            // 0x1e31f4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24A510u;
    if (runtime->hasFunction(0x24A510u)) {
        auto targetFn = runtime->lookupFunction(0x24A510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E31F8u; }
        if (ctx->pc != 0x1E31F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024A510_0x24a510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E31F8u; }
        if (ctx->pc != 0x1E31F8u) { return; }
    }
    ctx->pc = 0x1E31F8u;
label_1e31f8:
    // 0x1e31f8: 0xc078dfc  jal         func_1E37F0
    ctx->pc = 0x1E31F8u;
    SET_GPR_U32(ctx, 31, 0x1E3200u);
    ctx->pc = 0x1E31FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E31F8u;
            // 0x1e31fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E37F0u;
    if (runtime->hasFunction(0x1E37F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E37F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3200u; }
        if (ctx->pc != 0x1E3200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E37F0_0x1e37f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3200u; }
        if (ctx->pc != 0x1E3200u) { return; }
    }
    ctx->pc = 0x1E3200u;
label_1e3200:
    // 0x1e3200: 0xc090a4c  jal         func_242930
    ctx->pc = 0x1E3200u;
    SET_GPR_U32(ctx, 31, 0x1E3208u);
    ctx->pc = 0x1E3204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3200u;
            // 0x1e3204: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242930u;
    if (runtime->hasFunction(0x242930u)) {
        auto targetFn = runtime->lookupFunction(0x242930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3208u; }
        if (ctx->pc != 0x1E3208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00242930_0x242930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3208u; }
        if (ctx->pc != 0x1E3208u) { return; }
    }
    ctx->pc = 0x1E3208u;
label_1e3208:
    // 0x1e3208: 0xc07e6f4  jal         func_1F9BD0
    ctx->pc = 0x1E3208u;
    SET_GPR_U32(ctx, 31, 0x1E3210u);
    ctx->pc = 0x1E320Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3208u;
            // 0x1e320c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9BD0u;
    if (runtime->hasFunction(0x1F9BD0u)) {
        auto targetFn = runtime->lookupFunction(0x1F9BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3210u; }
        if (ctx->pc != 0x1E3210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F9BD0_0x1f9bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3210u; }
        if (ctx->pc != 0x1E3210u) { return; }
    }
    ctx->pc = 0x1E3210u;
label_1e3210:
    // 0x1e3210: 0xc07df84  jal         func_1F7E10
    ctx->pc = 0x1E3210u;
    SET_GPR_U32(ctx, 31, 0x1E3218u);
    ctx->pc = 0x1E3214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3210u;
            // 0x1e3214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E10u;
    if (runtime->hasFunction(0x1F7E10u)) {
        auto targetFn = runtime->lookupFunction(0x1F7E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3218u; }
        if (ctx->pc != 0x1E3218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F7E10_0x1f7e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3218u; }
        if (ctx->pc != 0x1E3218u) { return; }
    }
    ctx->pc = 0x1E3218u;
label_1e3218:
    // 0x1e3218: 0xc07e99c  jal         func_1FA670
    ctx->pc = 0x1E3218u;
    SET_GPR_U32(ctx, 31, 0x1E3220u);
    ctx->pc = 0x1E321Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3218u;
            // 0x1e321c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FA670u;
    if (runtime->hasFunction(0x1FA670u)) {
        auto targetFn = runtime->lookupFunction(0x1FA670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3220u; }
        if (ctx->pc != 0x1E3220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FA670_0x1fa670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3220u; }
        if (ctx->pc != 0x1E3220u) { return; }
    }
    ctx->pc = 0x1E3220u;
label_1e3220:
    // 0x1e3220: 0xc07d8b4  jal         func_1F62D0
    ctx->pc = 0x1E3220u;
    SET_GPR_U32(ctx, 31, 0x1E3228u);
    ctx->pc = 0x1E3224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3220u;
            // 0x1e3224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F62D0u;
    if (runtime->hasFunction(0x1F62D0u)) {
        auto targetFn = runtime->lookupFunction(0x1F62D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3228u; }
        if (ctx->pc != 0x1E3228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F62D0_0x1f62d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3228u; }
        if (ctx->pc != 0x1E3228u) { return; }
    }
    ctx->pc = 0x1E3228u;
label_1e3228:
    // 0x1e3228: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e3228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e322c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e322cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3230: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3230u;
            // 0x1e3234: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E3238u;
    // 0x1e3238: 0x0  nop
    ctx->pc = 0x1e3238u;
    // NOP
    // 0x1e323c: 0x0  nop
    ctx->pc = 0x1e323cu;
    // NOP
    // 0x1e3240: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E3248u;
    // 0x1e3248: 0x0  nop
    ctx->pc = 0x1e3248u;
    // NOP
    // 0x1e324c: 0x0  nop
    ctx->pc = 0x1e324cu;
    // NOP
    // 0x1e3250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e3250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e3254: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e3254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e3258: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e3258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e325c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e325cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3260: 0x52000011  beql        $s0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E3260u;
    {
        const bool branch_taken_0x1e3260 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3260) {
            ctx->pc = 0x1E3264u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3260u;
            // 0x1e3264: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E32A8u;
            goto label_1e32a8;
        }
    }
    ctx->pc = 0x1E3268u;
    // 0x1e3268: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e3268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1e326c: 0x2442d440  addiu       $v0, $v0, -0x2BC0
    ctx->pc = 0x1e326cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956096));
    // 0x1e3270: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E3270u;
    {
        const bool branch_taken_0x1e3270 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3270u;
            // 0x1e3274: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3270) {
            ctx->pc = 0x1E328Cu;
            goto label_1e328c;
        }
    }
    ctx->pc = 0x1E3278u;
    // 0x1e3278: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e3278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1e327c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e327cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1e3280: 0x2463d450  addiu       $v1, $v1, -0x2BB0
    ctx->pc = 0x1e3280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956112));
    // 0x1e3284: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1e3284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1e3288: 0xac40e3e0  sw          $zero, -0x1C20($v0)
    ctx->pc = 0x1e3288u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960096), GPR_U32(ctx, 0));
label_1e328c:
    // 0x1e328c: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1e328cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1e3290: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e3290u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e3294: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3294u;
    {
        const bool branch_taken_0x1e3294 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e3294) {
            ctx->pc = 0x1E32A4u;
            goto label_1e32a4;
        }
    }
    ctx->pc = 0x1E329Cu;
    // 0x1e329c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x1E329Cu;
    SET_GPR_U32(ctx, 31, 0x1E32A4u);
    ctx->pc = 0x1E32A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E329Cu;
            // 0x1e32a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E32A4u; }
        if (ctx->pc != 0x1E32A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E32A4u; }
        if (ctx->pc != 0x1E32A4u) { return; }
    }
    ctx->pc = 0x1E32A4u;
label_1e32a4:
    // 0x1e32a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e32a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e32a8:
    // 0x1e32a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e32a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e32ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e32acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e32b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E32B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E32B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E32B0u;
            // 0x1e32b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E32B8u;
    // 0x1e32b8: 0x0  nop
    ctx->pc = 0x1e32b8u;
    // NOP
    // 0x1e32bc: 0x0  nop
    ctx->pc = 0x1e32bcu;
    // NOP
    // 0x1e32c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e32c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e32c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e32c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e32c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e32c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e32cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e32ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e32d0: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1E32D0u;
    {
        const bool branch_taken_0x1e32d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e32d0) {
            ctx->pc = 0x1E32D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E32D0u;
            // 0x1e32d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E3310u;
            goto label_1e3310;
        }
    }
    ctx->pc = 0x1E32D8u;
    // 0x1e32d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e32d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1e32dc: 0x2442d460  addiu       $v0, $v0, -0x2BA0
    ctx->pc = 0x1e32dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956128));
    // 0x1e32e0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E32E0u;
    {
        const bool branch_taken_0x1e32e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E32E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E32E0u;
            // 0x1e32e4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e32e0) {
            ctx->pc = 0x1E32F4u;
            goto label_1e32f4;
        }
    }
    ctx->pc = 0x1E32E8u;
    // 0x1e32e8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e32e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1e32ec: 0x2442d480  addiu       $v0, $v0, -0x2B80
    ctx->pc = 0x1e32ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956160));
    // 0x1e32f0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e32f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1e32f4:
    // 0x1e32f4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1e32f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1e32f8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e32f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e32fc: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E32FCu;
    {
        const bool branch_taken_0x1e32fc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e32fc) {
            ctx->pc = 0x1E330Cu;
            goto label_1e330c;
        }
    }
    ctx->pc = 0x1E3304u;
    // 0x1e3304: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x1E3304u;
    SET_GPR_U32(ctx, 31, 0x1E330Cu);
    ctx->pc = 0x1E3308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3304u;
            // 0x1e3308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E330Cu; }
        if (ctx->pc != 0x1E330Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E330Cu; }
        if (ctx->pc != 0x1E330Cu) { return; }
    }
    ctx->pc = 0x1E330Cu;
label_1e330c:
    // 0x1e330c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e330cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e3310:
    // 0x1e3310: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e3310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3314: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e3314u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3318: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E331Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3318u;
            // 0x1e331c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E3320u;
    // 0x1e3320: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E3328u;
    // 0x1e3328: 0x0  nop
    ctx->pc = 0x1e3328u;
    // NOP
    // 0x1e332c: 0x0  nop
    ctx->pc = 0x1e332cu;
    // NOP
    // 0x1e3330: 0x8078b88  j           func_1E2E20
    ctx->pc = 0x1E3330u;
    ctx->pc = 0x1E3334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3330u;
            // 0x1e3334: 0x2484fff8  addiu       $a0, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E20u;
    {
        auto targetFn = runtime->lookupFunction(0x1E2E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E3338u;
    // 0x1e3338: 0x0  nop
    ctx->pc = 0x1e3338u;
    // NOP
    // 0x1e333c: 0x0  nop
    ctx->pc = 0x1e333cu;
    // NOP
    // 0x1e3340: 0x8078b88  j           func_1E2E20
    ctx->pc = 0x1E3340u;
    ctx->pc = 0x1E3344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3340u;
            // 0x1e3344: 0x2484fff4  addiu       $a0, $a0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E20u;
    {
        auto targetFn = runtime->lookupFunction(0x1E2E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E3348u;
    // 0x1e3348: 0x0  nop
    ctx->pc = 0x1e3348u;
    // NOP
    // 0x1e334c: 0x0  nop
    ctx->pc = 0x1e334cu;
    // NOP
    // 0x1e3350: 0x8078b88  j           func_1E2E20
    ctx->pc = 0x1E3350u;
    ctx->pc = 0x1E3354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3350u;
            // 0x1e3354: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E20u;
    {
        auto targetFn = runtime->lookupFunction(0x1E2E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E3358u;
    // 0x1e3358: 0x0  nop
    ctx->pc = 0x1e3358u;
    // NOP
    // 0x1e335c: 0x0  nop
    ctx->pc = 0x1e335cu;
    // NOP
    // 0x1e3360: 0x8078b88  j           func_1E2E20
    ctx->pc = 0x1E3360u;
    ctx->pc = 0x1E3364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3360u;
            // 0x1e3364: 0x2484ffec  addiu       $a0, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E20u;
    {
        auto targetFn = runtime->lookupFunction(0x1E2E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1E3368u;
    // 0x1e3368: 0x0  nop
    ctx->pc = 0x1e3368u;
    // NOP
    // 0x1e336c: 0x0  nop
    ctx->pc = 0x1e336cu;
    // NOP
}
