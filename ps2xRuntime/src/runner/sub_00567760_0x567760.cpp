#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00567760
// Address: 0x567760 - 0x567930
void sub_00567760_0x567760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00567760_0x567760");
#endif

    switch (ctx->pc) {
        case 0x567784u: goto label_567784;
        case 0x5677c4u: goto label_5677c4;
        case 0x5677e8u: goto label_5677e8;
        case 0x567818u: goto label_567818;
        case 0x567838u: goto label_567838;
        case 0x567860u: goto label_567860;
        case 0x5678ccu: goto label_5678cc;
        case 0x5678fcu: goto label_5678fc;
        case 0x567914u: goto label_567914;
        default: break;
    }

    ctx->pc = 0x567760u;

    // 0x567760: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x567760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x567764: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x567764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
    // 0x567768: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x567768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x56776c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x56776cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x567770: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x567770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x567774: 0x3445d571  ori         $a1, $v0, 0xD571
    ctx->pc = 0x567774u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54641);
    // 0x567778: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x567778u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x56777c: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x56777Cu;
    SET_GPR_U32(ctx, 31, 0x567784u);
    ctx->pc = 0x567780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56777Cu;
            // 0x567780: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567784u; }
        if (ctx->pc != 0x567784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567784u; }
        if (ctx->pc != 0x567784u) { return; }
    }
    ctx->pc = 0x567784u;
label_567784:
    // 0x567784: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x567784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x567788: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x567788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x56778c: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x56778cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
    // 0x567790: 0x24638060  addiu       $v1, $v1, -0x7FA0
    ctx->pc = 0x567790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934624));
    // 0x567794: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x567794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x567798: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x567798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x56779c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x56779cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x5677a0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5677a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x5677a4: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x5677a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x5677a8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x5677a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x5677ac: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x5677acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x5677b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x5677b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5677b4: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x5677b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x5677b8: 0x8c440e68  lw          $a0, 0xE68($v0)
    ctx->pc = 0x5677b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
    // 0x5677bc: 0xc0fd020  jal         func_3F4080
    ctx->pc = 0x5677BCu;
    SET_GPR_U32(ctx, 31, 0x5677C4u);
    ctx->pc = 0x5677C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5677BCu;
            // 0x5677c0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F4080u;
    if (runtime->hasFunction(0x3F4080u)) {
        auto targetFn = runtime->lookupFunction(0x3F4080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5677C4u; }
        if (ctx->pc != 0x5677C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F4080_0x3f4080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5677C4u; }
        if (ctx->pc != 0x5677C4u) { return; }
    }
    ctx->pc = 0x5677C4u;
label_5677c4:
    // 0x5677c4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5677c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x5677c8: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x5677c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x5677cc: 0x8c42a348  lw          $v0, -0x5CB8($v0)
    ctx->pc = 0x5677ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943560)));
    // 0x5677d0: 0x24a5fd40  addiu       $a1, $a1, -0x2C0
    ctx->pc = 0x5677d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966592));
    // 0x5677d4: 0x26060054  addiu       $a2, $s0, 0x54
    ctx->pc = 0x5677d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x5677d8: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x5677d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x5677dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x5677dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5677e0: 0xc0aa5d8  jal         func_2A9760
    ctx->pc = 0x5677E0u;
    SET_GPR_U32(ctx, 31, 0x5677E8u);
    ctx->pc = 0x5677E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5677E0u;
            // 0x5677e4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5677E8u; }
        if (ctx->pc != 0x5677E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5677E8u; }
        if (ctx->pc != 0x5677E8u) { return; }
    }
    ctx->pc = 0x5677E8u;
label_5677e8:
    // 0x5677e8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x5677e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x5677ec: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x5677ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x5677f0: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x5677f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x5677f4: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x5677f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x5677f8: 0x24632568  addiu       $v1, $v1, 0x2568
    ctx->pc = 0x5677f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9576));
    // 0x5677fc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x5677fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x567800: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x567800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x567804: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x567804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x567808: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x567808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x56780c: 0x80470000  lb          $a3, 0x0($v0)
    ctx->pc = 0x56780cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x567810: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x567810u;
    SET_GPR_U32(ctx, 31, 0x567818u);
    ctx->pc = 0x567814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x567810u;
            // 0x567814: 0x24c6fd48  addiu       $a2, $a2, -0x2B8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567818u; }
        if (ctx->pc != 0x567818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567818u; }
        if (ctx->pc != 0x567818u) { return; }
    }
    ctx->pc = 0x567818u;
label_567818:
    // 0x567818: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x567818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x56781c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x56781cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x567820: 0x8c42a348  lw          $v0, -0x5CB8($v0)
    ctx->pc = 0x567820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943560)));
    // 0x567824: 0x26060058  addiu       $a2, $s0, 0x58
    ctx->pc = 0x567824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x567828: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x567828u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x56782c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x56782cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x567830: 0xc0aa5d8  jal         func_2A9760
    ctx->pc = 0x567830u;
    SET_GPR_U32(ctx, 31, 0x567838u);
    ctx->pc = 0x567834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x567830u;
            // 0x567834: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567838u; }
        if (ctx->pc != 0x567838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567838u; }
        if (ctx->pc != 0x567838u) { return; }
    }
    ctx->pc = 0x567838u;
label_567838:
    // 0x567838: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x567838u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x56783c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x56783cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x567840: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x567840u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x567844: 0x3e00008  jr          $ra
    ctx->pc = 0x567844u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x567848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x567844u;
            // 0x567848: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x56784Cu;
    // 0x56784c: 0x0  nop
    ctx->pc = 0x56784cu;
    // NOP
    // 0x567850: 0x3e00008  jr          $ra
    ctx->pc = 0x567850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x567854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x567850u;
            // 0x567854: 0x24026978  addiu       $v0, $zero, 0x6978 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27000));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x567858u;
    // 0x567858: 0x0  nop
    ctx->pc = 0x567858u;
    // NOP
    // 0x56785c: 0x0  nop
    ctx->pc = 0x56785cu;
    // NOP
label_567860:
    // 0x567860: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x567860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x567864: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x567864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x567868: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x567868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x56786c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x56786cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x567870: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x567870u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x567874: 0x12200027  beqz        $s1, . + 4 + (0x27 << 2)
    ctx->pc = 0x567874u;
    {
        const bool branch_taken_0x567874 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x567878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x567874u;
            // 0x567878: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x567874) {
            ctx->pc = 0x567914u;
            goto label_567914;
        }
    }
    ctx->pc = 0x56787Cu;
    // 0x56787c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x56787cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x567880: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x567880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x567884: 0x24638090  addiu       $v1, $v1, -0x7F70
    ctx->pc = 0x567884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934672));
    // 0x567888: 0x244280c8  addiu       $v0, $v0, -0x7F38
    ctx->pc = 0x567888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934728));
    // 0x56788c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x56788cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x567890: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x567890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x567894: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x567894u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
    // 0x567898: 0x246380d8  addiu       $v1, $v1, -0x7F28
    ctx->pc = 0x567898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934744));
    // 0x56789c: 0x26220090  addiu       $v0, $s1, 0x90
    ctx->pc = 0x56789cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x5678a0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x5678A0u;
    {
        const bool branch_taken_0x5678a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x5678A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5678A0u;
            // 0x5678a4: 0xae230090  sw          $v1, 0x90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5678a0) {
            ctx->pc = 0x5678D0u;
            goto label_5678d0;
        }
    }
    ctx->pc = 0x5678A8u;
    // 0x5678a8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x5678a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x5678ac: 0x24422720  addiu       $v0, $v0, 0x2720
    ctx->pc = 0x5678acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10016));
    // 0x5678b0: 0xae220090  sw          $v0, 0x90($s1)
    ctx->pc = 0x5678b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 2));
    // 0x5678b4: 0x8e250098  lw          $a1, 0x98($s1)
    ctx->pc = 0x5678b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x5678b8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x5678B8u;
    {
        const bool branch_taken_0x5678b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x5678b8) {
            ctx->pc = 0x5678D0u;
            goto label_5678d0;
        }
    }
    ctx->pc = 0x5678C0u;
    // 0x5678c0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5678c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x5678c4: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x5678C4u;
    SET_GPR_U32(ctx, 31, 0x5678CCu);
    ctx->pc = 0x5678C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5678C4u;
            // 0x5678c8: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5678CCu; }
        if (ctx->pc != 0x5678CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5678CCu; }
        if (ctx->pc != 0x5678CCu) { return; }
    }
    ctx->pc = 0x5678CCu;
label_5678cc:
    // 0x5678cc: 0xae200098  sw          $zero, 0x98($s1)
    ctx->pc = 0x5678ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 0));
label_5678d0:
    // 0x5678d0: 0x5220000b  beql        $s1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x5678D0u;
    {
        const bool branch_taken_0x5678d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x5678d0) {
            ctx->pc = 0x5678D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5678D0u;
            // 0x5678d4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x567900u;
            goto label_567900;
        }
    }
    ctx->pc = 0x5678D8u;
    // 0x5678d8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x5678d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x5678dc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x5678dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x5678e0: 0x24638160  addiu       $v1, $v1, -0x7EA0
    ctx->pc = 0x5678e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934880));
    // 0x5678e4: 0x24428198  addiu       $v0, $v0, -0x7E68
    ctx->pc = 0x5678e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934936));
    // 0x5678e8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x5678e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x5678ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x5678ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5678f0: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x5678f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
    // 0x5678f4: 0xc159e4c  jal         func_567930
    ctx->pc = 0x5678F4u;
    SET_GPR_U32(ctx, 31, 0x5678FCu);
    ctx->pc = 0x5678F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5678F4u;
            // 0x5678f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x567930u;
    if (runtime->hasFunction(0x567930u)) {
        auto targetFn = runtime->lookupFunction(0x567930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5678FCu; }
        if (ctx->pc != 0x5678FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00567930_0x567930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5678FCu; }
        if (ctx->pc != 0x5678FCu) { return; }
    }
    ctx->pc = 0x5678FCu;
label_5678fc:
    // 0x5678fc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x5678fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_567900:
    // 0x567900: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x567900u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x567904: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x567904u;
    {
        const bool branch_taken_0x567904 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x567904) {
            ctx->pc = 0x567908u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x567904u;
            // 0x567908: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x567918u;
            goto label_567918;
        }
    }
    ctx->pc = 0x56790Cu;
    // 0x56790c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x56790Cu;
    SET_GPR_U32(ctx, 31, 0x567914u);
    ctx->pc = 0x567910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56790Cu;
            // 0x567910: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567914u; }
        if (ctx->pc != 0x567914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567914u; }
        if (ctx->pc != 0x567914u) { return; }
    }
    ctx->pc = 0x567914u;
label_567914:
    // 0x567914: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x567914u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_567918:
    // 0x567918: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x567918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x56791c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x56791cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x567920: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x567920u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x567924: 0x3e00008  jr          $ra
    ctx->pc = 0x567924u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x567928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x567924u;
            // 0x567928: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x56792Cu;
    // 0x56792c: 0x0  nop
    ctx->pc = 0x56792cu;
    // NOP
}
