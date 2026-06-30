#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00168E00
// Address: 0x168e00 - 0x168e40
void sub_00168E00_0x168e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168E00_0x168e00");
#endif

    switch (ctx->pc) {
        case 0x168e34u: goto label_168e34;
        default: break;
    }

    ctx->pc = 0x168e00u;

    // 0x168e00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x168e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x168e04: 0x3c0a7fff  lui         $t2, 0x7FFF
    ctx->pc = 0x168e04u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32767 << 16));
    // 0x168e08: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x168e08u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168e0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x168e0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168e10: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x168e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x168e14: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x168e14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168e18: 0xafa90008  sw          $t1, 0x8($sp)
    ctx->pc = 0x168e18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    // 0x168e1c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x168e1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168e20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x168e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168e24: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x168e24u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x168e28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x168e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x168e2c: 0xc05a390  jal         func_168E40
    ctx->pc = 0x168E2Cu;
    SET_GPR_U32(ctx, 31, 0x168E34u);
    ctx->pc = 0x168E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168E2Cu;
            // 0x168e30: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168E40u;
    if (runtime->hasFunction(0x168E40u)) {
        auto targetFn = runtime->lookupFunction(0x168E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168E34u; }
        if (ctx->pc != 0x168E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168E40_0x168e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168E34u; }
        if (ctx->pc != 0x168E34u) { return; }
    }
    ctx->pc = 0x168E34u;
label_168e34:
    // 0x168e34: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x168e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168e38: 0x3e00008  jr          $ra
    ctx->pc = 0x168E38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168E38u;
            // 0x168e3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x168E40u;
}
