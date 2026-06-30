#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003628B0
// Address: 0x3628b0 - 0x3628f0
void sub_003628B0_0x3628b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003628B0_0x3628b0");
#endif

    ctx->pc = 0x3628b0u;

    // 0x3628b0: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x3628b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3628b4: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x3628b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3628b8: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x3628b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3628bc: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x3628bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3628c0: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x3628c0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3628c4: 0xc4850008  lwc1        $f5, 0x8($a0)
    ctx->pc = 0x3628c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3628c8: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x3628c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3628cc: 0x4602181e  madda.s     $f3, $f2
    ctx->pc = 0x3628ccu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x3628d0: 0xc487000c  lwc1        $f7, 0xC($a0)
    ctx->pc = 0x3628d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x3628d4: 0xc4a6000c  lwc1        $f6, 0xC($a1)
    ctx->pc = 0x3628d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3628d8: 0x4604281e  madda.s     $f5, $f4
    ctx->pc = 0x3628d8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x3628dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3628DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3628E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3628DCu;
            // 0x3628e0: 0x4606381c  madd.s      $f0, $f7, $f6 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[6]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3628E4u;
    // 0x3628e4: 0x0  nop
    ctx->pc = 0x3628e4u;
    // NOP
    // 0x3628e8: 0x0  nop
    ctx->pc = 0x3628e8u;
    // NOP
    // 0x3628ec: 0x0  nop
    ctx->pc = 0x3628ecu;
    // NOP
}
