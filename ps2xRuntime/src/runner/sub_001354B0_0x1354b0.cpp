#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001354B0
// Address: 0x1354b0 - 0x135530
void sub_001354B0_0x1354b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001354B0_0x1354b0");
#endif

    ctx->pc = 0x1354b0u;

    // 0x1354b0: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x1354b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1354b4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1354b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1354b8: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x1354b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1354bc: 0xc4830020  lwc1        $f3, 0x20($a0)
    ctx->pc = 0x1354bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1354c0: 0x460d081a  mula.s      $f1, $f13
    ctx->pc = 0x1354c0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
    // 0x1354c4: 0x460c101e  madda.s     $f2, $f12
    ctx->pc = 0x1354c4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[12]));
    // 0x1354c8: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x1354c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1354cc: 0x460e185c  madd.s      $f1, $f3, $f14
    ctx->pc = 0x1354ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[14]));
    // 0x1354d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1354d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1354d4: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x1354d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x1354d8: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x1354d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1354dc: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x1354dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1354e0: 0xc4830024  lwc1        $f3, 0x24($a0)
    ctx->pc = 0x1354e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1354e4: 0x460d081a  mula.s      $f1, $f13
    ctx->pc = 0x1354e4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
    // 0x1354e8: 0x460c101e  madda.s     $f2, $f12
    ctx->pc = 0x1354e8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[12]));
    // 0x1354ec: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x1354ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1354f0: 0x460e185c  madd.s      $f1, $f3, $f14
    ctx->pc = 0x1354f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[14]));
    // 0x1354f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1354f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1354f8: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x1354f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x1354fc: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x1354fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135500: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x135500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x135504: 0xc4830028  lwc1        $f3, 0x28($a0)
    ctx->pc = 0x135504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x135508: 0x460d081a  mula.s      $f1, $f13
    ctx->pc = 0x135508u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[13]);
    // 0x13550c: 0x460c101e  madda.s     $f2, $f12
    ctx->pc = 0x13550cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[12]));
    // 0x135510: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x135510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135514: 0x460e185c  madd.s      $f1, $f3, $f14
    ctx->pc = 0x135514u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[14]));
    // 0x135518: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x135518u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x13551c: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x13551cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x135520: 0x3e00008  jr          $ra
    ctx->pc = 0x135520u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135520u;
            // 0x135524: 0xac83003c  sw          $v1, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x135528u;
    // 0x135528: 0x0  nop
    ctx->pc = 0x135528u;
    // NOP
    // 0x13552c: 0x0  nop
    ctx->pc = 0x13552cu;
    // NOP
}
