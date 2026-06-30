#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002917A0
// Address: 0x2917a0 - 0x291820
void sub_002917A0_0x2917a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002917A0_0x2917a0");
#endif

    ctx->pc = 0x2917a0u;

    // 0x2917a0: 0xc4c50004  lwc1        $f5, 0x4($a2)
    ctx->pc = 0x2917a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2917a4: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x2917a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2917a8: 0xc4c60000  lwc1        $f6, 0x0($a2)
    ctx->pc = 0x2917a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2917ac: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x2917acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2917b0: 0x4601281a  mula.s      $f5, $f1
    ctx->pc = 0x2917b0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x2917b4: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x2917b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2917b8: 0xc4a30020  lwc1        $f3, 0x20($a1)
    ctx->pc = 0x2917b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2917bc: 0x4602301e  madda.s     $f6, $f2
    ctx->pc = 0x2917bcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[2]));
    // 0x2917c0: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x2917c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2917c4: 0x4603205c  madd.s      $f1, $f4, $f3
    ctx->pc = 0x2917c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x2917c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2917c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2917cc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2917ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2917d0: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x2917d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2917d4: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x2917d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2917d8: 0xc4a30024  lwc1        $f3, 0x24($a1)
    ctx->pc = 0x2917d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2917dc: 0x4601281a  mula.s      $f5, $f1
    ctx->pc = 0x2917dcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x2917e0: 0x4602301e  madda.s     $f6, $f2
    ctx->pc = 0x2917e0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[2]));
    // 0x2917e4: 0xc4a00034  lwc1        $f0, 0x34($a1)
    ctx->pc = 0x2917e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2917e8: 0x4603205c  madd.s      $f1, $f4, $f3
    ctx->pc = 0x2917e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x2917ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2917ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2917f0: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2917f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2917f4: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x2917f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2917f8: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x2917f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2917fc: 0xc4a30028  lwc1        $f3, 0x28($a1)
    ctx->pc = 0x2917fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x291800: 0x4601281a  mula.s      $f5, $f1
    ctx->pc = 0x291800u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x291804: 0x4602301e  madda.s     $f6, $f2
    ctx->pc = 0x291804u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[2]));
    // 0x291808: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x291808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29180c: 0x4603205c  madd.s      $f1, $f4, $f3
    ctx->pc = 0x29180cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x291810: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x291810u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x291814: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x291814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x291818: 0x3e00008  jr          $ra
    ctx->pc = 0x291818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29181Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291818u;
            // 0x29181c: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x291820u;
}
