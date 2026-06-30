#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003FF160
// Address: 0x3ff160 - 0x3ff330
void sub_003FF160_0x3ff160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FF160_0x3ff160");
#endif

    switch (ctx->pc) {
        case 0x3ff190u: goto label_3ff190;
        case 0x3ff1e8u: goto label_3ff1e8;
        case 0x3ff204u: goto label_3ff204;
        case 0x3ff234u: goto label_3ff234;
        case 0x3ff23cu: goto label_3ff23c;
        case 0x3ff254u: goto label_3ff254;
        case 0x3ff264u: goto label_3ff264;
        case 0x3ff284u: goto label_3ff284;
        case 0x3ff304u: goto label_3ff304;
        case 0x3ff314u: goto label_3ff314;
        default: break;
    }

    ctx->pc = 0x3ff160u;

    // 0x3ff160: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x3ff160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x3ff164: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3ff164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3ff168: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3ff168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3ff16c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3ff16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3ff170: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3ff170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3ff174: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3ff174u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff178: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ff178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3ff17c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3ff17cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff180: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ff180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ff184: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x3ff184u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff188: 0xc0892d0  jal         func_224B40
    ctx->pc = 0x3FF188u;
    SET_GPR_U32(ctx, 31, 0x3FF190u);
    ctx->pc = 0x3FF18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF188u;
            // 0x3ff18c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF190u; }
        if (ctx->pc != 0x3FF190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF190u; }
        if (ctx->pc != 0x3FF190u) { return; }
    }
    ctx->pc = 0x3FF190u;
label_3ff190:
    // 0x3ff190: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x3ff190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x3ff194: 0xafb00054  sw          $s0, 0x54($sp)
    ctx->pc = 0x3ff194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 16));
    // 0x3ff198: 0xc440c900  lwc1        $f0, -0x3700($v0)
    ctx->pc = 0x3ff198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ff19c: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x3ff19cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x3ff1a0: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x3ff1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x3ff1a4: 0x24050210  addiu       $a1, $zero, 0x210
    ctx->pc = 0x3ff1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x3ff1a8: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x3ff1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x3ff1ac: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x3ff1acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x3ff1b0: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x3ff1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x3ff1b4: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x3ff1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x3ff1b8: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x3ff1b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3ff1bc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3ff1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3ff1c0: 0xafa300fc  sw          $v1, 0xFC($sp)
    ctx->pc = 0x3ff1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 3));
    // 0x3ff1c4: 0xa3a20100  sb          $v0, 0x100($sp)
    ctx->pc = 0x3ff1c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 256), (uint8_t)GPR_U32(ctx, 2));
    // 0x3ff1c8: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x3ff1c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x3ff1cc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3ff1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3ff1d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ff1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ff1d4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3ff1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x3ff1d8: 0x92620002  lbu         $v0, 0x2($s3)
    ctx->pc = 0x3ff1d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x3ff1dc: 0x431004  sllv        $v0, $v1, $v0
    ctx->pc = 0x3ff1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x3ff1e0: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x3FF1E0u;
    SET_GPR_U32(ctx, 31, 0x3FF1E8u);
    ctx->pc = 0x3FF1E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF1E0u;
            // 0x3ff1e4: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF1E8u; }
        if (ctx->pc != 0x3FF1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF1E8u; }
        if (ctx->pc != 0x3FF1E8u) { return; }
    }
    ctx->pc = 0x3FF1E8u;
label_3ff1e8:
    // 0x3ff1e8: 0x24030210  addiu       $v1, $zero, 0x210
    ctx->pc = 0x3ff1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x3ff1ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ff1ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff1f0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3FF1F0u;
    {
        const bool branch_taken_0x3ff1f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FF1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF1F0u;
            // 0x3ff1f4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff1f0) {
            ctx->pc = 0x3FF214u;
            goto label_3ff214;
        }
    }
    ctx->pc = 0x3FF1F8u;
    // 0x3ff1f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ff1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff1fc: 0xc088ef4  jal         func_223BD0
    ctx->pc = 0x3FF1FCu;
    SET_GPR_U32(ctx, 31, 0x3FF204u);
    ctx->pc = 0x3FF200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF1FCu;
            // 0x3ff200: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF204u; }
        if (ctx->pc != 0x3FF204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF204u; }
        if (ctx->pc != 0x3FF204u) { return; }
    }
    ctx->pc = 0x3FF204u;
label_3ff204:
    // 0x3ff204: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3ff204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x3ff208: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x3ff208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
    // 0x3ff20c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3ff20cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3ff210: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x3ff210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_3ff214:
    // 0x3ff214: 0xae130200  sw          $s3, 0x200($s0)
    ctx->pc = 0x3ff214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 19));
    // 0x3ff218: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3ff218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3ff21c: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x3ff21cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
    // 0x3ff220: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ff220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff224: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3ff224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x3ff228: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3ff228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3ff22c: 0xc08c164  jal         func_230590
    ctx->pc = 0x3FF22Cu;
    SET_GPR_U32(ctx, 31, 0x3FF234u);
    ctx->pc = 0x3FF230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF22Cu;
            // 0x3ff230: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF234u; }
        if (ctx->pc != 0x3FF234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF234u; }
        if (ctx->pc != 0x3FF234u) { return; }
    }
    ctx->pc = 0x3FF234u;
label_3ff234:
    // 0x3ff234: 0xc08d414  jal         func_235050
    ctx->pc = 0x3FF234u;
    SET_GPR_U32(ctx, 31, 0x3FF23Cu);
    ctx->pc = 0x3FF238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF234u;
            // 0x3ff238: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x235050u;
    if (runtime->hasFunction(0x235050u)) {
        auto targetFn = runtime->lookupFunction(0x235050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF23Cu; }
        if (ctx->pc != 0x3FF23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00235050_0x235050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF23Cu; }
        if (ctx->pc != 0x3FF23Cu) { return; }
    }
    ctx->pc = 0x3FF23Cu;
label_3ff23c:
    // 0x3ff23c: 0x5220000a  beql        $s1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3FF23Cu;
    {
        const bool branch_taken_0x3ff23c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ff23c) {
            ctx->pc = 0x3FF240u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF23Cu;
            // 0x3ff240: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3FF268u;
            goto label_3ff268;
        }
    }
    ctx->pc = 0x3FF244u;
    // 0x3ff244: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3ff244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ff248: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ff248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff24c: 0xc08d37c  jal         func_234DF0
    ctx->pc = 0x3FF24Cu;
    SET_GPR_U32(ctx, 31, 0x3FF254u);
    ctx->pc = 0x3FF250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF24Cu;
            // 0x3ff250: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234DF0u;
    if (runtime->hasFunction(0x234DF0u)) {
        auto targetFn = runtime->lookupFunction(0x234DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF254u; }
        if (ctx->pc != 0x3FF254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234DF0_0x234df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF254u; }
        if (ctx->pc != 0x3FF254u) { return; }
    }
    ctx->pc = 0x3FF254u;
label_3ff254:
    // 0x3ff254: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x3ff254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3ff258: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x3ff258u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3ff25c: 0xc0fff18  jal         func_3FFC60
    ctx->pc = 0x3FF25Cu;
    SET_GPR_U32(ctx, 31, 0x3FF264u);
    ctx->pc = 0x3FF260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF25Cu;
            // 0x3ff260: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FFC60u;
    if (runtime->hasFunction(0x3FFC60u)) {
        auto targetFn = runtime->lookupFunction(0x3FFC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF264u; }
        if (ctx->pc != 0x3FF264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FFC60_0x3ffc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF264u; }
        if (ctx->pc != 0x3FF264u) { return; }
    }
    ctx->pc = 0x3FF264u;
label_3ff264:
    // 0x3ff264: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x3ff264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_3ff268:
    // 0x3ff268: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3ff268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3ff26c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3ff26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x3ff270: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ff270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff274: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3ff274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ff278: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3ff278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3ff27c: 0xc08bff0  jal         func_22FFC0
    ctx->pc = 0x3FF27Cu;
    SET_GPR_U32(ctx, 31, 0x3FF284u);
    ctx->pc = 0x3FF280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF27Cu;
            // 0x3ff280: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF284u; }
        if (ctx->pc != 0x3FF284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF284u; }
        if (ctx->pc != 0x3FF284u) { return; }
    }
    ctx->pc = 0x3FF284u;
label_3ff284:
    // 0x3ff284: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3ff284u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff288: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3ff288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ff28c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3ff28cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ff290: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3ff290u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ff294: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ff294u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ff298: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ff298u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ff29c: 0x3e00008  jr          $ra
    ctx->pc = 0x3FF29Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FF2A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF29Cu;
            // 0x3ff2a0: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3FF2A4u;
    // 0x3ff2a4: 0x0  nop
    ctx->pc = 0x3ff2a4u;
    // NOP
    // 0x3ff2a8: 0x0  nop
    ctx->pc = 0x3ff2a8u;
    // NOP
    // 0x3ff2ac: 0x0  nop
    ctx->pc = 0x3ff2acu;
    // NOP
    // 0x3ff2b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3FF2B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3FF2B8u;
    // 0x3ff2b8: 0x0  nop
    ctx->pc = 0x3ff2b8u;
    // NOP
    // 0x3ff2bc: 0x0  nop
    ctx->pc = 0x3ff2bcu;
    // NOP
    // 0x3ff2c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ff2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ff2c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ff2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3ff2c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ff2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ff2cc: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x3ff2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ff2d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ff2d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ff2d4: 0xe4800070  swc1        $f0, 0x70($a0)
    ctx->pc = 0x3ff2d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x3ff2d8: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x3ff2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ff2dc: 0xe4800074  swc1        $f0, 0x74($a0)
    ctx->pc = 0x3ff2dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
    // 0x3ff2e0: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x3ff2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ff2e4: 0xe4800078  swc1        $f0, 0x78($a0)
    ctx->pc = 0x3ff2e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
    // 0x3ff2e8: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x3ff2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ff2ec: 0xe480007c  swc1        $f0, 0x7C($a0)
    ctx->pc = 0x3ff2ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 124), bits); }
    // 0x3ff2f0: 0xc60c0070  lwc1        $f12, 0x70($s0)
    ctx->pc = 0x3ff2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3ff2f4: 0xc60d0074  lwc1        $f13, 0x74($s0)
    ctx->pc = 0x3ff2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3ff2f8: 0xc60e0078  lwc1        $f14, 0x78($s0)
    ctx->pc = 0x3ff2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3ff2fc: 0xc04f3fc  jal         func_13CFF0
    ctx->pc = 0x3FF2FCu;
    SET_GPR_U32(ctx, 31, 0x3FF304u);
    ctx->pc = 0x3FF300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF2FCu;
            // 0x3ff300: 0x26040100  addiu       $a0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF304u; }
        if (ctx->pc != 0x3FF304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFF0_0x13cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF304u; }
        if (ctx->pc != 0x3FF304u) { return; }
    }
    ctx->pc = 0x3FF304u;
label_3ff304:
    // 0x3ff304: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x3ff304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x3ff308: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x3ff308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3ff30c: 0xc04cd80  jal         func_133600
    ctx->pc = 0x3FF30Cu;
    SET_GPR_U32(ctx, 31, 0x3FF314u);
    ctx->pc = 0x3FF310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF30Cu;
            // 0x3ff310: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133600u;
    if (runtime->hasFunction(0x133600u)) {
        auto targetFn = runtime->lookupFunction(0x133600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF314u; }
        if (ctx->pc != 0x3FF314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133600_0x133600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF314u; }
        if (ctx->pc != 0x3FF314u) { return; }
    }
    ctx->pc = 0x3FF314u;
label_3ff314:
    // 0x3ff314: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ff314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ff318: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ff318u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ff31c: 0x3e00008  jr          $ra
    ctx->pc = 0x3FF31Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FF320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF31Cu;
            // 0x3ff320: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3FF324u;
    // 0x3ff324: 0x0  nop
    ctx->pc = 0x3ff324u;
    // NOP
    // 0x3ff328: 0x0  nop
    ctx->pc = 0x3ff328u;
    // NOP
    // 0x3ff32c: 0x0  nop
    ctx->pc = 0x3ff32cu;
    // NOP
}
