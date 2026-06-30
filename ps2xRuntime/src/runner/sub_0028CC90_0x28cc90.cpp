#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028CC90
// Address: 0x28cc90 - 0x28cd20
void sub_0028CC90_0x28cc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028CC90_0x28cc90");
#endif

    switch (ctx->pc) {
        case 0x28ccc0u: goto label_28ccc0;
        default: break;
    }

    ctx->pc = 0x28cc90u;

    // 0x28cc90: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x28cc90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x28cc94: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x28cc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x28cc98: 0xc4a90004  lwc1        $f9, 0x4($a1)
    ctx->pc = 0x28cc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x28cc9c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x28cc9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x28cca0: 0xc4a60008  lwc1        $f6, 0x8($a1)
    ctx->pc = 0x28cca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x28cca4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x28cca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28cca8: 0xc4ac0010  lwc1        $f12, 0x10($a1)
    ctx->pc = 0x28cca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28ccac: 0xc4aa0014  lwc1        $f10, 0x14($a1)
    ctx->pc = 0x28ccacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x28ccb0: 0xc4a70018  lwc1        $f7, 0x18($a1)
    ctx->pc = 0x28ccb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x28ccb4: 0xc4ab0020  lwc1        $f11, 0x20($a1)
    ctx->pc = 0x28ccb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x28ccb8: 0xc4a80024  lwc1        $f8, 0x24($a1)
    ctx->pc = 0x28ccb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x28ccbc: 0xc4a50028  lwc1        $f5, 0x28($a1)
    ctx->pc = 0x28ccbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_28ccc0:
    // 0x28ccc0: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x28ccc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28ccc4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x28ccc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x28ccc8: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x28ccc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28cccc: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x28ccccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28ccd0: 0x460c101a  mula.s      $f2, $f12
    ctx->pc = 0x28ccd0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x28ccd4: 0x4604181e  madda.s     $f3, $f4
    ctx->pc = 0x28ccd4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x28ccd8: 0x460b081c  madd.s      $f0, $f1, $f11
    ctx->pc = 0x28ccd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[11]));
    // 0x28ccdc: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x28ccdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x28cce0: 0x460a101a  mula.s      $f2, $f10
    ctx->pc = 0x28cce0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
    // 0x28cce4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x28cce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x28cce8: 0x4609181e  madda.s     $f3, $f9
    ctx->pc = 0x28cce8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[9]));
    // 0x28ccec: 0x4608081c  madd.s      $f0, $f1, $f8
    ctx->pc = 0x28ccecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[8]));
    // 0x28ccf0: 0x4607101a  mula.s      $f2, $f7
    ctx->pc = 0x28ccf0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x28ccf4: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x28ccf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x28ccf8: 0x4606181e  madda.s     $f3, $f6
    ctx->pc = 0x28ccf8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[6]));
    // 0x28ccfc: 0x4605081c  madd.s      $f0, $f1, $f5
    ctx->pc = 0x28ccfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[5]));
    // 0x28cd00: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x28cd00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x28cd04: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x28cd04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x28cd08: 0x481ffed  bgez        $a0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x28CD08u;
    {
        const bool branch_taken_0x28cd08 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x28CD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CD08u;
            // 0x28cd0c: 0x2463fff0  addiu       $v1, $v1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cd08) {
            ctx->pc = 0x28CCC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28ccc0;
        }
    }
    ctx->pc = 0x28CD10u;
    // 0x28cd10: 0x3e00008  jr          $ra
    ctx->pc = 0x28CD10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28CD18u;
    // 0x28cd18: 0x0  nop
    ctx->pc = 0x28cd18u;
    // NOP
    // 0x28cd1c: 0x0  nop
    ctx->pc = 0x28cd1cu;
    // NOP
}
