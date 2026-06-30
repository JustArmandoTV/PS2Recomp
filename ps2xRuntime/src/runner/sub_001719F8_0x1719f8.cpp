#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001719F8
// Address: 0x1719f8 - 0x171a50
void sub_001719F8_0x1719f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001719F8_0x1719f8");
#endif

    switch (ctx->pc) {
        case 0x171a1cu: goto label_171a1c;
        case 0x171a2cu: goto label_171a2c;
        case 0x171a34u: goto label_171a34;
        default: break;
    }

    ctx->pc = 0x1719f8u;

    // 0x1719f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1719f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1719fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1719fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x171a00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x171a00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171a04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x171a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x171a08: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x171a08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171a0c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x171a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x171a10: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x171a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x171a14: 0xc05c846  jal         func_172118
    ctx->pc = 0x171A14u;
    SET_GPR_U32(ctx, 31, 0x171A1Cu);
    ctx->pc = 0x171A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171A14u;
            // 0x171a18: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172118u;
    if (runtime->hasFunction(0x172118u)) {
        auto targetFn = runtime->lookupFunction(0x172118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171A1Cu; }
        if (ctx->pc != 0x171A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172118_0x172118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171A1Cu; }
        if (ctx->pc != 0x171A1Cu) { return; }
    }
    ctx->pc = 0x171A1Cu;
label_171a1c:
    // 0x171a1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x171a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171a20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x171a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171a24: 0xc05c694  jal         func_171A50
    ctx->pc = 0x171A24u;
    SET_GPR_U32(ctx, 31, 0x171A2Cu);
    ctx->pc = 0x171A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171A24u;
            // 0x171a28: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171A50u;
    if (runtime->hasFunction(0x171A50u)) {
        auto targetFn = runtime->lookupFunction(0x171A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171A2Cu; }
        if (ctx->pc != 0x171A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171A50_0x171a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171A2Cu; }
        if (ctx->pc != 0x171A2Cu) { return; }
    }
    ctx->pc = 0x171A2Cu;
label_171a2c:
    // 0x171a2c: 0xc05c84c  jal         func_172130
    ctx->pc = 0x171A2Cu;
    SET_GPR_U32(ctx, 31, 0x171A34u);
    ctx->pc = 0x171A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171A2Cu;
            // 0x171a30: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172130u;
    if (runtime->hasFunction(0x172130u)) {
        auto targetFn = runtime->lookupFunction(0x172130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171A34u; }
        if (ctx->pc != 0x171A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172130_0x172130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171A34u; }
        if (ctx->pc != 0x171A34u) { return; }
    }
    ctx->pc = 0x171A34u;
label_171a34:
    // 0x171a34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x171a34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x171a38: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x171a38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171a3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x171a3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171a40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x171a40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171a44: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x171a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x171a48: 0x3e00008  jr          $ra
    ctx->pc = 0x171A48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171A48u;
            // 0x171a4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x171A50u;
}
