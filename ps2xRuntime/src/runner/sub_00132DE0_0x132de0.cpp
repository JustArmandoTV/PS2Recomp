#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00132DE0
// Address: 0x132de0 - 0x132e30
void sub_00132DE0_0x132de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132DE0_0x132de0");
#endif

    ctx->pc = 0x132de0u;

    // 0x132de0: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x132de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132de4: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x132de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132de8: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x132de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x132dec: 0x460c0902  mul.s       $f4, $f1, $f12
    ctx->pc = 0x132decu;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x132df0: 0x460c00c2  mul.s       $f3, $f0, $f12
    ctx->pc = 0x132df0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x132df4: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x132df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132df8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x132df8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x132dfc: 0x0  nop
    ctx->pc = 0x132dfcu;
    // NOP
    // 0x132e00: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x132e00u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x132e04: 0x460c101c  madd.s      $f0, $f2, $f12
    ctx->pc = 0x132e04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[12]));
    // 0x132e08: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x132e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x132e0c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x132e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132e10: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x132e10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x132e14: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x132e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x132e18: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x132e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132e1c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x132e1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x132e20: 0x3e00008  jr          $ra
    ctx->pc = 0x132E20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132E20u;
            // 0x132e24: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x132E28u;
    // 0x132e28: 0x0  nop
    ctx->pc = 0x132e28u;
    // NOP
    // 0x132e2c: 0x0  nop
    ctx->pc = 0x132e2cu;
    // NOP
}
