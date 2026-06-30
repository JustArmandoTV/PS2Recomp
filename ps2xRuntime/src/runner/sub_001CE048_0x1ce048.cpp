#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CE048
// Address: 0x1ce048 - 0x1ce188
void sub_001CE048_0x1ce048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE048_0x1ce048");
#endif

    switch (ctx->pc) {
        case 0x1ce074u: goto label_1ce074;
        case 0x1ce088u: goto label_1ce088;
        case 0x1ce094u: goto label_1ce094;
        case 0x1ce0e4u: goto label_1ce0e4;
        case 0x1ce0fcu: goto label_1ce0fc;
        case 0x1ce120u: goto label_1ce120;
        case 0x1ce130u: goto label_1ce130;
        case 0x1ce138u: goto label_1ce138;
        case 0x1ce148u: goto label_1ce148;
        case 0x1ce150u: goto label_1ce150;
        case 0x1ce164u: goto label_1ce164;
        default: break;
    }

    ctx->pc = 0x1ce048u;

    // 0x1ce048: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1ce048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1ce04c: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1ce04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x1ce050: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1ce050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1ce054: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ce054u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce058: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x1ce058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x1ce05c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1ce05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1ce060: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CE060u;
    {
        const bool branch_taken_0x1ce060 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE060u;
            // 0x1ce064: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce060) {
            ctx->pc = 0x1CE07Cu;
            goto label_1ce07c;
        }
    }
    ctx->pc = 0x1CE068u;
    // 0x1ce068: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1ce068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1ce06c: 0xc043c12  jal         func_10F048
    ctx->pc = 0x1CE06Cu;
    SET_GPR_U32(ctx, 31, 0x1CE074u);
    ctx->pc = 0x1CE070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE06Cu;
            // 0x1ce070: 0x2484c1a0  addiu       $a0, $a0, -0x3E60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE074u; }
        if (ctx->pc != 0x1CE074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE074u; }
        if (ctx->pc != 0x1CE074u) { return; }
    }
    ctx->pc = 0x1CE074u;
label_1ce074:
    // 0x1ce074: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1CE074u;
    {
        const bool branch_taken_0x1ce074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE074u;
            // 0x1ce078: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce074) {
            ctx->pc = 0x1CE168u;
            goto label_1ce168;
        }
    }
    ctx->pc = 0x1CE07Cu;
label_1ce07c:
    // 0x1ce07c: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x1ce07cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1ce080: 0xc0430e8  jal         func_10C3A0
    ctx->pc = 0x1CE080u;
    SET_GPR_U32(ctx, 31, 0x1CE088u);
    ctx->pc = 0x10C3A0u;
    if (runtime->hasFunction(0x10C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x10C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE088u; }
        if (ctx->pc != 0x1CE088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C3A0_0x10c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE088u; }
        if (ctx->pc != 0x1CE088u) { return; }
    }
    ctx->pc = 0x1CE088u;
label_1ce088:
    // 0x1ce088: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1ce088u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x1ce08c: 0xc07371a  jal         func_1CDC68
    ctx->pc = 0x1CE08Cu;
    SET_GPR_U32(ctx, 31, 0x1CE094u);
    ctx->pc = 0x1CE090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE08Cu;
            // 0x1ce090: 0x24849740  addiu       $a0, $a0, -0x68C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDC68u;
    if (runtime->hasFunction(0x1CDC68u)) {
        auto targetFn = runtime->lookupFunction(0x1CDC68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE094u; }
        if (ctx->pc != 0x1CE094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CDC68_0x1cdc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE094u; }
        if (ctx->pc != 0x1CE094u) { return; }
    }
    ctx->pc = 0x1CE094u;
label_1ce094:
    // 0x1ce094: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ce094u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce098: 0x12000033  beqz        $s0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1CE098u;
    {
        const bool branch_taken_0x1ce098 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE09Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE098u;
            // 0x1ce09c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce098) {
            ctx->pc = 0x1CE168u;
            goto label_1ce168;
        }
    }
    ctx->pc = 0x1CE0A0u;
    // 0x1ce0a0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1ce0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1ce0a4: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1ce0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
    // 0x1ce0a8: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x1ce0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x1ce0ac: 0x24a5c1e8  addiu       $a1, $a1, -0x3E18
    ctx->pc = 0x1ce0acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951400));
    // 0x1ce0b0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1ce0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1ce0b4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1ce0b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce0b8: 0xae100014  sw          $s0, 0x14($s0)
    ctx->pc = 0x1ce0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 16));
    // 0x1ce0bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ce0bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce0c0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1ce0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1ce0c4: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x1ce0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x1ce0c8: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1ce0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x1ce0cc: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1ce0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1ce0d0: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1ce0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x1ce0d4: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x1ce0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x1ce0d8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1ce0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1ce0dc: 0xc0430d8  jal         func_10C360
    ctx->pc = 0x1CE0DCu;
    SET_GPR_U32(ctx, 31, 0x1CE0E4u);
    ctx->pc = 0x1CE0E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE0DCu;
            // 0x1ce0e0: 0xafb30004  sw          $s3, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C360u;
    if (runtime->hasFunction(0x10C360u)) {
        auto targetFn = runtime->lookupFunction(0x10C360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE0E4u; }
        if (ctx->pc != 0x1CE0E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C360_0x10c360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE0E4u; }
        if (ctx->pc != 0x1CE0E4u) { return; }
    }
    ctx->pc = 0x1CE0E4u;
label_1ce0e4:
    // 0x1ce0e4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1ce0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1ce0e8: 0x8e320008  lw          $s2, 0x8($s1)
    ctx->pc = 0x1ce0e8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ce0ec: 0x6410005  bgez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CE0ECu;
    {
        const bool branch_taken_0x1ce0ec = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1CE0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE0ECu;
            // 0x1ce0f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce0ec) {
            ctx->pc = 0x1CE104u;
            goto label_1ce104;
        }
    }
    ctx->pc = 0x1CE0F4u;
    // 0x1ce0f4: 0xc073744  jal         func_1CDD10
    ctx->pc = 0x1CE0F4u;
    SET_GPR_U32(ctx, 31, 0x1CE0FCu);
    ctx->pc = 0x1CE0F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE0F4u;
            // 0x1ce0f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDD10u;
    if (runtime->hasFunction(0x1CDD10u)) {
        auto targetFn = runtime->lookupFunction(0x1CDD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE0FCu; }
        if (ctx->pc != 0x1CE0FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CDD10_0x1cdd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE0FCu; }
        if (ctx->pc != 0x1CE0FCu) { return; }
    }
    ctx->pc = 0x1CE0FCu;
label_1ce0fc:
    // 0x1ce0fc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1CE0FCu;
    {
        const bool branch_taken_0x1ce0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE0FCu;
            // 0x1ce100: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce0fc) {
            ctx->pc = 0x1CE168u;
            goto label_1ce168;
        }
    }
    ctx->pc = 0x1CE104u;
label_1ce104:
    // 0x1ce104: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1ce104u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1ce108: 0x3484001d  ori         $a0, $a0, 0x1D
    ctx->pc = 0x1ce108u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)29);
    // 0x1ce10c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1ce10cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1ce110: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ce110u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce114: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ce114u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce118: 0xc043e0c  jal         func_10F830
    ctx->pc = 0x1CE118u;
    SET_GPR_U32(ctx, 31, 0x1CE120u);
    ctx->pc = 0x1CE11Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE118u;
            // 0x1ce11c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F830u;
    if (runtime->hasFunction(0x10F830u)) {
        auto targetFn = runtime->lookupFunction(0x10F830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE120u; }
        if (ctx->pc != 0x1CE120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F830_0x10f830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE120u; }
        if (ctx->pc != 0x1CE120u) { return; }
    }
    ctx->pc = 0x1CE120u;
label_1ce120:
    // 0x1ce120: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CE120u;
    {
        const bool branch_taken_0x1ce120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce120) {
            ctx->pc = 0x1CE140u;
            goto label_1ce140;
        }
    }
    ctx->pc = 0x1CE128u;
    // 0x1ce128: 0xc073744  jal         func_1CDD10
    ctx->pc = 0x1CE128u;
    SET_GPR_U32(ctx, 31, 0x1CE130u);
    ctx->pc = 0x1CE12Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE128u;
            // 0x1ce12c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDD10u;
    if (runtime->hasFunction(0x1CDD10u)) {
        auto targetFn = runtime->lookupFunction(0x1CDD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE130u; }
        if (ctx->pc != 0x1CE130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CDD10_0x1cdd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE130u; }
        if (ctx->pc != 0x1CE130u) { return; }
    }
    ctx->pc = 0x1CE130u;
label_1ce130:
    // 0x1ce130: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x1CE130u;
    SET_GPR_U32(ctx, 31, 0x1CE138u);
    ctx->pc = 0x1CE134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE130u;
            // 0x1ce134: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE138u; }
        if (ctx->pc != 0x1CE138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE138u; }
        if (ctx->pc != 0x1CE138u) { return; }
    }
    ctx->pc = 0x1CE138u;
label_1ce138:
    // 0x1ce138: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1CE138u;
    {
        const bool branch_taken_0x1ce138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE13Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE138u;
            // 0x1ce13c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce138) {
            ctx->pc = 0x1CE168u;
            goto label_1ce168;
        }
    }
    ctx->pc = 0x1CE140u;
label_1ce140:
    // 0x1ce140: 0xc0430e8  jal         func_10C3A0
    ctx->pc = 0x1CE140u;
    SET_GPR_U32(ctx, 31, 0x1CE148u);
    ctx->pc = 0x1CE144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE140u;
            // 0x1ce144: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C3A0u;
    if (runtime->hasFunction(0x10C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x10C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE148u; }
        if (ctx->pc != 0x1CE148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C3A0_0x10c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE148u; }
        if (ctx->pc != 0x1CE148u) { return; }
    }
    ctx->pc = 0x1CE148u;
label_1ce148:
    // 0x1ce148: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x1CE148u;
    SET_GPR_U32(ctx, 31, 0x1CE150u);
    ctx->pc = 0x1CE14Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE148u;
            // 0x1ce14c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE150u; }
        if (ctx->pc != 0x1CE150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE150u; }
        if (ctx->pc != 0x1CE150u) { return; }
    }
    ctx->pc = 0x1CE150u;
label_1ce150:
    // 0x1ce150: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x1ce150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1ce154: 0x14730003  bne         $v1, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE154u;
    {
        const bool branch_taken_0x1ce154 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x1ce154) {
            ctx->pc = 0x1CE164u;
            goto label_1ce164;
        }
    }
    ctx->pc = 0x1CE15Cu;
    // 0x1ce15c: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x1CE15Cu;
    SET_GPR_U32(ctx, 31, 0x1CE164u);
    ctx->pc = 0x1CE160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE15Cu;
            // 0x1ce160: 0x8e240028  lw          $a0, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (runtime->hasFunction(0x10C370u)) {
        auto targetFn = runtime->lookupFunction(0x10C370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE164u; }
        if (ctx->pc != 0x1CE164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C370_0x10c370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE164u; }
        if (ctx->pc != 0x1CE164u) { return; }
    }
    ctx->pc = 0x1CE164u;
label_1ce164:
    // 0x1ce164: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1ce164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1ce168:
    // 0x1ce168: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1ce168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ce16c: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x1ce16cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ce170: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1ce170u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ce174: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1ce174u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ce178: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1ce178u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce17c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE17Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE17Cu;
            // 0x1ce180: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CE184u;
    // 0x1ce184: 0x0  nop
    ctx->pc = 0x1ce184u;
    // NOP
}
