#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013A430
// Address: 0x13a430 - 0x13a4a0
void sub_0013A430_0x13a430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A430_0x13a430");
#endif

    ctx->pc = 0x13a430u;

    // 0x13a430: 0x28810008  slti        $at, $a0, 0x8
    ctx->pc = 0x13a430u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x13a434: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x13A434u;
    {
        const bool branch_taken_0x13a434 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a434) {
            ctx->pc = 0x13A498u;
            goto label_13a498;
        }
    }
    ctx->pc = 0x13A43Cu;
    // 0x13a43c: 0x42940  sll         $a1, $a0, 5
    ctx->pc = 0x13a43cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x13a440: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13a440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13a444: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x13a444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x13a448: 0x24634fd0  addiu       $v1, $v1, 0x4FD0
    ctx->pc = 0x13a448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20432));
    // 0x13a44c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x13a44cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x13a450: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13a450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13a454: 0xe46c002c  swc1        $f12, 0x2C($v1)
    ctx->pc = 0x13a454u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
    // 0x13a458: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x13a458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a45c: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13a45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a460: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13a460u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13a464: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x13a464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x13a468: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x13a468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a46c: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13a46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a470: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13a470u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13a474: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x13a474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x13a478: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x13a478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a47c: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13a47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a480: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13a480u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13a484: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x13a484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x13a488: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x13a488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a48c: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x13a48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a490: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x13a490u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x13a494: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x13a494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_13a498:
    // 0x13a498: 0x3e00008  jr          $ra
    ctx->pc = 0x13A498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13A4A0u;
}
