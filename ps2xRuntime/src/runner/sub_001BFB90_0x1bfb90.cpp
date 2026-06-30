#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BFB90
// Address: 0x1bfb90 - 0x1bfc00
void sub_001BFB90_0x1bfb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BFB90_0x1bfb90");
#endif

    switch (ctx->pc) {
        case 0x1bfbb0u: goto label_1bfbb0;
        case 0x1bfbd4u: goto label_1bfbd4;
        default: break;
    }

    ctx->pc = 0x1bfb90u;

    // 0x1bfb90: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x1bfb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1bfb94: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFB94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFB94u;
            // 0x1bfb98: 0xac450004  sw          $a1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BFB9Cu;
    // 0x1bfb9c: 0x0  nop
    ctx->pc = 0x1bfb9cu;
    // NOP
    // 0x1bfba0: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x1bfba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1bfba4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFBA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFBA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFBA4u;
            // 0x1bfba8: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BFBACu;
    // 0x1bfbac: 0x0  nop
    ctx->pc = 0x1bfbacu;
    // NOP
label_1bfbb0:
    // 0x1bfbb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bfbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bfbb4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1bfbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1bfbb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bfbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bfbbc: 0x2450a4b0  addiu       $s0, $v0, -0x5B50
    ctx->pc = 0x1bfbbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943920));
    // 0x1bfbc0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1bfbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bfbc4: 0x1c600009  bgtz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BFBC4u;
    {
        const bool branch_taken_0x1bfbc4 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1BFBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFBC4u;
            // 0x1bfbc8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfbc4) {
            ctx->pc = 0x1BFBECu;
            goto label_1bfbec;
        }
    }
    ctx->pc = 0x1BFBCCu;
    // 0x1bfbcc: 0xc06ff00  jal         func_1BFC00
    ctx->pc = 0x1BFBCCu;
    SET_GPR_U32(ctx, 31, 0x1BFBD4u);
    ctx->pc = 0x1BFC00u;
    if (runtime->hasFunction(0x1BFC00u)) {
        auto targetFn = runtime->lookupFunction(0x1BFC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFBD4u; }
        if (ctx->pc != 0x1BFBD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFC00_0x1bfc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFBD4u; }
        if (ctx->pc != 0x1BFBD4u) { return; }
    }
    ctx->pc = 0x1BFBD4u;
label_1bfbd4:
    // 0x1bfbd4: 0x3c03006e  lui         $v1, 0x6E
    ctx->pc = 0x1bfbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)110 << 16));
    // 0x1bfbd8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1bfbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bfbdc: 0x24631eb0  addiu       $v1, $v1, 0x1EB0
    ctx->pc = 0x1bfbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7856));
    // 0x1bfbe0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1bfbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1bfbe4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1bfbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1bfbe8: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x1bfbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_1bfbec:
    // 0x1bfbec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bfbecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bfbf0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bfbf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bfbf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFBF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFBF4u;
            // 0x1bfbf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BFBFCu;
    // 0x1bfbfc: 0x0  nop
    ctx->pc = 0x1bfbfcu;
    // NOP
}
