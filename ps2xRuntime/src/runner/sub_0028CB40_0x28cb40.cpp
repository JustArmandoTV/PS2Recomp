#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028CB40
// Address: 0x28cb40 - 0x28cb80
void sub_0028CB40_0x28cb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028CB40_0x28cb40");
#endif

    ctx->pc = 0x28cb40u;

    // 0x28cb40: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x28cb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28cb44: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x28cb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28cb48: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x28cb48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x28cb4c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x28cb4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x28cb50: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x28cb50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28cb54: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x28cb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28cb58: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x28cb58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x28cb5c: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x28cb5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x28cb60: 0xc4810024  lwc1        $f1, 0x24($a0)
    ctx->pc = 0x28cb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28cb64: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x28cb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28cb68: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x28cb68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x28cb6c: 0x3e00008  jr          $ra
    ctx->pc = 0x28CB6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CB70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CB6Cu;
            // 0x28cb70: 0xe4810018  swc1        $f1, 0x18($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28CB74u;
    // 0x28cb74: 0x0  nop
    ctx->pc = 0x28cb74u;
    // NOP
    // 0x28cb78: 0x0  nop
    ctx->pc = 0x28cb78u;
    // NOP
    // 0x28cb7c: 0x0  nop
    ctx->pc = 0x28cb7cu;
    // NOP
}
