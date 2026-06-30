#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00362850
// Address: 0x362850 - 0x362890
void sub_00362850_0x362850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362850_0x362850");
#endif

    ctx->pc = 0x362850u;

    // 0x362850: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x362850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x362854: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x362854u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x362858: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x362858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x36285c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x36285cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x362860: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x362860u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x362864: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x362864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x362868: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x362868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36286c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x36286cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x362870: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x362870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x362874: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x362874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x362878: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x362878u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x36287c: 0x3e00008  jr          $ra
    ctx->pc = 0x36287Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36287Cu;
            // 0x362880: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x362884u;
    // 0x362884: 0x0  nop
    ctx->pc = 0x362884u;
    // NOP
    // 0x362888: 0x0  nop
    ctx->pc = 0x362888u;
    // NOP
    // 0x36288c: 0x0  nop
    ctx->pc = 0x36288cu;
    // NOP
}
