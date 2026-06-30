#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00291820
// Address: 0x291820 - 0x2918a0
void sub_00291820_0x291820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291820_0x291820");
#endif

    ctx->pc = 0x291820u;

    // 0x291820: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x291820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x291824: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x291824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291828: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x291828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x29182c: 0xc4a30034  lwc1        $f3, 0x34($a1)
    ctx->pc = 0x29182cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x291830: 0x46001141  sub.s       $f5, $f2, $f0
    ctx->pc = 0x291830u;
    ctx->f[5] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x291834: 0x46032101  sub.s       $f4, $f4, $f3
    ctx->pc = 0x291834u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x291838: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x291838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29183c: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x29183cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291840: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x291840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x291844: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x291844u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x291848: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x291848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29184c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x29184cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291850: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x291850u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x291854: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x291854u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
    // 0x291858: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x291858u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x29185c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x29185cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x291860: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x291860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291864: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x291864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291868: 0xc4a20018  lwc1        $f2, 0x18($a1)
    ctx->pc = 0x291868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29186c: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x29186cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x291870: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x291870u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
    // 0x291874: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x291874u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x291878: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x291878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x29187c: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x29187cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291880: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x291880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291884: 0xc4a20028  lwc1        $f2, 0x28($a1)
    ctx->pc = 0x291884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x291888: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x291888u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x29188c: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x29188cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
    // 0x291890: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x291890u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x291894: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x291894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x291898: 0x3e00008  jr          $ra
    ctx->pc = 0x291898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29189Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291898u;
            // 0x29189c: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2918A0u;
}
