#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00288BF0
// Address: 0x288bf0 - 0x288e60
void sub_00288BF0_0x288bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288BF0_0x288bf0");
#endif

    switch (ctx->pc) {
        case 0x288cfcu: goto label_288cfc;
        case 0x288d4cu: goto label_288d4c;
        case 0x288d9cu: goto label_288d9c;
        case 0x288e20u: goto label_288e20;
        default: break;
    }

    ctx->pc = 0x288bf0u;

    // 0x288bf0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x288bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x288bf4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x288bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x288bf8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x288bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x288bfc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x288bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x288c00: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x288c00u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288c04: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x288c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x288c08: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x288c08u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288c0c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x288c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x288c10: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x288c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x288c14: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x288c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x288c18: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x288c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x288c1c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x288c1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288c20: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x288c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x288c24: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x288c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x288c28: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x288c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x288c2c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x288c2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x288c30: 0xafa900bc  sw          $t1, 0xBC($sp)
    ctx->pc = 0x288c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 9));
    // 0x288c34: 0xafaa00b8  sw          $t2, 0xB8($sp)
    ctx->pc = 0x288c34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 10));
    // 0x288c38: 0x8d630004  lw          $v1, 0x4($t3)
    ctx->pc = 0x288c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x288c3c: 0x8fb100e0  lw          $s1, 0xE0($sp)
    ctx->pc = 0x288c3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x288c40: 0x14640077  bne         $v1, $a0, . + 4 + (0x77 << 2)
    ctx->pc = 0x288C40u;
    {
        const bool branch_taken_0x288c40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x288C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288C40u;
            // 0x288c44: 0x160902d  daddu       $s2, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288c40) {
            ctx->pc = 0x288E20u;
            goto label_288e20;
        }
    }
    ctx->pc = 0x288C48u;
    // 0x288c48: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x288c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x288c4c: 0x14640074  bne         $v1, $a0, . + 4 + (0x74 << 2)
    ctx->pc = 0x288C4Cu;
    {
        const bool branch_taken_0x288c4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x288c4c) {
            ctx->pc = 0x288E20u;
            goto label_288e20;
        }
    }
    ctx->pc = 0x288C54u;
    // 0x288c54: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x288c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x288c58: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x288C58u;
    {
        const bool branch_taken_0x288c58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x288C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288C58u;
            // 0x288c5c: 0x8d100000  lw          $s0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288c58) {
            ctx->pc = 0x288C88u;
            goto label_288c88;
        }
    }
    ctx->pc = 0x288C60u;
    // 0x288c60: 0x30e5ffff  andi        $a1, $a3, 0xFFFF
    ctx->pc = 0x288c60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x288c64: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x288c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x288c68: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x288C68u;
    {
        const bool branch_taken_0x288c68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x288c68) {
            ctx->pc = 0x288C88u;
            goto label_288c88;
        }
    }
    ctx->pc = 0x288C70u;
    // 0x288c70: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x288c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x288c74: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x288c74u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x288c78: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x288C78u;
    {
        const bool branch_taken_0x288c78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x288c78) {
            ctx->pc = 0x288C88u;
            goto label_288c88;
        }
    }
    ctx->pc = 0x288C80u;
    // 0x288c80: 0x8d100004  lw          $s0, 0x4($t0)
    ctx->pc = 0x288c80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x288c84: 0x0  nop
    ctx->pc = 0x288c84u;
    // NOP
label_288c88:
    // 0x288c88: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x288c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x288c8c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x288c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x288c90: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x288c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288c94: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x288c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x288c98: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x288c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x288c9c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x288c9cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x288ca0: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x288ca0u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x288ca4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x288ca4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x288ca8: 0x4500005d  bc1f        . + 4 + (0x5D << 2)
    ctx->pc = 0x288CA8u;
    {
        const bool branch_taken_0x288ca8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x288ca8) {
            ctx->pc = 0x288E20u;
            goto label_288e20;
        }
    }
    ctx->pc = 0x288CB0u;
    // 0x288cb0: 0x27a200cc  addiu       $v0, $sp, 0xCC
    ctx->pc = 0x288cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x288cb4: 0x27b400c4  addiu       $s4, $sp, 0xC4
    ctx->pc = 0x288cb4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x288cb8: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x288cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x288cbc: 0x27b600c8  addiu       $s6, $sp, 0xC8
    ctx->pc = 0x288cbcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x288cc0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x288cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x288cc4: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x288cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x288cc8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x288cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x288ccc: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x288cccu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x288cd0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x288cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x288cd4: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x288cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x288cd8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x288cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x288cdc: 0xc4940004  lwc1        $f20, 0x4($a0)
    ctx->pc = 0x288cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x288ce0: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x288ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x288ce4: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x288ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x288ce8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x288CE8u;
    {
        const bool branch_taken_0x288ce8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x288CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288CE8u;
            // 0x288cec: 0x8e550000  lw          $s5, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288ce8) {
            ctx->pc = 0x288D00u;
            goto label_288d00;
        }
    }
    ctx->pc = 0x288CF0u;
    // 0x288cf0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x288cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x288cf4: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x288CF4u;
    SET_GPR_U32(ctx, 31, 0x288CFCu);
    ctx->pc = 0x288CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288CF4u;
            // 0x288cf8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288CFCu; }
        if (ctx->pc != 0x288CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288CFCu; }
        if (ctx->pc != 0x288CFCu) { return; }
    }
    ctx->pc = 0x288CFCu;
label_288cfc:
    // 0x288cfc: 0x0  nop
    ctx->pc = 0x288cfcu;
    // NOP
label_288d00:
    // 0x288d00: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x288d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x288d04: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x288d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x288d08: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x288d08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x288d0c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x288d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x288d10: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x288d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x288d14: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x288d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x288d18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x288d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x288d1c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x288d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x288d20: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x288d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288d24: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x288d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x288d28: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x288d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x288d2c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x288d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x288d30: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x288d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x288d34: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x288d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x288d38: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x288D38u;
    {
        const bool branch_taken_0x288d38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x288D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288D38u;
            // 0x288d3c: 0x8e350000  lw          $s5, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288d38) {
            ctx->pc = 0x288D50u;
            goto label_288d50;
        }
    }
    ctx->pc = 0x288D40u;
    // 0x288d40: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x288d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x288d44: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x288D44u;
    SET_GPR_U32(ctx, 31, 0x288D4Cu);
    ctx->pc = 0x288D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288D44u;
            // 0x288d48: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288D4Cu; }
        if (ctx->pc != 0x288D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288D4Cu; }
        if (ctx->pc != 0x288D4Cu) { return; }
    }
    ctx->pc = 0x288D4Cu;
label_288d4c:
    // 0x288d4c: 0x0  nop
    ctx->pc = 0x288d4cu;
    // NOP
label_288d50:
    // 0x288d50: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x288d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x288d54: 0x8fa800bc  lw          $t0, 0xBC($sp)
    ctx->pc = 0x288d54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x288d58: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x288d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288d5c: 0x8fa900b8  lw          $t1, 0xB8($sp)
    ctx->pc = 0x288d5cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x288d60: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x288d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288d64: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x288d64u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x288d68: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x288d68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288d6c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x288d6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288d70: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x288d70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x288d74: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x288d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x288d78: 0x358c0  sll         $t3, $v1, 3
    ctx->pc = 0x288d78u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x288d7c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x288d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x288d80: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x288d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x288d84: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x288d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x288d88: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x288d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x288d8c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x288d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x288d90: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x288d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288d94: 0xc0a21f8  jal         func_2887E0
    ctx->pc = 0x288D94u;
    SET_GPR_U32(ctx, 31, 0x288D9Cu);
    ctx->pc = 0x288D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288D94u;
            // 0x288d98: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887E0u;
    if (runtime->hasFunction(0x2887E0u)) {
        auto targetFn = runtime->lookupFunction(0x2887E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288D9Cu; }
        if (ctx->pc != 0x288D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002887E0_0x2887e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288D9Cu; }
        if (ctx->pc != 0x288D9Cu) { return; }
    }
    ctx->pc = 0x288D9Cu;
label_288d9c:
    // 0x288d9c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x288d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x288da0: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x288da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x288da4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x288da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x288da8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x288da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x288dac: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x288DACu;
    {
        const bool branch_taken_0x288dac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x288dac) {
            ctx->pc = 0x288DD0u;
            goto label_288dd0;
        }
    }
    ctx->pc = 0x288DB4u;
    // 0x288db4: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x288db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288db8: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x288db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x288dbc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x288dbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x288dc0: 0x0  nop
    ctx->pc = 0x288dc0u;
    // NOP
    // 0x288dc4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x288dc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x288dc8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x288DC8u;
    {
        const bool branch_taken_0x288dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288DC8u;
            // 0x288dcc: 0xe4a00004  swc1        $f0, 0x4($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x288dc8) {
            ctx->pc = 0x288DE8u;
            goto label_288de8;
        }
    }
    ctx->pc = 0x288DD0u;
label_288dd0:
    // 0x288dd0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x288dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x288dd4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x288dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x288dd8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x288dd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x288ddc: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x288ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288de0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x288de0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x288de4: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x288de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_288de8:
    // 0x288de8: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x288de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x288dec: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x288decu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x288df0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x288df0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x288df4: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x288DF4u;
    {
        const bool branch_taken_0x288df4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x288df4) {
            ctx->pc = 0x288E20u;
            goto label_288e20;
        }
    }
    ctx->pc = 0x288DFCu;
    // 0x288dfc: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x288dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x288e00: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x288e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x288e04: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x288e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x288e08: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x288e08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x288e0c: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x288e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x288e10: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x288e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x288e14: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x288e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x288e18: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x288E18u;
    SET_GPR_U32(ctx, 31, 0x288E20u);
    ctx->pc = 0x288E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288E18u;
            // 0x288e1c: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288E20u; }
        if (ctx->pc != 0x288E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288E20u; }
        if (ctx->pc != 0x288E20u) { return; }
    }
    ctx->pc = 0x288E20u;
label_288e20:
    // 0x288e20: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x288e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x288e24: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x288e24u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x288e28: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x288e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x288e2c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x288e2cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x288e30: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x288e30u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x288e34: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x288e34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x288e38: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x288e38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x288e3c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x288e3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x288e40: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x288e40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x288e44: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x288e44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x288e48: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x288e48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288e4c: 0x3e00008  jr          $ra
    ctx->pc = 0x288E4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288E4Cu;
            // 0x288e50: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x288E54u;
    // 0x288e54: 0x0  nop
    ctx->pc = 0x288e54u;
    // NOP
    // 0x288e58: 0x0  nop
    ctx->pc = 0x288e58u;
    // NOP
    // 0x288e5c: 0x0  nop
    ctx->pc = 0x288e5cu;
    // NOP
}
