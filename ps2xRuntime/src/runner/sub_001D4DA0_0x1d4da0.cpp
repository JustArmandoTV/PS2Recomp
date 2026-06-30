#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D4DA0
// Address: 0x1d4da0 - 0x1d4de0
void sub_001D4DA0_0x1d4da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D4DA0_0x1d4da0");
#endif

    switch (ctx->pc) {
        case 0x1d4db4u: goto label_1d4db4;
        case 0x1d4dccu: goto label_1d4dcc;
        default: break;
    }

    ctx->pc = 0x1d4da0u;

    // 0x1d4da0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d4da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d4da4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d4da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d4da8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d4da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d4dac: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x1D4DACu;
    SET_GPR_U32(ctx, 31, 0x1D4DB4u);
    ctx->pc = 0x1D4DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4DACu;
            // 0x1d4db0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4DB4u; }
        if (ctx->pc != 0x1D4DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4DB4u; }
        if (ctx->pc != 0x1D4DB4u) { return; }
    }
    ctx->pc = 0x1D4DB4u;
label_1d4db4:
    // 0x1d4db4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d4db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d4db8: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1d4db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1d4dbc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d4dbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d4dc0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1d4dc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1d4dc4: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x1D4DC4u;
    SET_GPR_U32(ctx, 31, 0x1D4DCCu);
    ctx->pc = 0x1D4DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4DC4u;
            // 0x1d4dc8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4DCCu; }
        if (ctx->pc != 0x1D4DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4DCCu; }
        if (ctx->pc != 0x1D4DCCu) { return; }
    }
    ctx->pc = 0x1D4DCCu;
label_1d4dcc:
    // 0x1d4dcc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d4dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d4dd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d4dd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4DD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4DD4u;
            // 0x1d4dd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D4DDCu;
    // 0x1d4ddc: 0x0  nop
    ctx->pc = 0x1d4ddcu;
    // NOP
}
