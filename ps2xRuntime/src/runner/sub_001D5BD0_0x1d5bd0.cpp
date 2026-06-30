#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D5BD0
// Address: 0x1d5bd0 - 0x1d5ca0
void sub_001D5BD0_0x1d5bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5BD0_0x1d5bd0");
#endif

    switch (ctx->pc) {
        case 0x1d5c14u: goto label_1d5c14;
        case 0x1d5c24u: goto label_1d5c24;
        default: break;
    }

    ctx->pc = 0x1d5bd0u;

    // 0x1d5bd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d5bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1d5bd4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1d5bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x1d5bd8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1d5bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1d5bdc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1d5bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1d5be0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1d5be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1d5be4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d5be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d5be8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d5be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d5bec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d5becu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5bf0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1d5bf0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1d5bf4: 0x3c1000af  lui         $s0, 0xAF
    ctx->pc = 0x1d5bf4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)175 << 16));
    // 0x1d5bf8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1d5bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1d5bfc: 0x26100e80  addiu       $s0, $s0, 0xE80
    ctx->pc = 0x1d5bfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3712));
    // 0x1d5c00: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x1d5c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x1d5c04: 0x247202c0  addiu       $s2, $v1, 0x2C0
    ctx->pc = 0x1d5c04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 704));
    // 0x1d5c08: 0x8c930780  lw          $s3, 0x780($a0)
    ctx->pc = 0x1d5c08u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1920)));
    // 0x1d5c0c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1d5c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x1d5c10: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1d5c10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1d5c14:
    // 0x1d5c14: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1d5c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d5c18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d5c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5c1c: 0xc04cc34  jal         func_1330D0
    ctx->pc = 0x1D5C1Cu;
    SET_GPR_U32(ctx, 31, 0x1D5C24u);
    ctx->pc = 0x1D5C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5C1Cu;
            // 0x1d5c20: 0x244502c0  addiu       $a1, $v0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5C24u; }
        if (ctx->pc != 0x1D5C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5C24u; }
        if (ctx->pc != 0x1D5C24u) { return; }
    }
    ctx->pc = 0x1D5C24u;
label_1d5c24:
    // 0x1d5c24: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1d5c24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d5c28: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5C28u;
    {
        const bool branch_taken_0x1d5c28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d5c28) {
            ctx->pc = 0x1D5C38u;
            goto label_1d5c38;
        }
    }
    ctx->pc = 0x1D5C30u;
    // 0x1d5c30: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1d5c30u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1d5c34: 0x0  nop
    ctx->pc = 0x1d5c34u;
    // NOP
label_1d5c38:
    // 0x1d5c38: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d5c38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d5c3c: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x1d5c3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1d5c40: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1D5C40u;
    {
        const bool branch_taken_0x1d5c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5C40u;
            // 0x1d5c44: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5c40) {
            ctx->pc = 0x1D5C14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d5c14;
        }
    }
    ctx->pc = 0x1D5C48u;
    // 0x1d5c48: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x1d5c48u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x1d5c4c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1d5c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d5c50: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1d5c50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d5c54: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1d5c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d5c58: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1d5c58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d5c5c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d5c5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5c60: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d5c60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5c64: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5C64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5C64u;
            // 0x1d5c68: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D5C6Cu;
    // 0x1d5c6c: 0x0  nop
    ctx->pc = 0x1d5c6cu;
    // NOP
    // 0x1d5c70: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1d5c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1d5c74: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1d5c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1d5c78: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1d5c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1d5c7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d5c7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5c80: 0xc4610dec  lwc1        $f1, 0xDEC($v1)
    ctx->pc = 0x1d5c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 3564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d5c84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d5c84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d5c88: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D5C88u;
    {
        const bool branch_taken_0x1d5c88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d5c88) {
            ctx->pc = 0x1D5C8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5C88u;
            // 0x1d5c8c: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D5C90u;
            goto label_1d5c90;
        }
    }
    ctx->pc = 0x1D5C90u;
label_1d5c90:
    // 0x1d5c90: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5C90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D5C98u;
    // 0x1d5c98: 0x0  nop
    ctx->pc = 0x1d5c98u;
    // NOP
    // 0x1d5c9c: 0x0  nop
    ctx->pc = 0x1d5c9cu;
    // NOP
}
