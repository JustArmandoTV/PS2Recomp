#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00133310
// Address: 0x133310 - 0x133380
void sub_00133310_0x133310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133310_0x133310");
#endif

    ctx->pc = 0x133310u;

    // 0x133310: 0xc4c80004  lwc1        $f8, 0x4($a2)
    ctx->pc = 0x133310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x133314: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x133314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x133318: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x133318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13331c: 0xc4c70000  lwc1        $f7, 0x0($a2)
    ctx->pc = 0x13331cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x133320: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x133320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133324: 0x4608001a  mula.s      $f0, $f8
    ctx->pc = 0x133324u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x133328: 0xc4c60008  lwc1        $f6, 0x8($a2)
    ctx->pc = 0x133328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x13332c: 0x4607081e  madda.s     $f1, $f7
    ctx->pc = 0x13332cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[7]));
    // 0x133330: 0xc4a20024  lwc1        $f2, 0x24($a1)
    ctx->pc = 0x133330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x133334: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x133334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133338: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x133338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13333c: 0x4606115c  madd.s      $f5, $f2, $f6
    ctx->pc = 0x13333cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[6]));
    // 0x133340: 0x4608001a  mula.s      $f0, $f8
    ctx->pc = 0x133340u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x133344: 0xc4a40028  lwc1        $f4, 0x28($a1)
    ctx->pc = 0x133344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x133348: 0x4607181e  madda.s     $f3, $f7
    ctx->pc = 0x133348u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[7]));
    // 0x13334c: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x13334cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x133350: 0x460620dc  madd.s      $f3, $f4, $f6
    ctx->pc = 0x133350u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[6]));
    // 0x133354: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x133354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133358: 0x4608001a  mula.s      $f0, $f8
    ctx->pc = 0x133358u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x13335c: 0xc4a20020  lwc1        $f2, 0x20($a1)
    ctx->pc = 0x13335cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x133360: 0x4607081e  madda.s     $f1, $f7
    ctx->pc = 0x133360u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[7]));
    // 0x133364: 0x4606101c  madd.s      $f0, $f2, $f6
    ctx->pc = 0x133364u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[6]));
    // 0x133368: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x133368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x13336c: 0xe4850004  swc1        $f5, 0x4($a0)
    ctx->pc = 0x13336cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x133370: 0xe4830008  swc1        $f3, 0x8($a0)
    ctx->pc = 0x133370u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x133374: 0x3e00008  jr          $ra
    ctx->pc = 0x133374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133374u;
            // 0x133378: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13337Cu;
    // 0x13337c: 0x0  nop
    ctx->pc = 0x13337cu;
    // NOP
}
