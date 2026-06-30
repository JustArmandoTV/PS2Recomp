#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029ED00
// Address: 0x29ed00 - 0x29ed50
void sub_0029ED00_0x29ed00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029ED00_0x29ed00");
#endif

    switch (ctx->pc) {
        case 0x29ed20u: goto label_29ed20;
        case 0x29ed38u: goto label_29ed38;
        default: break;
    }

    ctx->pc = 0x29ed00u;

    // 0x29ed00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29ed00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29ed04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29ed04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29ed08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29ed08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29ed0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29ed0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ed10: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29ED10u;
    {
        const bool branch_taken_0x29ed10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ed10) {
            ctx->pc = 0x29ED20u;
            goto label_29ed20;
        }
    }
    ctx->pc = 0x29ED18u;
    // 0x29ed18: 0xc0a79bc  jal         func_29E6F0
    ctx->pc = 0x29ED18u;
    SET_GPR_U32(ctx, 31, 0x29ED20u);
    ctx->pc = 0x29E6F0u;
    if (runtime->hasFunction(0x29E6F0u)) {
        auto targetFn = runtime->lookupFunction(0x29E6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29ED20u; }
        if (ctx->pc != 0x29ED20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E6F0_0x29e6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29ED20u; }
        if (ctx->pc != 0x29ED20u) { return; }
    }
    ctx->pc = 0x29ED20u;
label_29ed20:
    // 0x29ed20: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x29ed20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x29ed24: 0x8c64ea40  lw          $a0, -0x15C0($v1)
    ctx->pc = 0x29ed24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961728)));
    // 0x29ed28: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29ED28u;
    {
        const bool branch_taken_0x29ed28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ed28) {
            ctx->pc = 0x29ED38u;
            goto label_29ed38;
        }
    }
    ctx->pc = 0x29ED30u;
    // 0x29ed30: 0xc0a79ac  jal         func_29E6B0
    ctx->pc = 0x29ED30u;
    SET_GPR_U32(ctx, 31, 0x29ED38u);
    ctx->pc = 0x29E6B0u;
    if (runtime->hasFunction(0x29E6B0u)) {
        auto targetFn = runtime->lookupFunction(0x29E6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29ED38u; }
        if (ctx->pc != 0x29ED38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E6B0_0x29e6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29ED38u; }
        if (ctx->pc != 0x29ED38u) { return; }
    }
    ctx->pc = 0x29ED38u;
label_29ed38:
    // 0x29ed38: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x29ed38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x29ed3c: 0xac70ea40  sw          $s0, -0x15C0($v1)
    ctx->pc = 0x29ed3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961728), GPR_U32(ctx, 16));
    // 0x29ed40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29ed40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29ed44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29ed44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ed48: 0x3e00008  jr          $ra
    ctx->pc = 0x29ED48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29ED4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29ED48u;
            // 0x29ed4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29ED50u;
}
