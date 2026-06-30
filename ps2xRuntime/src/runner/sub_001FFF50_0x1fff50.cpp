#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FFF50
// Address: 0x1fff50 - 0x2001f0
void sub_001FFF50_0x1fff50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FFF50_0x1fff50");
#endif

    switch (ctx->pc) {
        case 0x200094u: goto label_200094;
        case 0x2000c8u: goto label_2000c8;
        case 0x200178u: goto label_200178;
        case 0x2001acu: goto label_2001ac;
        default: break;
    }

    ctx->pc = 0x1fff50u;

    // 0x1fff50: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1fff50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x1fff54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fff54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fff58: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1fff58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1fff5c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1fff5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1fff60: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1fff60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1fff64: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1fff64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1fff68: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1fff68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1fff6c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1fff6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1fff70: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1fff70u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fff74: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1fff74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1fff78: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1fff78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fff7c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1fff7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1fff80: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1fff80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fff84: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1fff84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1fff88: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fff88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1fff8c: 0xa0821c31  sb          $v0, 0x1C31($a0)
    ctx->pc = 0x1fff8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7217), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fff90: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x1fff90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1fff94: 0x90a3002c  lbu         $v1, 0x2C($a1)
    ctx->pc = 0x1fff94u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x1fff98: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x1fff98u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fff9c: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x1fff9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x1fffa0: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x1fffa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x1fffa4: 0x8cb10004  lw          $s1, 0x4($a1)
    ctx->pc = 0x1fffa4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1fffa8: 0x8cb00008  lw          $s0, 0x8($a1)
    ctx->pc = 0x1fffa8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1fffac: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x1fffacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x1fffb0: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x1fffb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1fffb4: 0x8cb6000c  lw          $s6, 0xC($a1)
    ctx->pc = 0x1fffb4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1fffb8: 0x8cb70010  lw          $s7, 0x10($a1)
    ctx->pc = 0x1fffb8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1fffbc: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x1fffbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x1fffc0: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x1fffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1fffc4: 0x8cbe0014  lw          $fp, 0x14($a1)
    ctx->pc = 0x1fffc4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1fffc8: 0xa3a3012c  sb          $v1, 0x12C($sp)
    ctx->pc = 0x1fffc8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 300), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fffcc: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x1fffccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x1fffd0: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x1fffd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x1fffd4: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x1fffd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x1fffd8: 0x90a2002d  lbu         $v0, 0x2D($a1)
    ctx->pc = 0x1fffd8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 45)));
    // 0x1fffdc: 0xa3a2012d  sb          $v0, 0x12D($sp)
    ctx->pc = 0x1fffdcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 301), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fffe0: 0x1293003e  beq         $s4, $s3, . + 4 + (0x3E << 2)
    ctx->pc = 0x1FFFE0u;
    {
        const bool branch_taken_0x1fffe0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 19));
        ctx->pc = 0x1FFFE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFFE0u;
            // 0x1fffe4: 0xafa00130  sw          $zero, 0x130($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fffe0) {
            ctx->pc = 0x2000DCu;
            goto label_2000dc;
        }
    }
    ctx->pc = 0x1FFFE8u;
    // 0x1fffe8: 0x80a2002d  lb          $v0, 0x2D($a1)
    ctx->pc = 0x1fffe8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 45)));
    // 0x1fffec: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x1fffecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x1ffff0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1ffff0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1ffff4: 0x5040003a  beql        $v0, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x1FFFF4u;
    {
        const bool branch_taken_0x1ffff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ffff4) {
            ctx->pc = 0x1FFFF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FFFF4u;
            // 0x1ffff8: 0x8eab0ea0  lw          $t3, 0xEA0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3744)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2000E0u;
            goto label_2000e0;
        }
    }
    ctx->pc = 0x1FFFFCu;
    // 0x1ffffc: 0x8eac0ea0  lw          $t4, 0xEA0($s5)
    ctx->pc = 0x1ffffcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3744)));
    // 0x200000: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x200000u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x200004: 0xafab0130  sw          $t3, 0x130($sp)
    ctx->pc = 0x200004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 11));
    // 0x200008: 0x26a50eb0  addiu       $a1, $s5, 0xEB0
    ctx->pc = 0x200008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 3760));
    // 0x20000c: 0x93a3012c  lbu         $v1, 0x12C($sp)
    ctx->pc = 0x20000cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x200010: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x200010u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200014: 0xc3040  sll         $a2, $t4, 1
    ctx->pc = 0x200014u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x200018: 0x93a2012d  lbu         $v0, 0x12D($sp)
    ctx->pc = 0x200018u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 301)));
    // 0x20001c: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x20001cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x200020: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x200020u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200024: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x200024u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x200028: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x200028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x20002c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x20002cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x200030: 0x7bac00f0  lq          $t4, 0xF0($sp)
    ctx->pc = 0x200030u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x200034: 0x2a63021  addu        $a2, $s5, $a2
    ctx->pc = 0x200034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
    // 0x200038: 0xacd216b0  sw          $s2, 0x16B0($a2)
    ctx->pc = 0x200038u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 5808), GPR_U32(ctx, 18));
    // 0x20003c: 0xacd116b4  sw          $s1, 0x16B4($a2)
    ctx->pc = 0x20003cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 5812), GPR_U32(ctx, 17));
    // 0x200040: 0xacd016b8  sw          $s0, 0x16B8($a2)
    ctx->pc = 0x200040u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 5816), GPR_U32(ctx, 16));
    // 0x200044: 0xacd616bc  sw          $s6, 0x16BC($a2)
    ctx->pc = 0x200044u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 5820), GPR_U32(ctx, 22));
    // 0x200048: 0xacd716c0  sw          $s7, 0x16C0($a2)
    ctx->pc = 0x200048u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 5824), GPR_U32(ctx, 23));
    // 0x20004c: 0xacde16c4  sw          $fp, 0x16C4($a2)
    ctx->pc = 0x20004cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 5828), GPR_U32(ctx, 30));
    // 0x200050: 0xaccc16c8  sw          $t4, 0x16C8($a2)
    ctx->pc = 0x200050u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 5832), GPR_U32(ctx, 12));
    // 0x200054: 0x7bac00e0  lq          $t4, 0xE0($sp)
    ctx->pc = 0x200054u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x200058: 0xaccc16cc  sw          $t4, 0x16CC($a2)
    ctx->pc = 0x200058u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 5836), GPR_U32(ctx, 12));
    // 0x20005c: 0x7bac00d0  lq          $t4, 0xD0($sp)
    ctx->pc = 0x20005cu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x200060: 0xaccc16d0  sw          $t4, 0x16D0($a2)
    ctx->pc = 0x200060u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 5840), GPR_U32(ctx, 12));
    // 0x200064: 0x7bac00c0  lq          $t4, 0xC0($sp)
    ctx->pc = 0x200064u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x200068: 0xaccc16d4  sw          $t4, 0x16D4($a2)
    ctx->pc = 0x200068u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 5844), GPR_U32(ctx, 12));
    // 0x20006c: 0x7bac00b0  lq          $t4, 0xB0($sp)
    ctx->pc = 0x20006cu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x200070: 0xaccc16d8  sw          $t4, 0x16D8($a2)
    ctx->pc = 0x200070u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 5848), GPR_U32(ctx, 12));
    // 0x200074: 0xa0c316dc  sb          $v1, 0x16DC($a2)
    ctx->pc = 0x200074u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5852), (uint8_t)GPR_U32(ctx, 3));
    // 0x200078: 0xa0c216dd  sb          $v0, 0x16DD($a2)
    ctx->pc = 0x200078u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5853), (uint8_t)GPR_U32(ctx, 2));
    // 0x20007c: 0xaccb16e0  sw          $t3, 0x16E0($a2)
    ctx->pc = 0x20007cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 5856), GPR_U32(ctx, 11));
    // 0x200080: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x200080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x200084: 0x8ea60ea0  lw          $a2, 0xEA0($s5)
    ctx->pc = 0x200084u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3744)));
    // 0x200088: 0x8eab1c48  lw          $t3, 0x1C48($s5)
    ctx->pc = 0x200088u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 7240)));
    // 0x20008c: 0xc08007c  jal         func_2001F0
    ctx->pc = 0x20008Cu;
    SET_GPR_U32(ctx, 31, 0x200094u);
    ctx->pc = 0x200090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20008Cu;
            // 0x200090: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2001F0u;
    if (runtime->hasFunction(0x2001F0u)) {
        auto targetFn = runtime->lookupFunction(0x2001F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200094u; }
        if (ctx->pc != 0x200094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002001F0_0x2001f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200094u; }
        if (ctx->pc != 0x200094u) { return; }
    }
    ctx->pc = 0x200094u;
label_200094:
    // 0x200094: 0x83a2012c  lb          $v0, 0x12C($sp)
    ctx->pc = 0x200094u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x200098: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x200098u;
    {
        const bool branch_taken_0x200098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x200098) {
            ctx->pc = 0x20009Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x200098u;
            // 0x20009c: 0x8ea30ea0  lw          $v1, 0xEA0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3744)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2000CCu;
            goto label_2000cc;
        }
    }
    ctx->pc = 0x2000A0u;
    // 0x2000a0: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x2000a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x2000a4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2000a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2000a8: 0x8ea60ea0  lw          $a2, 0xEA0($s5)
    ctx->pc = 0x2000a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3744)));
    // 0x2000ac: 0x26a512b0  addiu       $a1, $s5, 0x12B0
    ctx->pc = 0x2000acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4784));
    // 0x2000b0: 0x8eab1c4c  lw          $t3, 0x1C4C($s5)
    ctx->pc = 0x2000b0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 7244)));
    // 0x2000b4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2000b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2000b8: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2000b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2000bc: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2000bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2000c0: 0xc08007c  jal         func_2001F0
    ctx->pc = 0x2000C0u;
    SET_GPR_U32(ctx, 31, 0x2000C8u);
    ctx->pc = 0x2000C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2000C0u;
            // 0x2000c4: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2001F0u;
    if (runtime->hasFunction(0x2001F0u)) {
        auto targetFn = runtime->lookupFunction(0x2001F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2000C8u; }
        if (ctx->pc != 0x2000C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002001F0_0x2001f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2000C8u; }
        if (ctx->pc != 0x2000C8u) { return; }
    }
    ctx->pc = 0x2000C8u;
label_2000c8:
    // 0x2000c8: 0x8ea30ea0  lw          $v1, 0xEA0($s5)
    ctx->pc = 0x2000c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3744)));
label_2000cc:
    // 0x2000cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2000ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2000d0: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x2000d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x2000d4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2000d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2000d8: 0xaea20ea0  sw          $v0, 0xEA0($s5)
    ctx->pc = 0x2000d8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3744), GPR_U32(ctx, 2));
label_2000dc:
    // 0x2000dc: 0x8eab0ea0  lw          $t3, 0xEA0($s5)
    ctx->pc = 0x2000dcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3744)));
label_2000e0:
    // 0x2000e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2000e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2000e4: 0x7bac00f0  lq          $t4, 0xF0($sp)
    ctx->pc = 0x2000e4u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2000e8: 0x26a50eb0  addiu       $a1, $s5, 0xEB0
    ctx->pc = 0x2000e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 3760));
    // 0x2000ec: 0x93a6012c  lbu         $a2, 0x12C($sp)
    ctx->pc = 0x2000ecu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x2000f0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2000f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2000f4: 0xb4040  sll         $t0, $t3, 1
    ctx->pc = 0x2000f4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x2000f8: 0x93a3012d  lbu         $v1, 0x12D($sp)
    ctx->pc = 0x2000f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 301)));
    // 0x2000fc: 0x10b4821  addu        $t1, $t0, $t3
    ctx->pc = 0x2000fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x200100: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x200100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x200104: 0x95080  sll         $t2, $t1, 2
    ctx->pc = 0x200104u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x200108: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x200108u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20010c: 0x14b5821  addu        $t3, $t2, $t3
    ctx->pc = 0x20010cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x200110: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x200110u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200114: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x200114u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x200118: 0x2ab5821  addu        $t3, $s5, $t3
    ctx->pc = 0x200118u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 11)));
    // 0x20011c: 0xad7216b0  sw          $s2, 0x16B0($t3)
    ctx->pc = 0x20011cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 5808), GPR_U32(ctx, 18));
    // 0x200120: 0xad7116b4  sw          $s1, 0x16B4($t3)
    ctx->pc = 0x200120u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 5812), GPR_U32(ctx, 17));
    // 0x200124: 0xad7016b8  sw          $s0, 0x16B8($t3)
    ctx->pc = 0x200124u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 5816), GPR_U32(ctx, 16));
    // 0x200128: 0xad7616bc  sw          $s6, 0x16BC($t3)
    ctx->pc = 0x200128u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 5820), GPR_U32(ctx, 22));
    // 0x20012c: 0xad7716c0  sw          $s7, 0x16C0($t3)
    ctx->pc = 0x20012cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 5824), GPR_U32(ctx, 23));
    // 0x200130: 0xad7e16c4  sw          $fp, 0x16C4($t3)
    ctx->pc = 0x200130u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 5828), GPR_U32(ctx, 30));
    // 0x200134: 0xad6c16c8  sw          $t4, 0x16C8($t3)
    ctx->pc = 0x200134u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 5832), GPR_U32(ctx, 12));
    // 0x200138: 0x7bac00e0  lq          $t4, 0xE0($sp)
    ctx->pc = 0x200138u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x20013c: 0xad6c16cc  sw          $t4, 0x16CC($t3)
    ctx->pc = 0x20013cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 5836), GPR_U32(ctx, 12));
    // 0x200140: 0x7bac00d0  lq          $t4, 0xD0($sp)
    ctx->pc = 0x200140u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x200144: 0xad6c16d0  sw          $t4, 0x16D0($t3)
    ctx->pc = 0x200144u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 5840), GPR_U32(ctx, 12));
    // 0x200148: 0x7bac00c0  lq          $t4, 0xC0($sp)
    ctx->pc = 0x200148u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x20014c: 0xad6c16d4  sw          $t4, 0x16D4($t3)
    ctx->pc = 0x20014cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 5844), GPR_U32(ctx, 12));
    // 0x200150: 0x7bac00b0  lq          $t4, 0xB0($sp)
    ctx->pc = 0x200150u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x200154: 0xad6c16d8  sw          $t4, 0x16D8($t3)
    ctx->pc = 0x200154u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 5848), GPR_U32(ctx, 12));
    // 0x200158: 0xa16616dc  sb          $a2, 0x16DC($t3)
    ctx->pc = 0x200158u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 5852), (uint8_t)GPR_U32(ctx, 6));
    // 0x20015c: 0xa16316dd  sb          $v1, 0x16DD($t3)
    ctx->pc = 0x20015cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 5853), (uint8_t)GPR_U32(ctx, 3));
    // 0x200160: 0xad6216e0  sw          $v0, 0x16E0($t3)
    ctx->pc = 0x200160u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 5856), GPR_U32(ctx, 2));
    // 0x200164: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x200164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x200168: 0x8ea60ea0  lw          $a2, 0xEA0($s5)
    ctx->pc = 0x200168u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3744)));
    // 0x20016c: 0x8eab1c48  lw          $t3, 0x1C48($s5)
    ctx->pc = 0x20016cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 7240)));
    // 0x200170: 0xc08007c  jal         func_2001F0
    ctx->pc = 0x200170u;
    SET_GPR_U32(ctx, 31, 0x200178u);
    ctx->pc = 0x200174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200170u;
            // 0x200174: 0x260502d  daddu       $t2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2001F0u;
    if (runtime->hasFunction(0x2001F0u)) {
        auto targetFn = runtime->lookupFunction(0x2001F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200178u; }
        if (ctx->pc != 0x200178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002001F0_0x2001f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200178u; }
        if (ctx->pc != 0x200178u) { return; }
    }
    ctx->pc = 0x200178u;
label_200178:
    // 0x200178: 0x83a2012c  lb          $v0, 0x12C($sp)
    ctx->pc = 0x200178u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x20017c: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x20017Cu;
    {
        const bool branch_taken_0x20017c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20017c) {
            ctx->pc = 0x200180u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20017Cu;
            // 0x200180: 0x8ea20ea0  lw          $v0, 0xEA0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3744)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2001B0u;
            goto label_2001b0;
        }
    }
    ctx->pc = 0x200184u;
    // 0x200184: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x200184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x200188: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x200188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20018c: 0x8ea60ea0  lw          $a2, 0xEA0($s5)
    ctx->pc = 0x20018cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3744)));
    // 0x200190: 0x26a512b0  addiu       $a1, $s5, 0x12B0
    ctx->pc = 0x200190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4784));
    // 0x200194: 0x8eab1c4c  lw          $t3, 0x1C4C($s5)
    ctx->pc = 0x200194u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 7244)));
    // 0x200198: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x200198u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20019c: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x20019cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2001a0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2001a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2001a4: 0xc08007c  jal         func_2001F0
    ctx->pc = 0x2001A4u;
    SET_GPR_U32(ctx, 31, 0x2001ACu);
    ctx->pc = 0x2001A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2001A4u;
            // 0x2001a8: 0x260502d  daddu       $t2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2001F0u;
    if (runtime->hasFunction(0x2001F0u)) {
        auto targetFn = runtime->lookupFunction(0x2001F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2001ACu; }
        if (ctx->pc != 0x2001ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002001F0_0x2001f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2001ACu; }
        if (ctx->pc != 0x2001ACu) { return; }
    }
    ctx->pc = 0x2001ACu;
label_2001ac:
    // 0x2001ac: 0x8ea20ea0  lw          $v0, 0xEA0($s5)
    ctx->pc = 0x2001acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3744)));
label_2001b0:
    // 0x2001b0: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x2001b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2001b4: 0xaea30ea0  sw          $v1, 0xEA0($s5)
    ctx->pc = 0x2001b4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3744), GPR_U32(ctx, 3));
    // 0x2001b8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2001b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2001bc: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2001bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2001c0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2001c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2001c4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2001c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2001c8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2001c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2001cc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2001ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2001d0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2001d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2001d4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2001d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2001d8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2001d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2001dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2001dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2001e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2001E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2001E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2001E0u;
            // 0x2001e4: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2001E8u;
    // 0x2001e8: 0x0  nop
    ctx->pc = 0x2001e8u;
    // NOP
    // 0x2001ec: 0x0  nop
    ctx->pc = 0x2001ecu;
    // NOP
}
