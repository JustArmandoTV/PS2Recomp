#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0034CE90
// Address: 0x34ce90 - 0x34cf70
void sub_0034CE90_0x34ce90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034CE90_0x34ce90");
#endif

    ctx->pc = 0x34ce90u;

    // 0x34ce90: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x34ce90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x34ce94: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x34ce94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x34ce98: 0x50c50030  beql        $a2, $a1, . + 4 + (0x30 << 2)
    ctx->pc = 0x34CE98u;
    {
        const bool branch_taken_0x34ce98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x34ce98) {
            ctx->pc = 0x34CE9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34CE98u;
            // 0x34ce9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34CF5Cu;
            goto label_34cf5c;
        }
    }
    ctx->pc = 0x34CEA0u;
    // 0x34cea0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x34cea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34cea4: 0x50c2000b  beql        $a2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x34CEA4u;
    {
        const bool branch_taken_0x34cea4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x34cea4) {
            ctx->pc = 0x34CEA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34CEA4u;
            // 0x34cea8: 0x8c830018  lw          $v1, 0x18($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34CED4u;
            goto label_34ced4;
        }
    }
    ctx->pc = 0x34CEACu;
    // 0x34ceac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34ceacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34ceb0: 0x10c30029  beq         $a2, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x34CEB0u;
    {
        const bool branch_taken_0x34ceb0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x34ceb0) {
            ctx->pc = 0x34CF58u;
            goto label_34cf58;
        }
    }
    ctx->pc = 0x34CEB8u;
    // 0x34ceb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34ceb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34cebc: 0x50c20026  beql        $a2, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x34CEBCu;
    {
        const bool branch_taken_0x34cebc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x34cebc) {
            ctx->pc = 0x34CEC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34CEBCu;
            // 0x34cec0: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34CF58u;
            goto label_34cf58;
        }
    }
    ctx->pc = 0x34CEC4u;
    // 0x34cec4: 0x10c00024  beqz        $a2, . + 4 + (0x24 << 2)
    ctx->pc = 0x34CEC4u;
    {
        const bool branch_taken_0x34cec4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x34cec4) {
            ctx->pc = 0x34CF58u;
            goto label_34cf58;
        }
    }
    ctx->pc = 0x34CECCu;
    // 0x34cecc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x34CECCu;
    {
        const bool branch_taken_0x34cecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34cecc) {
            ctx->pc = 0x34CF58u;
            goto label_34cf58;
        }
    }
    ctx->pc = 0x34CED4u;
label_34ced4:
    // 0x34ced4: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x34ced4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x34ced8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x34ced8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x34cedc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x34cedcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x34cee0: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x34cee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34cee4: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x34cee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x34cee8: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x34cee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34ceec: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x34ceecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34cef0: 0x0  nop
    ctx->pc = 0x34cef0u;
    // NOP
    // 0x34cef4: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x34cef4u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[3];
    // 0x34cef8: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x34cef8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x34cefc: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x34cefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34cf00: 0x4601001c  madd.s      $f0, $f0, $f1
    ctx->pc = 0x34cf00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[1]));
    // 0x34cf04: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x34cf04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x34cf08: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x34cf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x34cf0c: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x34cf0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34cf10: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x34cf10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34cf14: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x34cf14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34cf18: 0x45020010  bc1fl       . + 4 + (0x10 << 2)
    ctx->pc = 0x34CF18u;
    {
        const bool branch_taken_0x34cf18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34cf18) {
            ctx->pc = 0x34CF1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34CF18u;
            // 0x34cf1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34CF5Cu;
            goto label_34cf5c;
        }
    }
    ctx->pc = 0x34CF20u;
    // 0x34cf20: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x34cf20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x34cf24: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x34cf24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x34cf28: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x34cf28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x34cf2c: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x34cf2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34cf30: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x34cf30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x34cf34: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x34cf34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34cf38: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x34cf38u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x34cf3c: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x34cf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34cf40: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x34cf40u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[3];
    // 0x34cf44: 0x4601001d  msub.s      $f0, $f0, $f1
    ctx->pc = 0x34cf44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[1]));
    // 0x34cf48: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x34cf48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x34cf4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34cf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34cf50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x34CF50u;
    {
        const bool branch_taken_0x34cf50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34cf50) {
            ctx->pc = 0x34CF5Cu;
            goto label_34cf5c;
        }
    }
    ctx->pc = 0x34CF58u;
label_34cf58:
    // 0x34cf58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34cf58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34cf5c:
    // 0x34cf5c: 0x3e00008  jr          $ra
    ctx->pc = 0x34CF5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34CF64u;
    // 0x34cf64: 0x0  nop
    ctx->pc = 0x34cf64u;
    // NOP
    // 0x34cf68: 0x0  nop
    ctx->pc = 0x34cf68u;
    // NOP
    // 0x34cf6c: 0x0  nop
    ctx->pc = 0x34cf6cu;
    // NOP
}
