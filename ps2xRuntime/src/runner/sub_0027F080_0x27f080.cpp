#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027F080
// Address: 0x27f080 - 0x27f630
void sub_0027F080_0x27f080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F080_0x27f080");
#endif

    switch (ctx->pc) {
        case 0x27f0e0u: goto label_27f0e0;
        case 0x27f120u: goto label_27f120;
        case 0x27f14cu: goto label_27f14c;
        case 0x27f168u: goto label_27f168;
        case 0x27f1d0u: goto label_27f1d0;
        case 0x27f234u: goto label_27f234;
        case 0x27f294u: goto label_27f294;
        case 0x27f2e0u: goto label_27f2e0;
        case 0x27f338u: goto label_27f338;
        case 0x27f3acu: goto label_27f3ac;
        case 0x27f414u: goto label_27f414;
        case 0x27f474u: goto label_27f474;
        case 0x27f4c0u: goto label_27f4c0;
        case 0x27f510u: goto label_27f510;
        case 0x27f538u: goto label_27f538;
        default: break;
    }

    ctx->pc = 0x27f080u;

    // 0x27f080: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x27f080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x27f084: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x27f084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x27f088: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x27f088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x27f08c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x27f08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x27f090: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x27f090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x27f094: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x27f094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x27f098: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x27f098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x27f09c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x27f09cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f0a0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x27f0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x27f0a4: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x27f0a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f0a8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x27f0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x27f0ac: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x27f0acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f0b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x27f0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x27f0b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27f0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27f0b8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x27f0b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x27f0bc: 0xafa400fc  sw          $a0, 0xFC($sp)
    ctx->pc = 0x27f0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 4));
    // 0x27f0c0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x27f0c0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x27f0c4: 0xafa500f8  sw          $a1, 0xF8($sp)
    ctx->pc = 0x27f0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 5));
    // 0x27f0c8: 0xafa600f4  sw          $a2, 0xF4($sp)
    ctx->pc = 0x27f0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 6));
    // 0x27f0cc: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x27f0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x27f0d0: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x27f0d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x27f0d4: 0x10200124  beqz        $at, . + 4 + (0x124 << 2)
    ctx->pc = 0x27F0D4u;
    {
        const bool branch_taken_0x27f0d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F0D4u;
            // 0x27f0d8: 0xafa000e0  sw          $zero, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f0d4) {
            ctx->pc = 0x27F568u;
            goto label_27f568;
        }
    }
    ctx->pc = 0x27F0DCu;
    // 0x27f0dc: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x27f0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_27f0e0:
    // 0x27f0e0: 0x8fa200f4  lw          $v0, 0xF4($sp)
    ctx->pc = 0x27f0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x27f0e4: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x27f0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x27f0e8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x27f0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27f0ec: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x27f0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x27f0f0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x27f0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x27f0f4: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x27f0f4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27f0f8: 0x9642006c  lhu         $v0, 0x6C($s2)
    ctx->pc = 0x27f0f8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 108)));
    // 0x27f0fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27f0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27f100: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x27f100u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27f104: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27F104u;
    {
        const bool branch_taken_0x27f104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F104u;
            // 0x27f108: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f104) {
            ctx->pc = 0x27F120u;
            goto label_27f120;
        }
    }
    ctx->pc = 0x27F10Cu;
    // 0x27f10c: 0x264500b0  addiu       $a1, $s2, 0xB0
    ctx->pc = 0x27f10cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
    // 0x27f110: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x27f110u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x27f114: 0x24a40040  addiu       $a0, $a1, 0x40
    ctx->pc = 0x27f114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x27f118: 0xc0a3a64  jal         func_28E990
    ctx->pc = 0x27F118u;
    SET_GPR_U32(ctx, 31, 0x27F120u);
    ctx->pc = 0x27F11Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F118u;
            // 0x27f11c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E990u;
    if (runtime->hasFunction(0x28E990u)) {
        auto targetFn = runtime->lookupFunction(0x28E990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F120u; }
        if (ctx->pc != 0x27F120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E990_0x28e990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F120u; }
        if (ctx->pc != 0x27F120u) { return; }
    }
    ctx->pc = 0x27F120u;
label_27f120:
    // 0x27f120: 0x9643006c  lhu         $v1, 0x6C($s2)
    ctx->pc = 0x27f120u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 108)));
    // 0x27f124: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x27f124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x27f128: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x27f128u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x27f12c: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x27f12cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x27f130: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27f130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f134: 0x8fa600fc  lw          $a2, 0xFC($sp)
    ctx->pc = 0x27f134u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x27f138: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x27f138u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x27f13c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x27f13cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f140: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27f140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27f144: 0xc09fa18  jal         func_27E860
    ctx->pc = 0x27F144u;
    SET_GPR_U32(ctx, 31, 0x27F14Cu);
    ctx->pc = 0x27F148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F144u;
            // 0x27f148: 0xa0480000  sb          $t0, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27E860u;
    if (runtime->hasFunction(0x27E860u)) {
        auto targetFn = runtime->lookupFunction(0x27E860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F14Cu; }
        if (ctx->pc != 0x27F14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027E860_0x27e860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F14Cu; }
        if (ctx->pc != 0x27F14Cu) { return; }
    }
    ctx->pc = 0x27F14Cu;
label_27f14c:
    // 0x27f14c: 0x96420074  lhu         $v0, 0x74($s2)
    ctx->pc = 0x27f14cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x27f150: 0x265e0070  addiu       $fp, $s2, 0x70
    ctx->pc = 0x27f150u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x27f154: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x27f154u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27f158: 0x1020006d  beqz        $at, . + 4 + (0x6D << 2)
    ctx->pc = 0x27F158u;
    {
        const bool branch_taken_0x27f158 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F15Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F158u;
            // 0x27f15c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f158) {
            ctx->pc = 0x27F310u;
            goto label_27f310;
        }
    }
    ctx->pc = 0x27F160u;
    // 0x27f160: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x27f160u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f164: 0x0  nop
    ctx->pc = 0x27f164u;
    // NOP
label_27f168:
    // 0x27f168: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x27f168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x27f16c: 0x578821  addu        $s1, $v0, $s7
    ctx->pc = 0x27f16cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x27f170: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x27f170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27f174: 0x9043001c  lbu         $v1, 0x1C($v0)
    ctx->pc = 0x27f174u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x27f178: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x27f178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x27f17c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x27f17cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27f180: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x27f180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x27f184: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x27F184u;
    {
        const bool branch_taken_0x27f184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f184) {
            ctx->pc = 0x27F2F8u;
            goto label_27f2f8;
        }
    }
    ctx->pc = 0x27F18Cu;
    // 0x27f18c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x27f18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x27f190: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x27f190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x27f194: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x27f194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x27f198: 0x2428026  xor         $s0, $s2, $v0
    ctx->pc = 0x27f198u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 2));
    // 0x27f19c: 0x920200a8  lbu         $v0, 0xA8($s0)
    ctx->pc = 0x27f19cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x27f1a0: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x27f1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x27f1a4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x27f1a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x27f1a8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x27F1A8u;
    {
        const bool branch_taken_0x27f1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f1a8) {
            ctx->pc = 0x27F1F8u;
            goto label_27f1f8;
        }
    }
    ctx->pc = 0x27F1B0u;
    // 0x27f1b0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x27f1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x27f1b4: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x27f1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x27f1b8: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x27f1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x27f1bc: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x27f1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x27f1c0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27F1C0u;
    {
        const bool branch_taken_0x27f1c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27F1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F1C0u;
            // 0x27f1c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f1c0) {
            ctx->pc = 0x27F1D0u;
            goto label_27f1d0;
        }
    }
    ctx->pc = 0x27F1C8u;
    // 0x27f1c8: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x27F1C8u;
    SET_GPR_U32(ctx, 31, 0x27F1D0u);
    ctx->pc = 0x27F1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F1C8u;
            // 0x27f1cc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F1D0u; }
        if (ctx->pc != 0x27F1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F1D0u; }
        if (ctx->pc != 0x27F1D0u) { return; }
    }
    ctx->pc = 0x27F1D0u;
label_27f1d0:
    // 0x27f1d0: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x27f1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x27f1d4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x27f1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27f1d8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x27f1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x27f1dc: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x27f1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x27f1e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27f1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27f1e4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x27f1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x27f1e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27f1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27f1ec: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x27F1ECu;
    {
        const bool branch_taken_0x27f1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F1ECu;
            // 0x27f1f0: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f1ec) {
            ctx->pc = 0x27F2F8u;
            goto label_27f2f8;
        }
    }
    ctx->pc = 0x27F1F4u;
    // 0x27f1f4: 0x0  nop
    ctx->pc = 0x27f1f4u;
    // NOP
label_27f1f8:
    // 0x27f1f8: 0x9604006c  lhu         $a0, 0x6C($s0)
    ctx->pc = 0x27f1f8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x27f1fc: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x27f1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x27f200: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x27f200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x27f204: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27f204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27f208: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x27f208u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27f20c: 0x1062003a  beq         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x27F20Cu;
    {
        const bool branch_taken_0x27f20c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27f20c) {
            ctx->pc = 0x27F2F8u;
            goto label_27f2f8;
        }
    }
    ctx->pc = 0x27F214u;
    // 0x27f214: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x27f214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x27f218: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x27f218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x27f21c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x27f21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x27f220: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x27f220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x27f224: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27F224u;
    {
        const bool branch_taken_0x27f224 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27F228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F224u;
            // 0x27f228: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f224) {
            ctx->pc = 0x27F238u;
            goto label_27f238;
        }
    }
    ctx->pc = 0x27F22Cu;
    // 0x27f22c: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x27F22Cu;
    SET_GPR_U32(ctx, 31, 0x27F234u);
    ctx->pc = 0x27F230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F22Cu;
            // 0x27f230: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F234u; }
        if (ctx->pc != 0x27F234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F234u; }
        if (ctx->pc != 0x27F234u) { return; }
    }
    ctx->pc = 0x27F234u;
label_27f234:
    // 0x27f234: 0x0  nop
    ctx->pc = 0x27f234u;
    // NOP
label_27f238:
    // 0x27f238: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x27f238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x27f23c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x27f23cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27f240: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x27f240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x27f244: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x27f244u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x27f248: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27f248u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27f24c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x27f24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x27f250: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27f250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27f254: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x27f254u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x27f258: 0x9603006c  lhu         $v1, 0x6C($s0)
    ctx->pc = 0x27f258u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x27f25c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x27f25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x27f260: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27f260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27f264: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x27f264u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27f268: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x27f268u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x27f26c: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x27F26Cu;
    {
        const bool branch_taken_0x27f26c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f26c) {
            ctx->pc = 0x27F2F8u;
            goto label_27f2f8;
        }
    }
    ctx->pc = 0x27F274u;
    // 0x27f274: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x27f274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x27f278: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x27f278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x27f27c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x27f27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x27f280: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x27f280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x27f284: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27F284u;
    {
        const bool branch_taken_0x27f284 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27F288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F284u;
            // 0x27f288: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f284) {
            ctx->pc = 0x27F298u;
            goto label_27f298;
        }
    }
    ctx->pc = 0x27F28Cu;
    // 0x27f28c: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x27F28Cu;
    SET_GPR_U32(ctx, 31, 0x27F294u);
    ctx->pc = 0x27F290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F28Cu;
            // 0x27f290: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F294u; }
        if (ctx->pc != 0x27F294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F294u; }
        if (ctx->pc != 0x27F294u) { return; }
    }
    ctx->pc = 0x27F294u;
label_27f294:
    // 0x27f294: 0x0  nop
    ctx->pc = 0x27f294u;
    // NOP
label_27f298:
    // 0x27f298: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x27f298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x27f29c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x27f29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x27f2a0: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x27f2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x27f2a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27f2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27f2a8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x27f2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x27f2ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27f2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27f2b0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x27f2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x27f2b4: 0x9603006c  lhu         $v1, 0x6C($s0)
    ctx->pc = 0x27f2b4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x27f2b8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x27f2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x27f2bc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x27f2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27f2c0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x27f2c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27f2c4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27F2C4u;
    {
        const bool branch_taken_0x27f2c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F2C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F2C4u;
            // 0x27f2c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f2c4) {
            ctx->pc = 0x27F2E0u;
            goto label_27f2e0;
        }
    }
    ctx->pc = 0x27F2CCu;
    // 0x27f2cc: 0x260500b0  addiu       $a1, $s0, 0xB0
    ctx->pc = 0x27f2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x27f2d0: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x27f2d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x27f2d4: 0x24a40040  addiu       $a0, $a1, 0x40
    ctx->pc = 0x27f2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x27f2d8: 0xc0a3a64  jal         func_28E990
    ctx->pc = 0x27F2D8u;
    SET_GPR_U32(ctx, 31, 0x27F2E0u);
    ctx->pc = 0x27F2DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F2D8u;
            // 0x27f2dc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E990u;
    if (runtime->hasFunction(0x28E990u)) {
        auto targetFn = runtime->lookupFunction(0x28E990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F2E0u; }
        if (ctx->pc != 0x27F2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E990_0x28e990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F2E0u; }
        if (ctx->pc != 0x27F2E0u) { return; }
    }
    ctx->pc = 0x27F2E0u;
label_27f2e0:
    // 0x27f2e0: 0x9603006c  lhu         $v1, 0x6C($s0)
    ctx->pc = 0x27f2e0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x27f2e4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x27f2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x27f2e8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x27f2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27f2ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27f2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27f2f0: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x27f2f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x27f2f4: 0x0  nop
    ctx->pc = 0x27f2f4u;
    // NOP
label_27f2f8:
    // 0x27f2f8: 0x97c20004  lhu         $v0, 0x4($fp)
    ctx->pc = 0x27f2f8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x27f2fc: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x27f2fcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x27f300: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x27f300u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27f304: 0x1440ff98  bnez        $v0, . + 4 + (-0x68 << 2)
    ctx->pc = 0x27F304u;
    {
        const bool branch_taken_0x27f304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F304u;
            // 0x27f308: 0x26f70024  addiu       $s7, $s7, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f304) {
            ctx->pc = 0x27F168u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27f168;
        }
    }
    ctx->pc = 0x27F30Cu;
    // 0x27f30c: 0x0  nop
    ctx->pc = 0x27f30cu;
    // NOP
label_27f310:
    // 0x27f310: 0x26420078  addiu       $v0, $s2, 0x78
    ctx->pc = 0x27f310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 120));
    // 0x27f314: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x27f314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x27f318: 0x8e770004  lw          $s7, 0x4($s3)
    ctx->pc = 0x27f318u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x27f31c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x27f31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x27f320: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x27f320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x27f324: 0x8e42007c  lw          $v0, 0x7C($s2)
    ctx->pc = 0x27f324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
    // 0x27f328: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x27f328u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27f32c: 0x10200070  beqz        $at, . + 4 + (0x70 << 2)
    ctx->pc = 0x27F32Cu;
    {
        const bool branch_taken_0x27f32c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F32Cu;
            // 0x27f330: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f32c) {
            ctx->pc = 0x27F4F0u;
            goto label_27f4f0;
        }
    }
    ctx->pc = 0x27F334u;
    // 0x27f334: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x27f334u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27f338:
    // 0x27f338: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x27f338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x27f33c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x27f33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27f340: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x27f340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x27f344: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x27f344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27f348: 0x8c510028  lw          $s1, 0x28($v0)
    ctx->pc = 0x27f348u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x27f34c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x27f34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27f350: 0x9043001c  lbu         $v1, 0x1C($v0)
    ctx->pc = 0x27f350u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x27f354: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x27f354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x27f358: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x27f358u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27f35c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x27f35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x27f360: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x27F360u;
    {
        const bool branch_taken_0x27f360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f360) {
            ctx->pc = 0x27F4D8u;
            goto label_27f4d8;
        }
    }
    ctx->pc = 0x27F368u;
    // 0x27f368: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x27f368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x27f36c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x27f36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x27f370: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x27f370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x27f374: 0x2428026  xor         $s0, $s2, $v0
    ctx->pc = 0x27f374u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 2));
    // 0x27f378: 0x920200a8  lbu         $v0, 0xA8($s0)
    ctx->pc = 0x27f378u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x27f37c: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x27f37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x27f380: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x27f380u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x27f384: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x27F384u;
    {
        const bool branch_taken_0x27f384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f384) {
            ctx->pc = 0x27F3D8u;
            goto label_27f3d8;
        }
    }
    ctx->pc = 0x27F38Cu;
    // 0x27f38c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x27f38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x27f390: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x27f390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x27f394: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x27f394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x27f398: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x27f398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x27f39c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27F39Cu;
    {
        const bool branch_taken_0x27f39c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27F3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F39Cu;
            // 0x27f3a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f39c) {
            ctx->pc = 0x27F3B0u;
            goto label_27f3b0;
        }
    }
    ctx->pc = 0x27F3A4u;
    // 0x27f3a4: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x27F3A4u;
    SET_GPR_U32(ctx, 31, 0x27F3ACu);
    ctx->pc = 0x27F3A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F3A4u;
            // 0x27f3a8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F3ACu; }
        if (ctx->pc != 0x27F3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F3ACu; }
        if (ctx->pc != 0x27F3ACu) { return; }
    }
    ctx->pc = 0x27F3ACu;
label_27f3ac:
    // 0x27f3ac: 0x0  nop
    ctx->pc = 0x27f3acu;
    // NOP
label_27f3b0:
    // 0x27f3b0: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x27f3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x27f3b4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x27f3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27f3b8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x27f3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x27f3bc: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x27f3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x27f3c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27f3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27f3c4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x27f3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x27f3c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27f3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27f3cc: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x27F3CCu;
    {
        const bool branch_taken_0x27f3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F3CCu;
            // 0x27f3d0: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f3cc) {
            ctx->pc = 0x27F4D8u;
            goto label_27f4d8;
        }
    }
    ctx->pc = 0x27F3D4u;
    // 0x27f3d4: 0x0  nop
    ctx->pc = 0x27f3d4u;
    // NOP
label_27f3d8:
    // 0x27f3d8: 0x9604006c  lhu         $a0, 0x6C($s0)
    ctx->pc = 0x27f3d8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x27f3dc: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x27f3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x27f3e0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x27f3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x27f3e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27f3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27f3e8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x27f3e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27f3ec: 0x1062003a  beq         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x27F3ECu;
    {
        const bool branch_taken_0x27f3ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27f3ec) {
            ctx->pc = 0x27F4D8u;
            goto label_27f4d8;
        }
    }
    ctx->pc = 0x27F3F4u;
    // 0x27f3f4: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x27f3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x27f3f8: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x27f3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x27f3fc: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x27f3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x27f400: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x27f400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x27f404: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27F404u;
    {
        const bool branch_taken_0x27f404 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27F408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F404u;
            // 0x27f408: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f404) {
            ctx->pc = 0x27F418u;
            goto label_27f418;
        }
    }
    ctx->pc = 0x27F40Cu;
    // 0x27f40c: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x27F40Cu;
    SET_GPR_U32(ctx, 31, 0x27F414u);
    ctx->pc = 0x27F410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F40Cu;
            // 0x27f410: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F414u; }
        if (ctx->pc != 0x27F414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F414u; }
        if (ctx->pc != 0x27F414u) { return; }
    }
    ctx->pc = 0x27F414u;
label_27f414:
    // 0x27f414: 0x0  nop
    ctx->pc = 0x27f414u;
    // NOP
label_27f418:
    // 0x27f418: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x27f418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x27f41c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x27f41cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27f420: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x27f420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x27f424: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x27f424u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x27f428: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27f428u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27f42c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x27f42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x27f430: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27f430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27f434: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x27f434u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x27f438: 0x9603006c  lhu         $v1, 0x6C($s0)
    ctx->pc = 0x27f438u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x27f43c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x27f43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x27f440: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27f440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27f444: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x27f444u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27f448: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x27f448u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x27f44c: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x27F44Cu;
    {
        const bool branch_taken_0x27f44c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f44c) {
            ctx->pc = 0x27F4D8u;
            goto label_27f4d8;
        }
    }
    ctx->pc = 0x27F454u;
    // 0x27f454: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x27f454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x27f458: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x27f458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x27f45c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x27f45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x27f460: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x27f460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x27f464: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27F464u;
    {
        const bool branch_taken_0x27f464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27F468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F464u;
            // 0x27f468: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f464) {
            ctx->pc = 0x27F478u;
            goto label_27f478;
        }
    }
    ctx->pc = 0x27F46Cu;
    // 0x27f46c: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x27F46Cu;
    SET_GPR_U32(ctx, 31, 0x27F474u);
    ctx->pc = 0x27F470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F46Cu;
            // 0x27f470: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F474u; }
        if (ctx->pc != 0x27F474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F474u; }
        if (ctx->pc != 0x27F474u) { return; }
    }
    ctx->pc = 0x27F474u;
label_27f474:
    // 0x27f474: 0x0  nop
    ctx->pc = 0x27f474u;
    // NOP
label_27f478:
    // 0x27f478: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x27f478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x27f47c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x27f47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x27f480: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x27f480u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x27f484: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27f484u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27f488: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x27f488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x27f48c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27f48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27f490: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x27f490u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x27f494: 0x9603006c  lhu         $v1, 0x6C($s0)
    ctx->pc = 0x27f494u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x27f498: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x27f498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x27f49c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x27f49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27f4a0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x27f4a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27f4a4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27F4A4u;
    {
        const bool branch_taken_0x27f4a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F4A4u;
            // 0x27f4a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f4a4) {
            ctx->pc = 0x27F4C0u;
            goto label_27f4c0;
        }
    }
    ctx->pc = 0x27F4ACu;
    // 0x27f4ac: 0x260500b0  addiu       $a1, $s0, 0xB0
    ctx->pc = 0x27f4acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x27f4b0: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x27f4b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x27f4b4: 0x24a40040  addiu       $a0, $a1, 0x40
    ctx->pc = 0x27f4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x27f4b8: 0xc0a3a64  jal         func_28E990
    ctx->pc = 0x27F4B8u;
    SET_GPR_U32(ctx, 31, 0x27F4C0u);
    ctx->pc = 0x27F4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F4B8u;
            // 0x27f4bc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E990u;
    if (runtime->hasFunction(0x28E990u)) {
        auto targetFn = runtime->lookupFunction(0x28E990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F4C0u; }
        if (ctx->pc != 0x27F4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E990_0x28e990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F4C0u; }
        if (ctx->pc != 0x27F4C0u) { return; }
    }
    ctx->pc = 0x27F4C0u;
label_27f4c0:
    // 0x27f4c0: 0x9603006c  lhu         $v1, 0x6C($s0)
    ctx->pc = 0x27f4c0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x27f4c4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x27f4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x27f4c8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x27f4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27f4cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27f4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27f4d0: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x27f4d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x27f4d4: 0x0  nop
    ctx->pc = 0x27f4d4u;
    // NOP
label_27f4d8:
    // 0x27f4d8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x27f4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x27f4dc: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x27f4dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x27f4e0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x27f4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27f4e4: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x27f4e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27f4e8: 0x1440ff93  bnez        $v0, . + 4 + (-0x6D << 2)
    ctx->pc = 0x27F4E8u;
    {
        const bool branch_taken_0x27f4e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F4E8u;
            // 0x27f4ec: 0x27de0004  addiu       $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f4e8) {
            ctx->pc = 0x27F338u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27f338;
        }
    }
    ctx->pc = 0x27F4F0u;
label_27f4f0:
    // 0x27f4f0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x27f4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x27f4f4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x27f4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x27f4f8: 0x172080  sll         $a0, $s7, 2
    ctx->pc = 0x27f4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x27f4fc: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x27f4fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
    // 0x27f500: 0x24c6f5c0  addiu       $a2, $a2, -0xA40
    ctx->pc = 0x27f500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964672));
    // 0x27f504: 0x572823  subu        $a1, $v0, $s7
    ctx->pc = 0x27f504u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x27f508: 0xc0a0454  jal         func_281150
    ctx->pc = 0x27F508u;
    SET_GPR_U32(ctx, 31, 0x27F510u);
    ctx->pc = 0x27F50Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F508u;
            // 0x27f50c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281150u;
    if (runtime->hasFunction(0x281150u)) {
        auto targetFn = runtime->lookupFunction(0x281150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F510u; }
        if (ctx->pc != 0x27F510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281150_0x281150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F510u; }
        if (ctx->pc != 0x27F510u) { return; }
    }
    ctx->pc = 0x27F510u;
label_27f510:
    // 0x27f510: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x27f510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x27f514: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x27f514u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
    // 0x27f518: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x27f518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x27f51c: 0x24c6f5a0  addiu       $a2, $a2, -0xA60
    ctx->pc = 0x27f51cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964640));
    // 0x27f520: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x27f520u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27f524: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x27f524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x27f528: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x27f528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x27f52c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x27f52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x27f530: 0xc0a0420  jal         func_281080
    ctx->pc = 0x27F530u;
    SET_GPR_U32(ctx, 31, 0x27F538u);
    ctx->pc = 0x27F534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F530u;
            // 0x27f534: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281080u;
    if (runtime->hasFunction(0x281080u)) {
        auto targetFn = runtime->lookupFunction(0x281080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F538u; }
        if (ctx->pc != 0x27F538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281080_0x281080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F538u; }
        if (ctx->pc != 0x27F538u) { return; }
    }
    ctx->pc = 0x27F538u;
label_27f538:
    // 0x27f538: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x27f538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x27f53c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x27f53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x27f540: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x27f540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x27f544: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x27f544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x27f548: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x27f548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x27f54c: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x27f54cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
    // 0x27f550: 0x8fa300f4  lw          $v1, 0xF4($sp)
    ctx->pc = 0x27f550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x27f554: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x27f554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x27f558: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x27f558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x27f55c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x27f55cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x27f560: 0x1460fedf  bnez        $v1, . + 4 + (-0x121 << 2)
    ctx->pc = 0x27F560u;
    {
        const bool branch_taken_0x27f560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27f560) {
            ctx->pc = 0x27F0E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27f0e0;
        }
    }
    ctx->pc = 0x27F568u;
label_27f568:
    // 0x27f568: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x27f568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x27f56c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x27f56cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x27f570: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x27f570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27f574: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x27f574u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27f578: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x27f578u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27f57c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x27f57cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27f580: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x27f580u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27f584: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x27f584u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27f588: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x27f588u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27f58c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x27f58cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27f590: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27f590u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27f594: 0x3e00008  jr          $ra
    ctx->pc = 0x27F594u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F594u;
            // 0x27f598: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27F59Cu;
    // 0x27f59c: 0x0  nop
    ctx->pc = 0x27f59cu;
    // NOP
    // 0x27f5a0: 0x8ca5009c  lw          $a1, 0x9C($a1)
    ctx->pc = 0x27f5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 156)));
    // 0x27f5a4: 0x8cc3009c  lw          $v1, 0x9C($a2)
    ctx->pc = 0x27f5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 156)));
    // 0x27f5a8: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x27f5a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x27f5ac: 0x3e00008  jr          $ra
    ctx->pc = 0x27F5ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F5B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F5ACu;
            // 0x27f5b0: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27F5B4u;
    // 0x27f5b4: 0x0  nop
    ctx->pc = 0x27f5b4u;
    // NOP
    // 0x27f5b8: 0x0  nop
    ctx->pc = 0x27f5b8u;
    // NOP
    // 0x27f5bc: 0x0  nop
    ctx->pc = 0x27f5bcu;
    // NOP
    // 0x27f5c0: 0x8cc70028  lw          $a3, 0x28($a2)
    ctx->pc = 0x27f5c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x27f5c4: 0x8ca60028  lw          $a2, 0x28($a1)
    ctx->pc = 0x27f5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x27f5c8: 0x90e5001a  lbu         $a1, 0x1A($a3)
    ctx->pc = 0x27f5c8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 26)));
    // 0x27f5cc: 0x90c3001a  lbu         $v1, 0x1A($a2)
    ctx->pc = 0x27f5ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 26)));
    // 0x27f5d0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x27f5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x27f5d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27f5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27f5d8: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x27f5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x27f5dc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x27f5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x27f5e0: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x27f5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x27f5e4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x27f5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x27f5e8: 0x8ca5009c  lw          $a1, 0x9C($a1)
    ctx->pc = 0x27f5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 156)));
    // 0x27f5ec: 0x8c63009c  lw          $v1, 0x9C($v1)
    ctx->pc = 0x27f5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x27f5f0: 0x65082b  sltu        $at, $v1, $a1
    ctx->pc = 0x27f5f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x27f5f4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x27F5F4u;
    {
        const bool branch_taken_0x27f5f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f5f4) {
            ctx->pc = 0x27F608u;
            goto label_27f608;
        }
    }
    ctx->pc = 0x27F5FCu;
    // 0x27f5fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27f5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f600: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x27F600u;
    {
        const bool branch_taken_0x27f600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F600u;
            // 0x27f604: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f600) {
            ctx->pc = 0x27F628u;
            goto label_27f628;
        }
    }
    ctx->pc = 0x27F608u;
label_27f608:
    // 0x27f608: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27F608u;
    {
        const bool branch_taken_0x27f608 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x27f608) {
            ctx->pc = 0x27F620u;
            goto label_27f620;
        }
    }
    ctx->pc = 0x27F610u;
    // 0x27f610: 0xc7182b  sltu        $v1, $a2, $a3
    ctx->pc = 0x27f610u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x27f614: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x27F614u;
    {
        const bool branch_taken_0x27f614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F614u;
            // 0x27f618: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f614) {
            ctx->pc = 0x27F628u;
            goto label_27f628;
        }
    }
    ctx->pc = 0x27F61Cu;
    // 0x27f61c: 0x0  nop
    ctx->pc = 0x27f61cu;
    // NOP
label_27f620:
    // 0x27f620: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x27f620u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x27f624: 0x0  nop
    ctx->pc = 0x27f624u;
    // NOP
label_27f628:
    // 0x27f628: 0x3e00008  jr          $ra
    ctx->pc = 0x27F628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27F630u;
}
