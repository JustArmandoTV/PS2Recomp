#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003629B0
// Address: 0x3629b0 - 0x362a00
void sub_003629B0_0x3629b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003629B0_0x3629b0");
#endif

    ctx->pc = 0x3629b0u;

    // 0x3629b0: 0xc4c60008  lwc1        $f6, 0x8($a2)
    ctx->pc = 0x3629b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3629b4: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x3629b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3629b8: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x3629b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3629bc: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x3629bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3629c0: 0x4606181a  mula.s      $f3, $f6
    ctx->pc = 0x3629c0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x3629c4: 0xc4c40000  lwc1        $f4, 0x0($a2)
    ctx->pc = 0x3629c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3629c8: 0x4602081d  msub.s      $f0, $f1, $f2
    ctx->pc = 0x3629c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
    // 0x3629cc: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x3629ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3629d0: 0x4604081a  mula.s      $f1, $f4
    ctx->pc = 0x3629d0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x3629d4: 0x4606285d  msub.s      $f1, $f5, $f6
    ctx->pc = 0x3629d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[6]));
    // 0x3629d8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x3629d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3629dc: 0x4602281a  mula.s      $f5, $f2
    ctx->pc = 0x3629dcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x3629e0: 0x4604181d  msub.s      $f0, $f3, $f4
    ctx->pc = 0x3629e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x3629e4: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x3629e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x3629e8: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x3629e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x3629ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3629ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3629F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3629ECu;
            // 0x3629f0: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3629F4u;
    // 0x3629f4: 0x0  nop
    ctx->pc = 0x3629f4u;
    // NOP
    // 0x3629f8: 0x0  nop
    ctx->pc = 0x3629f8u;
    // NOP
    // 0x3629fc: 0x0  nop
    ctx->pc = 0x3629fcu;
    // NOP
}
