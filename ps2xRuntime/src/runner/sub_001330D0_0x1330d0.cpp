#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001330D0
// Address: 0x1330d0 - 0x133110
void sub_001330D0_0x1330d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001330D0_0x1330d0");
#endif

    ctx->pc = 0x1330d0u;

    // 0x1330d0: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x1330d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1330d4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1330d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1330d8: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x1330d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1330dc: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1330dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1330e0: 0x46001101  sub.s       $f4, $f2, $f0
    ctx->pc = 0x1330e0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1330e4: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x1330e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1330e8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1330e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1330ec: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x1330ecu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x1330f0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1330f0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1330f4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1330f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1330f8: 0x4604201e  madda.s     $f4, $f4
    ctx->pc = 0x1330f8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1330fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1330FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1330FCu;
            // 0x133100: 0x4600001c  madd.s      $f0, $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x133104u;
    // 0x133104: 0x0  nop
    ctx->pc = 0x133104u;
    // NOP
    // 0x133108: 0x0  nop
    ctx->pc = 0x133108u;
    // NOP
    // 0x13310c: 0x0  nop
    ctx->pc = 0x13310cu;
    // NOP
}
