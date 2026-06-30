#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001331F0
// Address: 0x1331f0 - 0x133240
void sub_001331F0_0x1331f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001331F0_0x1331f0");
#endif

    ctx->pc = 0x1331f0u;

    // 0x1331f0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1331f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1331f4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1331f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1331f8: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x1331f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1331fc: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x1331fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x133200: 0x0  nop
    ctx->pc = 0x133200u;
    // NOP
    // 0x133204: 0x46002018  adda.s      $f4, $f0
    ctx->pc = 0x133204u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x133208: 0x460c095c  madd.s      $f5, $f1, $f12
    ctx->pc = 0x133208u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[12]));
    // 0x13320c: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x13320cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x133210: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x133210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x133214: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x133214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133218: 0x46022018  adda.s      $f4, $f2
    ctx->pc = 0x133218u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x13321c: 0x460c189c  madd.s      $f2, $f3, $f12
    ctx->pc = 0x13321cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[12]));
    // 0x133220: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x133220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133224: 0x46002018  adda.s      $f4, $f0
    ctx->pc = 0x133224u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x133228: 0x460c081c  madd.s      $f0, $f1, $f12
    ctx->pc = 0x133228u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[12]));
    // 0x13322c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x13322cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x133230: 0xe4850004  swc1        $f5, 0x4($a0)
    ctx->pc = 0x133230u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x133234: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x133234u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x133238: 0x3e00008  jr          $ra
    ctx->pc = 0x133238u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13323Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133238u;
            // 0x13323c: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x133240u;
}
