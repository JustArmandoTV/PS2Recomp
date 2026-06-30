#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DF610
// Address: 0x2df610 - 0x2df640
void sub_002DF610_0x2df610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF610_0x2df610");
#endif

    switch (ctx->pc) {
        case 0x2df624u: goto label_2df624;
        default: break;
    }

    ctx->pc = 0x2df610u;

    // 0x2df610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2df610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2df614: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2df614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2df618: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2df618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2df61c: 0xc0b7ee4  jal         func_2DFB90
    ctx->pc = 0x2DF61Cu;
    SET_GPR_U32(ctx, 31, 0x2DF624u);
    ctx->pc = 0x2DF620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF61Cu;
            // 0x2df620: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DFB90u;
    if (runtime->hasFunction(0x2DFB90u)) {
        auto targetFn = runtime->lookupFunction(0x2DFB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF624u; }
        if (ctx->pc != 0x2DF624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DFB90_0x2dfb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DF624u; }
        if (ctx->pc != 0x2DF624u) { return; }
    }
    ctx->pc = 0x2DF624u;
label_2df624:
    // 0x2df624: 0xc600004c  lwc1        $f0, 0x4C($s0)
    ctx->pc = 0x2df624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2df628: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2df628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2df62c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2df62cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2df630: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DF630u;
            // 0x2df634: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DF638u;
    // 0x2df638: 0x0  nop
    ctx->pc = 0x2df638u;
    // NOP
    // 0x2df63c: 0x0  nop
    ctx->pc = 0x2df63cu;
    // NOP
}
