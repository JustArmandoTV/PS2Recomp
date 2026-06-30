#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00291910
// Address: 0x291910 - 0x291980
void sub_00291910_0x291910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291910_0x291910");
#endif

    ctx->pc = 0x291910u;

    // 0x291910: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x291910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x291914: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x291914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291918: 0xc4c50000  lwc1        $f5, 0x0($a2)
    ctx->pc = 0x291918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x29191c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x29191cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291920: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x291920u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x291924: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x291924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x291928: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x291928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29192c: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x29192cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
    // 0x291930: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x291930u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x291934: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x291934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x291938: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x291938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29193c: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x29193cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291940: 0xc4a20018  lwc1        $f2, 0x18($a1)
    ctx->pc = 0x291940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x291944: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x291944u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x291948: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x291948u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
    // 0x29194c: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x29194cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x291950: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x291950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x291954: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x291954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291958: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x291958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29195c: 0xc4a20028  lwc1        $f2, 0x28($a1)
    ctx->pc = 0x29195cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x291960: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x291960u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x291964: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x291964u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
    // 0x291968: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x291968u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x29196c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x29196cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x291970: 0x3e00008  jr          $ra
    ctx->pc = 0x291970u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291970u;
            // 0x291974: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x291978u;
    // 0x291978: 0x0  nop
    ctx->pc = 0x291978u;
    // NOP
    // 0x29197c: 0x0  nop
    ctx->pc = 0x29197cu;
    // NOP
}
