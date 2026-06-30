#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00241770
// Address: 0x241770 - 0x2419a0
void sub_00241770_0x241770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241770_0x241770");
#endif

    switch (ctx->pc) {
        case 0x241800u: goto label_241800;
        case 0x241858u: goto label_241858;
        case 0x241878u: goto label_241878;
        case 0x241924u: goto label_241924;
        case 0x241978u: goto label_241978;
        default: break;
    }

    ctx->pc = 0x241770u;

    // 0x241770: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x241770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x241774: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x241774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x241778: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x241778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x24177c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x24177cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x241780: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x241780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x241784: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x241784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x241788: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x241788u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24178c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24178cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x241790: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x241790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x241794: 0x94a20020  lhu         $v0, 0x20($a1)
    ctx->pc = 0x241794u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x241798: 0x8c860034  lw          $a2, 0x34($a0)
    ctx->pc = 0x241798u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x24179c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x24179cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2417a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2417a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2417a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2417a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2417a8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2417a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2417ac: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2417acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2417b0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2417b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2417b4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2417b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2417b8: 0x94a50020  lhu         $a1, 0x20($a1)
    ctx->pc = 0x2417b8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2417bc: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x2417bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2417c0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2417c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2417c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2417c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2417c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2417c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2417cc: 0xa4450020  sh          $a1, 0x20($v0)
    ctx->pc = 0x2417ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2417d0: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x2417d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x2417d4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2417d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2417d8: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x2417d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
    // 0x2417dc: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x2417dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2417e0: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x2417e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2417e4: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x2417e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x2417e8: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x2417e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x2417ec: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2417ECu;
    {
        const bool branch_taken_0x2417ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2417F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2417ECu;
            // 0x2417f0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2417ec) {
            ctx->pc = 0x241800u;
            goto label_241800;
        }
    }
    ctx->pc = 0x2417F4u;
    // 0x2417f4: 0x26640028  addiu       $a0, $s3, 0x28
    ctx->pc = 0x2417f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
    // 0x2417f8: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x2417F8u;
    SET_GPR_U32(ctx, 31, 0x241800u);
    ctx->pc = 0x2417FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2417F8u;
            // 0x2417fc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241800u; }
        if (ctx->pc != 0x241800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241800u; }
        if (ctx->pc != 0x241800u) { return; }
    }
    ctx->pc = 0x241800u;
label_241800:
    // 0x241800: 0x8e65002c  lw          $a1, 0x2C($s3)
    ctx->pc = 0x241800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x241804: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x241804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x241808: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x241808u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x24180c: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x24180cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x241810: 0xae64002c  sw          $a0, 0x2C($s3)
    ctx->pc = 0x241810u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 4));
    // 0x241814: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x241814u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x241818: 0x8e640028  lw          $a0, 0x28($s3)
    ctx->pc = 0x241818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x24181c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x24181cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x241820: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x241820u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 18));
    // 0x241824: 0x8e64002c  lw          $a0, 0x2C($s3)
    ctx->pc = 0x241824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x241828: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x241828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x24182c: 0xa6440020  sh          $a0, 0x20($s2)
    ctx->pc = 0x24182cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 32), (uint16_t)GPR_U32(ctx, 4));
    // 0x241830: 0x92440028  lbu         $a0, 0x28($s2)
    ctx->pc = 0x241830u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x241834: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x241834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x241838: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x241838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x24183c: 0xa2420028  sb          $v0, 0x28($s2)
    ctx->pc = 0x24183cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 2));
    // 0x241840: 0xae400034  sw          $zero, 0x34($s2)
    ctx->pc = 0x241840u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
    // 0x241844: 0xae400038  sw          $zero, 0x38($s2)
    ctx->pc = 0x241844u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
    // 0x241848: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x241848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x24184c: 0x18400030  blez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x24184Cu;
    {
        const bool branch_taken_0x24184c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x241850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24184Cu;
            // 0x241850: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24184c) {
            ctx->pc = 0x241910u;
            goto label_241910;
        }
    }
    ctx->pc = 0x241854u;
    // 0x241854: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x241854u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241858:
    // 0x241858: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x241858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x24185c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x24185cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x241860: 0x0  nop
    ctx->pc = 0x241860u;
    // NOP
    // 0x241864: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x241864u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x241868: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x241868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x24186c: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x24186cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x241870: 0xc0a43d8  jal         func_290F60
    ctx->pc = 0x241870u;
    SET_GPR_U32(ctx, 31, 0x241878u);
    ctx->pc = 0x241874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241870u;
            // 0x241874: 0x268400b0  addiu       $a0, $s4, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x290F60u;
    if (runtime->hasFunction(0x290F60u)) {
        auto targetFn = runtime->lookupFunction(0x290F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241878u; }
        if (ctx->pc != 0x241878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00290F60_0x290f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241878u; }
        if (ctx->pc != 0x241878u) { return; }
    }
    ctx->pc = 0x241878u;
label_241878:
    // 0x241878: 0x928400a9  lbu         $a0, 0xA9($s4)
    ctx->pc = 0x241878u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 169)));
    // 0x24187c: 0x926702ef  lbu         $a3, 0x2EF($s3)
    ctx->pc = 0x24187cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 751)));
    // 0x241880: 0x926602ee  lbu         $a2, 0x2EE($s3)
    ctx->pc = 0x241880u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 750)));
    // 0x241884: 0x926502ed  lbu         $a1, 0x2ED($s3)
    ctx->pc = 0x241884u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 749)));
    // 0x241888: 0x30820003  andi        $v0, $a0, 0x3
    ctx->pc = 0x241888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x24188c: 0x30e30003  andi        $v1, $a3, 0x3
    ctx->pc = 0x24188cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
    // 0x241890: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x241890u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x241894: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x241894u;
    {
        const bool branch_taken_0x241894 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x241898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241894u;
            // 0x241898: 0x268800a0  addiu       $t0, $s4, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241894) {
            ctx->pc = 0x2418A8u;
            goto label_2418a8;
        }
    }
    ctx->pc = 0x24189Cu;
    // 0x24189c: 0xa01027  not         $v0, $a1
    ctx->pc = 0x24189cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 0)));
    // 0x2418a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2418A0u;
    {
        const bool branch_taken_0x2418a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2418A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2418A0u;
            // 0x2418a4: 0x22b80  sll         $a1, $v0, 14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2418a0) {
            ctx->pc = 0x2418B0u;
            goto label_2418b0;
        }
    }
    ctx->pc = 0x2418A8u;
label_2418a8:
    // 0x2418a8: 0x52b80  sll         $a1, $a1, 14
    ctx->pc = 0x2418a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 14));
    // 0x2418ac: 0x0  nop
    ctx->pc = 0x2418acu;
    // NOP
label_2418b0:
    // 0x2418b0: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x2418b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2418b4: 0xe2082a  slt         $at, $a3, $v0
    ctx->pc = 0x2418b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2418b8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2418B8u;
    {
        const bool branch_taken_0x2418b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2418b8) {
            ctx->pc = 0x2418D0u;
            goto label_2418d0;
        }
    }
    ctx->pc = 0x2418C0u;
    // 0x2418c0: 0xc01027  not         $v0, $a2
    ctx->pc = 0x2418c0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 6) | GPR_U64(ctx, 0)));
    // 0x2418c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2418C4u;
    {
        const bool branch_taken_0x2418c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2418C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2418C4u;
            // 0x2418c8: 0x21b80  sll         $v1, $v0, 14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2418c4) {
            ctx->pc = 0x2418D8u;
            goto label_2418d8;
        }
    }
    ctx->pc = 0x2418CCu;
    // 0x2418cc: 0x0  nop
    ctx->pc = 0x2418ccu;
    // NOP
label_2418d0:
    // 0x2418d0: 0x61b80  sll         $v1, $a2, 14
    ctx->pc = 0x2418d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 14));
    // 0x2418d4: 0x0  nop
    ctx->pc = 0x2418d4u;
    // NOP
label_2418d8:
    // 0x2418d8: 0x9502000a  lhu         $v0, 0xA($t0)
    ctx->pc = 0x2418d8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 10)));
    // 0x2418dc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2418dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2418e0: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x2418e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x2418e4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2418e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2418e8: 0xa502000a  sh          $v0, 0xA($t0)
    ctx->pc = 0x2418e8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x2418ec: 0x9502000c  lhu         $v0, 0xC($t0)
    ctx->pc = 0x2418ecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x2418f0: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x2418f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x2418f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2418f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2418f8: 0xa502000c  sh          $v0, 0xC($t0)
    ctx->pc = 0x2418f8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2418fc: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x2418fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x241900: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x241900u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x241904: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x241904u;
    {
        const bool branch_taken_0x241904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241904u;
            // 0x241908: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241904) {
            ctx->pc = 0x241858u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_241858;
        }
    }
    ctx->pc = 0x24190Cu;
    // 0x24190c: 0x0  nop
    ctx->pc = 0x24190cu;
    // NOP
label_241910:
    // 0x241910: 0x8e65006c  lw          $a1, 0x6C($s3)
    ctx->pc = 0x241910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
    // 0x241914: 0xc64c0048  lwc1        $f12, 0x48($s2)
    ctx->pc = 0x241914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x241918: 0xc66d01a0  lwc1        $f13, 0x1A0($s3)
    ctx->pc = 0x241918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x24191c: 0xc08e350  jal         func_238D40
    ctx->pc = 0x24191Cu;
    SET_GPR_U32(ctx, 31, 0x241924u);
    ctx->pc = 0x241920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24191Cu;
            // 0x241920: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238D40u;
    if (runtime->hasFunction(0x238D40u)) {
        auto targetFn = runtime->lookupFunction(0x238D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241924u; }
        if (ctx->pc != 0x241924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238D40_0x238d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241924u; }
        if (ctx->pc != 0x241924u) { return; }
    }
    ctx->pc = 0x241924u;
label_241924:
    // 0x241924: 0x96460020  lhu         $a2, 0x20($s2)
    ctx->pc = 0x241924u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x241928: 0x50c00011  beql        $a2, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x241928u;
    {
        const bool branch_taken_0x241928 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x241928) {
            ctx->pc = 0x24192Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x241928u;
            // 0x24192c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x241970u;
            goto label_241970;
        }
    }
    ctx->pc = 0x241930u;
    // 0x241930: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x241930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x241934: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x241934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x241938: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x241938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24193c: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x24193cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x241940: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x241940u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x241944: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x241944u;
    {
        const bool branch_taken_0x241944 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x241948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241944u;
            // 0x241948: 0x26650028  addiu       $a1, $s3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241944) {
            ctx->pc = 0x24196Cu;
            goto label_24196c;
        }
    }
    ctx->pc = 0x24194Cu;
    // 0x24194c: 0xa6400020  sh          $zero, 0x20($s2)
    ctx->pc = 0x24194cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x241950: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x241950u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x241954: 0xa4860020  sh          $a2, 0x20($a0)
    ctx->pc = 0x241954u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 32), (uint16_t)GPR_U32(ctx, 6));
    // 0x241958: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x241958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24195c: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x24195cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x241960: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x241960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x241964: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x241964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x241968: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x241968u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_24196c:
    // 0x24196c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24196cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_241970:
    // 0x241970: 0xc08e788  jal         func_239E20
    ctx->pc = 0x241970u;
    SET_GPR_U32(ctx, 31, 0x241978u);
    ctx->pc = 0x241974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241970u;
            // 0x241974: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239E20u;
    if (runtime->hasFunction(0x239E20u)) {
        auto targetFn = runtime->lookupFunction(0x239E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241978u; }
        if (ctx->pc != 0x241978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239E20_0x239e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241978u; }
        if (ctx->pc != 0x241978u) { return; }
    }
    ctx->pc = 0x241978u;
label_241978:
    // 0x241978: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x241978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24197c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x24197cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x241980: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x241980u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x241984: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x241984u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x241988: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x241988u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24198c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24198cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x241990: 0x3e00008  jr          $ra
    ctx->pc = 0x241990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241990u;
            // 0x241994: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x241998u;
    // 0x241998: 0x0  nop
    ctx->pc = 0x241998u;
    // NOP
    // 0x24199c: 0x0  nop
    ctx->pc = 0x24199cu;
    // NOP
}
