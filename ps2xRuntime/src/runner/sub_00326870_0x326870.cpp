#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00326870
// Address: 0x326870 - 0x326950
void sub_00326870_0x326870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326870_0x326870");
#endif

    switch (ctx->pc) {
        case 0x3268a0u: goto label_3268a0;
        case 0x3268b8u: goto label_3268b8;
        case 0x3268d0u: goto label_3268d0;
        case 0x3268e4u: goto label_3268e4;
        case 0x3268fcu: goto label_3268fc;
        case 0x326914u: goto label_326914;
        case 0x326928u: goto label_326928;
        default: break;
    }

    ctx->pc = 0x326870u;

    // 0x326870: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x326870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x326874: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x326874u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x326878: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x326878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x32687c: 0x24a5cc90  addiu       $a1, $a1, -0x3370
    ctx->pc = 0x32687cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954128));
    // 0x326880: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x326880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x326884: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x326884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x326888: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x326888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32688c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32688cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x326890: 0x24900164  addiu       $s0, $a0, 0x164
    ctx->pc = 0x326890u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 356));
    // 0x326894: 0x8c840168  lw          $a0, 0x168($a0)
    ctx->pc = 0x326894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 360)));
    // 0x326898: 0xc123944  jal         func_48E510
    ctx->pc = 0x326898u;
    SET_GPR_U32(ctx, 31, 0x3268A0u);
    ctx->pc = 0x32689Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326898u;
            // 0x32689c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3268A0u; }
        if (ctx->pc != 0x3268A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3268A0u; }
        if (ctx->pc != 0x3268A0u) { return; }
    }
    ctx->pc = 0x3268A0u;
label_3268a0:
    // 0x3268a0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3268a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3268a4: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x3268a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x3268a8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3268a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3268ac: 0x24a5cd10  addiu       $a1, $a1, -0x32F0
    ctx->pc = 0x3268acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954256));
    // 0x3268b0: 0xc123944  jal         func_48E510
    ctx->pc = 0x3268B0u;
    SET_GPR_U32(ctx, 31, 0x3268B8u);
    ctx->pc = 0x3268B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3268B0u;
            // 0x3268b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3268B8u; }
        if (ctx->pc != 0x3268B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3268B8u; }
        if (ctx->pc != 0x3268B8u) { return; }
    }
    ctx->pc = 0x3268B8u;
label_3268b8:
    // 0x3268b8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3268b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3268bc: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x3268bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x3268c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3268c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3268c4: 0x24a5cd10  addiu       $a1, $a1, -0x32F0
    ctx->pc = 0x3268c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954256));
    // 0x3268c8: 0xc123944  jal         func_48E510
    ctx->pc = 0x3268C8u;
    SET_GPR_U32(ctx, 31, 0x3268D0u);
    ctx->pc = 0x3268CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3268C8u;
            // 0x3268cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3268D0u; }
        if (ctx->pc != 0x3268D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3268D0u; }
        if (ctx->pc != 0x3268D0u) { return; }
    }
    ctx->pc = 0x3268D0u;
label_3268d0:
    // 0x3268d0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3268d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3268d4: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x3268d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x3268d8: 0x24a5cd20  addiu       $a1, $a1, -0x32E0
    ctx->pc = 0x3268d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954272));
    // 0x3268dc: 0xc123944  jal         func_48E510
    ctx->pc = 0x3268DCu;
    SET_GPR_U32(ctx, 31, 0x3268E4u);
    ctx->pc = 0x3268E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3268DCu;
            // 0x3268e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3268E4u; }
        if (ctx->pc != 0x3268E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3268E4u; }
        if (ctx->pc != 0x3268E4u) { return; }
    }
    ctx->pc = 0x3268E4u;
label_3268e4:
    // 0x3268e4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3268e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3268e8: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x3268e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x3268ec: 0x24a5cd28  addiu       $a1, $a1, -0x32D8
    ctx->pc = 0x3268ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954280));
    // 0x3268f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3268f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3268f4: 0xc123944  jal         func_48E510
    ctx->pc = 0x3268F4u;
    SET_GPR_U32(ctx, 31, 0x3268FCu);
    ctx->pc = 0x3268F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3268F4u;
            // 0x3268f8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E510u;
    if (runtime->hasFunction(0x48E510u)) {
        auto targetFn = runtime->lookupFunction(0x48E510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3268FCu; }
        if (ctx->pc != 0x3268FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E510_0x48e510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3268FCu; }
        if (ctx->pc != 0x3268FCu) { return; }
    }
    ctx->pc = 0x3268FCu;
label_3268fc:
    // 0x3268fc: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x3268fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x326900: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x326900u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326904: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x326904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326908: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x326908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32690c: 0xc123654  jal         func_48D950
    ctx->pc = 0x32690Cu;
    SET_GPR_U32(ctx, 31, 0x326914u);
    ctx->pc = 0x326910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32690Cu;
            // 0x326910: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326914u; }
        if (ctx->pc != 0x326914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326914u; }
        if (ctx->pc != 0x326914u) { return; }
    }
    ctx->pc = 0x326914u;
label_326914:
    // 0x326914: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x326914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x326918: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x326918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32691c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x32691cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326920: 0xc123654  jal         func_48D950
    ctx->pc = 0x326920u;
    SET_GPR_U32(ctx, 31, 0x326928u);
    ctx->pc = 0x326924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326920u;
            // 0x326924: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D950u;
    if (runtime->hasFunction(0x48D950u)) {
        auto targetFn = runtime->lookupFunction(0x48D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326928u; }
        if (ctx->pc != 0x326928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D950_0x48d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326928u; }
        if (ctx->pc != 0x326928u) { return; }
    }
    ctx->pc = 0x326928u;
label_326928:
    // 0x326928: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x326928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32692c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32692cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x326930: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x326930u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x326934: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x326934u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x326938: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x326938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32693c: 0x3e00008  jr          $ra
    ctx->pc = 0x32693Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32693Cu;
            // 0x326940: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x326944u;
    // 0x326944: 0x0  nop
    ctx->pc = 0x326944u;
    // NOP
    // 0x326948: 0x0  nop
    ctx->pc = 0x326948u;
    // NOP
    // 0x32694c: 0x0  nop
    ctx->pc = 0x32694cu;
    // NOP
}
