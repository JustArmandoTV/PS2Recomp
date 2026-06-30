#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00362950
// Address: 0x362950 - 0x3629b0
void sub_00362950_0x362950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362950_0x362950");
#endif

    ctx->pc = 0x362950u;

    // 0x362950: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x362950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x362954: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x362954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x362958: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x362958u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x36295c: 0x0  nop
    ctx->pc = 0x36295cu;
    // NOP
    // 0x362960: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x362960u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x362964: 0x4601601d  msub.s      $f0, $f12, $f1
    ctx->pc = 0x362964u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[1]));
    // 0x362968: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x362968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x36296c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x36296cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x362970: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x362970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x362974: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x362974u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x362978: 0x4601601d  msub.s      $f0, $f12, $f1
    ctx->pc = 0x362978u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[1]));
    // 0x36297c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x36297cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x362980: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x362980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x362984: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x362984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x362988: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x362988u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x36298c: 0x4601601d  msub.s      $f0, $f12, $f1
    ctx->pc = 0x36298cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[1]));
    // 0x362990: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x362990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x362994: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x362994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x362998: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x362998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36299c: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x36299cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3629a0: 0x4601601d  msub.s      $f0, $f12, $f1
    ctx->pc = 0x3629a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[1]));
    // 0x3629a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3629A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3629A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3629A4u;
            // 0x3629a8: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3629ACu;
    // 0x3629ac: 0x0  nop
    ctx->pc = 0x3629acu;
    // NOP
}
