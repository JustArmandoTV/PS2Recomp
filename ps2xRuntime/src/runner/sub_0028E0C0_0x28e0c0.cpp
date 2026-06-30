#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028E0C0
// Address: 0x28e0c0 - 0x28e170
void sub_0028E0C0_0x28e0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E0C0_0x28e0c0");
#endif

    ctx->pc = 0x28e0c0u;

    // 0x28e0c0: 0xc4a90000  lwc1        $f9, 0x0($a1)
    ctx->pc = 0x28e0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x28e0c4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x28e0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x28e0c8: 0xc4a80004  lwc1        $f8, 0x4($a1)
    ctx->pc = 0x28e0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x28e0cc: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x28e0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28e0d0: 0x46094900  add.s       $f4, $f9, $f9
    ctx->pc = 0x28e0d0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[9], ctx->f[9]);
    // 0x28e0d4: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x28e0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28e0d8: 0x46084180  add.s       $f6, $f8, $f8
    ctx->pc = 0x28e0d8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[8], ctx->f[8]);
    // 0x28e0dc: 0x46092282  mul.s       $f10, $f4, $f9
    ctx->pc = 0x28e0dcu;
    ctx->f[10] = FPU_MUL_S(ctx->f[4], ctx->f[9]);
    // 0x28e0e0: 0x460021c2  mul.s       $f7, $f4, $f0
    ctx->pc = 0x28e0e0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x28e0e4: 0x460108c0  add.s       $f3, $f1, $f1
    ctx->pc = 0x28e0e4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x28e0e8: 0x46093142  mul.s       $f5, $f6, $f9
    ctx->pc = 0x28e0e8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[9]);
    // 0x28e0ec: 0x46083102  mul.s       $f4, $f6, $f8
    ctx->pc = 0x28e0ecu;
    ctx->f[4] = FPU_MUL_S(ctx->f[6], ctx->f[8]);
    // 0x28e0f0: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x28e0f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x28e0f4: 0x46091a42  mul.s       $f9, $f3, $f9
    ctx->pc = 0x28e0f4u;
    ctx->f[9] = FPU_MUL_S(ctx->f[3], ctx->f[9]);
    // 0x28e0f8: 0x46081a02  mul.s       $f8, $f3, $f8
    ctx->pc = 0x28e0f8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
    // 0x28e0fc: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x28e0fcu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x28e100: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x28e100u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x28e104: 0x46012000  add.s       $f0, $f4, $f1
    ctx->pc = 0x28e104u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x28e108: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x28e108u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28e10c: 0x0  nop
    ctx->pc = 0x28e10cu;
    // NOP
    // 0x28e110: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x28e110u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x28e114: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x28e114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x28e118: 0x46045000  add.s       $f0, $f10, $f4
    ctx->pc = 0x28e118u;
    ctx->f[0] = FPU_ADD_S(ctx->f[10], ctx->f[4]);
    // 0x28e11c: 0x46015040  add.s       $f1, $f10, $f1
    ctx->pc = 0x28e11cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[10], ctx->f[1]);
    // 0x28e120: 0x46011101  sub.s       $f4, $f2, $f1
    ctx->pc = 0x28e120u;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x28e124: 0x46032840  add.s       $f1, $f5, $f3
    ctx->pc = 0x28e124u;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x28e128: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x28e128u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x28e12c: 0x46032941  sub.s       $f5, $f5, $f3
    ctx->pc = 0x28e12cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x28e130: 0x46064841  sub.s       $f1, $f9, $f6
    ctx->pc = 0x28e130u;
    ctx->f[1] = FPU_SUB_S(ctx->f[9], ctx->f[6]);
    // 0x28e134: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x28e134u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x28e138: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x28e138u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x28e13c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x28e13cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x28e140: 0xe4850010  swc1        $f5, 0x10($a0)
    ctx->pc = 0x28e140u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x28e144: 0x460740c0  add.s       $f3, $f8, $f7
    ctx->pc = 0x28e144u;
    ctx->f[3] = FPU_ADD_S(ctx->f[8], ctx->f[7]);
    // 0x28e148: 0xe4840014  swc1        $f4, 0x14($a0)
    ctx->pc = 0x28e148u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x28e14c: 0xe4830018  swc1        $f3, 0x18($a0)
    ctx->pc = 0x28e14cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x28e150: 0x46064880  add.s       $f2, $f9, $f6
    ctx->pc = 0x28e150u;
    ctx->f[2] = FPU_ADD_S(ctx->f[9], ctx->f[6]);
    // 0x28e154: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x28e154u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x28e158: 0x46074041  sub.s       $f1, $f8, $f7
    ctx->pc = 0x28e158u;
    ctx->f[1] = FPU_SUB_S(ctx->f[8], ctx->f[7]);
    // 0x28e15c: 0xe4820020  swc1        $f2, 0x20($a0)
    ctx->pc = 0x28e15cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x28e160: 0xe4810024  swc1        $f1, 0x24($a0)
    ctx->pc = 0x28e160u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x28e164: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x28e164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x28e168: 0x3e00008  jr          $ra
    ctx->pc = 0x28E168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E16Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E168u;
            // 0x28e16c: 0xac80002c  sw          $zero, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28E170u;
}
