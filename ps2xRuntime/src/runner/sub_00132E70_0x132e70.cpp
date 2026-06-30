#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00132E70
// Address: 0x132e70 - 0x132ef0
void sub_00132E70_0x132e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132E70_0x132e70");
#endif

    ctx->pc = 0x132e70u;

    // 0x132e70: 0xc4c80004  lwc1        $f8, 0x4($a2)
    ctx->pc = 0x132e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x132e74: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x132e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132e78: 0xc4c70000  lwc1        $f7, 0x0($a2)
    ctx->pc = 0x132e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x132e7c: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x132e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x132e80: 0x4608081a  mula.s      $f1, $f8
    ctx->pc = 0x132e80u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x132e84: 0xc4c60008  lwc1        $f6, 0x8($a2)
    ctx->pc = 0x132e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x132e88: 0x4607101e  madda.s     $f2, $f7
    ctx->pc = 0x132e88u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[7]));
    // 0x132e8c: 0xc4a30024  lwc1        $f3, 0x24($a1)
    ctx->pc = 0x132e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x132e90: 0xc4a00034  lwc1        $f0, 0x34($a1)
    ctx->pc = 0x132e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132e94: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x132e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x132e98: 0x4606185c  madd.s      $f1, $f3, $f6
    ctx->pc = 0x132e98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[6]));
    // 0x132e9c: 0x46010140  add.s       $f5, $f0, $f1
    ctx->pc = 0x132e9cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x132ea0: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x132ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132ea4: 0xc4a40028  lwc1        $f4, 0x28($a1)
    ctx->pc = 0x132ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x132ea8: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x132ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132eac: 0x4608081a  mula.s      $f1, $f8
    ctx->pc = 0x132eacu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x132eb0: 0x4607101e  madda.s     $f2, $f7
    ctx->pc = 0x132eb0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[7]));
    // 0x132eb4: 0x4606205c  madd.s      $f1, $f4, $f6
    ctx->pc = 0x132eb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[6]));
    // 0x132eb8: 0x46010100  add.s       $f4, $f0, $f1
    ctx->pc = 0x132eb8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x132ebc: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x132ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132ec0: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x132ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x132ec4: 0xc4a30020  lwc1        $f3, 0x20($a1)
    ctx->pc = 0x132ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x132ec8: 0x4608081a  mula.s      $f1, $f8
    ctx->pc = 0x132ec8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x132ecc: 0x4607101e  madda.s     $f2, $f7
    ctx->pc = 0x132eccu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[7]));
    // 0x132ed0: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x132ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132ed4: 0x4606185c  madd.s      $f1, $f3, $f6
    ctx->pc = 0x132ed4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[6]));
    // 0x132ed8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x132ed8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x132edc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x132edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x132ee0: 0xe4850004  swc1        $f5, 0x4($a0)
    ctx->pc = 0x132ee0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x132ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x132EE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132EE4u;
            // 0x132ee8: 0xe4840008  swc1        $f4, 0x8($a0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x132EECu;
    // 0x132eec: 0x0  nop
    ctx->pc = 0x132eecu;
    // NOP
}
