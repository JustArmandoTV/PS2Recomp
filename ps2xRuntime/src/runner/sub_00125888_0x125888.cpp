#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00125888
// Address: 0x125888 - 0x1258f8
void sub_00125888_0x125888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125888_0x125888");
#endif

    switch (ctx->pc) {
        case 0x1258b4u: goto label_1258b4;
        case 0x1258c0u: goto label_1258c0;
        case 0x1258dcu: goto label_1258dc;
        case 0x1258e4u: goto label_1258e4;
        default: break;
    }

    ctx->pc = 0x125888u;

    // 0x125888: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x125888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x12588c: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x12588cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125890: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x125890u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125894: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x125894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x125898: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x125898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12589c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12589cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1258a0: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1258a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1258a4: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x1258a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x1258a8: 0xffae0068  sd          $t6, 0x68($sp)
    ctx->pc = 0x1258a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 14));
    // 0x1258ac: 0xc04955a  jal         func_125568
    ctx->pc = 0x1258ACu;
    SET_GPR_U32(ctx, 31, 0x1258B4u);
    ctx->pc = 0x1258B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1258ACu;
            // 0x1258b0: 0xffaf0060  sd          $t7, 0x60($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125568u;
    if (runtime->hasFunction(0x125568u)) {
        auto targetFn = runtime->lookupFunction(0x125568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1258B4u; }
        if (ctx->pc != 0x1258B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125568_0x125568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1258B4u; }
        if (ctx->pc != 0x1258B4u) { return; }
    }
    ctx->pc = 0x1258B4u;
label_1258b4:
    // 0x1258b4: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x1258b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1258b8: 0xc04955a  jal         func_125568
    ctx->pc = 0x1258B8u;
    SET_GPR_U32(ctx, 31, 0x1258C0u);
    ctx->pc = 0x1258BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1258B8u;
            // 0x1258bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125568u;
    if (runtime->hasFunction(0x125568u)) {
        auto targetFn = runtime->lookupFunction(0x125568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1258C0u; }
        if (ctx->pc != 0x1258C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125568_0x125568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1258C0u; }
        if (ctx->pc != 0x1258C0u) { return; }
    }
    ctx->pc = 0x1258C0u;
label_1258c0:
    // 0x1258c0: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x1258c0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1258c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1258c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1258c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1258c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1258cc: 0x39ef0001  xori        $t7, $t7, 0x1
    ctx->pc = 0x1258ccu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) ^ (uint64_t)(uint16_t)1);
    // 0x1258d0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1258d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1258d4: 0xc04957c  jal         func_1255F0
    ctx->pc = 0x1258D4u;
    SET_GPR_U32(ctx, 31, 0x1258DCu);
    ctx->pc = 0x1258D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1258D4u;
            // 0x1258d8: 0xafaf0024  sw          $t7, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1255F0u;
    if (runtime->hasFunction(0x1255F0u)) {
        auto targetFn = runtime->lookupFunction(0x1255F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1258DCu; }
        if (ctx->pc != 0x1258DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001255F0_0x1255f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1258DCu; }
        if (ctx->pc != 0x1258DCu) { return; }
    }
    ctx->pc = 0x1258DCu;
label_1258dc:
    // 0x1258dc: 0xc049524  jal         func_125490
    ctx->pc = 0x1258DCu;
    SET_GPR_U32(ctx, 31, 0x1258E4u);
    ctx->pc = 0x1258E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1258DCu;
            // 0x1258e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125490u;
    if (runtime->hasFunction(0x125490u)) {
        auto targetFn = runtime->lookupFunction(0x125490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1258E4u; }
        if (ctx->pc != 0x1258E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125490_0x125490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1258E4u; }
        if (ctx->pc != 0x1258E4u) { return; }
    }
    ctx->pc = 0x1258E4u;
label_1258e4:
    // 0x1258e4: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x1258e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1258e8: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x1258e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1258ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1258ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1258F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1258ECu;
            // 0x1258f0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1258F4u;
    // 0x1258f4: 0x0  nop
    ctx->pc = 0x1258f4u;
    // NOP
}
