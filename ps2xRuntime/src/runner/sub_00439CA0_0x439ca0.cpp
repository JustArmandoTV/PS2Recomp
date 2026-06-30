#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00439CA0
// Address: 0x439ca0 - 0x439cf0
void sub_00439CA0_0x439ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00439CA0_0x439ca0");
#endif

    switch (ctx->pc) {
        case 0x439cd0u: goto label_439cd0;
        default: break;
    }

    ctx->pc = 0x439ca0u;

    // 0x439ca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x439ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x439ca4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x439ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x439ca8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x439ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x439cac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x439cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x439cb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x439cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x439cb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x439cb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x439cb8: 0xac820084  sw          $v0, 0x84($a0)
    ctx->pc = 0x439cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 2));
    // 0x439cbc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x439cbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x439cc0: 0xc4800078  lwc1        $f0, 0x78($a0)
    ctx->pc = 0x439cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x439cc4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x439cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x439cc8: 0xc0e32a4  jal         func_38CA90
    ctx->pc = 0x439CC8u;
    SET_GPR_U32(ctx, 31, 0x439CD0u);
    ctx->pc = 0x439CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x439CC8u;
            // 0x439ccc: 0xe4800074  swc1        $f0, 0x74($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x38CA90u;
    if (runtime->hasFunction(0x38CA90u)) {
        auto targetFn = runtime->lookupFunction(0x38CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439CD0u; }
        if (ctx->pc != 0x439CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038CA90_0x38ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x439CD0u; }
        if (ctx->pc != 0x439CD0u) { return; }
    }
    ctx->pc = 0x439CD0u;
label_439cd0:
    // 0x439cd0: 0xae3000b4  sw          $s0, 0xB4($s1)
    ctx->pc = 0x439cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 16));
    // 0x439cd4: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x439cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x439cd8: 0xa223004c  sb          $v1, 0x4C($s1)
    ctx->pc = 0x439cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 76), (uint8_t)GPR_U32(ctx, 3));
    // 0x439cdc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x439cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x439ce0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x439ce0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x439ce4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x439ce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x439ce8: 0x3e00008  jr          $ra
    ctx->pc = 0x439CE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x439CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x439CE8u;
            // 0x439cec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x439CF0u;
}
