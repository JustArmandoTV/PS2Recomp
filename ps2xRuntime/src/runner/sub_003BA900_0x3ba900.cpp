#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BA900
// Address: 0x3ba900 - 0x3ba940
void sub_003BA900_0x3ba900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BA900_0x3ba900");
#endif

    switch (ctx->pc) {
        case 0x3ba91cu: goto label_3ba91c;
        default: break;
    }

    ctx->pc = 0x3ba900u;

    // 0x3ba900: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ba900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ba904: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ba904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3ba908: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3ba908u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3ba90c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3ba90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ba910: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3ba910u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x3ba914: 0xc0754b4  jal         func_1D52D0
    ctx->pc = 0x3BA914u;
    SET_GPR_U32(ctx, 31, 0x3BA91Cu);
    ctx->pc = 0x3BA918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA914u;
            // 0x3ba918: 0x24440440  addiu       $a0, $v0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BA91Cu; }
        if (ctx->pc != 0x3BA91Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BA91Cu; }
        if (ctx->pc != 0x3BA91Cu) { return; }
    }
    ctx->pc = 0x3BA91Cu;
label_3ba91c:
    // 0x3ba91c: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x3ba91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ba920: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ba920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ba924: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x3ba924u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x3ba928: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3ba928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3ba92c: 0x3e00008  jr          $ra
    ctx->pc = 0x3BA92Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BA930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BA92Cu;
            // 0x3ba930: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BA934u;
    // 0x3ba934: 0x0  nop
    ctx->pc = 0x3ba934u;
    // NOP
    // 0x3ba938: 0x0  nop
    ctx->pc = 0x3ba938u;
    // NOP
    // 0x3ba93c: 0x0  nop
    ctx->pc = 0x3ba93cu;
    // NOP
}
