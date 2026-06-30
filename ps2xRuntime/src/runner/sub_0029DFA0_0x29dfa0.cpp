#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029DFA0
// Address: 0x29dfa0 - 0x29dfd0
void sub_0029DFA0_0x29dfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029DFA0_0x29dfa0");
#endif

    switch (ctx->pc) {
        case 0x29dfa0u: goto label_29dfa0;
        case 0x29dfa4u: goto label_29dfa4;
        case 0x29dfa8u: goto label_29dfa8;
        case 0x29dfacu: goto label_29dfac;
        case 0x29dfb0u: goto label_29dfb0;
        case 0x29dfb4u: goto label_29dfb4;
        case 0x29dfb8u: goto label_29dfb8;
        case 0x29dfbcu: goto label_29dfbc;
        case 0x29dfc0u: goto label_29dfc0;
        case 0x29dfc4u: goto label_29dfc4;
        case 0x29dfc8u: goto label_29dfc8;
        case 0x29dfccu: goto label_29dfcc;
        default: break;
    }

    ctx->pc = 0x29dfa0u;

label_29dfa0:
    // 0x29dfa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29dfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_29dfa4:
    // 0x29dfa4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x29dfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_29dfa8:
    // 0x29dfa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29dfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_29dfac:
    // 0x29dfac: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x29dfacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_29dfb0:
    // 0x29dfb0: 0xe0f809  jalr        $a3
label_29dfb4:
    if (ctx->pc == 0x29DFB4u) {
        ctx->pc = 0x29DFB4u;
            // 0x29dfb4: 0x2484da90  addiu       $a0, $a0, -0x2570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957712));
        ctx->pc = 0x29DFB8u;
        goto label_29dfb8;
    }
    ctx->pc = 0x29DFB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x29DFB8u);
        ctx->pc = 0x29DFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DFB0u;
            // 0x29dfb4: 0x2484da90  addiu       $a0, $a0, -0x2570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957712));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29DFB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29DFB8u; }
            if (ctx->pc != 0x29DFB8u) { return; }
        }
        }
    }
    ctx->pc = 0x29DFB8u;
label_29dfb8:
    // 0x29dfb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29dfb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29dfbc:
    // 0x29dfbc: 0x3e00008  jr          $ra
label_29dfc0:
    if (ctx->pc == 0x29DFC0u) {
        ctx->pc = 0x29DFC0u;
            // 0x29dfc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x29DFC4u;
        goto label_29dfc4;
    }
    ctx->pc = 0x29DFBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29DFC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DFBCu;
            // 0x29dfc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29DFC4u;
label_29dfc4:
    // 0x29dfc4: 0x0  nop
    ctx->pc = 0x29dfc4u;
    // NOP
label_29dfc8:
    // 0x29dfc8: 0x0  nop
    ctx->pc = 0x29dfc8u;
    // NOP
label_29dfcc:
    // 0x29dfcc: 0x0  nop
    ctx->pc = 0x29dfccu;
    // NOP
}
