#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00136E70
// Address: 0x136e70 - 0x137040
void sub_00136E70_0x136e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136E70_0x136e70");
#endif

    switch (ctx->pc) {
        case 0x136ea4u: goto label_136ea4;
        case 0x136f24u: goto label_136f24;
        case 0x136f34u: goto label_136f34;
        case 0x136f44u: goto label_136f44;
        case 0x136fa0u: goto label_136fa0;
        case 0x136fb0u: goto label_136fb0;
        case 0x136fc0u: goto label_136fc0;
        case 0x136ff0u: goto label_136ff0;
        case 0x137000u: goto label_137000;
        case 0x137010u: goto label_137010;
        case 0x137024u: goto label_137024;
        default: break;
    }

    ctx->pc = 0x136e70u;

    // 0x136e70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x136e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x136e74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x136e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x136e78: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x136e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x136e7c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x136e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x136e80: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x136e80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136e84: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x136e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x136e88: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x136e88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136e8c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x136e8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136e90: 0x2cc10002  sltiu       $at, $a2, 0x2
    ctx->pc = 0x136e90u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x136e94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x136e94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136e98: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x136E98u;
    {
        const bool branch_taken_0x136e98 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x136E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136E98u;
            // 0x136e9c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x136e98) {
            ctx->pc = 0x136EE0u;
            goto label_136ee0;
        }
    }
    ctx->pc = 0x136EA0u;
    // 0x136ea0: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x136ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_136ea4:
    // 0x136ea4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x136ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x136ea8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x136ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x136eac: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x136eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x136eb0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x136eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136eb4: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x136eb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136eb8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x136EB8u;
    {
        const bool branch_taken_0x136eb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x136eb8) {
            ctx->pc = 0x136EC8u;
            goto label_136ec8;
        }
    }
    ctx->pc = 0x136EC0u;
    // 0x136ec0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x136EC0u;
    {
        const bool branch_taken_0x136ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136EC0u;
            // 0x136ec4: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136ec0) {
            ctx->pc = 0x136ED0u;
            goto label_136ed0;
        }
    }
    ctx->pc = 0x136EC8u;
label_136ec8:
    // 0x136ec8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x136ec8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136ecc: 0x0  nop
    ctx->pc = 0x136eccu;
    // NOP
label_136ed0:
    // 0x136ed0: 0xc71023  subu        $v0, $a2, $a3
    ctx->pc = 0x136ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x136ed4: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x136ed4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x136ed8: 0x5020fff2  beql        $at, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x136ED8u;
    {
        const bool branch_taken_0x136ed8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x136ed8) {
            ctx->pc = 0x136EDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x136ED8u;
            // 0x136edc: 0xe61021  addu        $v0, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x136EA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_136ea4;
        }
    }
    ctx->pc = 0x136EE0u;
label_136ee0:
    // 0x136ee0: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x136ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x136ee4: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x136ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x136ee8: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x136ee8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x136eec: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x136EECu;
    {
        const bool branch_taken_0x136eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x136EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136EECu;
            // 0x136ef0: 0x831821  addu        $v1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136eec) {
            ctx->pc = 0x136F4Cu;
            goto label_136f4c;
        }
    }
    ctx->pc = 0x136EF4u;
    // 0x136ef4: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x136ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x136ef8: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x136ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x136efc: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x136efcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x136f00: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x136F00u;
    {
        const bool branch_taken_0x136f00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x136F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136F00u;
            // 0x136f04: 0x8c67000c  lw          $a3, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136f00) {
            ctx->pc = 0x136F2Cu;
            goto label_136f2c;
        }
    }
    ctx->pc = 0x136F08u;
    // 0x136f08: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x136f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x136f0c: 0x52020003  beql        $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x136F0Cu;
    {
        const bool branch_taken_0x136f0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x136f0c) {
            ctx->pc = 0x136F10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x136F0Cu;
            // 0x136f10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x136F1Cu;
            goto label_136f1c;
        }
    }
    ctx->pc = 0x136F14u;
    // 0x136f14: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x136F14u;
    {
        const bool branch_taken_0x136f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136F14u;
            // 0x136f18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136f14) {
            ctx->pc = 0x136F3Cu;
            goto label_136f3c;
        }
    }
    ctx->pc = 0x136F1Cu;
label_136f1c:
    // 0x136f1c: 0xc04ca64  jal         func_132990
    ctx->pc = 0x136F1Cu;
    SET_GPR_U32(ctx, 31, 0x136F24u);
    ctx->pc = 0x132990u;
    if (runtime->hasFunction(0x132990u)) {
        auto targetFn = runtime->lookupFunction(0x132990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136F24u; }
        if (ctx->pc != 0x136F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132990_0x132990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136F24u; }
        if (ctx->pc != 0x136F24u) { return; }
    }
    ctx->pc = 0x136F24u;
label_136f24:
    // 0x136f24: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x136F24u;
    {
        const bool branch_taken_0x136f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136f24) {
            ctx->pc = 0x136F44u;
            goto label_136f44;
        }
    }
    ctx->pc = 0x136F2Cu;
label_136f2c:
    // 0x136f2c: 0xc04cab0  jal         func_132AC0
    ctx->pc = 0x136F2Cu;
    SET_GPR_U32(ctx, 31, 0x136F34u);
    ctx->pc = 0x136F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136F2Cu;
            // 0x136f30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136F34u; }
        if (ctx->pc != 0x136F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136F34u; }
        if (ctx->pc != 0x136F34u) { return; }
    }
    ctx->pc = 0x136F34u;
label_136f34:
    // 0x136f34: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x136F34u;
    {
        const bool branch_taken_0x136f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136f34) {
            ctx->pc = 0x136F44u;
            goto label_136f44;
        }
    }
    ctx->pc = 0x136F3Cu;
label_136f3c:
    // 0x136f3c: 0xc04ca18  jal         func_132860
    ctx->pc = 0x136F3Cu;
    SET_GPR_U32(ctx, 31, 0x136F44u);
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136F44u; }
        if (ctx->pc != 0x136F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136F44u; }
        if (ctx->pc != 0x136F44u) { return; }
    }
    ctx->pc = 0x136F44u;
label_136f44:
    // 0x136f44: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x136F44u;
    {
        const bool branch_taken_0x136f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136F44u;
            // 0x136f48: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136f44) {
            ctx->pc = 0x137028u;
            goto label_137028;
        }
    }
    ctx->pc = 0x136F4Cu;
label_136f4c:
    // 0x136f4c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x136f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x136f50: 0x8c67000c  lw          $a3, 0xC($v1)
    ctx->pc = 0x136f50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x136f54: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x136f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136f58: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x136f58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x136f5c: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x136f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x136f60: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x136f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x136f64: 0x46026041  sub.s       $f1, $f12, $f2
    ctx->pc = 0x136f64u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x136f68: 0x24720010  addiu       $s2, $v1, 0x10
    ctx->pc = 0x136f68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x136f6c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x136f6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x136f70: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x136f70u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
    // 0x136f74: 0x0  nop
    ctx->pc = 0x136f74u;
    // NOP
    // 0x136f78: 0x0  nop
    ctx->pc = 0x136f78u;
    // NOP
    // 0x136f7c: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x136F7Cu;
    {
        const bool branch_taken_0x136f7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x136f7c) {
            ctx->pc = 0x136FA8u;
            goto label_136fa8;
        }
    }
    ctx->pc = 0x136F84u;
    // 0x136f84: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x136f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x136f88: 0x52020003  beql        $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x136F88u;
    {
        const bool branch_taken_0x136f88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x136f88) {
            ctx->pc = 0x136F8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x136F88u;
            // 0x136f8c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
            ctx->pc = 0x136F98u;
            goto label_136f98;
        }
    }
    ctx->pc = 0x136F90u;
    // 0x136f90: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x136F90u;
    {
        const bool branch_taken_0x136f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136F90u;
            // 0x136f94: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136f90) {
            ctx->pc = 0x136FB8u;
            goto label_136fb8;
        }
    }
    ctx->pc = 0x136F98u;
label_136f98:
    // 0x136f98: 0xc04ca64  jal         func_132990
    ctx->pc = 0x136F98u;
    SET_GPR_U32(ctx, 31, 0x136FA0u);
    ctx->pc = 0x132990u;
    if (runtime->hasFunction(0x132990u)) {
        auto targetFn = runtime->lookupFunction(0x132990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136FA0u; }
        if (ctx->pc != 0x136FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132990_0x132990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136FA0u; }
        if (ctx->pc != 0x136FA0u) { return; }
    }
    ctx->pc = 0x136FA0u;
label_136fa0:
    // 0x136fa0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x136FA0u;
    {
        const bool branch_taken_0x136fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136FA0u;
            // 0x136fa4: 0x8e47000c  lw          $a3, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136fa0) {
            ctx->pc = 0x136FC4u;
            goto label_136fc4;
        }
    }
    ctx->pc = 0x136FA8u;
label_136fa8:
    // 0x136fa8: 0xc04cab0  jal         func_132AC0
    ctx->pc = 0x136FA8u;
    SET_GPR_U32(ctx, 31, 0x136FB0u);
    ctx->pc = 0x136FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136FA8u;
            // 0x136fac: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136FB0u; }
        if (ctx->pc != 0x136FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136FB0u; }
        if (ctx->pc != 0x136FB0u) { return; }
    }
    ctx->pc = 0x136FB0u;
label_136fb0:
    // 0x136fb0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x136FB0u;
    {
        const bool branch_taken_0x136fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136fb0) {
            ctx->pc = 0x136FC0u;
            goto label_136fc0;
        }
    }
    ctx->pc = 0x136FB8u;
label_136fb8:
    // 0x136fb8: 0xc04ca18  jal         func_132860
    ctx->pc = 0x136FB8u;
    SET_GPR_U32(ctx, 31, 0x136FC0u);
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136FC0u; }
        if (ctx->pc != 0x136FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136FC0u; }
        if (ctx->pc != 0x136FC0u) { return; }
    }
    ctx->pc = 0x136FC0u;
label_136fc0:
    // 0x136fc0: 0x8e47000c  lw          $a3, 0xC($s2)
    ctx->pc = 0x136fc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_136fc4:
    // 0x136fc4: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x136fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x136fc8: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x136fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x136fcc: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x136FCCu;
    {
        const bool branch_taken_0x136fcc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x136FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136FCCu;
            // 0x136fd0: 0x8e460008  lw          $a2, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136fcc) {
            ctx->pc = 0x136FF8u;
            goto label_136ff8;
        }
    }
    ctx->pc = 0x136FD4u;
    // 0x136fd4: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x136fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x136fd8: 0x52020003  beql        $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x136FD8u;
    {
        const bool branch_taken_0x136fd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x136fd8) {
            ctx->pc = 0x136FDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x136FD8u;
            // 0x136fdc: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
            ctx->pc = 0x136FE8u;
            goto label_136fe8;
        }
    }
    ctx->pc = 0x136FE0u;
    // 0x136fe0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x136FE0u;
    {
        const bool branch_taken_0x136fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136FE0u;
            // 0x136fe4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136fe0) {
            ctx->pc = 0x137008u;
            goto label_137008;
        }
    }
    ctx->pc = 0x136FE8u;
label_136fe8:
    // 0x136fe8: 0xc04ca64  jal         func_132990
    ctx->pc = 0x136FE8u;
    SET_GPR_U32(ctx, 31, 0x136FF0u);
    ctx->pc = 0x132990u;
    if (runtime->hasFunction(0x132990u)) {
        auto targetFn = runtime->lookupFunction(0x132990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136FF0u; }
        if (ctx->pc != 0x136FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132990_0x132990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136FF0u; }
        if (ctx->pc != 0x136FF0u) { return; }
    }
    ctx->pc = 0x136FF0u;
label_136ff0:
    // 0x136ff0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x136FF0u;
    {
        const bool branch_taken_0x136ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136FF0u;
            // 0x136ff4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136ff0) {
            ctx->pc = 0x137014u;
            goto label_137014;
        }
    }
    ctx->pc = 0x136FF8u;
label_136ff8:
    // 0x136ff8: 0xc04cab0  jal         func_132AC0
    ctx->pc = 0x136FF8u;
    SET_GPR_U32(ctx, 31, 0x137000u);
    ctx->pc = 0x136FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136FF8u;
            // 0x136ffc: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137000u; }
        if (ctx->pc != 0x137000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137000u; }
        if (ctx->pc != 0x137000u) { return; }
    }
    ctx->pc = 0x137000u;
label_137000:
    // 0x137000: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x137000u;
    {
        const bool branch_taken_0x137000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x137000) {
            ctx->pc = 0x137010u;
            goto label_137010;
        }
    }
    ctx->pc = 0x137008u;
label_137008:
    // 0x137008: 0xc04ca18  jal         func_132860
    ctx->pc = 0x137008u;
    SET_GPR_U32(ctx, 31, 0x137010u);
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137010u; }
        if (ctx->pc != 0x137010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137010u; }
        if (ctx->pc != 0x137010u) { return; }
    }
    ctx->pc = 0x137010u;
label_137010:
    // 0x137010: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x137010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_137014:
    // 0x137014: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x137014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x137018: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x137018u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x13701c: 0xc04c8b4  jal         func_1322D0
    ctx->pc = 0x13701Cu;
    SET_GPR_U32(ctx, 31, 0x137024u);
    ctx->pc = 0x137020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13701Cu;
            // 0x137020: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1322D0u;
    if (runtime->hasFunction(0x1322D0u)) {
        auto targetFn = runtime->lookupFunction(0x1322D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137024u; }
        if (ctx->pc != 0x137024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001322D0_0x1322d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x137024u; }
        if (ctx->pc != 0x137024u) { return; }
    }
    ctx->pc = 0x137024u;
label_137024:
    // 0x137024: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x137024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_137028:
    // 0x137028: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x137028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13702c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x13702cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x137030: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x137030u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137034: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x137034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137038: 0x3e00008  jr          $ra
    ctx->pc = 0x137038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13703Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137038u;
            // 0x13703c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x137040u;
}
