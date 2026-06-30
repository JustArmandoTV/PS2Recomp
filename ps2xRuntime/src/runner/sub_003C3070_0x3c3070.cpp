#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C3070
// Address: 0x3c3070 - 0x3c30f0
void sub_003C3070_0x3c3070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C3070_0x3c3070");
#endif

    ctx->pc = 0x3c3070u;

    // 0x3c3070: 0x30e30002  andi        $v1, $a3, 0x2
    ctx->pc = 0x3c3070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
    // 0x3c3074: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C3074u;
    {
        const bool branch_taken_0x3c3074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c3074) {
            ctx->pc = 0x3C3078u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3074u;
            // 0x3c3078: 0x30e30008  andi        $v1, $a3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C3084u;
            goto label_3c3084;
        }
    }
    ctx->pc = 0x3C307Cu;
    // 0x3c307c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x3C307Cu;
    {
        const bool branch_taken_0x3c307c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C3080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C307Cu;
            // 0x3c3080: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c307c) {
            ctx->pc = 0x3C30E8u;
            goto label_3c30e8;
        }
    }
    ctx->pc = 0x3C3084u;
label_3c3084:
    // 0x3c3084: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3C3084u;
    {
        const bool branch_taken_0x3c3084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c3084) {
            ctx->pc = 0x3C3088u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3084u;
            // 0x3c3088: 0xc4c10000  lwc1        $f1, 0x0($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C30ACu;
            goto label_3c30ac;
        }
    }
    ctx->pc = 0x3C308Cu;
    // 0x3c308c: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x3c308cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x3c3090: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x3c3090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x3c3094: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x3c3094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c3098: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3c3098u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c309c: 0x0  nop
    ctx->pc = 0x3c309cu;
    // NOP
    // 0x3c30a0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3c30a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3c30a4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3C30A4u;
    {
        const bool branch_taken_0x3c30a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C30A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C30A4u;
            // 0x3c30a8: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c30a4) {
            ctx->pc = 0x3C30E8u;
            goto label_3c30e8;
        }
    }
    ctx->pc = 0x3C30ACu;
label_3c30ac:
    // 0x3c30ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c30acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c30b0: 0x0  nop
    ctx->pc = 0x3c30b0u;
    // NOP
    // 0x3c30b4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3c30b4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c30b8: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x3C30B8u;
    {
        const bool branch_taken_0x3c30b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c30b8) {
            ctx->pc = 0x3C30BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C30B8u;
            // 0x3c30bc: 0xc4a00000  lwc1        $f0, 0x0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C30E0u;
            goto label_3c30e0;
        }
    }
    ctx->pc = 0x3C30C0u;
    // 0x3c30c0: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x3c30c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x3c30c4: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x3c30c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x3c30c8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x3c30c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c30cc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3c30ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3c30d0: 0x0  nop
    ctx->pc = 0x3c30d0u;
    // NOP
    // 0x3c30d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3c30d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3c30d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3C30D8u;
    {
        const bool branch_taken_0x3c30d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C30DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C30D8u;
            // 0x3c30dc: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c30d8) {
            ctx->pc = 0x3C30E8u;
            goto label_3c30e8;
        }
    }
    ctx->pc = 0x3C30E0u;
label_3c30e0:
    // 0x3c30e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c30e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3c30e4: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x3c30e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_3c30e8:
    // 0x3c30e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C30E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C30F0u;
}
