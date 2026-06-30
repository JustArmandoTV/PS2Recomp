#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001460B0
// Address: 0x1460b0 - 0x146100
void sub_001460B0_0x1460b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001460B0_0x1460b0");
#endif

    switch (ctx->pc) {
        case 0x1460e4u: goto label_1460e4;
        case 0x1460ecu: goto label_1460ec;
        default: break;
    }

    ctx->pc = 0x1460b0u;

    // 0x1460b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1460b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1460b4: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1460b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x1460b8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1460b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1460bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1460bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1460c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1460c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1460c4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1460c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1460c8: 0x0  nop
    ctx->pc = 0x1460c8u;
    // NOP
    // 0x1460cc: 0x460f1001  sub.s       $f0, $f2, $f15
    ctx->pc = 0x1460ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[15]);
    // 0x1460d0: 0x46001842  mul.s       $f1, $f3, $f0
    ctx->pc = 0x1460d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1460d4: 0x460e1001  sub.s       $f0, $f2, $f14
    ctx->pc = 0x1460d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[14]);
    // 0x1460d8: 0x46001bc2  mul.s       $f15, $f3, $f0
    ctx->pc = 0x1460d8u;
    ctx->f[15] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1460dc: 0xc057444  jal         func_15D110
    ctx->pc = 0x1460DCu;
    SET_GPR_U32(ctx, 31, 0x1460E4u);
    ctx->pc = 0x1460E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1460DCu;
            // 0x1460e0: 0x46000b86  mov.s       $f14, $f1 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D110u;
    if (runtime->hasFunction(0x15D110u)) {
        auto targetFn = runtime->lookupFunction(0x15D110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1460E4u; }
        if (ctx->pc != 0x1460E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D110_0x15d110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1460E4u; }
        if (ctx->pc != 0x1460E4u) { return; }
    }
    ctx->pc = 0x1460E4u;
label_1460e4:
    // 0x1460e4: 0xc057480  jal         func_15D200
    ctx->pc = 0x1460E4u;
    SET_GPR_U32(ctx, 31, 0x1460ECu);
    ctx->pc = 0x15D200u;
    if (runtime->hasFunction(0x15D200u)) {
        auto targetFn = runtime->lookupFunction(0x15D200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1460ECu; }
        if (ctx->pc != 0x1460ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D200_0x15d200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1460ECu; }
        if (ctx->pc != 0x1460ECu) { return; }
    }
    ctx->pc = 0x1460ECu;
label_1460ec:
    // 0x1460ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1460ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1460f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1460F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1460F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1460F0u;
            // 0x1460f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1460F8u;
    // 0x1460f8: 0x0  nop
    ctx->pc = 0x1460f8u;
    // NOP
    // 0x1460fc: 0x0  nop
    ctx->pc = 0x1460fcu;
    // NOP
}
