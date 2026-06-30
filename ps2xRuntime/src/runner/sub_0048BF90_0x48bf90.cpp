#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0048BF90
// Address: 0x48bf90 - 0x48c080
void sub_0048BF90_0x48bf90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048BF90_0x48bf90");
#endif

    switch (ctx->pc) {
        case 0x48bf90u: goto label_48bf90;
        case 0x48bf94u: goto label_48bf94;
        case 0x48bf98u: goto label_48bf98;
        case 0x48bf9cu: goto label_48bf9c;
        case 0x48bfa0u: goto label_48bfa0;
        case 0x48bfa4u: goto label_48bfa4;
        case 0x48bfa8u: goto label_48bfa8;
        case 0x48bfacu: goto label_48bfac;
        case 0x48bfb0u: goto label_48bfb0;
        case 0x48bfb4u: goto label_48bfb4;
        case 0x48bfb8u: goto label_48bfb8;
        case 0x48bfbcu: goto label_48bfbc;
        case 0x48bfc0u: goto label_48bfc0;
        case 0x48bfc4u: goto label_48bfc4;
        case 0x48bfc8u: goto label_48bfc8;
        case 0x48bfccu: goto label_48bfcc;
        case 0x48bfd0u: goto label_48bfd0;
        case 0x48bfd4u: goto label_48bfd4;
        case 0x48bfd8u: goto label_48bfd8;
        case 0x48bfdcu: goto label_48bfdc;
        case 0x48bfe0u: goto label_48bfe0;
        case 0x48bfe4u: goto label_48bfe4;
        case 0x48bfe8u: goto label_48bfe8;
        case 0x48bfecu: goto label_48bfec;
        case 0x48bff0u: goto label_48bff0;
        case 0x48bff4u: goto label_48bff4;
        case 0x48bff8u: goto label_48bff8;
        case 0x48bffcu: goto label_48bffc;
        case 0x48c000u: goto label_48c000;
        case 0x48c004u: goto label_48c004;
        case 0x48c008u: goto label_48c008;
        case 0x48c00cu: goto label_48c00c;
        case 0x48c010u: goto label_48c010;
        case 0x48c014u: goto label_48c014;
        case 0x48c018u: goto label_48c018;
        case 0x48c01cu: goto label_48c01c;
        case 0x48c020u: goto label_48c020;
        case 0x48c024u: goto label_48c024;
        case 0x48c028u: goto label_48c028;
        case 0x48c02cu: goto label_48c02c;
        case 0x48c030u: goto label_48c030;
        case 0x48c034u: goto label_48c034;
        case 0x48c038u: goto label_48c038;
        case 0x48c03cu: goto label_48c03c;
        case 0x48c040u: goto label_48c040;
        case 0x48c044u: goto label_48c044;
        case 0x48c048u: goto label_48c048;
        case 0x48c04cu: goto label_48c04c;
        case 0x48c050u: goto label_48c050;
        case 0x48c054u: goto label_48c054;
        case 0x48c058u: goto label_48c058;
        case 0x48c05cu: goto label_48c05c;
        case 0x48c060u: goto label_48c060;
        case 0x48c064u: goto label_48c064;
        case 0x48c068u: goto label_48c068;
        case 0x48c06cu: goto label_48c06c;
        case 0x48c070u: goto label_48c070;
        case 0x48c074u: goto label_48c074;
        case 0x48c078u: goto label_48c078;
        case 0x48c07cu: goto label_48c07c;
        default: break;
    }

    ctx->pc = 0x48bf90u;

label_48bf90:
    // 0x48bf90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x48bf90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_48bf94:
    // 0x48bf94: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x48bf94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_48bf98:
    // 0x48bf98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x48bf98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_48bf9c:
    // 0x48bf9c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x48bf9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_48bfa0:
    // 0x48bfa0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48bfa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48bfa4:
    // 0x48bfa4: 0x2463fb70  addiu       $v1, $v1, -0x490
    ctx->pc = 0x48bfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966128));
label_48bfa8:
    // 0x48bfa8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x48bfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_48bfac:
    // 0x48bfac: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x48bfacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_48bfb0:
    // 0x48bfb0: 0xa4820004  sh          $v0, 0x4($a0)
    ctx->pc = 0x48bfb0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 2));
label_48bfb4:
    // 0x48bfb4: 0x24a5f920  addiu       $a1, $a1, -0x6E0
    ctx->pc = 0x48bfb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965536));
label_48bfb8:
    // 0x48bfb8: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x48bfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_48bfbc:
    // 0x48bfbc: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x48bfbcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
label_48bfc0:
    // 0x48bfc0: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x48bfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
label_48bfc4:
    // 0x48bfc4: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x48bfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_48bfc8:
    // 0x48bfc8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x48bfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_48bfcc:
    // 0x48bfcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x48bfccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_48bfd0:
    // 0x48bfd0: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x48bfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
label_48bfd4:
    // 0x48bfd4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x48bfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_48bfd8:
    // 0x48bfd8: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x48bfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
label_48bfdc:
    // 0x48bfdc: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x48bfdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_48bfe0:
    // 0x48bfe0: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x48bfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
label_48bfe4:
    // 0x48bfe4: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x48bfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
label_48bfe8:
    // 0x48bfe8: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x48bfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
label_48bfec:
    // 0x48bfec: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x48bfecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
label_48bff0:
    // 0x48bff0: 0xac870050  sw          $a3, 0x50($a0)
    ctx->pc = 0x48bff0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 7));
label_48bff4:
    // 0x48bff4: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x48bff4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_48bff8:
    // 0x48bff8: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x48bff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
label_48bffc:
    // 0x48bffc: 0xc0fe54c  jal         func_3F9530
label_48c000:
    if (ctx->pc == 0x48C000u) {
        ctx->pc = 0x48C000u;
            // 0x48c000: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x48C004u;
        goto label_48c004;
    }
    ctx->pc = 0x48BFFCu;
    SET_GPR_U32(ctx, 31, 0x48C004u);
    ctx->pc = 0x48C000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48BFFCu;
            // 0x48c000: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48C004u; }
        if (ctx->pc != 0x48C004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48C004u; }
        if (ctx->pc != 0x48C004u) { return; }
    }
    ctx->pc = 0x48C004u;
label_48c004:
    // 0x48c004: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x48c004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
label_48c008:
    // 0x48c008: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x48c008u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_48c00c:
    // 0x48c00c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x48c00cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_48c010:
    // 0x48c010: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48c010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48c014:
    // 0x48c014: 0x3e00008  jr          $ra
label_48c018:
    if (ctx->pc == 0x48C018u) {
        ctx->pc = 0x48C018u;
            // 0x48c018: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x48C01Cu;
        goto label_48c01c;
    }
    ctx->pc = 0x48C014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48C018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48C014u;
            // 0x48c018: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48C01Cu;
label_48c01c:
    // 0x48c01c: 0x0  nop
    ctx->pc = 0x48c01cu;
    // NOP
label_48c020:
    // 0x48c020: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x48c020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_48c024:
    // 0x48c024: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x48c024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_48c028:
    // 0x48c028: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x48c028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_48c02c:
    // 0x48c02c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48c02cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_48c030:
    // 0x48c030: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48c030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_48c034:
    // 0x48c034: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x48c034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48c038:
    // 0x48c038: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x48c038u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48c03c:
    // 0x48c03c: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x48c03cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_48c040:
    // 0x48c040: 0x3200008  jr          $t9
label_48c044:
    if (ctx->pc == 0x48C044u) {
        ctx->pc = 0x48C048u;
        goto label_48c048;
    }
    ctx->pc = 0x48C040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48C048u;
label_48c048:
    // 0x48c048: 0x0  nop
    ctx->pc = 0x48c048u;
    // NOP
label_48c04c:
    // 0x48c04c: 0x0  nop
    ctx->pc = 0x48c04cu;
    // NOP
label_48c050:
    // 0x48c050: 0x8c8300e0  lw          $v1, 0xE0($a0)
    ctx->pc = 0x48c050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
label_48c054:
    // 0x48c054: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x48c054u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_48c058:
    // 0x48c058: 0x8c8300e4  lw          $v1, 0xE4($a0)
    ctx->pc = 0x48c058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
label_48c05c:
    // 0x48c05c: 0x3e00008  jr          $ra
label_48c060:
    if (ctx->pc == 0x48C060u) {
        ctx->pc = 0x48C060u;
            // 0x48c060: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x48C064u;
        goto label_48c064;
    }
    ctx->pc = 0x48C05Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48C060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48C05Cu;
            // 0x48c060: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48C064u;
label_48c064:
    // 0x48c064: 0x0  nop
    ctx->pc = 0x48c064u;
    // NOP
label_48c068:
    // 0x48c068: 0x0  nop
    ctx->pc = 0x48c068u;
    // NOP
label_48c06c:
    // 0x48c06c: 0x0  nop
    ctx->pc = 0x48c06cu;
    // NOP
label_48c070:
    // 0x48c070: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x48c070u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_48c074:
    // 0x48c074: 0x3e00008  jr          $ra
label_48c078:
    if (ctx->pc == 0x48C078u) {
        ctx->pc = 0x48C078u;
            // 0x48c078: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x48C07Cu;
        goto label_48c07c;
    }
    ctx->pc = 0x48C074u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48C078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48C074u;
            // 0x48c078: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48C07Cu;
label_48c07c:
    // 0x48c07c: 0x0  nop
    ctx->pc = 0x48c07cu;
    // NOP
}
