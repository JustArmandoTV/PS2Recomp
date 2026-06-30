#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001718C8
// Address: 0x1718c8 - 0x171918
void sub_001718C8_0x1718c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001718C8_0x1718c8");
#endif

    switch (ctx->pc) {
        case 0x1718ecu: goto label_1718ec;
        case 0x1718f8u: goto label_1718f8;
        case 0x171900u: goto label_171900;
        default: break;
    }

    ctx->pc = 0x1718c8u;

    // 0x1718c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1718C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1718D0u;
    // 0x1718d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1718d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1718d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1718d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1718d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1718d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1718dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1718dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1718e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1718e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1718e4: 0xc05c846  jal         func_172118
    ctx->pc = 0x1718E4u;
    SET_GPR_U32(ctx, 31, 0x1718ECu);
    ctx->pc = 0x1718E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1718E4u;
            // 0x1718e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172118u;
    if (runtime->hasFunction(0x172118u)) {
        auto targetFn = runtime->lookupFunction(0x172118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1718ECu; }
        if (ctx->pc != 0x1718ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172118_0x172118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1718ECu; }
        if (ctx->pc != 0x1718ECu) { return; }
    }
    ctx->pc = 0x1718ECu;
label_1718ec:
    // 0x1718ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1718ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1718f0: 0xc05c646  jal         func_171918
    ctx->pc = 0x1718F0u;
    SET_GPR_U32(ctx, 31, 0x1718F8u);
    ctx->pc = 0x1718F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1718F0u;
            // 0x1718f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171918u;
    if (runtime->hasFunction(0x171918u)) {
        auto targetFn = runtime->lookupFunction(0x171918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1718F8u; }
        if (ctx->pc != 0x1718F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171918_0x171918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1718F8u; }
        if (ctx->pc != 0x1718F8u) { return; }
    }
    ctx->pc = 0x1718F8u;
label_1718f8:
    // 0x1718f8: 0xc05c84c  jal         func_172130
    ctx->pc = 0x1718F8u;
    SET_GPR_U32(ctx, 31, 0x171900u);
    ctx->pc = 0x1718FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1718F8u;
            // 0x1718fc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172130u;
    if (runtime->hasFunction(0x172130u)) {
        auto targetFn = runtime->lookupFunction(0x172130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171900u; }
        if (ctx->pc != 0x171900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172130_0x172130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171900u; }
        if (ctx->pc != 0x171900u) { return; }
    }
    ctx->pc = 0x171900u;
label_171900:
    // 0x171900: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x171900u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x171904: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x171904u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171908: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x171908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17190c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17190cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171910: 0x3e00008  jr          $ra
    ctx->pc = 0x171910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171910u;
            // 0x171914: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x171918u;
}
