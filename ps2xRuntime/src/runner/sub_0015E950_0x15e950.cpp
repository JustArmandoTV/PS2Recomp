#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015E950
// Address: 0x15e950 - 0x15e980
void sub_0015E950_0x15e950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015E950_0x15e950");
#endif

    switch (ctx->pc) {
        case 0x15e968u: goto label_15e968;
        default: break;
    }

    ctx->pc = 0x15e950u;

    // 0x15e950: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15e950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15e954: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15e954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15e958: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x15e958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15e95c: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x15e95cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x15e960: 0xc057f80  jal         func_15FE00
    ctx->pc = 0x15E960u;
    SET_GPR_U32(ctx, 31, 0x15E968u);
    ctx->pc = 0x15E964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15E960u;
            // 0x15e964: 0x27a4001c  addiu       $a0, $sp, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15FE00u;
    if (runtime->hasFunction(0x15FE00u)) {
        auto targetFn = runtime->lookupFunction(0x15FE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E968u; }
        if (ctx->pc != 0x15E968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015FE00_0x15fe00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15E968u; }
        if (ctx->pc != 0x15E968u) { return; }
    }
    ctx->pc = 0x15E968u;
label_15e968:
    // 0x15e968: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x15e968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x15e96c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15e96cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e970: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x15e970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x15e974: 0x3e00008  jr          $ra
    ctx->pc = 0x15E974u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15E974u;
            // 0x15e978: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15E97Cu;
    // 0x15e97c: 0x0  nop
    ctx->pc = 0x15e97cu;
    // NOP
}
