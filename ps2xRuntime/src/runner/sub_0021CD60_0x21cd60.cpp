#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021CD60
// Address: 0x21cd60 - 0x21cde0
void sub_0021CD60_0x21cd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021CD60_0x21cd60");
#endif

    ctx->pc = 0x21cd60u;

    // 0x21cd60: 0xc4870024  lwc1        $f7, 0x24($a0)
    ctx->pc = 0x21cd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x21cd64: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x21cd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21cd68: 0xc4880020  lwc1        $f8, 0x20($a0)
    ctx->pc = 0x21cd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x21cd6c: 0xc4a20010  lwc1        $f2, 0x10($a1)
    ctx->pc = 0x21cd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21cd70: 0x4601381a  mula.s      $f7, $f1
    ctx->pc = 0x21cd70u;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x21cd74: 0xc4860028  lwc1        $f6, 0x28($a0)
    ctx->pc = 0x21cd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x21cd78: 0xc4a30018  lwc1        $f3, 0x18($a1)
    ctx->pc = 0x21cd78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21cd7c: 0x4602401e  madda.s     $f8, $f2
    ctx->pc = 0x21cd7cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[2]));
    // 0x21cd80: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x21cd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21cd84: 0x4603311c  madd.s      $f4, $f6, $f3
    ctx->pc = 0x21cd84u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[3]));
    // 0x21cd88: 0x46082042  mul.s       $f1, $f4, $f8
    ctx->pc = 0x21cd88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[8]);
    // 0x21cd8c: 0x46014041  sub.s       $f1, $f8, $f1
    ctx->pc = 0x21cd8cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[8], ctx->f[1]);
    // 0x21cd90: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x21cd90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21cd94: 0xc485002c  lwc1        $f5, 0x2C($a0)
    ctx->pc = 0x21cd94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x21cd98: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x21cd98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x21cd9c: 0x46072002  mul.s       $f0, $f4, $f7
    ctx->pc = 0x21cd9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x21cda0: 0x460038c1  sub.s       $f3, $f7, $f0
    ctx->pc = 0x21cda0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
    // 0x21cda4: 0x46062002  mul.s       $f0, $f4, $f6
    ctx->pc = 0x21cda4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x21cda8: 0x46003081  sub.s       $f2, $f6, $f0
    ctx->pc = 0x21cda8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x21cdac: 0x46052002  mul.s       $f0, $f4, $f5
    ctx->pc = 0x21cdacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x21cdb0: 0x46002841  sub.s       $f1, $f5, $f0
    ctx->pc = 0x21cdb0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x21cdb4: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x21cdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21cdb8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x21cdb8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x21cdbc: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x21cdbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x21cdc0: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x21cdc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21cdc4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x21cdc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x21cdc8: 0xe5200008  swc1        $f0, 0x8($t1)
    ctx->pc = 0x21cdc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x21cdcc: 0xc520000c  lwc1        $f0, 0xC($t1)
    ctx->pc = 0x21cdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21cdd0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x21cdd0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21cdd4: 0x3e00008  jr          $ra
    ctx->pc = 0x21CDD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CDD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21CDD4u;
            // 0x21cdd8: 0xe520000c  swc1        $f0, 0xC($t1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21CDDCu;
    // 0x21cddc: 0x0  nop
    ctx->pc = 0x21cddcu;
    // NOP
}
