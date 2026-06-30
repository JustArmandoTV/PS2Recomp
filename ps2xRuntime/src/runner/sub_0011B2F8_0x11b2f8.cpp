#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011B2F8
// Address: 0x11b2f8 - 0x11b550
void sub_0011B2F8_0x11b2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B2F8_0x11b2f8");
#endif

    switch (ctx->pc) {
        case 0x11b34cu: goto label_11b34c;
        case 0x11b364u: goto label_11b364;
        case 0x11b378u: goto label_11b378;
        case 0x11b388u: goto label_11b388;
        case 0x11b394u: goto label_11b394;
        case 0x11b3a4u: goto label_11b3a4;
        case 0x11b3b0u: goto label_11b3b0;
        case 0x11b3c0u: goto label_11b3c0;
        case 0x11b3ccu: goto label_11b3cc;
        case 0x11b3dcu: goto label_11b3dc;
        case 0x11b3e8u: goto label_11b3e8;
        case 0x11b3f8u: goto label_11b3f8;
        case 0x11b404u: goto label_11b404;
        case 0x11b428u: goto label_11b428;
        case 0x11b438u: goto label_11b438;
        case 0x11b448u: goto label_11b448;
        case 0x11b454u: goto label_11b454;
        case 0x11b460u: goto label_11b460;
        case 0x11b46cu: goto label_11b46c;
        case 0x11b474u: goto label_11b474;
        case 0x11b4ecu: goto label_11b4ec;
        case 0x11b4f8u: goto label_11b4f8;
        case 0x11b50cu: goto label_11b50c;
        case 0x11b51cu: goto label_11b51c;
        case 0x11b52cu: goto label_11b52c;
        case 0x11b538u: goto label_11b538;
        case 0x11b544u: goto label_11b544;
        default: break;
    }

    ctx->pc = 0x11b2f8u;

    // 0x11b2f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11b2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11b2fc: 0x3c0f7fff  lui         $t7, 0x7FFF
    ctx->pc = 0x11b2fcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32767 << 16));
    // 0x11b300: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11b300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11b304: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11b304u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11b308: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x11b308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x11b30c: 0x3c0e3e3f  lui         $t6, 0x3E3F
    ctx->pc = 0x11b30cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)15935 << 16));
    // 0x11b310: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x11b310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x11b314: 0x4883f  dsra32      $s1, $a0, 0
    ctx->pc = 0x11b314u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x11b318: 0x22f8824  and         $s1, $s1, $t7
    ctx->pc = 0x11b318u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 15));
    // 0x11b31c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11b31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11b320: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x11b320u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x11b324: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x11b324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x11b328: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x11b328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x11b32c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x11b32cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b330: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x11b330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x11b334: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x11b334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x11b338: 0x1d1702a  slt         $t6, $t6, $s1
    ctx->pc = 0x11b338u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x11b33c: 0x15c00006  bnez        $t6, . + 4 + (0x6 << 2)
    ctx->pc = 0x11B33Cu;
    {
        const bool branch_taken_0x11b33c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B33Cu;
            // 0x11b340: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b33c) {
            ctx->pc = 0x11B358u;
            goto label_11b358;
        }
    }
    ctx->pc = 0x11B344u;
    // 0x11b344: 0xc0497a2  jal         func_125E88
    ctx->pc = 0x11B344u;
    SET_GPR_U32(ctx, 31, 0x11B34Cu);
    ctx->pc = 0x125E88u;
    if (runtime->hasFunction(0x125E88u)) {
        auto targetFn = runtime->lookupFunction(0x125E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B34Cu; }
        if (ctx->pc != 0x11B34Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125E88_0x125e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B34Cu; }
        if (ctx->pc != 0x11B34Cu) { return; }
    }
    ctx->pc = 0x11B34Cu;
label_11b34c:
    // 0x11b34c: 0x240f03ff  addiu       $t7, $zero, 0x3FF
    ctx->pc = 0x11b34cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x11b350: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x11B350u;
    {
        const bool branch_taken_0x11b350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B350u;
            // 0x11b354: 0xf7d3c  dsll32      $t7, $t7, 20 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b350) {
            ctx->pc = 0x11B478u;
            goto label_11b478;
        }
    }
    ctx->pc = 0x11B358u;
label_11b358:
    // 0x11b358: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11b358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b35c: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11B35Cu;
    SET_GPR_U32(ctx, 31, 0x11B364u);
    ctx->pc = 0x11B360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B35Cu;
            // 0x11b360: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B364u; }
        if (ctx->pc != 0x11B364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B364u; }
        if (ctx->pc != 0x11B364u) { return; }
    }
    ctx->pc = 0x11B364u;
label_11b364:
    // 0x11b364: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11b364u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11b368: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11b368u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b36c: 0xdde5fca0  ld          $a1, -0x360($t7)
    ctx->pc = 0x11b36cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 4294966432)));
    // 0x11b370: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11B370u;
    SET_GPR_U32(ctx, 31, 0x11B378u);
    ctx->pc = 0x11B374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B370u;
            // 0x11b374: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B378u; }
        if (ctx->pc != 0x11B378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B378u; }
        if (ctx->pc != 0x11B378u) { return; }
    }
    ctx->pc = 0x11B378u;
label_11b378:
    // 0x11b378: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11b378u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11b37c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11b37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b380: 0xc04960a  jal         func_125828
    ctx->pc = 0x11B380u;
    SET_GPR_U32(ctx, 31, 0x11B388u);
    ctx->pc = 0x11B384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B380u;
            // 0x11b384: 0xdde5fca8  ld          $a1, -0x358($t7) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 4294966440)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B388u; }
        if (ctx->pc != 0x11B388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B388u; }
        if (ctx->pc != 0x11B388u) { return; }
    }
    ctx->pc = 0x11B388u;
label_11b388:
    // 0x11b388: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11b388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b38c: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11B38Cu;
    SET_GPR_U32(ctx, 31, 0x11B394u);
    ctx->pc = 0x11B390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B38Cu;
            // 0x11b390: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B394u; }
        if (ctx->pc != 0x11B394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B394u; }
        if (ctx->pc != 0x11B394u) { return; }
    }
    ctx->pc = 0x11B394u;
label_11b394:
    // 0x11b394: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11b394u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11b398: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11b398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b39c: 0xc04960a  jal         func_125828
    ctx->pc = 0x11B39Cu;
    SET_GPR_U32(ctx, 31, 0x11B3A4u);
    ctx->pc = 0x11B3A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B39Cu;
            // 0x11b3a0: 0xdde5fcb0  ld          $a1, -0x350($t7) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 4294966448)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B3A4u; }
        if (ctx->pc != 0x11B3A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B3A4u; }
        if (ctx->pc != 0x11B3A4u) { return; }
    }
    ctx->pc = 0x11B3A4u;
label_11b3a4:
    // 0x11b3a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11b3a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b3a8: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11B3A8u;
    SET_GPR_U32(ctx, 31, 0x11B3B0u);
    ctx->pc = 0x11B3ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B3A8u;
            // 0x11b3ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B3B0u; }
        if (ctx->pc != 0x11B3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B3B0u; }
        if (ctx->pc != 0x11B3B0u) { return; }
    }
    ctx->pc = 0x11B3B0u;
label_11b3b0:
    // 0x11b3b0: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11b3b0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11b3b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11b3b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b3b8: 0xc04960a  jal         func_125828
    ctx->pc = 0x11B3B8u;
    SET_GPR_U32(ctx, 31, 0x11B3C0u);
    ctx->pc = 0x11B3BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B3B8u;
            // 0x11b3bc: 0xdde5fcb8  ld          $a1, -0x348($t7) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 4294966456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B3C0u; }
        if (ctx->pc != 0x11B3C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B3C0u; }
        if (ctx->pc != 0x11B3C0u) { return; }
    }
    ctx->pc = 0x11B3C0u;
label_11b3c0:
    // 0x11b3c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11b3c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b3c4: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11B3C4u;
    SET_GPR_U32(ctx, 31, 0x11B3CCu);
    ctx->pc = 0x11B3C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B3C4u;
            // 0x11b3c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B3CCu; }
        if (ctx->pc != 0x11B3CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B3CCu; }
        if (ctx->pc != 0x11B3CCu) { return; }
    }
    ctx->pc = 0x11B3CCu;
label_11b3cc:
    // 0x11b3cc: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11b3ccu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11b3d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11b3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b3d4: 0xc04960a  jal         func_125828
    ctx->pc = 0x11B3D4u;
    SET_GPR_U32(ctx, 31, 0x11B3DCu);
    ctx->pc = 0x11B3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B3D4u;
            // 0x11b3d8: 0xdde5fcc0  ld          $a1, -0x340($t7) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 4294966464)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B3DCu; }
        if (ctx->pc != 0x11B3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B3DCu; }
        if (ctx->pc != 0x11B3DCu) { return; }
    }
    ctx->pc = 0x11B3DCu;
label_11b3dc:
    // 0x11b3dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11b3dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b3e0: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11B3E0u;
    SET_GPR_U32(ctx, 31, 0x11B3E8u);
    ctx->pc = 0x11B3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B3E0u;
            // 0x11b3e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B3E8u; }
        if (ctx->pc != 0x11B3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B3E8u; }
        if (ctx->pc != 0x11B3E8u) { return; }
    }
    ctx->pc = 0x11B3E8u;
label_11b3e8:
    // 0x11b3e8: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11b3e8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11b3ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11b3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b3f0: 0xc04960a  jal         func_125828
    ctx->pc = 0x11B3F0u;
    SET_GPR_U32(ctx, 31, 0x11B3F8u);
    ctx->pc = 0x11B3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B3F0u;
            // 0x11b3f4: 0xdde5fcc8  ld          $a1, -0x338($t7) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 4294966472)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B3F8u; }
        if (ctx->pc != 0x11B3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B3F8u; }
        if (ctx->pc != 0x11B3F8u) { return; }
    }
    ctx->pc = 0x11B3F8u;
label_11b3f8:
    // 0x11b3f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11b3f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b3fc: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11B3FCu;
    SET_GPR_U32(ctx, 31, 0x11B404u);
    ctx->pc = 0x11B400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B3FCu;
            // 0x11b400: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B404u; }
        if (ctx->pc != 0x11B404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B404u; }
        if (ctx->pc != 0x11B404u) { return; }
    }
    ctx->pc = 0x11B404u;
label_11b404:
    // 0x11b404: 0x3c0f3fd3  lui         $t7, 0x3FD3
    ctx->pc = 0x11b404u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16339 << 16));
    // 0x11b408: 0x35ef3332  ori         $t7, $t7, 0x3332
    ctx->pc = 0x11b408u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)13106);
    // 0x11b40c: 0x1f1782a  slt         $t7, $t7, $s1
    ctx->pc = 0x11b40cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x11b410: 0x15e00024  bnez        $t7, . + 4 + (0x24 << 2)
    ctx->pc = 0x11B410u;
    {
        const bool branch_taken_0x11b410 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B410u;
            // 0x11b414: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b410) {
            ctx->pc = 0x11B4A4u;
            goto label_11b4a4;
        }
    }
    ctx->pc = 0x11B418u;
    // 0x11b418: 0x240501ff  addiu       $a1, $zero, 0x1FF
    ctx->pc = 0x11b418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x11b41c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11b41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b420: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11B420u;
    SET_GPR_U32(ctx, 31, 0x11B428u);
    ctx->pc = 0x11B424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B420u;
            // 0x11b424: 0x52d7c  dsll32      $a1, $a1, 21 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B428u; }
        if (ctx->pc != 0x11B428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B428u; }
        if (ctx->pc != 0x11B428u) { return; }
    }
    ctx->pc = 0x11B428u;
label_11b428:
    // 0x11b428: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11b428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b42c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11b42cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b430: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11B430u;
    SET_GPR_U32(ctx, 31, 0x11B438u);
    ctx->pc = 0x11B434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B430u;
            // 0x11b434: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B438u; }
        if (ctx->pc != 0x11B438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B438u; }
        if (ctx->pc != 0x11B438u) { return; }
    }
    ctx->pc = 0x11B438u;
label_11b438:
    // 0x11b438: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11b438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b43c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11b43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b440: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11B440u;
    SET_GPR_U32(ctx, 31, 0x11B448u);
    ctx->pc = 0x11B444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B440u;
            // 0x11b444: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B448u; }
        if (ctx->pc != 0x11B448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B448u; }
        if (ctx->pc != 0x11B448u) { return; }
    }
    ctx->pc = 0x11B448u;
label_11b448:
    // 0x11b448: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11b448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b44c: 0xc049622  jal         func_125888
    ctx->pc = 0x11B44Cu;
    SET_GPR_U32(ctx, 31, 0x11B454u);
    ctx->pc = 0x11B450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B44Cu;
            // 0x11b450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B454u; }
        if (ctx->pc != 0x11B454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B454u; }
        if (ctx->pc != 0x11B454u) { return; }
    }
    ctx->pc = 0x11B454u;
label_11b454:
    // 0x11b454: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11b454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b458: 0xc049622  jal         func_125888
    ctx->pc = 0x11B458u;
    SET_GPR_U32(ctx, 31, 0x11B460u);
    ctx->pc = 0x11B45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B458u;
            // 0x11b45c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B460u; }
        if (ctx->pc != 0x11B460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B460u; }
        if (ctx->pc != 0x11B460u) { return; }
    }
    ctx->pc = 0x11B460u;
label_11b460:
    // 0x11b460: 0x240403ff  addiu       $a0, $zero, 0x3FF
    ctx->pc = 0x11b460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x11b464: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11b464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b468: 0x4253c  dsll32      $a0, $a0, 20
    ctx->pc = 0x11b468u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 20));
label_11b46c:
    // 0x11b46c: 0xc049622  jal         func_125888
    ctx->pc = 0x11B46Cu;
    SET_GPR_U32(ctx, 31, 0x11B474u);
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B474u; }
        if (ctx->pc != 0x11B474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B474u; }
        if (ctx->pc != 0x11B474u) { return; }
    }
    ctx->pc = 0x11B474u;
label_11b474:
    // 0x11b474: 0x40782d  daddu       $t7, $v0, $zero
    ctx->pc = 0x11b474u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11b478:
    // 0x11b478: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11b478u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b47c: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x11b47cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b480: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11b480u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11b484: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11b484u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b488: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x11b488u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11b48c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x11b48cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11b490: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x11b490u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11b494: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x11b494u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11b498: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x11b498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x11b49c: 0x3e00008  jr          $ra
    ctx->pc = 0x11B49Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B49Cu;
            // 0x11b4a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11B4A4u;
label_11b4a4:
    // 0x11b4a4: 0x24121fe9  addiu       $s2, $zero, 0x1FE9
    ctx->pc = 0x11b4a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8169));
    // 0x11b4a8: 0x3c0f3fe9  lui         $t7, 0x3FE9
    ctx->pc = 0x11b4a8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16361 << 16));
    // 0x11b4ac: 0x1f1782a  slt         $t7, $t7, $s1
    ctx->pc = 0x11b4acu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x11b4b0: 0x15e0000a  bnez        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x11B4B0u;
    {
        const bool branch_taken_0x11b4b0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B4B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B4B0u;
            // 0x11b4b4: 0x12947c  dsll32      $s2, $s2, 17 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b4b0) {
            ctx->pc = 0x11B4DCu;
            goto label_11b4dc;
        }
    }
    ctx->pc = 0x11B4B8u;
    // 0x11b4b8: 0x3c0fffe0  lui         $t7, 0xFFE0
    ctx->pc = 0x11b4b8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)65504 << 16));
    // 0x11b4bc: 0x15a83c  dsll32      $s5, $s5, 0
    ctx->pc = 0x11b4bcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 0));
    // 0x11b4c0: 0x22f7821  addu        $t7, $s1, $t7
    ctx->pc = 0x11b4c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 15)));
    // 0x11b4c4: 0x15a83e  dsrl32      $s5, $s5, 0
    ctx->pc = 0x11b4c4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> (32 + 0));
    // 0x11b4c8: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x11b4c8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x11b4cc: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x11b4ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11b4d0: 0x2afa825  or          $s5, $s5, $t7
    ctx->pc = 0x11b4d0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 15));
    // 0x11b4d4: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x11b4d4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x11b4d8: 0x2ae9024  and         $s2, $s5, $t6
    ctx->pc = 0x11b4d8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 21) & GPR_U64(ctx, 14));
label_11b4dc:
    // 0x11b4dc: 0x240501ff  addiu       $a1, $zero, 0x1FF
    ctx->pc = 0x11b4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    // 0x11b4e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11b4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b4e4: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11B4E4u;
    SET_GPR_U32(ctx, 31, 0x11B4ECu);
    ctx->pc = 0x11B4E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B4E4u;
            // 0x11b4e8: 0x52d7c  dsll32      $a1, $a1, 21 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B4ECu; }
        if (ctx->pc != 0x11B4ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B4ECu; }
        if (ctx->pc != 0x11B4ECu) { return; }
    }
    ctx->pc = 0x11B4ECu;
label_11b4ec:
    // 0x11b4ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11b4ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b4f0: 0xc049622  jal         func_125888
    ctx->pc = 0x11B4F0u;
    SET_GPR_U32(ctx, 31, 0x11B4F8u);
    ctx->pc = 0x11B4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B4F0u;
            // 0x11b4f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B4F8u; }
        if (ctx->pc != 0x11B4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B4F8u; }
        if (ctx->pc != 0x11B4F8u) { return; }
    }
    ctx->pc = 0x11B4F8u;
label_11b4f8:
    // 0x11b4f8: 0x240403ff  addiu       $a0, $zero, 0x3FF
    ctx->pc = 0x11b4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x11b4fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11b4fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b500: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11b500u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b504: 0xc049622  jal         func_125888
    ctx->pc = 0x11B504u;
    SET_GPR_U32(ctx, 31, 0x11B50Cu);
    ctx->pc = 0x11B508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B504u;
            // 0x11b508: 0x4253c  dsll32      $a0, $a0, 20 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B50Cu; }
        if (ctx->pc != 0x11B50Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B50Cu; }
        if (ctx->pc != 0x11B50Cu) { return; }
    }
    ctx->pc = 0x11B50Cu;
label_11b50c:
    // 0x11b50c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11b50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b510: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11b510u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b514: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11B514u;
    SET_GPR_U32(ctx, 31, 0x11B51Cu);
    ctx->pc = 0x11B518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B514u;
            // 0x11b518: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B51Cu; }
        if (ctx->pc != 0x11B51Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B51Cu; }
        if (ctx->pc != 0x11B51Cu) { return; }
    }
    ctx->pc = 0x11B51Cu;
label_11b51c:
    // 0x11b51c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11b51cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b520: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11b520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b524: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11B524u;
    SET_GPR_U32(ctx, 31, 0x11B52Cu);
    ctx->pc = 0x11B528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B524u;
            // 0x11b528: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B52Cu; }
        if (ctx->pc != 0x11B52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B52Cu; }
        if (ctx->pc != 0x11B52Cu) { return; }
    }
    ctx->pc = 0x11B52Cu;
label_11b52c:
    // 0x11b52c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11b52cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b530: 0xc049622  jal         func_125888
    ctx->pc = 0x11B530u;
    SET_GPR_U32(ctx, 31, 0x11B538u);
    ctx->pc = 0x11B534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B530u;
            // 0x11b534: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B538u; }
        if (ctx->pc != 0x11B538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B538u; }
        if (ctx->pc != 0x11B538u) { return; }
    }
    ctx->pc = 0x11B538u;
label_11b538:
    // 0x11b538: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11b538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b53c: 0xc049622  jal         func_125888
    ctx->pc = 0x11B53Cu;
    SET_GPR_U32(ctx, 31, 0x11B544u);
    ctx->pc = 0x11B540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B53Cu;
            // 0x11b540: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B544u; }
        if (ctx->pc != 0x11B544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B544u; }
        if (ctx->pc != 0x11B544u) { return; }
    }
    ctx->pc = 0x11B544u;
label_11b544:
    // 0x11b544: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11b544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b548: 0x1000ffc8  b           . + 4 + (-0x38 << 2)
    ctx->pc = 0x11B548u;
    {
        const bool branch_taken_0x11b548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B54Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B548u;
            // 0x11b54c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b548) {
            ctx->pc = 0x11B46Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11b46c;
        }
    }
    ctx->pc = 0x11B550u;
}
