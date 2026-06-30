#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002885A0
// Address: 0x2885a0 - 0x2887e0
void sub_002885A0_0x2885a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002885A0_0x2885a0");
#endif

    switch (ctx->pc) {
        case 0x288660u: goto label_288660;
        case 0x28869cu: goto label_28869c;
        case 0x288704u: goto label_288704;
        case 0x28875cu: goto label_28875c;
        case 0x2887a4u: goto label_2887a4;
        default: break;
    }

    ctx->pc = 0x2885a0u;

    // 0x2885a0: 0x27bdfd20  addiu       $sp, $sp, -0x2E0
    ctx->pc = 0x2885a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966560));
    // 0x2885a4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2885a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2885a8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2885a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x2885ac: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2885acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2885b0: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x2885b0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2885b4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2885b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2885b8: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x2885b8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2885bc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2885bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2885c0: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2885c0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2885c4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2885c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2885c8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2885c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2885cc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2885ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2885d0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2885d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2885d4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2885d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2885d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2885d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2885dc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2885dcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2885e0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2885e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2885e4: 0xafa900cc  sw          $t1, 0xCC($sp)
    ctx->pc = 0x2885e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 9));
    // 0x2885e8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2885e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2885ec: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x2885ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x2885f0: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x2885f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x2885f4: 0xc495000c  lwc1        $f21, 0xC($a0)
    ctx->pc = 0x2885f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2885f8: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x2885f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2885fc: 0x1420006a  bnez        $at, . + 4 + (0x6A << 2)
    ctx->pc = 0x2885FCu;
    {
        const bool branch_taken_0x2885fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x288600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2885FCu;
            // 0x288600: 0x140a02d  daddu       $s4, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2885fc) {
            ctx->pc = 0x2887A8u;
            goto label_2887a8;
        }
    }
    ctx->pc = 0x288604u;
    // 0x288604: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x288604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x288608: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x288608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28860c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x28860cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288610: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x288610u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x288614: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x288614u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x288618: 0x45000063  bc1f        . + 4 + (0x63 << 2)
    ctx->pc = 0x288618u;
    {
        const bool branch_taken_0x288618 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x288618) {
            ctx->pc = 0x2887A8u;
            goto label_2887a8;
        }
    }
    ctx->pc = 0x288620u;
    // 0x288620: 0x27a200dc  addiu       $v0, $sp, 0xDC
    ctx->pc = 0x288620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    // 0x288624: 0x27b100d4  addiu       $s1, $sp, 0xD4
    ctx->pc = 0x288624u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x288628: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x288628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x28862c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28862cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x288630: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x288630u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x288634: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x288634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x288638: 0x27a200d8  addiu       $v0, $sp, 0xD8
    ctx->pc = 0x288638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x28863c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28863cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x288640: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x288640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x288644: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x288644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x288648: 0xc4740004  lwc1        $f20, 0x4($v1)
    ctx->pc = 0x288648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28864c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x28864cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x288650: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x288650u;
    {
        const bool branch_taken_0x288650 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x288654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288650u;
            // 0x288654: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288650) {
            ctx->pc = 0x2886E0u;
            goto label_2886e0;
        }
    }
    ctx->pc = 0x288658u;
    // 0x288658: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x288658u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28865c: 0x0  nop
    ctx->pc = 0x28865cu;
    // NOP
label_288660:
    // 0x288660: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x288660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x288664: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x288664u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x288668: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x288668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28866c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x28866cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x288670: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x288670u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x288674: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x288674u;
    {
        const bool branch_taken_0x288674 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x288678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288674u;
            // 0x288678: 0x27a200d8  addiu       $v0, $sp, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288674) {
            ctx->pc = 0x2886E0u;
            goto label_2886e0;
        }
    }
    ctx->pc = 0x28867Cu;
    // 0x28867c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28867cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x288680: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x288680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x288684: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x288684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x288688: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x288688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x28868c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28868Cu;
    {
        const bool branch_taken_0x28868c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x288690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28868Cu;
            // 0x288690: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28868c) {
            ctx->pc = 0x2886A0u;
            goto label_2886a0;
        }
    }
    ctx->pc = 0x288694u;
    // 0x288694: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x288694u;
    SET_GPR_U32(ctx, 31, 0x28869Cu);
    ctx->pc = 0x288698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288694u;
            // 0x288698: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28869Cu; }
        if (ctx->pc != 0x28869Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28869Cu; }
        if (ctx->pc != 0x28869Cu) { return; }
    }
    ctx->pc = 0x28869Cu;
label_28869c:
    // 0x28869c: 0x0  nop
    ctx->pc = 0x28869cu;
    // NOP
label_2886a0:
    // 0x2886a0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2886a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2886a4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2886a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2886a8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2886a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2886ac: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x2886acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2886b0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2886b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2886b4: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x2886b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2886b8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2886b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2886bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2886bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2886c0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2886c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2886c4: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2886c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2886c8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2886c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2886cc: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2886ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2886d0: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x2886d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2886d4: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x2886D4u;
    {
        const bool branch_taken_0x2886d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2886D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2886D4u;
            // 0x2886d8: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2886d4) {
            ctx->pc = 0x288660u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_288660;
        }
    }
    ctx->pc = 0x2886DCu;
    // 0x2886dc: 0x0  nop
    ctx->pc = 0x2886dcu;
    // NOP
label_2886e0:
    // 0x2886e0: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x2886e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2886e4: 0x8fa900cc  lw          $t1, 0xCC($sp)
    ctx->pc = 0x2886e4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2886e8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2886e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2886ec: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2886ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2886f0: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x2886f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2886f4: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x2886f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2886f8: 0x27aa00d0  addiu       $t2, $sp, 0xD0
    ctx->pc = 0x2886f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2886fc: 0xc0a21f8  jal         func_2887E0
    ctx->pc = 0x2886FCu;
    SET_GPR_U32(ctx, 31, 0x288704u);
    ctx->pc = 0x288700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2886FCu;
            // 0x288700: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2887E0u;
    if (runtime->hasFunction(0x2887E0u)) {
        auto targetFn = runtime->lookupFunction(0x2887E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288704u; }
        if (ctx->pc != 0x288704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002887E0_0x2887e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x288704u; }
        if (ctx->pc != 0x288704u) { return; }
    }
    ctx->pc = 0x288704u;
label_288704:
    // 0x288704: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x288704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x288708: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x288708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x28870c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x28870cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x288710: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x288710u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x288714: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x288714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x288718: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x288718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x28871c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x28871cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x288720: 0xe4740004  swc1        $f20, 0x4($v1)
    ctx->pc = 0x288720u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x288724: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x288724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x288728: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x288728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x28872c: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x28872cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x288730: 0x1c60000b  bgtz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x288730u;
    {
        const bool branch_taken_0x288730 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x288734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288730u;
            // 0x288734: 0x32840  sll         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288730) {
            ctx->pc = 0x288760u;
            goto label_288760;
        }
    }
    ctx->pc = 0x288738u;
    // 0x288738: 0x28a10002  slti        $at, $a1, 0x2
    ctx->pc = 0x288738u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x28873c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x28873Cu;
    {
        const bool branch_taken_0x28873c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x28873c) {
            ctx->pc = 0x28874Cu;
            goto label_28874c;
        }
    }
    ctx->pc = 0x288744u;
    // 0x288744: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x288744u;
    {
        const bool branch_taken_0x288744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288744u;
            // 0x288748: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288744) {
            ctx->pc = 0x288754u;
            goto label_288754;
        }
    }
    ctx->pc = 0x28874Cu;
label_28874c:
    // 0x28874c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28874cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x288750: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x288750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_288754:
    // 0x288754: 0xc0a725c  jal         func_29C970
    ctx->pc = 0x288754u;
    SET_GPR_U32(ctx, 31, 0x28875Cu);
    ctx->pc = 0x288758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x288754u;
            // 0x288758: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28875Cu; }
        if (ctx->pc != 0x28875Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28875Cu; }
        if (ctx->pc != 0x28875Cu) { return; }
    }
    ctx->pc = 0x28875Cu;
label_28875c:
    // 0x28875c: 0x0  nop
    ctx->pc = 0x28875cu;
    // NOP
label_288760:
    // 0x288760: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x288760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x288764: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x288764u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x288768: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x288768u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x28876c: 0x27a300d8  addiu       $v1, $sp, 0xD8
    ctx->pc = 0x28876cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x288770: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x288770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x288774: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x288774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x288778: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x288778u;
    {
        const bool branch_taken_0x288778 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x288778) {
            ctx->pc = 0x2887A8u;
            goto label_2887a8;
        }
    }
    ctx->pc = 0x288780u;
    // 0x288780: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x288780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x288784: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x288784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x288788: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x288788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x28878c: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x28878cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x288790: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x288790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x288794: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x288794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x288798: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x288798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x28879c: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x28879Cu;
    SET_GPR_U32(ctx, 31, 0x2887A4u);
    ctx->pc = 0x2887A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28879Cu;
            // 0x2887a0: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2887A4u; }
        if (ctx->pc != 0x2887A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2887A4u; }
        if (ctx->pc != 0x2887A4u) { return; }
    }
    ctx->pc = 0x2887A4u;
label_2887a4:
    // 0x2887a4: 0x0  nop
    ctx->pc = 0x2887a4u;
    // NOP
label_2887a8:
    // 0x2887a8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2887a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2887ac: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2887acu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2887b0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2887b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2887b4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2887b4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2887b8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2887b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2887bc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2887bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2887c0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2887c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2887c4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2887c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2887c8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2887c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2887cc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2887ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2887d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2887d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2887d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2887d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2887d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2887D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2887DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2887D8u;
            // 0x2887dc: 0x27bd02e0  addiu       $sp, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2887E0u;
}
