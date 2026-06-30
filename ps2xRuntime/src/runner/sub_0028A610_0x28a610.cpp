#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028A610
// Address: 0x28a610 - 0x28a6a0
void sub_0028A610_0x28a610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A610_0x28a610");
#endif

    ctx->pc = 0x28a610u;

    // 0x28a610: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x28a610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28a614: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x28a614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a618: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x28a618u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28a61c: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x28a61cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x28a620: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x28a620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28a624: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x28a624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a628: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x28a628u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28a62c: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x28a62cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x28a630: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x28a630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28a634: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x28a634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a638: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x28a638u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28a63c: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x28a63cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x28a640: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x28a640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28a644: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x28a644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a648: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x28a648u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28a64c: 0x3e00008  jr          $ra
    ctx->pc = 0x28A64Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A64Cu;
            // 0x28a650: 0xe4c0000c  swc1        $f0, 0xC($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28A654u;
    // 0x28a654: 0x0  nop
    ctx->pc = 0x28a654u;
    // NOP
    // 0x28a658: 0x0  nop
    ctx->pc = 0x28a658u;
    // NOP
    // 0x28a65c: 0x0  nop
    ctx->pc = 0x28a65cu;
    // NOP
    // 0x28a660: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x28a660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28a664: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x28a664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a668: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28a668u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28a66c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x28A66Cu;
    {
        const bool branch_taken_0x28a66c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28A670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A66Cu;
            // 0x28a670: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a66c) {
            ctx->pc = 0x28A678u;
            goto label_28a678;
        }
    }
    ctx->pc = 0x28A674u;
    // 0x28a674: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x28a674u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28a678:
    // 0x28a678: 0x3e00008  jr          $ra
    ctx->pc = 0x28A678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A67Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A678u;
            // 0x28a67c: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28A680u;
    // 0x28a680: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x28a680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28a684: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x28a684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28a688: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28a688u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28a68c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x28A68Cu;
    {
        const bool branch_taken_0x28a68c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28A690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A68Cu;
            // 0x28a690: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a68c) {
            ctx->pc = 0x28A698u;
            goto label_28a698;
        }
    }
    ctx->pc = 0x28A694u;
    // 0x28a694: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x28a694u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28a698:
    // 0x28a698: 0x3e00008  jr          $ra
    ctx->pc = 0x28A698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28A698u;
            // 0x28a69c: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28A6A0u;
}
