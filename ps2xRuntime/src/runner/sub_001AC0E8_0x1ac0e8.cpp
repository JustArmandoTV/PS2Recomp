#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AC0E8
// Address: 0x1ac0e8 - 0x1ac3b0
void sub_001AC0E8_0x1ac0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AC0E8_0x1ac0e8");
#endif

    switch (ctx->pc) {
        case 0x1ac140u: goto label_1ac140;
        case 0x1ac150u: goto label_1ac150;
        case 0x1ac164u: goto label_1ac164;
        case 0x1ac178u: goto label_1ac178;
        case 0x1ac1acu: goto label_1ac1ac;
        case 0x1ac1dcu: goto label_1ac1dc;
        case 0x1ac1f0u: goto label_1ac1f0;
        case 0x1ac1f8u: goto label_1ac1f8;
        case 0x1ac208u: goto label_1ac208;
        case 0x1ac220u: goto label_1ac220;
        case 0x1ac230u: goto label_1ac230;
        case 0x1ac250u: goto label_1ac250;
        case 0x1ac260u: goto label_1ac260;
        case 0x1ac290u: goto label_1ac290;
        case 0x1ac2a8u: goto label_1ac2a8;
        case 0x1ac314u: goto label_1ac314;
        case 0x1ac320u: goto label_1ac320;
        case 0x1ac330u: goto label_1ac330;
        case 0x1ac350u: goto label_1ac350;
        case 0x1ac370u: goto label_1ac370;
        default: break;
    }

    ctx->pc = 0x1ac0e8u;

    // 0x1ac0e8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1ac0e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1ac0ec: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1ac0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x1ac0f0: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x1ac0f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac0f4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1ac0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1ac0f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ac0f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac0fc: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1ac0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1ac100: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1ac100u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac104: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1ac104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1ac108: 0x26140950  addiu       $s4, $s0, 0x950
    ctx->pc = 0x1ac108u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 2384));
    // 0x1ac10c: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x1ac10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x1ac110: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1ac110u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac114: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x1ac114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x1ac118: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x1ac118u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac11c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1ac11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1ac120: 0x26022028  addiu       $v0, $s0, 0x2028
    ctx->pc = 0x1ac120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8232));
    // 0x1ac124: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1ac124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1ac128: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1ac128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1ac12c: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x1ac12cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x1ac130: 0x8c520010  lw          $s2, 0x10($v0)
    ctx->pc = 0x1ac130u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1ac134: 0x8c530008  lw          $s3, 0x8($v0)
    ctx->pc = 0x1ac134u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ac138: 0xc06c818  jal         func_1B2060
    ctx->pc = 0x1AC138u;
    SET_GPR_U32(ctx, 31, 0x1AC140u);
    ctx->pc = 0x1AC13Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC138u;
            // 0x1ac13c: 0xae800028  sw          $zero, 0x28($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2060u;
    if (runtime->hasFunction(0x1B2060u)) {
        auto targetFn = runtime->lookupFunction(0x1B2060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC140u; }
        if (ctx->pc != 0x1AC140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2060_0x1b2060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC140u; }
        if (ctx->pc != 0x1AC140u) { return; }
    }
    ctx->pc = 0x1AC140u;
label_1ac140:
    // 0x1ac140: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1AC140u;
    {
        const bool branch_taken_0x1ac140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ac140) {
            ctx->pc = 0x1AC144u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC140u;
            // 0x1ac144: 0x8e630078  lw          $v1, 0x78($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AC180u;
            goto label_1ac180;
        }
    }
    ctx->pc = 0x1AC148u;
    // 0x1ac148: 0xc06b20c  jal         func_1AC830
    ctx->pc = 0x1AC148u;
    SET_GPR_U32(ctx, 31, 0x1AC150u);
    ctx->pc = 0x1AC14Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC148u;
            // 0x1ac14c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AC830u;
    if (runtime->hasFunction(0x1AC830u)) {
        auto targetFn = runtime->lookupFunction(0x1AC830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC150u; }
        if (ctx->pc != 0x1AC150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AC830_0x1ac830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC150u; }
        if (ctx->pc != 0x1AC150u) { return; }
    }
    ctx->pc = 0x1AC150u;
label_1ac150:
    // 0x1ac150: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ac150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ac154: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AC154u;
    {
        const bool branch_taken_0x1ac154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ac154) {
            ctx->pc = 0x1AC158u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC154u;
            // 0x1ac158: 0xae830028  sw          $v1, 0x28($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AC170u;
            goto label_1ac170;
        }
    }
    ctx->pc = 0x1AC15Cu;
    // 0x1ac15c: 0xc06c0a4  jal         func_1B0290
    ctx->pc = 0x1AC15Cu;
    SET_GPR_U32(ctx, 31, 0x1AC164u);
    ctx->pc = 0x1AC160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC15Cu;
            // 0x1ac160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0290u;
    if (runtime->hasFunction(0x1B0290u)) {
        auto targetFn = runtime->lookupFunction(0x1B0290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC164u; }
        if (ctx->pc != 0x1AC164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0290_0x1b0290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC164u; }
        if (ctx->pc != 0x1AC164u) { return; }
    }
    ctx->pc = 0x1AC164u;
label_1ac164:
    // 0x1ac164: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x1AC164u;
    {
        const bool branch_taken_0x1ac164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC164u;
            // 0x1ac168: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac164) {
            ctx->pc = 0x1AC384u;
            goto label_1ac384;
        }
    }
    ctx->pc = 0x1AC16Cu;
    // 0x1ac16c: 0x0  nop
    ctx->pc = 0x1ac16cu;
    // NOP
label_1ac170:
    // 0x1ac170: 0xc06af68  jal         func_1ABDA0
    ctx->pc = 0x1AC170u;
    SET_GPR_U32(ctx, 31, 0x1AC178u);
    ctx->pc = 0x1AC174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC170u;
            // 0x1ac174: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ABDA0u;
    if (runtime->hasFunction(0x1ABDA0u)) {
        auto targetFn = runtime->lookupFunction(0x1ABDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC178u; }
        if (ctx->pc != 0x1AC178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ABDA0_0x1abda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC178u; }
        if (ctx->pc != 0x1AC178u) { return; }
    }
    ctx->pc = 0x1AC178u;
label_1ac178:
    // 0x1ac178: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x1AC178u;
    {
        const bool branch_taken_0x1ac178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC178u;
            // 0x1ac17c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac178) {
            ctx->pc = 0x1AC388u;
            goto label_1ac388;
        }
    }
    ctx->pc = 0x1AC180u;
label_1ac180:
    // 0x1ac180: 0x240200cc  addiu       $v0, $zero, 0xCC
    ctx->pc = 0x1ac180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
    // 0x1ac184: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AC184u;
    {
        const bool branch_taken_0x1ac184 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ac184) {
            ctx->pc = 0x1AC188u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC184u;
            // 0x1ac188: 0x323100cc  andi        $s1, $s1, 0xCC (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)204);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AC19Cu;
            goto label_1ac19c;
        }
    }
    ctx->pc = 0x1AC18Cu;
    // 0x1ac18c: 0x8e620170  lw          $v0, 0x170($s3)
    ctx->pc = 0x1ac18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 368)));
    // 0x1ac190: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AC190u;
    {
        const bool branch_taken_0x1ac190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC190u;
            // 0x1ac194: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac190) {
            ctx->pc = 0x1AC1A0u;
            goto label_1ac1a0;
        }
    }
    ctx->pc = 0x1AC198u;
    // 0x1ac198: 0x323100cc  andi        $s1, $s1, 0xCC
    ctx->pc = 0x1ac198u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)204);
label_1ac19c:
    // 0x1ac19c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1ac19cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ac1a0:
    // 0x1ac1a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac1a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac1a4: 0xc06978c  jal         func_1A5E30
    ctx->pc = 0x1AC1A4u;
    SET_GPR_U32(ctx, 31, 0x1AC1ACu);
    ctx->pc = 0x1AC1A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC1A4u;
            // 0x1ac1a8: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5E30u;
    if (runtime->hasFunction(0x1A5E30u)) {
        auto targetFn = runtime->lookupFunction(0x1A5E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC1ACu; }
        if (ctx->pc != 0x1AC1ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5E30_0x1a5e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC1ACu; }
        if (ctx->pc != 0x1AC1ACu) { return; }
    }
    ctx->pc = 0x1AC1ACu;
label_1ac1ac:
    // 0x1ac1ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ac1acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac1b0: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AC1B0u;
    {
        const bool branch_taken_0x1ac1b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC1B0u;
            // 0x1ac1b4: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac1b0) {
            ctx->pc = 0x1AC1C0u;
            goto label_1ac1c0;
        }
    }
    ctx->pc = 0x1AC1B8u;
    // 0x1ac1b8: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x1AC1B8u;
    {
        const bool branch_taken_0x1ac1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC1B8u;
            // 0x1ac1bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac1b8) {
            ctx->pc = 0x1AC384u;
            goto label_1ac384;
        }
    }
    ctx->pc = 0x1AC1C0u;
label_1ac1c0:
    // 0x1ac1c0: 0x50600071  beql        $v1, $zero, . + 4 + (0x71 << 2)
    ctx->pc = 0x1AC1C0u;
    {
        const bool branch_taken_0x1ac1c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac1c0) {
            ctx->pc = 0x1AC1C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC1C0u;
            // 0x1ac1c4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AC388u;
            goto label_1ac388;
        }
    }
    ctx->pc = 0x1AC1C8u;
    // 0x1ac1c8: 0x322200c8  andi        $v0, $s1, 0xC8
    ctx->pc = 0x1ac1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)200);
    // 0x1ac1cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AC1CCu;
    {
        const bool branch_taken_0x1ac1cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC1D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC1CCu;
            // 0x1ac1d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac1cc) {
            ctx->pc = 0x1AC1DCu;
            goto label_1ac1dc;
        }
    }
    ctx->pc = 0x1AC1D4u;
    // 0x1ac1d4: 0xc06c0ac  jal         func_1B02B0
    ctx->pc = 0x1AC1D4u;
    SET_GPR_U32(ctx, 31, 0x1AC1DCu);
    ctx->pc = 0x1AC1D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC1D4u;
            // 0x1ac1d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B02B0u;
    if (runtime->hasFunction(0x1B02B0u)) {
        auto targetFn = runtime->lookupFunction(0x1B02B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC1DCu; }
        if (ctx->pc != 0x1AC1DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B02B0_0x1b02b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC1DCu; }
        if (ctx->pc != 0x1AC1DCu) { return; }
    }
    ctx->pc = 0x1AC1DCu;
label_1ac1dc:
    // 0x1ac1dc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1ac1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1ac1e0: 0x16220015  bne         $s1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1AC1E0u;
    {
        const bool branch_taken_0x1ac1e0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ac1e0) {
            ctx->pc = 0x1AC238u;
            goto label_1ac238;
        }
    }
    ctx->pc = 0x1AC1E8u;
    // 0x1ac1e8: 0xc06b100  jal         func_1AC400
    ctx->pc = 0x1AC1E8u;
    SET_GPR_U32(ctx, 31, 0x1AC1F0u);
    ctx->pc = 0x1AC1ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC1E8u;
            // 0x1ac1ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AC400u;
    if (runtime->hasFunction(0x1AC400u)) {
        auto targetFn = runtime->lookupFunction(0x1AC400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC1F0u; }
        if (ctx->pc != 0x1AC1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AC400_0x1ac400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC1F0u; }
        if (ctx->pc != 0x1AC1F0u) { return; }
    }
    ctx->pc = 0x1AC1F0u;
label_1ac1f0:
    // 0x1ac1f0: 0xc069a18  jal         func_1A6860
    ctx->pc = 0x1AC1F0u;
    SET_GPR_U32(ctx, 31, 0x1AC1F8u);
    ctx->pc = 0x1AC1F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC1F0u;
            // 0x1ac1f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6860u;
    if (runtime->hasFunction(0x1A6860u)) {
        auto targetFn = runtime->lookupFunction(0x1A6860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC1F8u; }
        if (ctx->pc != 0x1AC1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6860_0x1a6860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC1F8u; }
        if (ctx->pc != 0x1AC1F8u) { return; }
    }
    ctx->pc = 0x1AC1F8u;
label_1ac1f8:
    // 0x1ac1f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AC1F8u;
    {
        const bool branch_taken_0x1ac1f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC1F8u;
            // 0x1ac1fc: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac1f8) {
            ctx->pc = 0x1AC218u;
            goto label_1ac218;
        }
    }
    ctx->pc = 0x1AC200u;
    // 0x1ac200: 0xc06b12e  jal         func_1AC4B8
    ctx->pc = 0x1AC200u;
    SET_GPR_U32(ctx, 31, 0x1AC208u);
    ctx->pc = 0x1AC204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC200u;
            // 0x1ac204: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AC4B8u;
    if (runtime->hasFunction(0x1AC4B8u)) {
        auto targetFn = runtime->lookupFunction(0x1AC4B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC208u; }
        if (ctx->pc != 0x1AC208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AC4B8_0x1ac4b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC208u; }
        if (ctx->pc != 0x1AC208u) { return; }
    }
    ctx->pc = 0x1AC208u;
label_1ac208:
    // 0x1ac208: 0x5440005e  bnel        $v0, $zero, . + 4 + (0x5E << 2)
    ctx->pc = 0x1AC208u;
    {
        const bool branch_taken_0x1ac208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ac208) {
            ctx->pc = 0x1AC20Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC208u;
            // 0x1ac20c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AC384u;
            goto label_1ac384;
        }
    }
    ctx->pc = 0x1AC210u;
    // 0x1ac210: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x1AC210u;
    {
        const bool branch_taken_0x1ac210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC210u;
            // 0x1ac214: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac210) {
            ctx->pc = 0x1AC37Cu;
            goto label_1ac37c;
        }
    }
    ctx->pc = 0x1AC218u;
label_1ac218:
    // 0x1ac218: 0xc069a32  jal         func_1A68C8
    ctx->pc = 0x1AC218u;
    SET_GPR_U32(ctx, 31, 0x1AC220u);
    ctx->pc = 0x1AC21Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC218u;
            // 0x1ac21c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C8u;
    if (runtime->hasFunction(0x1A68C8u)) {
        auto targetFn = runtime->lookupFunction(0x1A68C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC220u; }
        if (ctx->pc != 0x1AC220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A68C8_0x1a68c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC220u; }
        if (ctx->pc != 0x1AC220u) { return; }
    }
    ctx->pc = 0x1AC220u;
label_1ac220:
    // 0x1ac220: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AC220u;
    {
        const bool branch_taken_0x1ac220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC220u;
            // 0x1ac224: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac220) {
            ctx->pc = 0x1AC238u;
            goto label_1ac238;
        }
    }
    ctx->pc = 0x1AC228u;
    // 0x1ac228: 0xc06b1b8  jal         func_1AC6E0
    ctx->pc = 0x1AC228u;
    SET_GPR_U32(ctx, 31, 0x1AC230u);
    ctx->pc = 0x1AC22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC228u;
            // 0x1ac22c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AC6E0u;
    if (runtime->hasFunction(0x1AC6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1AC6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC230u; }
        if (ctx->pc != 0x1AC230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AC6E0_0x1ac6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC230u; }
        if (ctx->pc != 0x1AC230u) { return; }
    }
    ctx->pc = 0x1AC230u;
label_1ac230:
    // 0x1ac230: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x1AC230u;
    {
        const bool branch_taken_0x1ac230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC230u;
            // 0x1ac234: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac230) {
            ctx->pc = 0x1AC37Cu;
            goto label_1ac37c;
        }
    }
    ctx->pc = 0x1AC238u;
label_1ac238:
    // 0x1ac238: 0x16e00011  bnez        $s7, . + 4 + (0x11 << 2)
    ctx->pc = 0x1AC238u;
    {
        const bool branch_taken_0x1ac238 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC238u;
            // 0x1ac23c: 0x3222004c  andi        $v0, $s1, 0x4C (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)76);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac238) {
            ctx->pc = 0x1AC280u;
            goto label_1ac280;
        }
    }
    ctx->pc = 0x1AC240u;
    // 0x1ac240: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac244: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1ac244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac248: 0xc06b1fa  jal         func_1AC7E8
    ctx->pc = 0x1AC248u;
    SET_GPR_U32(ctx, 31, 0x1AC250u);
    ctx->pc = 0x1AC24Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC248u;
            // 0x1ac24c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AC7E8u;
    if (runtime->hasFunction(0x1AC7E8u)) {
        auto targetFn = runtime->lookupFunction(0x1AC7E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC250u; }
        if (ctx->pc != 0x1AC250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AC7E8_0x1ac7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC250u; }
        if (ctx->pc != 0x1AC250u) { return; }
    }
    ctx->pc = 0x1AC250u;
label_1ac250:
    // 0x1ac250: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AC250u;
    {
        const bool branch_taken_0x1ac250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac250) {
            ctx->pc = 0x1AC254u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC250u;
            // 0x1ac254: 0x2ac20005  slti        $v0, $s6, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AC268u;
            goto label_1ac268;
        }
    }
    ctx->pc = 0x1AC258u;
    // 0x1ac258: 0xc06c0a4  jal         func_1B0290
    ctx->pc = 0x1AC258u;
    SET_GPR_U32(ctx, 31, 0x1AC260u);
    ctx->pc = 0x1AC25Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC258u;
            // 0x1ac25c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0290u;
    if (runtime->hasFunction(0x1B0290u)) {
        auto targetFn = runtime->lookupFunction(0x1B0290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC260u; }
        if (ctx->pc != 0x1AC260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0290_0x1b0290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC260u; }
        if (ctx->pc != 0x1AC260u) { return; }
    }
    ctx->pc = 0x1AC260u;
label_1ac260:
    // 0x1ac260: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1AC260u;
    {
        const bool branch_taken_0x1ac260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC260u;
            // 0x1ac264: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac260) {
            ctx->pc = 0x1AC384u;
            goto label_1ac384;
        }
    }
    ctx->pc = 0x1AC268u;
label_1ac268:
    // 0x1ac268: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AC268u;
    {
        const bool branch_taken_0x1ac268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC26Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC268u;
            // 0x1ac26c: 0x3222004c  andi        $v0, $s1, 0x4C (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)76);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac268) {
            ctx->pc = 0x1AC280u;
            goto label_1ac280;
        }
    }
    ctx->pc = 0x1AC270u;
    // 0x1ac270: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ac270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ac274: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x1AC274u;
    {
        const bool branch_taken_0x1ac274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC274u;
            // 0x1ac278: 0xae820028  sw          $v0, 0x28($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac274) {
            ctx->pc = 0x1AC380u;
            goto label_1ac380;
        }
    }
    ctx->pc = 0x1AC27Cu;
    // 0x1ac27c: 0x0  nop
    ctx->pc = 0x1ac27cu;
    // NOP
label_1ac280:
    // 0x1ac280: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1AC280u;
    {
        const bool branch_taken_0x1ac280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC280u;
            // 0x1ac284: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac280) {
            ctx->pc = 0x1AC300u;
            goto label_1ac300;
        }
    }
    ctx->pc = 0x1AC288u;
    // 0x1ac288: 0xc06b0ec  jal         func_1AC3B0
    ctx->pc = 0x1AC288u;
    SET_GPR_U32(ctx, 31, 0x1AC290u);
    ctx->pc = 0x1AC28Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC288u;
            // 0x1ac28c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AC3B0u;
    if (runtime->hasFunction(0x1AC3B0u)) {
        auto targetFn = runtime->lookupFunction(0x1AC3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC290u; }
        if (ctx->pc != 0x1AC290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AC3B0_0x1ac3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC290u; }
        if (ctx->pc != 0x1AC290u) { return; }
    }
    ctx->pc = 0x1AC290u;
label_1ac290:
    // 0x1ac290: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac294: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x1ac294u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ac298: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1ac298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac29c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1ac29cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac2a0: 0xc06b238  jal         func_1AC8E0
    ctx->pc = 0x1AC2A0u;
    SET_GPR_U32(ctx, 31, 0x1AC2A8u);
    ctx->pc = 0x1AC2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC2A0u;
            // 0x1ac2a4: 0x27a80014  addiu       $t0, $sp, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AC8E0u;
    if (runtime->hasFunction(0x1AC8E0u)) {
        auto targetFn = runtime->lookupFunction(0x1AC8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC2A8u; }
        if (ctx->pc != 0x1AC2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AC8E0_0x1ac8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC2A8u; }
        if (ctx->pc != 0x1AC2A8u) { return; }
    }
    ctx->pc = 0x1AC2A8u;
label_1ac2a8:
    // 0x1ac2a8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ac2a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac2ac: 0x56400036  bnel        $s2, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x1AC2ACu;
    {
        const bool branch_taken_0x1ac2ac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ac2ac) {
            ctx->pc = 0x1AC2B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC2ACu;
            // 0x1ac2b0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AC388u;
            goto label_1ac388;
        }
    }
    ctx->pc = 0x1AC2B4u;
    // 0x1ac2b4: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1ac2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1ac2b8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AC2B8u;
    {
        const bool branch_taken_0x1ac2b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC2B8u;
            // 0x1ac2bc: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac2b8) {
            ctx->pc = 0x1AC2E0u;
            goto label_1ac2e0;
        }
    }
    ctx->pc = 0x1AC2C0u;
    // 0x1ac2c0: 0x8e620078  lw          $v0, 0x78($s3)
    ctx->pc = 0x1ac2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x1ac2c4: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x1ac2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x1ac2c8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AC2C8u;
    {
        const bool branch_taken_0x1ac2c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC2CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC2C8u;
            // 0x1ac2cc: 0x240200cc  addiu       $v0, $zero, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac2c8) {
            ctx->pc = 0x1AC2D4u;
            goto label_1ac2d4;
        }
    }
    ctx->pc = 0x1AC2D0u;
    // 0x1ac2d0: 0xae620078  sw          $v0, 0x78($s3)
    ctx->pc = 0x1ac2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 2));
label_1ac2d4:
    // 0x1ac2d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ac2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ac2d8: 0xae620170  sw          $v0, 0x170($s3)
    ctx->pc = 0x1ac2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 368), GPR_U32(ctx, 2));
    // 0x1ac2dc: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1ac2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1ac2e0:
    // 0x1ac2e0: 0x16220026  bne         $s1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1AC2E0u;
    {
        const bool branch_taken_0x1ac2e0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AC2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC2E0u;
            // 0x1ac2e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac2e0) {
            ctx->pc = 0x1AC37Cu;
            goto label_1ac37c;
        }
    }
    ctx->pc = 0x1AC2E8u;
    // 0x1ac2e8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1ac2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1ac2ec: 0x14620023  bne         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1AC2ECu;
    {
        const bool branch_taken_0x1ac2ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AC2F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC2ECu;
            // 0x1ac2f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac2ec) {
            ctx->pc = 0x1AC37Cu;
            goto label_1ac37c;
        }
    }
    ctx->pc = 0x1AC2F4u;
    // 0x1ac2f4: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x1ac2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1ac2f8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1AC2F8u;
    {
        const bool branch_taken_0x1ac2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC2F8u;
            // 0x1ac2fc: 0xae620078  sw          $v0, 0x78($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac2f8) {
            ctx->pc = 0x1AC378u;
            goto label_1ac378;
        }
    }
    ctx->pc = 0x1AC300u;
label_1ac300:
    // 0x1ac300: 0x32220002  andi        $v0, $s1, 0x2
    ctx->pc = 0x1ac300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x1ac304: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1AC304u;
    {
        const bool branch_taken_0x1ac304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC304u;
            // 0x1ac308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac304) {
            ctx->pc = 0x1AC358u;
            goto label_1ac358;
        }
    }
    ctx->pc = 0x1AC30Cu;
    // 0x1ac30c: 0xc06b0ec  jal         func_1AC3B0
    ctx->pc = 0x1AC30Cu;
    SET_GPR_U32(ctx, 31, 0x1AC314u);
    ctx->pc = 0x1AC310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC30Cu;
            // 0x1ac310: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AC3B0u;
    if (runtime->hasFunction(0x1AC3B0u)) {
        auto targetFn = runtime->lookupFunction(0x1AC3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC314u; }
        if (ctx->pc != 0x1AC314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AC3B0_0x1ac3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC314u; }
        if (ctx->pc != 0x1AC314u) { return; }
    }
    ctx->pc = 0x1AC314u;
label_1ac314:
    // 0x1ac314: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac318: 0xc06b794  jal         func_1ADE50
    ctx->pc = 0x1AC318u;
    SET_GPR_U32(ctx, 31, 0x1AC320u);
    ctx->pc = 0x1AC31Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC318u;
            // 0x1ac31c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ADE50u;
    if (runtime->hasFunction(0x1ADE50u)) {
        auto targetFn = runtime->lookupFunction(0x1ADE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC320u; }
        if (ctx->pc != 0x1AC320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ADE50_0x1ade50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC320u; }
        if (ctx->pc != 0x1AC320u) { return; }
    }
    ctx->pc = 0x1AC320u;
label_1ac320:
    // 0x1ac320: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AC320u;
    {
        const bool branch_taken_0x1ac320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC320u;
            // 0x1ac324: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac320) {
            ctx->pc = 0x1AC348u;
            goto label_1ac348;
        }
    }
    ctx->pc = 0x1AC328u;
    // 0x1ac328: 0xc06b8ee  jal         func_1AE3B8
    ctx->pc = 0x1AC328u;
    SET_GPR_U32(ctx, 31, 0x1AC330u);
    ctx->pc = 0x1AC32Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC328u;
            // 0x1ac32c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE3B8u;
    if (runtime->hasFunction(0x1AE3B8u)) {
        auto targetFn = runtime->lookupFunction(0x1AE3B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC330u; }
        if (ctx->pc != 0x1AC330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE3B8_0x1ae3b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC330u; }
        if (ctx->pc != 0x1AC330u) { return; }
    }
    ctx->pc = 0x1AC330u;
label_1ac330:
    // 0x1ac330: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ac330u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac334: 0x56400013  bnel        $s2, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AC334u;
    {
        const bool branch_taken_0x1ac334 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ac334) {
            ctx->pc = 0x1AC338u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC334u;
            // 0x1ac338: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AC384u;
            goto label_1ac384;
        }
    }
    ctx->pc = 0x1AC33Cu;
    // 0x1ac33c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1AC33Cu;
    {
        const bool branch_taken_0x1ac33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC33Cu;
            // 0x1ac340: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac33c) {
            ctx->pc = 0x1AC37Cu;
            goto label_1ac37c;
        }
    }
    ctx->pc = 0x1AC344u;
    // 0x1ac344: 0x0  nop
    ctx->pc = 0x1ac344u;
    // NOP
label_1ac348:
    // 0x1ac348: 0xc06b948  jal         func_1AE520
    ctx->pc = 0x1AC348u;
    SET_GPR_U32(ctx, 31, 0x1AC350u);
    ctx->pc = 0x1AC34Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC348u;
            // 0x1ac34c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE520u;
    if (runtime->hasFunction(0x1AE520u)) {
        auto targetFn = runtime->lookupFunction(0x1AE520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC350u; }
        if (ctx->pc != 0x1AC350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AE520_0x1ae520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC350u; }
        if (ctx->pc != 0x1AC350u) { return; }
    }
    ctx->pc = 0x1AC350u;
label_1ac350:
    // 0x1ac350: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1AC350u;
    {
        const bool branch_taken_0x1ac350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC350u;
            // 0x1ac354: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac350) {
            ctx->pc = 0x1AC380u;
            goto label_1ac380;
        }
    }
    ctx->pc = 0x1AC358u;
label_1ac358:
    // 0x1ac358: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1ac358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1ac35c: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AC35Cu;
    {
        const bool branch_taken_0x1ac35c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AC360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC35Cu;
            // 0x1ac360: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac35c) {
            ctx->pc = 0x1AC380u;
            goto label_1ac380;
        }
    }
    ctx->pc = 0x1AC364u;
    // 0x1ac364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ac364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac368: 0xc06bc30  jal         func_1AF0C0
    ctx->pc = 0x1AC368u;
    SET_GPR_U32(ctx, 31, 0x1AC370u);
    ctx->pc = 0x1AC36Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC368u;
            // 0x1ac36c: 0x240600cc  addiu       $a2, $zero, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF0C0u;
    if (runtime->hasFunction(0x1AF0C0u)) {
        auto targetFn = runtime->lookupFunction(0x1AF0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC370u; }
        if (ctx->pc != 0x1AC370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AF0C0_0x1af0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AC370u; }
        if (ctx->pc != 0x1AC370u) { return; }
    }
    ctx->pc = 0x1AC370u;
label_1ac370:
    // 0x1ac370: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AC370u;
    {
        const bool branch_taken_0x1ac370 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1AC374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC370u;
            // 0x1ac374: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac370) {
            ctx->pc = 0x1AC384u;
            goto label_1ac384;
        }
    }
    ctx->pc = 0x1AC378u;
label_1ac378:
    // 0x1ac378: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ac378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ac37c:
    // 0x1ac37c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1ac37cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_1ac380:
    // 0x1ac380: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1ac380u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ac384:
    // 0x1ac384: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1ac384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ac388:
    // 0x1ac388: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1ac388u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ac38c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1ac38cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ac390: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1ac390u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ac394: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1ac394u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ac398: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1ac398u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ac39c: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x1ac39cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ac3a0: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x1ac3a0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ac3a4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1ac3a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ac3a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC3A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AC3A8u;
            // 0x1ac3ac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AC3B0u;
}
