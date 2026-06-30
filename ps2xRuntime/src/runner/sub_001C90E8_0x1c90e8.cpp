#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C90E8
// Address: 0x1c90e8 - 0x1c9288
void sub_001C90E8_0x1c90e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C90E8_0x1c90e8");
#endif

    switch (ctx->pc) {
        case 0x1c9138u: goto label_1c9138;
        case 0x1c914cu: goto label_1c914c;
        case 0x1c919cu: goto label_1c919c;
        case 0x1c91a4u: goto label_1c91a4;
        case 0x1c91b4u: goto label_1c91b4;
        case 0x1c91c4u: goto label_1c91c4;
        case 0x1c91ccu: goto label_1c91cc;
        case 0x1c91e4u: goto label_1c91e4;
        case 0x1c9214u: goto label_1c9214;
        case 0x1c9228u: goto label_1c9228;
        case 0x1c9244u: goto label_1c9244;
        case 0x1c9254u: goto label_1c9254;
        default: break;
    }

    ctx->pc = 0x1c90e8u;

    // 0x1c90e8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c90e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1c90ec: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c90ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c90f0: 0x8c43a6f4  lw          $v1, -0x590C($v0)
    ctx->pc = 0x1c90f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944500)));
    // 0x1c90f4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c90f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c90f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c90f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c90fc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1c90fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1c9100: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x1c9100u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c9104: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1c9104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1c9108: 0x10600057  beqz        $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x1C9108u;
    {
        const bool branch_taken_0x1c9108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C910Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9108u;
            // 0x1c910c: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9108) {
            ctx->pc = 0x1C9268u;
            goto label_1c9268;
        }
    }
    ctx->pc = 0x1C9110u;
    // 0x1c9110: 0x3c02006e  lui         $v0, 0x6E
    ctx->pc = 0x1c9110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)110 << 16));
    // 0x1c9114: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c9114u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c9118: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1c9118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1c911c: 0x24426f00  addiu       $v0, $v0, 0x6F00
    ctx->pc = 0x1c911cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28416));
    // 0x1c9120: 0x2484c0f0  addiu       $a0, $a0, -0x3F10
    ctx->pc = 0x1c9120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951152));
    // 0x1c9124: 0x24050a40  addiu       $a1, $zero, 0xA40
    ctx->pc = 0x1c9124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2624));
    // 0x1c9128: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c9128u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c912c: 0x2472a70c  addiu       $s2, $v1, -0x58F4
    ctx->pc = 0x1c912cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944524));
    // 0x1c9130: 0xc04ab4c  jal         func_12AD30
    ctx->pc = 0x1C9130u;
    SET_GPR_U32(ctx, 31, 0x1C9138u);
    ctx->pc = 0x1C9134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9130u;
            // 0x1c9134: 0xac62a70c  sw          $v0, -0x58F4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294944524), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD30u;
    if (runtime->hasFunction(0x12AD30u)) {
        auto targetFn = runtime->lookupFunction(0x12AD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9138u; }
        if (ctx->pc != 0x1C9138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD30_0x12ad30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9138u; }
        if (ctx->pc != 0x1C9138u) { return; }
    }
    ctx->pc = 0x1C9138u;
label_1c9138:
    // 0x1c9138: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c9138u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c913c: 0x24053080  addiu       $a1, $zero, 0x3080
    ctx->pc = 0x1c913cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12416));
    // 0x1c9140: 0x2484c108  addiu       $a0, $a0, -0x3EF8
    ctx->pc = 0x1c9140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951176));
    // 0x1c9144: 0xc04ab4c  jal         func_12AD30
    ctx->pc = 0x1C9144u;
    SET_GPR_U32(ctx, 31, 0x1C914Cu);
    ctx->pc = 0x1C9148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9144u;
            // 0x1c9148: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD30u;
    if (runtime->hasFunction(0x12AD30u)) {
        auto targetFn = runtime->lookupFunction(0x12AD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C914Cu; }
        if (ctx->pc != 0x1C914Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD30_0x12ad30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C914Cu; }
        if (ctx->pc != 0x1C914Cu) { return; }
    }
    ctx->pc = 0x1C914Cu;
label_1c914c:
    // 0x1c914c: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x1c914cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x1c9150: 0x32040001  andi        $a0, $s0, 0x1
    ctx->pc = 0x1c9150u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1c9154: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x1c9154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x1c9158: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C9158u;
    {
        const bool branch_taken_0x1c9158 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1C915Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9158u;
            // 0x1c915c: 0x832025  or          $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9158) {
            ctx->pc = 0x1C9170u;
            goto label_1c9170;
        }
    }
    ctx->pc = 0x1C9160u;
    // 0x1c9160: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1c9160u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9164: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C9164u;
    {
        const bool branch_taken_0x1c9164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9164u;
            // 0x1c9168: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9164) {
            ctx->pc = 0x1C917Cu;
            goto label_1c917c;
        }
    }
    ctx->pc = 0x1C916Cu;
    // 0x1c916c: 0x0  nop
    ctx->pc = 0x1c916cu;
    // NOP
label_1c9170:
    // 0x1c9170: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1c9170u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c9174: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c9174u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c9178: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1c9178u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1c917c:
    // 0x1c917c: 0x3c01473b  lui         $at, 0x473B
    ctx->pc = 0x1c917cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18235 << 16));
    // 0x1c9180: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x1c9180u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x1c9184: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c9184u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c9188: 0x0  nop
    ctx->pc = 0x1c9188u;
    // NOP
    // 0x1c918c: 0x0  nop
    ctx->pc = 0x1c918cu;
    // NOP
    // 0x1c9190: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x1c9190u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[12];
    // 0x1c9194: 0xc049514  jal         func_125450
    ctx->pc = 0x1C9194u;
    SET_GPR_U32(ctx, 31, 0x1C919Cu);
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C919Cu; }
        if (ctx->pc != 0x1C919Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C919Cu; }
        if (ctx->pc != 0x1C919Cu) { return; }
    }
    ctx->pc = 0x1C919Cu;
label_1c919c:
    // 0x1c919c: 0xc0477f8  jal         func_11DFE0
    ctx->pc = 0x1C919Cu;
    SET_GPR_U32(ctx, 31, 0x1C91A4u);
    ctx->pc = 0x1C91A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C919Cu;
            // 0x1c91a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DFE0u;
    if (runtime->hasFunction(0x11DFE0u)) {
        auto targetFn = runtime->lookupFunction(0x11DFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C91A4u; }
        if (ctx->pc != 0x1C91A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DFE0_0x11dfe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C91A4u; }
        if (ctx->pc != 0x1C91A4u) { return; }
    }
    ctx->pc = 0x1C91A4u;
label_1c91a4:
    // 0x1c91a4: 0x3c010064  lui         $at, 0x64
    ctx->pc = 0x1c91a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
    // 0x1c91a8: 0xdc25c120  ld          $a1, -0x3EE0($at)
    ctx->pc = 0x1c91a8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294951200)));
    // 0x1c91ac: 0xc0496ca  jal         func_125B28
    ctx->pc = 0x1C91ACu;
    SET_GPR_U32(ctx, 31, 0x1C91B4u);
    ctx->pc = 0x1C91B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C91ACu;
            // 0x1c91b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125B28u;
    if (runtime->hasFunction(0x125B28u)) {
        auto targetFn = runtime->lookupFunction(0x125B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C91B4u; }
        if (ctx->pc != 0x1C91B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125B28_0x125b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C91B4u; }
        if (ctx->pc != 0x1C91B4u) { return; }
    }
    ctx->pc = 0x1C91B4u;
label_1c91b4:
    // 0x1c91b4: 0x3c010064  lui         $at, 0x64
    ctx->pc = 0x1c91b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)100 << 16));
    // 0x1c91b8: 0xdc25c128  ld          $a1, -0x3ED8($at)
    ctx->pc = 0x1c91b8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294951208)));
    // 0x1c91bc: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x1C91BCu;
    SET_GPR_U32(ctx, 31, 0x1C91C4u);
    ctx->pc = 0x1C91C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C91BCu;
            // 0x1c91c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C91C4u; }
        if (ctx->pc != 0x1C91C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C91C4u; }
        if (ctx->pc != 0x1C91C4u) { return; }
    }
    ctx->pc = 0x1C91C4u;
label_1c91c4:
    // 0x1c91c4: 0xc0497a2  jal         func_125E88
    ctx->pc = 0x1C91C4u;
    SET_GPR_U32(ctx, 31, 0x1C91CCu);
    ctx->pc = 0x1C91C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C91C4u;
            // 0x1c91c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125E88u;
    if (runtime->hasFunction(0x125E88u)) {
        auto targetFn = runtime->lookupFunction(0x125E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C91CCu; }
        if (ctx->pc != 0x1C91CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125E88_0x125e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C91CCu; }
        if (ctx->pc != 0x1C91CCu) { return; }
    }
    ctx->pc = 0x1C91CCu;
label_1c91cc:
    // 0x1c91cc: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x1c91ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c91d0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c91d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c91d4: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x1c91d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c91d8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c91d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c91dc: 0xc0728d0  jal         func_1CA340
    ctx->pc = 0x1C91DCu;
    SET_GPR_U32(ctx, 31, 0x1C91E4u);
    ctx->pc = 0x1C91E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C91DCu;
            // 0x1c91e0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA340u;
    if (runtime->hasFunction(0x1CA340u)) {
        auto targetFn = runtime->lookupFunction(0x1CA340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C91E4u; }
        if (ctx->pc != 0x1C91E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA340_0x1ca340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C91E4u; }
        if (ctx->pc != 0x1C91E4u) { return; }
    }
    ctx->pc = 0x1C91E4u;
label_1c91e4:
    // 0x1c91e4: 0x3c03006e  lui         $v1, 0x6E
    ctx->pc = 0x1c91e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)110 << 16));
    // 0x1c91e8: 0x24633080  addiu       $v1, $v1, 0x3080
    ctx->pc = 0x1c91e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12416));
    // 0x1c91ec: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1c91ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c91f0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1c91f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1c91f4: 0x3c02006e  lui         $v0, 0x6E
    ctx->pc = 0x1c91f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)110 << 16));
    // 0x1c91f8: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x1c91f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c91fc: 0x24503e80  addiu       $s0, $v0, 0x3E80
    ctx->pc = 0x1c91fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16000));
    // 0x1c9200: 0xaca400b0  sw          $a0, 0xB0($a1)
    ctx->pc = 0x1c9200u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 176), GPR_U32(ctx, 4));
    // 0x1c9204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9208: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c9208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c920c: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x1C920Cu;
    SET_GPR_U32(ctx, 31, 0x1C9214u);
    ctx->pc = 0x1C9210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C920Cu;
            // 0x1c9210: 0x24063080  addiu       $a2, $zero, 0x3080 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9214u; }
        if (ctx->pc != 0x1C9214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9214u; }
        if (ctx->pc != 0x1C9214u) { return; }
    }
    ctx->pc = 0x1C9214u;
label_1c9214:
    // 0x1c9214: 0x3c04006e  lui         $a0, 0x6E
    ctx->pc = 0x1c9214u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)110 << 16));
    // 0x1c9218: 0x24843200  addiu       $a0, $a0, 0x3200
    ctx->pc = 0x1c9218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12800));
    // 0x1c921c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c921cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9220: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x1C9220u;
    SET_GPR_U32(ctx, 31, 0x1C9228u);
    ctx->pc = 0x1C9224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9220u;
            // 0x1c9224: 0x24060a40  addiu       $a2, $zero, 0xA40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9228u; }
        if (ctx->pc != 0x1C9228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9228u; }
        if (ctx->pc != 0x1C9228u) { return; }
    }
    ctx->pc = 0x1C9228u;
label_1c9228:
    // 0x1c9228: 0x24041600  addiu       $a0, $zero, 0x1600
    ctx->pc = 0x1c9228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5632));
    // 0x1c922c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c922cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9230: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c9230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9234: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C9234u;
    {
        const bool branch_taken_0x1c9234 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9234u;
            // 0x1c9238: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9234) {
            ctx->pc = 0x1C924Cu;
            goto label_1c924c;
        }
    }
    ctx->pc = 0x1C923Cu;
    // 0x1c923c: 0xc0728d0  jal         func_1CA340
    ctx->pc = 0x1C923Cu;
    SET_GPR_U32(ctx, 31, 0x1C9244u);
    ctx->pc = 0x1C9240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C923Cu;
            // 0x1c9240: 0xafb00000  sw          $s0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA340u;
    if (runtime->hasFunction(0x1CA340u)) {
        auto targetFn = runtime->lookupFunction(0x1CA340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9244u; }
        if (ctx->pc != 0x1C9244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA340_0x1ca340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9244u; }
        if (ctx->pc != 0x1C9244u) { return; }
    }
    ctx->pc = 0x1C9244u;
label_1c9244:
    // 0x1c9244: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1c9244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c9248: 0xac620ac8  sw          $v0, 0xAC8($v1)
    ctx->pc = 0x1c9248u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2760), GPR_U32(ctx, 2));
label_1c924c:
    // 0x1c924c: 0xc0724a2  jal         func_1C9288
    ctx->pc = 0x1C924Cu;
    SET_GPR_U32(ctx, 31, 0x1C9254u);
    ctx->pc = 0x1C9288u;
    if (runtime->hasFunction(0x1C9288u)) {
        auto targetFn = runtime->lookupFunction(0x1C9288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9254u; }
        if (ctx->pc != 0x1C9254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C9288_0x1c9288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9254u; }
        if (ctx->pc != 0x1C9254u) { return; }
    }
    ctx->pc = 0x1C9254u;
label_1c9254:
    // 0x1c9254: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C9254u;
    {
        const bool branch_taken_0x1c9254 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9254u;
            // 0x1c9258: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9254) {
            ctx->pc = 0x1C926Cu;
            goto label_1c926c;
        }
    }
    ctx->pc = 0x1C925Cu;
    // 0x1c925c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c925cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9260: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c9260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1c9264: 0xac43a6f8  sw          $v1, -0x5908($v0)
    ctx->pc = 0x1c9264u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294944504), GPR_U32(ctx, 3));
label_1c9268:
    // 0x1c9268: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1c9268u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c926c:
    // 0x1c926c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c926cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9270: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1c9270u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c9274: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c9274u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c9278: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1c9278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c927c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C927Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C927Cu;
            // 0x1c9280: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9284u;
    // 0x1c9284: 0x0  nop
    ctx->pc = 0x1c9284u;
    // NOP
}
