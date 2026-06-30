#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FDF70
// Address: 0x1fdf70 - 0x1fe0a0
void sub_001FDF70_0x1fdf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FDF70_0x1fdf70");
#endif

    switch (ctx->pc) {
        case 0x1fdfa8u: goto label_1fdfa8;
        case 0x1fe018u: goto label_1fe018;
        case 0x1fe058u: goto label_1fe058;
        default: break;
    }

    ctx->pc = 0x1fdf70u;

    // 0x1fdf70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fdf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fdf74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fdf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1fdf78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fdf78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fdf7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fdf7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1fdf80: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x1fdf80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1fdf84: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1fdf84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdf88: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x1fdf88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1fdf8c: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x1fdf8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x1fdf90: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x1fdf90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x1fdf94: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FDF94u;
    {
        const bool branch_taken_0x1fdf94 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FDF98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDF94u;
            // 0x1fdf98: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdf94) {
            ctx->pc = 0x1FDFA8u;
            goto label_1fdfa8;
        }
    }
    ctx->pc = 0x1FDF9Cu;
    // 0x1fdf9c: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1fdf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1fdfa0: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x1FDFA0u;
    SET_GPR_U32(ctx, 31, 0x1FDFA8u);
    ctx->pc = 0x1FDFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDFA0u;
            // 0x1fdfa4: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDFA8u; }
        if (ctx->pc != 0x1FDFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDFA8u; }
        if (ctx->pc != 0x1FDFA8u) { return; }
    }
    ctx->pc = 0x1FDFA8u;
label_1fdfa8:
    // 0x1fdfa8: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x1fdfa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1fdfac: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x1fdfacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1fdfb0: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1fdfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1fdfb4: 0xae240014  sw          $a0, 0x14($s1)
    ctx->pc = 0x1fdfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
    // 0x1fdfb8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1fdfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1fdfbc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1fdfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1fdfc0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1fdfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1fdfc4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1fdfc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fdfc8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1fdfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fdfcc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1fdfccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1fdfd0: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1fdfd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fdfd4: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1fdfd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1fdfd8: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1fdfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fdfdc: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1fdfdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1fdfe0: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1fdfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fdfe4: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1fdfe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1fdfe8: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1fdfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fdfec: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x1fdfecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1fdff0: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1fdff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fdff4: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x1fdff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1fdff8: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x1fdff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fdffc: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x1fdffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1fe000: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x1fe000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fe004: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x1fe004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x1fe008: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1fe008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1fe00c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1fe00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1fe010: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FE010u;
    {
        const bool branch_taken_0x1fe010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe010) {
            ctx->pc = 0x1FE038u;
            goto label_1fe038;
        }
    }
    ctx->pc = 0x1FE018u;
label_1fe018:
    // 0x1fe018: 0x8ca5000c  lw          $a1, 0xC($a1)
    ctx->pc = 0x1fe018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1fe01c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1fe01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1fe020: 0x0  nop
    ctx->pc = 0x1fe020u;
    // NOP
    // 0x1fe024: 0x0  nop
    ctx->pc = 0x1fe024u;
    // NOP
    // 0x1fe028: 0x0  nop
    ctx->pc = 0x1fe028u;
    // NOP
    // 0x1fe02c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FE02Cu;
    {
        const bool branch_taken_0x1fe02c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe02c) {
            ctx->pc = 0x1FE018u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fe018;
        }
    }
    ctx->pc = 0x1FE034u;
    // 0x1fe034: 0x0  nop
    ctx->pc = 0x1fe034u;
    // NOP
label_1fe038:
    // 0x1fe038: 0xac850020  sw          $a1, 0x20($a0)
    ctx->pc = 0x1fe038u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
    // 0x1fe03c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1fe03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1fe040: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1fe040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1fe044: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x1fe044u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x1fe048: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x1fe048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1fe04c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1fe04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1fe050: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FE050u;
    {
        const bool branch_taken_0x1fe050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe050) {
            ctx->pc = 0x1FE078u;
            goto label_1fe078;
        }
    }
    ctx->pc = 0x1FE058u;
label_1fe058:
    // 0x1fe058: 0x8ca5000c  lw          $a1, 0xC($a1)
    ctx->pc = 0x1fe058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1fe05c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1fe05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1fe060: 0x0  nop
    ctx->pc = 0x1fe060u;
    // NOP
    // 0x1fe064: 0x0  nop
    ctx->pc = 0x1fe064u;
    // NOP
    // 0x1fe068: 0x0  nop
    ctx->pc = 0x1fe068u;
    // NOP
    // 0x1fe06c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FE06Cu;
    {
        const bool branch_taken_0x1fe06c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe06c) {
            ctx->pc = 0x1FE058u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fe058;
        }
    }
    ctx->pc = 0x1FE074u;
    // 0x1fe074: 0x0  nop
    ctx->pc = 0x1fe074u;
    // NOP
label_1fe078:
    // 0x1fe078: 0xac850028  sw          $a1, 0x28($a0)
    ctx->pc = 0x1fe078u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 5));
    // 0x1fe07c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1fe07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1fe080: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1fe080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1fe084: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x1fe084u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
    // 0x1fe088: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fe088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe08c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fe08cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe090: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fe090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe094: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FE094u;
            // 0x1fe098: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FE09Cu;
    // 0x1fe09c: 0x0  nop
    ctx->pc = 0x1fe09cu;
    // NOP
}
