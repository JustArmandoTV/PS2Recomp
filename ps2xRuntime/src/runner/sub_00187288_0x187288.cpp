#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00187288
// Address: 0x187288 - 0x1872c0
void sub_00187288_0x187288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187288_0x187288");
#endif

    switch (ctx->pc) {
        case 0x1872a8u: goto label_1872a8;
        default: break;
    }

    ctx->pc = 0x187288u;

    // 0x187288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x187288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18728c: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x18728cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x187290: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x187290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x187294: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x187294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187298: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x187298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x18729c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x18729cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1872a0: 0xc061c5e  jal         func_187178
    ctx->pc = 0x1872A0u;
    SET_GPR_U32(ctx, 31, 0x1872A8u);
    ctx->pc = 0x1872A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1872A0u;
            // 0x1872a4: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187178u;
    if (runtime->hasFunction(0x187178u)) {
        auto targetFn = runtime->lookupFunction(0x187178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1872A8u; }
        if (ctx->pc != 0x1872A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187178_0x187178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1872A8u; }
        if (ctx->pc != 0x1872A8u) { return; }
    }
    ctx->pc = 0x1872A8u;
label_1872a8:
    // 0x1872a8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1872a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1872ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1872acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1872b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1872b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1872b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1872B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1872B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1872B4u;
            // 0x1872b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1872BCu;
    // 0x1872bc: 0x0  nop
    ctx->pc = 0x1872bcu;
    // NOP
}
