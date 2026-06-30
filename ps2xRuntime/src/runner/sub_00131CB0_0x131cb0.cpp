#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00131CB0
// Address: 0x131cb0 - 0x131d30
void sub_00131CB0_0x131cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131CB0_0x131cb0");
#endif

    ctx->pc = 0x131cb0u;

    // 0x131cb0: 0xc4a90000  lwc1        $f9, 0x0($a1)
    ctx->pc = 0x131cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x131cb4: 0xc4c2000c  lwc1        $f2, 0xC($a2)
    ctx->pc = 0x131cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x131cb8: 0xc4a6000c  lwc1        $f6, 0xC($a1)
    ctx->pc = 0x131cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x131cbc: 0xc4c50000  lwc1        $f5, 0x0($a2)
    ctx->pc = 0x131cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x131cc0: 0x4602481a  mula.s      $f9, $f2
    ctx->pc = 0x131cc0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x131cc4: 0xc4a80004  lwc1        $f8, 0x4($a1)
    ctx->pc = 0x131cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x131cc8: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x131cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x131ccc: 0x4605301e  madda.s     $f6, $f5
    ctx->pc = 0x131cccu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[5]));
    // 0x131cd0: 0xc4a70008  lwc1        $f7, 0x8($a1)
    ctx->pc = 0x131cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x131cd4: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x131cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x131cd8: 0x4603401e  madda.s     $f8, $f3
    ctx->pc = 0x131cd8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[3]));
    // 0x131cdc: 0x4604381d  msub.s      $f0, $f7, $f4
    ctx->pc = 0x131cdcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[4]));
    // 0x131ce0: 0x4604301a  mula.s      $f6, $f4
    ctx->pc = 0x131ce0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x131ce4: 0x4603481f  msuba.s     $f9, $f3
    ctx->pc = 0x131ce4u;
    ctx->f[31] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[3]));
    // 0x131ce8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x131ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x131cec: 0x4602401e  madda.s     $f8, $f2
    ctx->pc = 0x131cecu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[2]));
    // 0x131cf0: 0x4605381c  madd.s      $f0, $f7, $f5
    ctx->pc = 0x131cf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[5]));
    // 0x131cf4: 0x4604481a  mula.s      $f9, $f4
    ctx->pc = 0x131cf4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[4]);
    // 0x131cf8: 0x4603301e  madda.s     $f6, $f3
    ctx->pc = 0x131cf8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[3]));
    // 0x131cfc: 0x4605401f  msuba.s     $f8, $f5
    ctx->pc = 0x131cfcu;
    ctx->f[31] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[5]));
    // 0x131d00: 0x4602385c  madd.s      $f1, $f7, $f2
    ctx->pc = 0x131d00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[2]));
    // 0x131d04: 0x4602301a  mula.s      $f6, $f2
    ctx->pc = 0x131d04u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x131d08: 0x4605481f  msuba.s     $f9, $f5
    ctx->pc = 0x131d08u;
    ctx->f[31] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[5]));
    // 0x131d0c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x131d0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x131d10: 0x4604401f  msuba.s     $f8, $f4
    ctx->pc = 0x131d10u;
    ctx->f[31] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[4]));
    // 0x131d14: 0x4603381d  msub.s      $f0, $f7, $f3
    ctx->pc = 0x131d14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[3]));
    // 0x131d18: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x131d18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x131d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x131D1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131D1Cu;
            // 0x131d20: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x131D24u;
    // 0x131d24: 0x0  nop
    ctx->pc = 0x131d24u;
    // NOP
    // 0x131d28: 0x0  nop
    ctx->pc = 0x131d28u;
    // NOP
    // 0x131d2c: 0x0  nop
    ctx->pc = 0x131d2cu;
    // NOP
}
