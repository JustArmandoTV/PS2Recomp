#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00299B10
// Address: 0x299b10 - 0x299b40
void sub_00299B10_0x299b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299B10_0x299b10");
#endif

    switch (ctx->pc) {
        case 0x299b2cu: goto label_299b2c;
        default: break;
    }

    ctx->pc = 0x299b10u;

    // 0x299b10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x299b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x299b14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x299b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x299b18: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x299b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299b1c: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x299b1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x299b20: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x299b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x299b24: 0xc0a3414  jal         func_28D050
    ctx->pc = 0x299B24u;
    SET_GPR_U32(ctx, 31, 0x299B2Cu);
    ctx->pc = 0x299B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299B24u;
            // 0x299b28: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D050u;
    if (runtime->hasFunction(0x28D050u)) {
        auto targetFn = runtime->lookupFunction(0x28D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299B2Cu; }
        if (ctx->pc != 0x299B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D050_0x28d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299B2Cu; }
        if (ctx->pc != 0x299B2Cu) { return; }
    }
    ctx->pc = 0x299B2Cu;
label_299b2c:
    // 0x299b2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x299b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299b30: 0x3e00008  jr          $ra
    ctx->pc = 0x299B30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299B30u;
            // 0x299b34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x299B38u;
    // 0x299b38: 0x0  nop
    ctx->pc = 0x299b38u;
    // NOP
    // 0x299b3c: 0x0  nop
    ctx->pc = 0x299b3cu;
    // NOP
}
