#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021CCE0
// Address: 0x21cce0 - 0x21cd60
void sub_0021CCE0_0x21cce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021CCE0_0x21cce0");
#endif

    ctx->pc = 0x21cce0u;

    // 0x21cce0: 0xc4870024  lwc1        $f7, 0x24($a0)
    ctx->pc = 0x21cce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x21cce4: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x21cce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21cce8: 0xc4880020  lwc1        $f8, 0x20($a0)
    ctx->pc = 0x21cce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x21ccec: 0xc4a20010  lwc1        $f2, 0x10($a1)
    ctx->pc = 0x21ccecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21ccf0: 0x4601381a  mula.s      $f7, $f1
    ctx->pc = 0x21ccf0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x21ccf4: 0xc4860028  lwc1        $f6, 0x28($a0)
    ctx->pc = 0x21ccf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x21ccf8: 0xc4a30018  lwc1        $f3, 0x18($a1)
    ctx->pc = 0x21ccf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21ccfc: 0x4602401e  madda.s     $f8, $f2
    ctx->pc = 0x21ccfcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[2]));
    // 0x21cd00: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x21cd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21cd04: 0x4603311c  madd.s      $f4, $f6, $f3
    ctx->pc = 0x21cd04u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[3]));
    // 0x21cd08: 0x46082042  mul.s       $f1, $f4, $f8
    ctx->pc = 0x21cd08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[8]);
    // 0x21cd0c: 0x46014041  sub.s       $f1, $f8, $f1
    ctx->pc = 0x21cd0cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[8], ctx->f[1]);
    // 0x21cd10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21cd10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21cd14: 0xc485002c  lwc1        $f5, 0x2C($a0)
    ctx->pc = 0x21cd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x21cd18: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x21cd18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x21cd1c: 0x46072002  mul.s       $f0, $f4, $f7
    ctx->pc = 0x21cd1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x21cd20: 0x460038c1  sub.s       $f3, $f7, $f0
    ctx->pc = 0x21cd20u;
    ctx->f[3] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
    // 0x21cd24: 0x46062002  mul.s       $f0, $f4, $f6
    ctx->pc = 0x21cd24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x21cd28: 0x46003081  sub.s       $f2, $f6, $f0
    ctx->pc = 0x21cd28u;
    ctx->f[2] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x21cd2c: 0x46052002  mul.s       $f0, $f4, $f5
    ctx->pc = 0x21cd2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x21cd30: 0x46002841  sub.s       $f1, $f5, $f0
    ctx->pc = 0x21cd30u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x21cd34: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x21cd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21cd38: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x21cd38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x21cd3c: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x21cd3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x21cd40: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x21cd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21cd44: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x21cd44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x21cd48: 0xe5200008  swc1        $f0, 0x8($t1)
    ctx->pc = 0x21cd48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x21cd4c: 0xc520000c  lwc1        $f0, 0xC($t1)
    ctx->pc = 0x21cd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21cd50: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21cd50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21cd54: 0x3e00008  jr          $ra
    ctx->pc = 0x21CD54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CD58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21CD54u;
            // 0x21cd58: 0xe520000c  swc1        $f0, 0xC($t1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21CD5Cu;
    // 0x21cd5c: 0x0  nop
    ctx->pc = 0x21cd5cu;
    // NOP
}
