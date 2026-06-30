#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001962E8
// Address: 0x1962e8 - 0x196420
void sub_001962E8_0x1962e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001962E8_0x1962e8");
#endif

    switch (ctx->pc) {
        case 0x196308u: goto label_196308;
        case 0x196338u: goto label_196338;
        case 0x196354u: goto label_196354;
        case 0x19636cu: goto label_19636c;
        case 0x196388u: goto label_196388;
        case 0x196390u: goto label_196390;
        case 0x1963b8u: goto label_1963b8;
        case 0x1963d0u: goto label_1963d0;
        case 0x1963ecu: goto label_1963ec;
        case 0x1963f8u: goto label_1963f8;
        default: break;
    }

    ctx->pc = 0x1962e8u;

    // 0x1962e8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x1962e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x1962ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1962ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1962f0: 0x2442fed8  addiu       $v0, $v0, -0x128
    ctx->pc = 0x1962f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967000));
    // 0x1962f4: 0x8c450054  lw          $a1, 0x54($v0)
    ctx->pc = 0x1962f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1962f8: 0x18a0000c  blez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x1962F8u;
    {
        const bool branch_taken_0x1962f8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1962FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1962F8u;
            // 0x1962fc: 0x8c440058  lw          $a0, 0x58($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1962f8) {
            ctx->pc = 0x19632Cu;
            goto label_19632c;
        }
    }
    ctx->pc = 0x196300u;
    // 0x196300: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x196300u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196304: 0x8c830188  lw          $v1, 0x188($a0)
    ctx->pc = 0x196304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 392)));
label_196308:
    // 0x196308: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x196308u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19630c: 0x10670008  beq         $v1, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x19630Cu;
    {
        const bool branch_taken_0x19630c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x196310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19630Cu;
            // 0x196310: 0x24840440  addiu       $a0, $a0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19630c) {
            ctx->pc = 0x196330u;
            goto label_196330;
        }
    }
    ctx->pc = 0x196314u;
    // 0x196314: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x196314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x196318: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x196318u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x19631c: 0x0  nop
    ctx->pc = 0x19631cu;
    // NOP
    // 0x196320: 0x0  nop
    ctx->pc = 0x196320u;
    // NOP
    // 0x196324: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x196324u;
    {
        const bool branch_taken_0x196324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x196324) {
            ctx->pc = 0x196328u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x196324u;
            // 0x196328: 0x8c830188  lw          $v1, 0x188($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 392)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x196308u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_196308;
        }
    }
    ctx->pc = 0x19632Cu;
label_19632c:
    // 0x19632c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19632cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196330:
    // 0x196330: 0x3e00008  jr          $ra
    ctx->pc = 0x196330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x196338u;
label_196338:
    // 0x196338: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x196338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19633c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19633cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x196340: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x196340u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196344: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x196344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x196348: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x196348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19634c: 0xc06582c  jal         func_1960B0
    ctx->pc = 0x19634Cu;
    SET_GPR_U32(ctx, 31, 0x196354u);
    ctx->pc = 0x196350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19634Cu;
            // 0x196350: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1960B0u;
    if (runtime->hasFunction(0x1960B0u)) {
        auto targetFn = runtime->lookupFunction(0x1960B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196354u; }
        if (ctx->pc != 0x196354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001960B0_0x1960b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196354u; }
        if (ctx->pc != 0x196354u) { return; }
    }
    ctx->pc = 0x196354u;
label_196354:
    // 0x196354: 0xae00018c  sw          $zero, 0x18C($s0)
    ctx->pc = 0x196354u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 0));
    // 0x196358: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x196358u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
    // 0x19635c: 0x24a5fed8  addiu       $a1, $a1, -0x128
    ctx->pc = 0x19635cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967000));
    // 0x196360: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x196360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x196364: 0xc064080  jal         func_190200
    ctx->pc = 0x196364u;
    SET_GPR_U32(ctx, 31, 0x19636Cu);
    ctx->pc = 0x196368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196364u;
            // 0x196368: 0x26040190  addiu       $a0, $s0, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190200u;
    if (runtime->hasFunction(0x190200u)) {
        auto targetFn = runtime->lookupFunction(0x190200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19636Cu; }
        if (ctx->pc != 0x19636Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00190200_0x190200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19636Cu; }
        if (ctx->pc != 0x19636Cu) { return; }
    }
    ctx->pc = 0x19636Cu;
label_19636c:
    // 0x19636c: 0xae0001d4  sw          $zero, 0x1D4($s0)
    ctx->pc = 0x19636cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 0));
    // 0x196370: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x196370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x196374: 0xae0001d8  sw          $zero, 0x1D8($s0)
    ctx->pc = 0x196374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 472), GPR_U32(ctx, 0));
    // 0x196378: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x196378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x19637c: 0x2604025c  addiu       $a0, $s0, 0x25C
    ctx->pc = 0x19637cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 604));
    // 0x196380: 0xc064ed0  jal         func_193B40
    ctx->pc = 0x196380u;
    SET_GPR_U32(ctx, 31, 0x196388u);
    ctx->pc = 0x196384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196380u;
            // 0x196384: 0xae0201d0  sw          $v0, 0x1D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 464), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x193B40u;
    if (runtime->hasFunction(0x193B40u)) {
        auto targetFn = runtime->lookupFunction(0x193B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196388u; }
        if (ctx->pc != 0x196388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00193B40_0x193b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196388u; }
        if (ctx->pc != 0x196388u) { return; }
    }
    ctx->pc = 0x196388u;
label_196388:
    // 0x196388: 0xc065870  jal         func_1961C0
    ctx->pc = 0x196388u;
    SET_GPR_U32(ctx, 31, 0x196390u);
    ctx->pc = 0x19638Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196388u;
            // 0x19638c: 0x260401dc  addiu       $a0, $s0, 0x1DC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 476));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1961C0u;
    if (runtime->hasFunction(0x1961C0u)) {
        auto targetFn = runtime->lookupFunction(0x1961C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196390u; }
        if (ctx->pc != 0x196390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001961C0_0x1961c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196390u; }
        if (ctx->pc != 0x196390u) { return; }
    }
    ctx->pc = 0x196390u;
label_196390:
    // 0x196390: 0xae0003a4  sw          $zero, 0x3A4($s0)
    ctx->pc = 0x196390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 932), GPR_U32(ctx, 0));
    // 0x196394: 0x8e0201d0  lw          $v0, 0x1D0($s0)
    ctx->pc = 0x196394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
    // 0x196398: 0xae0003a8  sw          $zero, 0x3A8($s0)
    ctx->pc = 0x196398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 936), GPR_U32(ctx, 0));
    // 0x19639c: 0xae0203c8  sw          $v0, 0x3C8($s0)
    ctx->pc = 0x19639cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 968), GPR_U32(ctx, 2));
    // 0x1963a0: 0xae00037c  sw          $zero, 0x37C($s0)
    ctx->pc = 0x1963a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 892), GPR_U32(ctx, 0));
    // 0x1963a4: 0xae000380  sw          $zero, 0x380($s0)
    ctx->pc = 0x1963a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 896), GPR_U32(ctx, 0));
    // 0x1963a8: 0xae000384  sw          $zero, 0x384($s0)
    ctx->pc = 0x1963a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 900), GPR_U32(ctx, 0));
    // 0x1963ac: 0xae000388  sw          $zero, 0x388($s0)
    ctx->pc = 0x1963acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 904), GPR_U32(ctx, 0));
    // 0x1963b0: 0xae0003b8  sw          $zero, 0x3B8($s0)
    ctx->pc = 0x1963b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 952), GPR_U32(ctx, 0));
    // 0x1963b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1963b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1963b8:
    // 0x1963b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1963b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1963bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1963bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1963c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1963c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1963c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1963c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1963c8: 0xc06509a  jal         func_194268
    ctx->pc = 0x1963C8u;
    SET_GPR_U32(ctx, 31, 0x1963D0u);
    ctx->pc = 0x1963CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1963C8u;
            // 0x1963cc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194268u;
    if (runtime->hasFunction(0x194268u)) {
        auto targetFn = runtime->lookupFunction(0x194268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1963D0u; }
        if (ctx->pc != 0x1963D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00194268_0x194268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1963D0u; }
        if (ctx->pc != 0x1963D0u) { return; }
    }
    ctx->pc = 0x1963D0u;
label_1963d0:
    // 0x1963d0: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x1963d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1963d4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1963D4u;
    {
        const bool branch_taken_0x1963d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1963D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1963D4u;
            // 0x1963d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1963d4) {
            ctx->pc = 0x1963B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1963b8;
        }
    }
    ctx->pc = 0x1963DCu;
    // 0x1963dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1963dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1963e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1963e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1963e4: 0xc0650a4  jal         func_194290
    ctx->pc = 0x1963E4u;
    SET_GPR_U32(ctx, 31, 0x1963ECu);
    ctx->pc = 0x1963E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1963E4u;
            // 0x1963e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194290u;
    if (runtime->hasFunction(0x194290u)) {
        auto targetFn = runtime->lookupFunction(0x194290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1963ECu; }
        if (ctx->pc != 0x1963ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00194290_0x194290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1963ECu; }
        if (ctx->pc != 0x1963ECu) { return; }
    }
    ctx->pc = 0x1963ECu;
label_1963ec:
    // 0x1963ec: 0xae000428  sw          $zero, 0x428($s0)
    ctx->pc = 0x1963ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1064), GPR_U32(ctx, 0));
    // 0x1963f0: 0xc0659bc  jal         func_1966F0
    ctx->pc = 0x1963F0u;
    SET_GPR_U32(ctx, 31, 0x1963F8u);
    ctx->pc = 0x1963F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1963F0u;
            // 0x1963f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1966F0u;
    if (runtime->hasFunction(0x1966F0u)) {
        auto targetFn = runtime->lookupFunction(0x1966F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1963F8u; }
        if (ctx->pc != 0x1963F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001966F0_0x1966f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1963F8u; }
        if (ctx->pc != 0x1963F8u) { return; }
    }
    ctx->pc = 0x1963F8u;
label_1963f8:
    // 0x1963f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1963f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1963fc: 0xae0203d4  sw          $v0, 0x3D4($s0)
    ctx->pc = 0x1963fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 980), GPR_U32(ctx, 2));
    // 0x196400: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x196400u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196404: 0xae030188  sw          $v1, 0x188($s0)
    ctx->pc = 0x196404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 3));
    // 0x196408: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x196408u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19640c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19640cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x196410: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x196410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196414: 0x3e00008  jr          $ra
    ctx->pc = 0x196414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196414u;
            // 0x196418: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19641Cu;
    // 0x19641c: 0x0  nop
    ctx->pc = 0x19641cu;
    // NOP
}
