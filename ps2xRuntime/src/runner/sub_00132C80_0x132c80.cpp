#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00132C80
// Address: 0x132c80 - 0x132cb0
void sub_00132C80_0x132c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132C80_0x132c80");
#endif

    ctx->pc = 0x132c80u;

    // 0x132c80: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x132c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132c84: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x132c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132c88: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x132c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x132c8c: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x132c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x132c90: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x132c90u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x132c94: 0xc4850008  lwc1        $f5, 0x8($a0)
    ctx->pc = 0x132c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x132c98: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x132c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x132c9c: 0x4602181e  madda.s     $f3, $f2
    ctx->pc = 0x132c9cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x132ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x132CA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132CA0u;
            // 0x132ca4: 0x4604281c  madd.s      $f0, $f5, $f4 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[4]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x132CA8u;
    // 0x132ca8: 0x0  nop
    ctx->pc = 0x132ca8u;
    // NOP
    // 0x132cac: 0x0  nop
    ctx->pc = 0x132cacu;
    // NOP
}
