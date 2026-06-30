#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00330330
// Address: 0x330330 - 0x330930
void sub_00330330_0x330330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00330330_0x330330");
#endif

    switch (ctx->pc) {
        case 0x330380u: goto label_330380;
        case 0x33039cu: goto label_33039c;
        case 0x3303c4u: goto label_3303c4;
        case 0x330450u: goto label_330450;
        case 0x330464u: goto label_330464;
        case 0x3304f4u: goto label_3304f4;
        case 0x330524u: goto label_330524;
        case 0x330544u: goto label_330544;
        case 0x3305acu: goto label_3305ac;
        case 0x3305f8u: goto label_3305f8;
        case 0x330634u: goto label_330634;
        case 0x330654u: goto label_330654;
        case 0x3306a4u: goto label_3306a4;
        case 0x3306f0u: goto label_3306f0;
        case 0x33072cu: goto label_33072c;
        case 0x33074cu: goto label_33074c;
        case 0x330788u: goto label_330788;
        case 0x3307a8u: goto label_3307a8;
        case 0x3307d8u: goto label_3307d8;
        case 0x330800u: goto label_330800;
        case 0x33083cu: goto label_33083c;
        case 0x330858u: goto label_330858;
        case 0x330890u: goto label_330890;
        case 0x3308acu: goto label_3308ac;
        case 0x3308fcu: goto label_3308fc;
        default: break;
    }

    ctx->pc = 0x330330u;

    // 0x330330: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x330330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x330334: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x330334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x330338: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x330338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x33033c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x33033cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x330340: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x330340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x330344: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x330344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x330348: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x330348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33034c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33034cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x330350: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x330350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x330354: 0x8c850784  lw          $a1, 0x784($a0)
    ctx->pc = 0x330354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1924)));
    // 0x330358: 0x18a00168  blez        $a1, . + 4 + (0x168 << 2)
    ctx->pc = 0x330358u;
    {
        const bool branch_taken_0x330358 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x33035Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x330358u;
            // 0x33035c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330358) {
            ctx->pc = 0x3308FCu;
            goto label_3308fc;
        }
    }
    ctx->pc = 0x330360u;
    // 0x330360: 0x92a30c6b  lbu         $v1, 0xC6B($s5)
    ctx->pc = 0x330360u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3179)));
    // 0x330364: 0x54600166  bnel        $v1, $zero, . + 4 + (0x166 << 2)
    ctx->pc = 0x330364u;
    {
        const bool branch_taken_0x330364 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x330364) {
            ctx->pc = 0x330368u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x330364u;
            // 0x330368: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x330900u;
            goto label_330900;
        }
    }
    ctx->pc = 0x33036Cu;
    // 0x33036c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x33036cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x330370: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x330370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x330374: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x330374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x330378: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x330378u;
    SET_GPR_U32(ctx, 31, 0x330380u);
    ctx->pc = 0x33037Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x330378u;
            // 0x33037c: 0xafa00088  sw          $zero, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x330380u; }
        if (ctx->pc != 0x330380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x330380u; }
        if (ctx->pc != 0x330380u) { return; }
    }
    ctx->pc = 0x330380u;
label_330380:
    // 0x330380: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x330380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x330384: 0x8eb10780  lw          $s1, 0x780($s5)
    ctx->pc = 0x330384u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1920)));
    // 0x330388: 0x8c5289d0  lw          $s2, -0x7630($v0)
    ctx->pc = 0x330388u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x33038c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x33038cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x330390: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x330390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x330394: 0x24420e80  addiu       $v0, $v0, 0xE80
    ctx->pc = 0x330394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3712));
    // 0x330398: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x330398u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33039c:
    // 0x33039c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x33039cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3303a0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3303a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3303a4: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x3303a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x3303a8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3303a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3303ac: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x3303acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3303b0: 0x27a700b8  addiu       $a3, $sp, 0xB8
    ctx->pc = 0x3303b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x3303b4: 0xafa500b8  sw          $a1, 0xB8($sp)
    ctx->pc = 0x3303b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 5));
    // 0x3303b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3303b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3303bc: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x3303BCu;
    SET_GPR_U32(ctx, 31, 0x3303C4u);
    ctx->pc = 0x3303C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3303BCu;
            // 0x3303c0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3303C4u; }
        if (ctx->pc != 0x3303C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3303C4u; }
        if (ctx->pc != 0x3303C4u) { return; }
    }
    ctx->pc = 0x3303C4u;
label_3303c4:
    // 0x3303c4: 0x8ea2077c  lw          $v0, 0x77C($s5)
    ctx->pc = 0x3303c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1916)));
    // 0x3303c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3303c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3303cc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x3303ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3303d0: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x3303D0u;
    {
        const bool branch_taken_0x3303d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3303D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3303D0u;
            // 0x3303d4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3303d0) {
            ctx->pc = 0x33039Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_33039c;
        }
    }
    ctx->pc = 0x3303D8u;
    // 0x3303d8: 0x8e430084  lw          $v1, 0x84($s2)
    ctx->pc = 0x3303d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x3303dc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3303dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3303e0: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x3303E0u;
    {
        const bool branch_taken_0x3303e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3303e0) {
            ctx->pc = 0x3304B8u;
            goto label_3304b8;
        }
    }
    ctx->pc = 0x3303E8u;
    // 0x3303e8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3303e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3303ec: 0x8fa20084  lw          $v0, 0x84($sp)
    ctx->pc = 0x3303ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x3303f0: 0xafa300b4  sw          $v1, 0xB4($sp)
    ctx->pc = 0x3303f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 3));
    // 0x3303f4: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x3303f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3303f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3303f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3303fc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3303fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x330400: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x330400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x330404: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x330404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x330408: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x330408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33040c: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x33040cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x330410: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x330410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x330414: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x330414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x330418: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x330418u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x33041c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33041Cu;
    {
        const bool branch_taken_0x33041c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x330420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33041Cu;
            // 0x330420: 0x28883  sra         $s1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33041c) {
            ctx->pc = 0x33042Cu;
            goto label_33042c;
        }
    }
    ctx->pc = 0x330424u;
    // 0x330424: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x330424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x330428: 0x28883  sra         $s1, $v0, 2
    ctx->pc = 0x330428u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 2));
label_33042c:
    // 0x33042c: 0x2a210002  slti        $at, $s1, 0x2
    ctx->pc = 0x33042cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x330430: 0x14200021  bnez        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x330430u;
    {
        const bool branch_taken_0x330430 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x330430) {
            ctx->pc = 0x3304B8u;
            goto label_3304b8;
        }
    }
    ctx->pc = 0x330438u;
    // 0x330438: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x330438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x33043c: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x33043cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x330440: 0x2470fffc  addiu       $s0, $v1, -0x4
    ctx->pc = 0x330440u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x330444: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x330444u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x330448: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x330448u;
    {
        const bool branch_taken_0x330448 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x33044Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x330448u;
            // 0x33044c: 0xafb000a8  sw          $s0, 0xA8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330448) {
            ctx->pc = 0x3304B8u;
            goto label_3304b8;
        }
    }
    ctx->pc = 0x330450u;
label_330450:
    // 0x330450: 0x11283c  dsll32      $a1, $s1, 0
    ctx->pc = 0x330450u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
    // 0x330454: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x330454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x330458: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x330458u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x33045c: 0xc0cd320  jal         func_334C80
    ctx->pc = 0x33045Cu;
    SET_GPR_U32(ctx, 31, 0x330464u);
    ctx->pc = 0x330460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33045Cu;
            // 0x330460: 0xa3a000a0  sb          $zero, 0xA0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x334C80u;
    if (runtime->hasFunction(0x334C80u)) {
        auto targetFn = runtime->lookupFunction(0x334C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x330464u; }
        if (ctx->pc != 0x330464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00334C80_0x334c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x330464u; }
        if (ctx->pc != 0x330464u) { return; }
    }
    ctx->pc = 0x330464u;
label_330464:
    // 0x330464: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x330464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x330468: 0x8fa600ac  lw          $a2, 0xAC($sp)
    ctx->pc = 0x330468u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x33046c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x33046cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x330470: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x330470u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x330474: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x330474u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x330478: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x330478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x33047c: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x33047cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x330480: 0xafa300a4  sw          $v1, 0xA4($sp)
    ctx->pc = 0x330480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
    // 0x330484: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x330484u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x330488: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x330488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33048c: 0x24c30004  addiu       $v1, $a2, 0x4
    ctx->pc = 0x33048cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x330490: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x330490u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x330494: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x330494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
    // 0x330498: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x330498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33049c: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x33049cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x3304a0: 0x8fa4009c  lw          $a0, 0x9C($sp)
    ctx->pc = 0x3304a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x3304a4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3304a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3304a8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x3304a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x3304ac: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x3304ACu;
    {
        const bool branch_taken_0x3304ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3304B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3304ACu;
            // 0x3304b0: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3304ac) {
            ctx->pc = 0x330450u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_330450;
        }
    }
    ctx->pc = 0x3304B4u;
    // 0x3304b4: 0x0  nop
    ctx->pc = 0x3304b4u;
    // NOP
label_3304b8:
    // 0x3304b8: 0x8e430084  lw          $v1, 0x84($s2)
    ctx->pc = 0x3304b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x3304bc: 0x8fb10088  lw          $s1, 0x88($sp)
    ctx->pc = 0x3304bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3304c0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3304c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3304c4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x3304c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3304c8: 0x106200db  beq         $v1, $v0, . + 4 + (0xDB << 2)
    ctx->pc = 0x3304C8u;
    {
        const bool branch_taken_0x3304c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3304CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3304C8u;
            // 0x3304cc: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3304c8) {
            ctx->pc = 0x330838u;
            goto label_330838;
        }
    }
    ctx->pc = 0x3304D0u;
    // 0x3304d0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3304d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3304d4: 0x506200ad  beql        $v1, $v0, . + 4 + (0xAD << 2)
    ctx->pc = 0x3304D4u;
    {
        const bool branch_taken_0x3304d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3304d4) {
            ctx->pc = 0x3304D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3304D4u;
            // 0x3304d8: 0x11103c  dsll32      $v0, $s1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33078Cu;
            goto label_33078c;
        }
    }
    ctx->pc = 0x3304DCu;
    // 0x3304dc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3304dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3304e0: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3304E0u;
    {
        const bool branch_taken_0x3304e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3304e0) {
            ctx->pc = 0x3304E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3304E0u;
            // 0x3304e4: 0x26560040  addiu       $s6, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3304F0u;
            goto label_3304f0;
        }
    }
    ctx->pc = 0x3304E8u;
    // 0x3304e8: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x3304E8u;
    {
        const bool branch_taken_0x3304e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3304ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3304E8u;
            // 0x3304ec: 0x11103c  dsll32      $v0, $s1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3304e8) {
            ctx->pc = 0x330894u;
            goto label_330894;
        }
    }
    ctx->pc = 0x3304F0u;
label_3304f0:
    // 0x3304f0: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x3304f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
label_3304f4:
    // 0x3304f4: 0x92c20025  lbu         $v0, 0x25($s6)
    ctx->pc = 0x3304f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 37)));
    // 0x3304f8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3304f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3304fc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3304fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x330500: 0x8c830d6c  lw          $v1, 0xD6C($a0)
    ctx->pc = 0x330500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3436)));
    // 0x330504: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x330504u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x330508: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x330508u;
    {
        const bool branch_taken_0x330508 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x330508) {
            ctx->pc = 0x330530u;
            goto label_330530;
        }
    }
    ctx->pc = 0x330510u;
    // 0x330510: 0x8c820d60  lw          $v0, 0xD60($a0)
    ctx->pc = 0x330510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3424)));
    // 0x330514: 0x328500ff  andi        $a1, $s4, 0xFF
    ctx->pc = 0x330514u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x330518: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x330518u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x33051c: 0xc13ef94  jal         func_4FBE50
    ctx->pc = 0x33051Cu;
    SET_GPR_U32(ctx, 31, 0x330524u);
    ctx->pc = 0x330520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33051Cu;
            // 0x330520: 0x24440040  addiu       $a0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4FBE50u;
    if (runtime->hasFunction(0x4FBE50u)) {
        auto targetFn = runtime->lookupFunction(0x4FBE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x330524u; }
        if (ctx->pc != 0x330524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004FBE50_0x4fbe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x330524u; }
        if (ctx->pc != 0x330524u) { return; }
    }
    ctx->pc = 0x330524u;
label_330524:
    // 0x330524: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x330524u;
    {
        const bool branch_taken_0x330524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330524) {
            ctx->pc = 0x330548u;
            goto label_330548;
        }
    }
    ctx->pc = 0x33052Cu;
    // 0x33052c: 0x0  nop
    ctx->pc = 0x33052cu;
    // NOP
label_330530:
    // 0x330530: 0x8c820d60  lw          $v0, 0xD60($a0)
    ctx->pc = 0x330530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3424)));
    // 0x330534: 0x326500ff  andi        $a1, $s3, 0xFF
    ctx->pc = 0x330534u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x330538: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x330538u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x33053c: 0xc13ef94  jal         func_4FBE50
    ctx->pc = 0x33053Cu;
    SET_GPR_U32(ctx, 31, 0x330544u);
    ctx->pc = 0x330540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33053Cu;
            // 0x330540: 0x24440040  addiu       $a0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4FBE50u;
    if (runtime->hasFunction(0x4FBE50u)) {
        auto targetFn = runtime->lookupFunction(0x4FBE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x330544u; }
        if (ctx->pc != 0x330544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004FBE50_0x4fbe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x330544u; }
        if (ctx->pc != 0x330544u) { return; }
    }
    ctx->pc = 0x330544u;
label_330544:
    // 0x330544: 0x0  nop
    ctx->pc = 0x330544u;
    // NOP
label_330548:
    // 0x330548: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x330548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x33054c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x33054cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x330550: 0x8fb00088  lw          $s0, 0x88($sp)
    ctx->pc = 0x330550u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x330554: 0x24710004  addiu       $s1, $v1, 0x4
    ctx->pc = 0x330554u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x330558: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x330558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x33055c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33055cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x330560: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x330560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x330564: 0x2231826  xor         $v1, $s1, $v1
    ctx->pc = 0x330564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 3));
    // 0x330568: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x330568u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x33056c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x33056cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x330570: 0x5460ffe0  bnel        $v1, $zero, . + 4 + (-0x20 << 2)
    ctx->pc = 0x330570u;
    {
        const bool branch_taken_0x330570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x330570) {
            ctx->pc = 0x330574u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x330570u;
            // 0x330574: 0x11183c  dsll32      $v1, $s1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3304F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3304f4;
        }
    }
    ctx->pc = 0x330578u;
    // 0x330578: 0x8ea30780  lw          $v1, 0x780($s5)
    ctx->pc = 0x330578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1920)));
    // 0x33057c: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x33057cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x330580: 0x50710043  beql        $v1, $s1, . + 4 + (0x43 << 2)
    ctx->pc = 0x330580u;
    {
        const bool branch_taken_0x330580 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x330580) {
            ctx->pc = 0x330584u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x330580u;
            // 0x330584: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x330690u;
            goto label_330690;
        }
    }
    ctx->pc = 0x330588u;
    // 0x330588: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x330588u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33058c: 0x50740003  beql        $v1, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x33058Cu;
    {
        const bool branch_taken_0x33058c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        if (branch_taken_0x33058c) {
            ctx->pc = 0x330590u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33058Cu;
            // 0x330590: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33059Cu;
            goto label_33059c;
        }
    }
    ctx->pc = 0x330594u;
    // 0x330594: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x330594u;
    {
        const bool branch_taken_0x330594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330594) {
            ctx->pc = 0x3308E0u;
            goto label_3308e0;
        }
    }
    ctx->pc = 0x33059Cu;
label_33059c:
    // 0x33059c: 0x166300d0  bne         $s3, $v1, . + 4 + (0xD0 << 2)
    ctx->pc = 0x33059Cu;
    {
        const bool branch_taken_0x33059c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x33059c) {
            ctx->pc = 0x3308E0u;
            goto label_3308e0;
        }
    }
    ctx->pc = 0x3305A4u;
    // 0x3305a4: 0x26530040  addiu       $s3, $s2, 0x40
    ctx->pc = 0x3305a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x3305a8: 0x82620027  lb          $v0, 0x27($s3)
    ctx->pc = 0x3305a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 39)));
label_3305ac:
    // 0x3305ac: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3305ACu;
    {
        const bool branch_taken_0x3305ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3305ac) {
            ctx->pc = 0x330600u;
            goto label_330600;
        }
    }
    ctx->pc = 0x3305B4u;
    // 0x3305b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3305b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3305b8: 0x16820007  bne         $s4, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3305B8u;
    {
        const bool branch_taken_0x3305b8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x3305b8) {
            ctx->pc = 0x3305D8u;
            goto label_3305d8;
        }
    }
    ctx->pc = 0x3305C0u;
    // 0x3305c0: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x3305c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3305c4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3305c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3305c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3305c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3305cc: 0x8c420d6c  lw          $v0, 0xD6C($v0)
    ctx->pc = 0x3305ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3436)));
    // 0x3305d0: 0x90420010  lbu         $v0, 0x10($v0)
    ctx->pc = 0x3305d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3305d4: 0xa2420068  sb          $v0, 0x68($s2)
    ctx->pc = 0x3305d4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 104), (uint8_t)GPR_U32(ctx, 2));
label_3305d8:
    // 0x3305d8: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x3305d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3305dc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3305dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3305e0: 0x328500ff  andi        $a1, $s4, 0xFF
    ctx->pc = 0x3305e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x3305e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3305e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3305e8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3305e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x3305ec: 0x8c420d60  lw          $v0, 0xD60($v0)
    ctx->pc = 0x3305ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3424)));
    // 0x3305f0: 0xc13ef94  jal         func_4FBE50
    ctx->pc = 0x3305F0u;
    SET_GPR_U32(ctx, 31, 0x3305F8u);
    ctx->pc = 0x3305F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3305F0u;
            // 0x3305f4: 0x24440040  addiu       $a0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4FBE50u;
    if (runtime->hasFunction(0x4FBE50u)) {
        auto targetFn = runtime->lookupFunction(0x4FBE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3305F8u; }
        if (ctx->pc != 0x3305F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004FBE50_0x4fbe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3305F8u; }
        if (ctx->pc != 0x3305F8u) { return; }
    }
    ctx->pc = 0x3305F8u;
label_3305f8:
    // 0x3305f8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3305F8u;
    {
        const bool branch_taken_0x3305f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3305f8) {
            ctx->pc = 0x330658u;
            goto label_330658;
        }
    }
    ctx->pc = 0x330600u;
label_330600:
    // 0x330600: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x330600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x330604: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x330604u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x330608: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x330608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33060c: 0x8c830d6c  lw          $v1, 0xD6C($a0)
    ctx->pc = 0x33060cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3436)));
    // 0x330610: 0x92420068  lbu         $v0, 0x68($s2)
    ctx->pc = 0x330610u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x330614: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x330614u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x330618: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x330618u;
    {
        const bool branch_taken_0x330618 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x330618) {
            ctx->pc = 0x330640u;
            goto label_330640;
        }
    }
    ctx->pc = 0x330620u;
    // 0x330620: 0x8c820d60  lw          $v0, 0xD60($a0)
    ctx->pc = 0x330620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3424)));
    // 0x330624: 0x328500ff  andi        $a1, $s4, 0xFF
    ctx->pc = 0x330624u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x330628: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x330628u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x33062c: 0xc13ef94  jal         func_4FBE50
    ctx->pc = 0x33062Cu;
    SET_GPR_U32(ctx, 31, 0x330634u);
    ctx->pc = 0x330630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33062Cu;
            // 0x330630: 0x24440040  addiu       $a0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4FBE50u;
    if (runtime->hasFunction(0x4FBE50u)) {
        auto targetFn = runtime->lookupFunction(0x4FBE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x330634u; }
        if (ctx->pc != 0x330634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004FBE50_0x4fbe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x330634u; }
        if (ctx->pc != 0x330634u) { return; }
    }
    ctx->pc = 0x330634u;
label_330634:
    // 0x330634: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x330634u;
    {
        const bool branch_taken_0x330634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330634) {
            ctx->pc = 0x330658u;
            goto label_330658;
        }
    }
    ctx->pc = 0x33063Cu;
    // 0x33063c: 0x0  nop
    ctx->pc = 0x33063cu;
    // NOP
label_330640:
    // 0x330640: 0x8c820d60  lw          $v0, 0xD60($a0)
    ctx->pc = 0x330640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3424)));
    // 0x330644: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x330644u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x330648: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x330648u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x33064c: 0xc13ef94  jal         func_4FBE50
    ctx->pc = 0x33064Cu;
    SET_GPR_U32(ctx, 31, 0x330654u);
    ctx->pc = 0x330650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33064Cu;
            // 0x330650: 0x24440040  addiu       $a0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4FBE50u;
    if (runtime->hasFunction(0x4FBE50u)) {
        auto targetFn = runtime->lookupFunction(0x4FBE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x330654u; }
        if (ctx->pc != 0x330654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004FBE50_0x4fbe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x330654u; }
        if (ctx->pc != 0x330654u) { return; }
    }
    ctx->pc = 0x330654u;
label_330654:
    // 0x330654: 0x0  nop
    ctx->pc = 0x330654u;
    // NOP
label_330658:
    // 0x330658: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x330658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x33065c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x33065cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x330660: 0x8fa40084  lw          $a0, 0x84($sp)
    ctx->pc = 0x330660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x330664: 0x24700004  addiu       $s0, $v1, 0x4
    ctx->pc = 0x330664u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x330668: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x330668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x33066c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x33066cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x330670: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x330670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x330674: 0x2031826  xor         $v1, $s0, $v1
    ctx->pc = 0x330674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
    // 0x330678: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x330678u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x33067c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x33067cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x330680: 0x5460ffca  bnel        $v1, $zero, . + 4 + (-0x36 << 2)
    ctx->pc = 0x330680u;
    {
        const bool branch_taken_0x330680 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x330680) {
            ctx->pc = 0x330684u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x330680u;
            // 0x330684: 0x82620027  lb          $v0, 0x27($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 39)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3305ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3305ac;
        }
    }
    ctx->pc = 0x330688u;
    // 0x330688: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x330688u;
    {
        const bool branch_taken_0x330688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330688) {
            ctx->pc = 0x3308E0u;
            goto label_3308e0;
        }
    }
    ctx->pc = 0x330690u;
label_330690:
    // 0x330690: 0x16630093  bne         $s3, $v1, . + 4 + (0x93 << 2)
    ctx->pc = 0x330690u;
    {
        const bool branch_taken_0x330690 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        if (branch_taken_0x330690) {
            ctx->pc = 0x3308E0u;
            goto label_3308e0;
        }
    }
    ctx->pc = 0x330698u;
    // 0x330698: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x330698u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33069c: 0x26530040  addiu       $s3, $s2, 0x40
    ctx->pc = 0x33069cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x3306a0: 0x82620027  lb          $v0, 0x27($s3)
    ctx->pc = 0x3306a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 39)));
label_3306a4:
    // 0x3306a4: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3306A4u;
    {
        const bool branch_taken_0x3306a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3306a4) {
            ctx->pc = 0x3306F8u;
            goto label_3306f8;
        }
    }
    ctx->pc = 0x3306ACu;
    // 0x3306ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3306acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3306b0: 0x16820007  bne         $s4, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3306B0u;
    {
        const bool branch_taken_0x3306b0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x3306b0) {
            ctx->pc = 0x3306D0u;
            goto label_3306d0;
        }
    }
    ctx->pc = 0x3306B8u;
    // 0x3306b8: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x3306b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3306bc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3306bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3306c0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3306c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3306c4: 0x8c420d6c  lw          $v0, 0xD6C($v0)
    ctx->pc = 0x3306c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3436)));
    // 0x3306c8: 0x90420010  lbu         $v0, 0x10($v0)
    ctx->pc = 0x3306c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3306cc: 0xa2420068  sb          $v0, 0x68($s2)
    ctx->pc = 0x3306ccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 104), (uint8_t)GPR_U32(ctx, 2));
label_3306d0:
    // 0x3306d0: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x3306d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3306d4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3306d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3306d8: 0x328500ff  andi        $a1, $s4, 0xFF
    ctx->pc = 0x3306d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x3306dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3306dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3306e0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3306e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x3306e4: 0x8c420d60  lw          $v0, 0xD60($v0)
    ctx->pc = 0x3306e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3424)));
    // 0x3306e8: 0xc13ef94  jal         func_4FBE50
    ctx->pc = 0x3306E8u;
    SET_GPR_U32(ctx, 31, 0x3306F0u);
    ctx->pc = 0x3306ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3306E8u;
            // 0x3306ec: 0x24440040  addiu       $a0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4FBE50u;
    if (runtime->hasFunction(0x4FBE50u)) {
        auto targetFn = runtime->lookupFunction(0x4FBE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3306F0u; }
        if (ctx->pc != 0x3306F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004FBE50_0x4fbe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3306F0u; }
        if (ctx->pc != 0x3306F0u) { return; }
    }
    ctx->pc = 0x3306F0u;
label_3306f0:
    // 0x3306f0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3306F0u;
    {
        const bool branch_taken_0x3306f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3306f0) {
            ctx->pc = 0x330750u;
            goto label_330750;
        }
    }
    ctx->pc = 0x3306F8u;
label_3306f8:
    // 0x3306f8: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x3306f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3306fc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3306fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x330700: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x330700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x330704: 0x8c830d6c  lw          $v1, 0xD6C($a0)
    ctx->pc = 0x330704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3436)));
    // 0x330708: 0x92420068  lbu         $v0, 0x68($s2)
    ctx->pc = 0x330708u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x33070c: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x33070cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x330710: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x330710u;
    {
        const bool branch_taken_0x330710 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x330710) {
            ctx->pc = 0x330738u;
            goto label_330738;
        }
    }
    ctx->pc = 0x330718u;
    // 0x330718: 0x8c820d60  lw          $v0, 0xD60($a0)
    ctx->pc = 0x330718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3424)));
    // 0x33071c: 0x328500ff  andi        $a1, $s4, 0xFF
    ctx->pc = 0x33071cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x330720: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x330720u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x330724: 0xc13ef94  jal         func_4FBE50
    ctx->pc = 0x330724u;
    SET_GPR_U32(ctx, 31, 0x33072Cu);
    ctx->pc = 0x330728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x330724u;
            // 0x330728: 0x24440040  addiu       $a0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4FBE50u;
    if (runtime->hasFunction(0x4FBE50u)) {
        auto targetFn = runtime->lookupFunction(0x4FBE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33072Cu; }
        if (ctx->pc != 0x33072Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004FBE50_0x4fbe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33072Cu; }
        if (ctx->pc != 0x33072Cu) { return; }
    }
    ctx->pc = 0x33072Cu;
label_33072c:
    // 0x33072c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33072Cu;
    {
        const bool branch_taken_0x33072c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33072c) {
            ctx->pc = 0x330750u;
            goto label_330750;
        }
    }
    ctx->pc = 0x330734u;
    // 0x330734: 0x0  nop
    ctx->pc = 0x330734u;
    // NOP
label_330738:
    // 0x330738: 0x8c820d60  lw          $v0, 0xD60($a0)
    ctx->pc = 0x330738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3424)));
    // 0x33073c: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x33073cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x330740: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x330740u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x330744: 0xc13ef94  jal         func_4FBE50
    ctx->pc = 0x330744u;
    SET_GPR_U32(ctx, 31, 0x33074Cu);
    ctx->pc = 0x330748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x330744u;
            // 0x330748: 0x24440040  addiu       $a0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4FBE50u;
    if (runtime->hasFunction(0x4FBE50u)) {
        auto targetFn = runtime->lookupFunction(0x4FBE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33074Cu; }
        if (ctx->pc != 0x33074Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004FBE50_0x4fbe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33074Cu; }
        if (ctx->pc != 0x33074Cu) { return; }
    }
    ctx->pc = 0x33074Cu;
label_33074c:
    // 0x33074c: 0x0  nop
    ctx->pc = 0x33074cu;
    // NOP
label_330750:
    // 0x330750: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x330750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x330754: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x330754u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x330758: 0x8fa40084  lw          $a0, 0x84($sp)
    ctx->pc = 0x330758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x33075c: 0x24700004  addiu       $s0, $v1, 0x4
    ctx->pc = 0x33075cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x330760: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x330760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x330764: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x330764u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x330768: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x330768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33076c: 0x2031826  xor         $v1, $s0, $v1
    ctx->pc = 0x33076cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
    // 0x330770: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x330770u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x330774: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x330774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x330778: 0x5460ffca  bnel        $v1, $zero, . + 4 + (-0x36 << 2)
    ctx->pc = 0x330778u;
    {
        const bool branch_taken_0x330778 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x330778) {
            ctx->pc = 0x33077Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x330778u;
            // 0x33077c: 0x82620027  lb          $v0, 0x27($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 39)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3306A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3306a4;
        }
    }
    ctx->pc = 0x330780u;
    // 0x330780: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x330780u;
    {
        const bool branch_taken_0x330780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330780) {
            ctx->pc = 0x3308E0u;
            goto label_3308e0;
        }
    }
    ctx->pc = 0x330788u;
label_330788:
    // 0x330788: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x330788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
label_33078c:
    // 0x33078c: 0x8ea50968  lw          $a1, 0x968($s5)
    ctx->pc = 0x33078cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2408)));
    // 0x330790: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x330790u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x330794: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x330794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x330798: 0x8c420d6c  lw          $v0, 0xD6C($v0)
    ctx->pc = 0x330798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3436)));
    // 0x33079c: 0x90500010  lbu         $s0, 0x10($v0)
    ctx->pc = 0x33079cu;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3307a0: 0xc11f3d0  jal         func_47CF40
    ctx->pc = 0x3307A0u;
    SET_GPR_U32(ctx, 31, 0x3307A8u);
    ctx->pc = 0x3307A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3307A0u;
            // 0x3307a4: 0x2644002c  addiu       $a0, $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47CF40u;
    if (runtime->hasFunction(0x47CF40u)) {
        auto targetFn = runtime->lookupFunction(0x47CF40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3307A8u; }
        if (ctx->pc != 0x3307A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047CF40_0x47cf40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3307A8u; }
        if (ctx->pc != 0x3307A8u) { return; }
    }
    ctx->pc = 0x3307A8u;
label_3307a8:
    // 0x3307a8: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x3307a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x3307ac: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x3307acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x3307b0: 0x1602000b  bne         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3307B0u;
    {
        const bool branch_taken_0x3307b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x3307b0) {
            ctx->pc = 0x3307E0u;
            goto label_3307e0;
        }
    }
    ctx->pc = 0x3307B8u;
    // 0x3307b8: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x3307b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x3307bc: 0x328500ff  andi        $a1, $s4, 0xFF
    ctx->pc = 0x3307bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x3307c0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3307c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3307c4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3307c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x3307c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3307c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3307cc: 0x8c420d60  lw          $v0, 0xD60($v0)
    ctx->pc = 0x3307ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3424)));
    // 0x3307d0: 0xc13ef94  jal         func_4FBE50
    ctx->pc = 0x3307D0u;
    SET_GPR_U32(ctx, 31, 0x3307D8u);
    ctx->pc = 0x3307D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3307D0u;
            // 0x3307d4: 0x24440040  addiu       $a0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4FBE50u;
    if (runtime->hasFunction(0x4FBE50u)) {
        auto targetFn = runtime->lookupFunction(0x4FBE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3307D8u; }
        if (ctx->pc != 0x3307D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004FBE50_0x4fbe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3307D8u; }
        if (ctx->pc != 0x3307D8u) { return; }
    }
    ctx->pc = 0x3307D8u;
label_3307d8:
    // 0x3307d8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3307D8u;
    {
        const bool branch_taken_0x3307d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3307d8) {
            ctx->pc = 0x330800u;
            goto label_330800;
        }
    }
    ctx->pc = 0x3307E0u;
label_3307e0:
    // 0x3307e0: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x3307e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x3307e4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3307e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3307e8: 0x326500ff  andi        $a1, $s3, 0xFF
    ctx->pc = 0x3307e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x3307ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3307ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3307f0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3307f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3307f4: 0x8c420d60  lw          $v0, 0xD60($v0)
    ctx->pc = 0x3307f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3424)));
    // 0x3307f8: 0xc13ef94  jal         func_4FBE50
    ctx->pc = 0x3307F8u;
    SET_GPR_U32(ctx, 31, 0x330800u);
    ctx->pc = 0x3307FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3307F8u;
            // 0x3307fc: 0x24440040  addiu       $a0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4FBE50u;
    if (runtime->hasFunction(0x4FBE50u)) {
        auto targetFn = runtime->lookupFunction(0x4FBE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x330800u; }
        if (ctx->pc != 0x330800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004FBE50_0x4fbe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x330800u; }
        if (ctx->pc != 0x330800u) { return; }
    }
    ctx->pc = 0x330800u;
label_330800:
    // 0x330800: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x330800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x330804: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x330804u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x330808: 0x8fa40084  lw          $a0, 0x84($sp)
    ctx->pc = 0x330808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x33080c: 0x24710004  addiu       $s1, $v1, 0x4
    ctx->pc = 0x33080cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x330810: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x330810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x330814: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x330814u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x330818: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x330818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33081c: 0x2231826  xor         $v1, $s1, $v1
    ctx->pc = 0x33081cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 3));
    // 0x330820: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x330820u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x330824: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x330824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x330828: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x330828u;
    {
        const bool branch_taken_0x330828 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x330828) {
            ctx->pc = 0x330788u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_330788;
        }
    }
    ctx->pc = 0x330830u;
    // 0x330830: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x330830u;
    {
        const bool branch_taken_0x330830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330830) {
            ctx->pc = 0x3308E0u;
            goto label_3308e0;
        }
    }
    ctx->pc = 0x330838u;
label_330838:
    // 0x330838: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x330838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
label_33083c:
    // 0x33083c: 0x328500ff  andi        $a1, $s4, 0xFF
    ctx->pc = 0x33083cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x330840: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x330840u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x330844: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x330844u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x330848: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x330848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33084c: 0x8c420d60  lw          $v0, 0xD60($v0)
    ctx->pc = 0x33084cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3424)));
    // 0x330850: 0xc13ef94  jal         func_4FBE50
    ctx->pc = 0x330850u;
    SET_GPR_U32(ctx, 31, 0x330858u);
    ctx->pc = 0x330854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x330850u;
            // 0x330854: 0x24440040  addiu       $a0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4FBE50u;
    if (runtime->hasFunction(0x4FBE50u)) {
        auto targetFn = runtime->lookupFunction(0x4FBE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x330858u; }
        if (ctx->pc != 0x330858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004FBE50_0x4fbe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x330858u; }
        if (ctx->pc != 0x330858u) { return; }
    }
    ctx->pc = 0x330858u;
label_330858:
    // 0x330858: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x330858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x33085c: 0x8fa40084  lw          $a0, 0x84($sp)
    ctx->pc = 0x33085cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x330860: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x330860u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x330864: 0x24710004  addiu       $s1, $v1, 0x4
    ctx->pc = 0x330864u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x330868: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x330868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x33086c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x33086cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x330870: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x330870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x330874: 0x2231826  xor         $v1, $s1, $v1
    ctx->pc = 0x330874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 3));
    // 0x330878: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x330878u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x33087c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x33087cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x330880: 0x5460ffee  bnel        $v1, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x330880u;
    {
        const bool branch_taken_0x330880 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x330880) {
            ctx->pc = 0x330884u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x330880u;
            // 0x330884: 0x11103c  dsll32      $v0, $s1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33083Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_33083c;
        }
    }
    ctx->pc = 0x330888u;
    // 0x330888: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x330888u;
    {
        const bool branch_taken_0x330888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x330888) {
            ctx->pc = 0x3308E0u;
            goto label_3308e0;
        }
    }
    ctx->pc = 0x330890u;
label_330890:
    // 0x330890: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x330890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
label_330894:
    // 0x330894: 0x328500ff  andi        $a1, $s4, 0xFF
    ctx->pc = 0x330894u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x330898: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x330898u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x33089c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x33089cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3308a0: 0x8c420d60  lw          $v0, 0xD60($v0)
    ctx->pc = 0x3308a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3424)));
    // 0x3308a4: 0xc13ef94  jal         func_4FBE50
    ctx->pc = 0x3308A4u;
    SET_GPR_U32(ctx, 31, 0x3308ACu);
    ctx->pc = 0x3308A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3308A4u;
            // 0x3308a8: 0x24440040  addiu       $a0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4FBE50u;
    if (runtime->hasFunction(0x4FBE50u)) {
        auto targetFn = runtime->lookupFunction(0x4FBE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3308ACu; }
        if (ctx->pc != 0x3308ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004FBE50_0x4fbe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3308ACu; }
        if (ctx->pc != 0x3308ACu) { return; }
    }
    ctx->pc = 0x3308ACu;
label_3308ac:
    // 0x3308ac: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x3308acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x3308b0: 0x8fa40084  lw          $a0, 0x84($sp)
    ctx->pc = 0x3308b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x3308b4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3308b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3308b8: 0x24710004  addiu       $s1, $v1, 0x4
    ctx->pc = 0x3308b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3308bc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x3308bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3308c0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3308c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3308c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3308c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3308c8: 0x2231826  xor         $v1, $s1, $v1
    ctx->pc = 0x3308c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 3));
    // 0x3308cc: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x3308ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3308d0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x3308d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x3308d4: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3308D4u;
    {
        const bool branch_taken_0x3308d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3308D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3308D4u;
            // 0x3308d8: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3308d4) {
            ctx->pc = 0x330890u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_330890;
        }
    }
    ctx->pc = 0x3308DCu;
    // 0x3308dc: 0x0  nop
    ctx->pc = 0x3308dcu;
    // NOP
label_3308e0:
    // 0x3308e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3308e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3308e4: 0xa2a30c6b  sb          $v1, 0xC6B($s5)
    ctx->pc = 0x3308e4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 3179), (uint8_t)GPR_U32(ctx, 3));
    // 0x3308e8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x3308e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3308ec: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3308ECu;
    {
        const bool branch_taken_0x3308ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3308ec) {
            ctx->pc = 0x3308FCu;
            goto label_3308fc;
        }
    }
    ctx->pc = 0x3308F4u;
    // 0x3308f4: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x3308F4u;
    SET_GPR_U32(ctx, 31, 0x3308FCu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3308FCu; }
        if (ctx->pc != 0x3308FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3308FCu; }
        if (ctx->pc != 0x3308FCu) { return; }
    }
    ctx->pc = 0x3308FCu;
label_3308fc:
    // 0x3308fc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3308fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_330900:
    // 0x330900: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x330900u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x330904: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x330904u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x330908: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x330908u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33090c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33090cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x330910: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x330910u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x330914: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x330914u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x330918: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x330918u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33091c: 0x3e00008  jr          $ra
    ctx->pc = 0x33091Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33091Cu;
            // 0x330920: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x330924u;
    // 0x330924: 0x0  nop
    ctx->pc = 0x330924u;
    // NOP
    // 0x330928: 0x0  nop
    ctx->pc = 0x330928u;
    // NOP
    // 0x33092c: 0x0  nop
    ctx->pc = 0x33092cu;
    // NOP
}
