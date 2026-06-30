#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016EBA8
// Address: 0x16eba8 - 0x16ec00
void sub_0016EBA8_0x16eba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016EBA8_0x16eba8");
#endif

    switch (ctx->pc) {
        case 0x16ebd0u: goto label_16ebd0;
        case 0x16ebe8u: goto label_16ebe8;
        default: break;
    }

    ctx->pc = 0x16eba8u;

    // 0x16eba8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16eba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16ebac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16ebacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16ebb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16ebb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ebb4: 0x80611f8  j           func_1847E0
    ctx->pc = 0x16EBB4u;
    ctx->pc = 0x16EBB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16EBB4u;
            // 0x16ebb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1847E0u;
    {
        auto targetFn = runtime->lookupFunction(0x1847E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x16EBBCu;
    // 0x16ebbc: 0x0  nop
    ctx->pc = 0x16ebbcu;
    // NOP
    // 0x16ebc0: 0x3e00008  jr          $ra
    ctx->pc = 0x16EBC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16EBC8u;
    // 0x16ebc8: 0x3e00008  jr          $ra
    ctx->pc = 0x16EBC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16EBD0u;
label_16ebd0:
    // 0x16ebd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16ebd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16ebd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16ebd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16ebd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16ebd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ebdc: 0x8060fcc  j           func_183F30
    ctx->pc = 0x16EBDCu;
    ctx->pc = 0x16EBE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16EBDCu;
            // 0x16ebe0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183F30u;
    {
        auto targetFn = runtime->lookupFunction(0x183F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x16EBE4u;
    // 0x16ebe4: 0x0  nop
    ctx->pc = 0x16ebe4u;
    // NOP
label_16ebe8:
    // 0x16ebe8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16ebe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16ebec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16ebecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16ebf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16ebf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ebf4: 0x8060fec  j           func_183FB0
    ctx->pc = 0x16EBF4u;
    ctx->pc = 0x16EBF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16EBF4u;
            // 0x16ebf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183FB0u;
    {
        auto targetFn = runtime->lookupFunction(0x183FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x16EBFCu;
    // 0x16ebfc: 0x0  nop
    ctx->pc = 0x16ebfcu;
    // NOP
}
