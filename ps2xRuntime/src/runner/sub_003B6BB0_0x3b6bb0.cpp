#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B6BB0
// Address: 0x3b6bb0 - 0x3b6ce0
void sub_003B6BB0_0x3b6bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B6BB0_0x3b6bb0");
#endif

    switch (ctx->pc) {
        case 0x3b6bb0u: goto label_3b6bb0;
        case 0x3b6bb4u: goto label_3b6bb4;
        case 0x3b6bb8u: goto label_3b6bb8;
        case 0x3b6bbcu: goto label_3b6bbc;
        case 0x3b6bc0u: goto label_3b6bc0;
        case 0x3b6bc4u: goto label_3b6bc4;
        case 0x3b6bc8u: goto label_3b6bc8;
        case 0x3b6bccu: goto label_3b6bcc;
        case 0x3b6bd0u: goto label_3b6bd0;
        case 0x3b6bd4u: goto label_3b6bd4;
        case 0x3b6bd8u: goto label_3b6bd8;
        case 0x3b6bdcu: goto label_3b6bdc;
        case 0x3b6be0u: goto label_3b6be0;
        case 0x3b6be4u: goto label_3b6be4;
        case 0x3b6be8u: goto label_3b6be8;
        case 0x3b6becu: goto label_3b6bec;
        case 0x3b6bf0u: goto label_3b6bf0;
        case 0x3b6bf4u: goto label_3b6bf4;
        case 0x3b6bf8u: goto label_3b6bf8;
        case 0x3b6bfcu: goto label_3b6bfc;
        case 0x3b6c00u: goto label_3b6c00;
        case 0x3b6c04u: goto label_3b6c04;
        case 0x3b6c08u: goto label_3b6c08;
        case 0x3b6c0cu: goto label_3b6c0c;
        case 0x3b6c10u: goto label_3b6c10;
        case 0x3b6c14u: goto label_3b6c14;
        case 0x3b6c18u: goto label_3b6c18;
        case 0x3b6c1cu: goto label_3b6c1c;
        case 0x3b6c20u: goto label_3b6c20;
        case 0x3b6c24u: goto label_3b6c24;
        case 0x3b6c28u: goto label_3b6c28;
        case 0x3b6c2cu: goto label_3b6c2c;
        case 0x3b6c30u: goto label_3b6c30;
        case 0x3b6c34u: goto label_3b6c34;
        case 0x3b6c38u: goto label_3b6c38;
        case 0x3b6c3cu: goto label_3b6c3c;
        case 0x3b6c40u: goto label_3b6c40;
        case 0x3b6c44u: goto label_3b6c44;
        case 0x3b6c48u: goto label_3b6c48;
        case 0x3b6c4cu: goto label_3b6c4c;
        case 0x3b6c50u: goto label_3b6c50;
        case 0x3b6c54u: goto label_3b6c54;
        case 0x3b6c58u: goto label_3b6c58;
        case 0x3b6c5cu: goto label_3b6c5c;
        case 0x3b6c60u: goto label_3b6c60;
        case 0x3b6c64u: goto label_3b6c64;
        case 0x3b6c68u: goto label_3b6c68;
        case 0x3b6c6cu: goto label_3b6c6c;
        case 0x3b6c70u: goto label_3b6c70;
        case 0x3b6c74u: goto label_3b6c74;
        case 0x3b6c78u: goto label_3b6c78;
        case 0x3b6c7cu: goto label_3b6c7c;
        case 0x3b6c80u: goto label_3b6c80;
        case 0x3b6c84u: goto label_3b6c84;
        case 0x3b6c88u: goto label_3b6c88;
        case 0x3b6c8cu: goto label_3b6c8c;
        case 0x3b6c90u: goto label_3b6c90;
        case 0x3b6c94u: goto label_3b6c94;
        case 0x3b6c98u: goto label_3b6c98;
        case 0x3b6c9cu: goto label_3b6c9c;
        case 0x3b6ca0u: goto label_3b6ca0;
        case 0x3b6ca4u: goto label_3b6ca4;
        case 0x3b6ca8u: goto label_3b6ca8;
        case 0x3b6cacu: goto label_3b6cac;
        case 0x3b6cb0u: goto label_3b6cb0;
        case 0x3b6cb4u: goto label_3b6cb4;
        case 0x3b6cb8u: goto label_3b6cb8;
        case 0x3b6cbcu: goto label_3b6cbc;
        case 0x3b6cc0u: goto label_3b6cc0;
        case 0x3b6cc4u: goto label_3b6cc4;
        case 0x3b6cc8u: goto label_3b6cc8;
        case 0x3b6cccu: goto label_3b6ccc;
        case 0x3b6cd0u: goto label_3b6cd0;
        case 0x3b6cd4u: goto label_3b6cd4;
        case 0x3b6cd8u: goto label_3b6cd8;
        case 0x3b6cdcu: goto label_3b6cdc;
        default: break;
    }

    ctx->pc = 0x3b6bb0u;

label_3b6bb0:
    // 0x3b6bb0: 0x3e00008  jr          $ra
label_3b6bb4:
    if (ctx->pc == 0x3B6BB4u) {
        ctx->pc = 0x3B6BB4u;
            // 0x3b6bb4: 0x8c820084  lw          $v0, 0x84($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
        ctx->pc = 0x3B6BB8u;
        goto label_3b6bb8;
    }
    ctx->pc = 0x3B6BB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B6BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6BB0u;
            // 0x3b6bb4: 0x8c820084  lw          $v0, 0x84($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B6BB8u;
label_3b6bb8:
    // 0x3b6bb8: 0x0  nop
    ctx->pc = 0x3b6bb8u;
    // NOP
label_3b6bbc:
    // 0x3b6bbc: 0x0  nop
    ctx->pc = 0x3b6bbcu;
    // NOP
label_3b6bc0:
    // 0x3b6bc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b6bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3b6bc4:
    // 0x3b6bc4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3b6bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3b6bc8:
    // 0x3b6bc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b6bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3b6bcc:
    // 0x3b6bcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b6bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3b6bd0:
    // 0x3b6bd0: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3b6bd0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3b6bd4:
    // 0x3b6bd4: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_3b6bd8:
    if (ctx->pc == 0x3B6BD8u) {
        ctx->pc = 0x3B6BD8u;
            // 0x3b6bd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B6BDCu;
        goto label_3b6bdc;
    }
    ctx->pc = 0x3B6BD4u;
    {
        const bool branch_taken_0x3b6bd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3B6BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6BD4u;
            // 0x3b6bd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6bd4) {
            ctx->pc = 0x3B6C08u;
            goto label_3b6c08;
        }
    }
    ctx->pc = 0x3B6BDCu;
label_3b6bdc:
    // 0x3b6bdc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3b6bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b6be0:
    // 0x3b6be0: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_3b6be4:
    if (ctx->pc == 0x3B6BE4u) {
        ctx->pc = 0x3B6BE4u;
            // 0x3b6be4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3B6BE8u;
        goto label_3b6be8;
    }
    ctx->pc = 0x3B6BE0u;
    {
        const bool branch_taken_0x3b6be0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b6be0) {
            ctx->pc = 0x3B6BE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6BE0u;
            // 0x3b6be4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B6BFCu;
            goto label_3b6bfc;
        }
    }
    ctx->pc = 0x3B6BE8u;
label_3b6be8:
    // 0x3b6be8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3b6be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3b6bec:
    // 0x3b6bec: 0x10a30028  beq         $a1, $v1, . + 4 + (0x28 << 2)
label_3b6bf0:
    if (ctx->pc == 0x3B6BF0u) {
        ctx->pc = 0x3B6BF4u;
        goto label_3b6bf4;
    }
    ctx->pc = 0x3B6BECu;
    {
        const bool branch_taken_0x3b6bec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b6bec) {
            ctx->pc = 0x3B6C90u;
            goto label_3b6c90;
        }
    }
    ctx->pc = 0x3B6BF4u;
label_3b6bf4:
    // 0x3b6bf4: 0x10000026  b           . + 4 + (0x26 << 2)
label_3b6bf8:
    if (ctx->pc == 0x3B6BF8u) {
        ctx->pc = 0x3B6BFCu;
        goto label_3b6bfc;
    }
    ctx->pc = 0x3B6BF4u;
    {
        const bool branch_taken_0x3b6bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6bf4) {
            ctx->pc = 0x3B6C90u;
            goto label_3b6c90;
        }
    }
    ctx->pc = 0x3B6BFCu;
label_3b6bfc:
    // 0x3b6bfc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3b6bfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3b6c00:
    // 0x3b6c00: 0x320f809  jalr        $t9
label_3b6c04:
    if (ctx->pc == 0x3B6C04u) {
        ctx->pc = 0x3B6C08u;
        goto label_3b6c08;
    }
    ctx->pc = 0x3B6C00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B6C08u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B6C08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B6C08u; }
            if (ctx->pc != 0x3B6C08u) { return; }
        }
        }
    }
    ctx->pc = 0x3B6C08u;
label_3b6c08:
    // 0x3b6c08: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3b6c08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3b6c0c:
    // 0x3b6c0c: 0x8e090088  lw          $t1, 0x88($s0)
    ctx->pc = 0x3b6c0cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_3b6c10:
    // 0x3b6c10: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3b6c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3b6c14:
    // 0x3b6c14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3b6c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b6c18:
    // 0x3b6c18: 0x8e080084  lw          $t0, 0x84($s0)
    ctx->pc = 0x3b6c18u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3b6c1c:
    // 0x3b6c1c: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x3b6c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b6c20:
    // 0x3b6c20: 0xc520000c  lwc1        $f0, 0xC($t1)
    ctx->pc = 0x3b6c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b6c24:
    // 0x3b6c24: 0x2527000c  addiu       $a3, $t1, 0xC
    ctx->pc = 0x3b6c24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
label_3b6c28:
    // 0x3b6c28: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3b6c28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_3b6c2c:
    // 0x3b6c2c: 0xe520000c  swc1        $f0, 0xC($t1)
    ctx->pc = 0x3b6c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 12), bits); }
label_3b6c30:
    // 0x3b6c30: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x3b6c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_3b6c34:
    // 0x3b6c34: 0xc520000c  lwc1        $f0, 0xC($t1)
    ctx->pc = 0x3b6c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b6c38:
    // 0x3b6c38: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x3b6c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b6c3c:
    // 0x3b6c3c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b6c3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b6c40:
    // 0x3b6c40: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_3b6c44:
    if (ctx->pc == 0x3B6C44u) {
        ctx->pc = 0x3B6C44u;
            // 0x3b6c44: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B6C48u;
        goto label_3b6c48;
    }
    ctx->pc = 0x3B6C40u;
    {
        const bool branch_taken_0x3b6c40 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3B6C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6C40u;
            // 0x3b6c44: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6c40) {
            ctx->pc = 0x3B6C4Cu;
            goto label_3b6c4c;
        }
    }
    ctx->pc = 0x3B6C48u;
label_3b6c48:
    // 0x3b6c48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b6c48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b6c4c:
    // 0x3b6c4c: 0x4c20004  bltzl       $a2, . + 4 + (0x4 << 2)
label_3b6c50:
    if (ctx->pc == 0x3B6C50u) {
        ctx->pc = 0x3B6C50u;
            // 0x3b6c50: 0x62042  srl         $a0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x3B6C54u;
        goto label_3b6c54;
    }
    ctx->pc = 0x3B6C4Cu;
    {
        const bool branch_taken_0x3b6c4c = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x3b6c4c) {
            ctx->pc = 0x3B6C50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6C4Cu;
            // 0x3b6c50: 0x62042  srl         $a0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B6C60u;
            goto label_3b6c60;
        }
    }
    ctx->pc = 0x3B6C54u;
label_3b6c54:
    // 0x3b6c54: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3b6c54u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b6c58:
    // 0x3b6c58: 0x10000007  b           . + 4 + (0x7 << 2)
label_3b6c5c:
    if (ctx->pc == 0x3B6C5Cu) {
        ctx->pc = 0x3B6C5Cu;
            // 0x3b6c5c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B6C60u;
        goto label_3b6c60;
    }
    ctx->pc = 0x3B6C58u;
    {
        const bool branch_taken_0x3b6c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6C58u;
            // 0x3b6c5c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6c58) {
            ctx->pc = 0x3B6C78u;
            goto label_3b6c78;
        }
    }
    ctx->pc = 0x3B6C60u;
label_3b6c60:
    // 0x3b6c60: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x3b6c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_3b6c64:
    // 0x3b6c64: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3b6c64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3b6c68:
    // 0x3b6c68: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3b6c68u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b6c6c:
    // 0x3b6c6c: 0x0  nop
    ctx->pc = 0x3b6c6cu;
    // NOP
label_3b6c70:
    // 0x3b6c70: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3b6c70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3b6c74:
    // 0x3b6c74: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3b6c74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3b6c78:
    // 0x3b6c78: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x3b6c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b6c7c:
    // 0x3b6c7c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x3b6c7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_3b6c80:
    // 0x3b6c80: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x3b6c80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_3b6c84:
    // 0x3b6c84: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3b6c84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3b6c88:
    // 0x3b6c88: 0x1500ffe5  bnez        $t0, . + 4 + (-0x1B << 2)
label_3b6c8c:
    if (ctx->pc == 0x3B6C8Cu) {
        ctx->pc = 0x3B6C8Cu;
            // 0x3b6c8c: 0xe4e00000  swc1        $f0, 0x0($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->pc = 0x3B6C90u;
        goto label_3b6c90;
    }
    ctx->pc = 0x3B6C88u;
    {
        const bool branch_taken_0x3b6c88 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B6C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6C88u;
            // 0x3b6c8c: 0xe4e00000  swc1        $f0, 0x0($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6c88) {
            ctx->pc = 0x3B6C20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3b6c20;
        }
    }
    ctx->pc = 0x3B6C90u;
label_3b6c90:
    // 0x3b6c90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b6c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3b6c94:
    // 0x3b6c94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b6c94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3b6c98:
    // 0x3b6c98: 0x3e00008  jr          $ra
label_3b6c9c:
    if (ctx->pc == 0x3B6C9Cu) {
        ctx->pc = 0x3B6C9Cu;
            // 0x3b6c9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3B6CA0u;
        goto label_3b6ca0;
    }
    ctx->pc = 0x3B6C98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B6C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6C98u;
            // 0x3b6c9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B6CA0u;
label_3b6ca0:
    // 0x3b6ca0: 0x8c850088  lw          $a1, 0x88($a0)
    ctx->pc = 0x3b6ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_3b6ca4:
    // 0x3b6ca4: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_3b6ca8:
    if (ctx->pc == 0x3B6CA8u) {
        ctx->pc = 0x3B6CA8u;
            // 0x3b6ca8: 0x8c830084  lw          $v1, 0x84($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
        ctx->pc = 0x3B6CACu;
        goto label_3b6cac;
    }
    ctx->pc = 0x3B6CA4u;
    {
        const bool branch_taken_0x3b6ca4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6CA4u;
            // 0x3b6ca8: 0x8c830084  lw          $v1, 0x84($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6ca4) {
            ctx->pc = 0x3B6CC8u;
            goto label_3b6cc8;
        }
    }
    ctx->pc = 0x3B6CACu;
label_3b6cac:
    // 0x3b6cac: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x3b6cacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_3b6cb0:
    // 0x3b6cb0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3b6cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3b6cb4:
    // 0x3b6cb4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3b6cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_3b6cb8:
    // 0x3b6cb8: 0x0  nop
    ctx->pc = 0x3b6cb8u;
    // NOP
label_3b6cbc:
    // 0x3b6cbc: 0x0  nop
    ctx->pc = 0x3b6cbcu;
    // NOP
label_3b6cc0:
    // 0x3b6cc0: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_3b6cc4:
    if (ctx->pc == 0x3B6CC4u) {
        ctx->pc = 0x3B6CC8u;
        goto label_3b6cc8;
    }
    ctx->pc = 0x3B6CC0u;
    {
        const bool branch_taken_0x3b6cc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b6cc0) {
            ctx->pc = 0x3B6CACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3b6cac;
        }
    }
    ctx->pc = 0x3B6CC8u;
label_3b6cc8:
    // 0x3b6cc8: 0x3e00008  jr          $ra
label_3b6ccc:
    if (ctx->pc == 0x3B6CCCu) {
        ctx->pc = 0x3B6CD0u;
        goto label_3b6cd0;
    }
    ctx->pc = 0x3B6CC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B6CD0u;
label_3b6cd0:
    // 0x3b6cd0: 0x80ed9b0  j           func_3B66C0
label_3b6cd4:
    if (ctx->pc == 0x3B6CD4u) {
        ctx->pc = 0x3B6CD4u;
            // 0x3b6cd4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x3B6CD8u;
        goto label_3b6cd8;
    }
    ctx->pc = 0x3B6CD0u;
    ctx->pc = 0x3B6CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6CD0u;
            // 0x3b6cd4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B66C0u;
    {
        auto targetFn = runtime->lookupFunction(0x3B66C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3B6CD8u;
label_3b6cd8:
    // 0x3b6cd8: 0x0  nop
    ctx->pc = 0x3b6cd8u;
    // NOP
label_3b6cdc:
    // 0x3b6cdc: 0x0  nop
    ctx->pc = 0x3b6cdcu;
    // NOP
}
