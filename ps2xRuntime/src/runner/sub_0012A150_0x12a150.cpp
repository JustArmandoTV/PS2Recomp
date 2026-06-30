#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012A150
// Address: 0x12a150 - 0x12a188
void sub_0012A150_0x12a150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012A150_0x12a150");
#endif

    switch (ctx->pc) {
        case 0x12a168u: goto label_12a168;
        default: break;
    }

    ctx->pc = 0x12a150u;

    // 0x12a150: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12a150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12a154: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12a154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12a158: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x12a158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12a15c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12a15cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a160: 0xc04a740  jal         func_129D00
    ctx->pc = 0x12A160u;
    SET_GPR_U32(ctx, 31, 0x12A168u);
    ctx->pc = 0x12A164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A160u;
            // 0x12a164: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129D00u;
    if (runtime->hasFunction(0x129D00u)) {
        auto targetFn = runtime->lookupFunction(0x129D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A168u; }
        if (ctx->pc != 0x12A168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129D00_0x129d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A168u; }
        if (ctx->pc != 0x12A168u) { return; }
    }
    ctx->pc = 0x12A168u;
label_12a168:
    // 0x12a168: 0xac500014  sw          $s0, 0x14($v0)
    ctx->pc = 0x12a168u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 16));
    // 0x12a16c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x12a16cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12a170: 0xac4f0010  sw          $t7, 0x10($v0)
    ctx->pc = 0x12a170u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 15));
    // 0x12a174: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12a174u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a178: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x12a178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12a17c: 0x3e00008  jr          $ra
    ctx->pc = 0x12A17Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A17Cu;
            // 0x12a180: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12A184u;
    // 0x12a184: 0x0  nop
    ctx->pc = 0x12a184u;
    // NOP
}
