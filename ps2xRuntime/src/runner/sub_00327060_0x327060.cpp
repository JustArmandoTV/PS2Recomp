#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00327060
// Address: 0x327060 - 0x327210
void sub_00327060_0x327060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327060_0x327060");
#endif

    switch (ctx->pc) {
        case 0x3270d0u: goto label_3270d0;
        case 0x327124u: goto label_327124;
        case 0x3271acu: goto label_3271ac;
        default: break;
    }

    ctx->pc = 0x327060u;

    // 0x327060: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x327060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x327064: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x327064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x327068: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x327068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x32706c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x32706cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x327070: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x327070u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327074: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x327074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x327078: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x327078u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32707c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32707cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x327080: 0x2e61000b  sltiu       $at, $s3, 0xB
    ctx->pc = 0x327080u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x327084: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x327084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x327088: 0x10200053  beqz        $at, . + 4 + (0x53 << 2)
    ctx->pc = 0x327088u;
    {
        const bool branch_taken_0x327088 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x32708Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x327088u;
            // 0x32708c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327088) {
            ctx->pc = 0x3271D8u;
            goto label_3271d8;
        }
    }
    ctx->pc = 0x327090u;
    // 0x327090: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x327090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x327094: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x327094u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x327098: 0x2484ce40  addiu       $a0, $a0, -0x31C0
    ctx->pc = 0x327098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954560));
    // 0x32709c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32709cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3270a0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3270a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3270a4: 0x600008  jr          $v1
    ctx->pc = 0x3270A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3270ACu: goto label_3270ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3270ACu;
label_3270ac:
    // 0x3270ac: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x3270acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x3270b0: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x3270b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3270b4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x3270b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3270b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3270b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3270bc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x3270bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3270c0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3270c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3270c4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x3270c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x3270c8: 0xc040180  jal         func_100600
    ctx->pc = 0x3270C8u;
    SET_GPR_U32(ctx, 31, 0x3270D0u);
    ctx->pc = 0x3270CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3270C8u;
            // 0x3270cc: 0x24500164  addiu       $s0, $v0, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 356));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3270D0u; }
        if (ctx->pc != 0x3270D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3270D0u; }
        if (ctx->pc != 0x3270D0u) { return; }
    }
    ctx->pc = 0x3270D0u;
label_3270d0:
    // 0x3270d0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3270D0u;
    {
        const bool branch_taken_0x3270d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3270D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3270D0u;
            // 0x3270d4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3270d0) {
            ctx->pc = 0x32713Cu;
            goto label_32713c;
        }
    }
    ctx->pc = 0x3270D8u;
    // 0x3270d8: 0x8e450020  lw          $a1, 0x20($s2)
    ctx->pc = 0x3270d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x3270dc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3270dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x3270e0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3270e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x3270e4: 0x8e47001c  lw          $a3, 0x1C($s2)
    ctx->pc = 0x3270e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x3270e8: 0x2463fed0  addiu       $v1, $v1, -0x130
    ctx->pc = 0x3270e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966992));
    // 0x3270ec: 0x2442fea0  addiu       $v0, $v0, -0x160
    ctx->pc = 0x3270ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966944));
    // 0x3270f0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x3270f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3270f4: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x3270f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x3270f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3270f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3270fc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3270fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x327100: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x327100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x327104: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x327104u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x327108: 0xae250004  sw          $a1, 0x4($s1)
    ctx->pc = 0x327108u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
    // 0x32710c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x32710cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x327110: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x327110u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x327114: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x327114u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x327118: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x327118u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x32711c: 0xc0fcbcc  jal         func_3F2F30
    ctx->pc = 0x32711Cu;
    SET_GPR_U32(ctx, 31, 0x327124u);
    ctx->pc = 0x327120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32711Cu;
            // 0x327120: 0xae200018  sw          $zero, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F2F30u;
    if (runtime->hasFunction(0x3F2F30u)) {
        auto targetFn = runtime->lookupFunction(0x3F2F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327124u; }
        if (ctx->pc != 0x327124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F2F30_0x3f2f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x327124u; }
        if (ctx->pc != 0x327124u) { return; }
    }
    ctx->pc = 0x327124u;
label_327124:
    // 0x327124: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x327124u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x327128: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x327128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x32712c: 0x24844600  addiu       $a0, $a0, 0x4600
    ctx->pc = 0x32712cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17920));
    // 0x327130: 0x24634618  addiu       $v1, $v1, 0x4618
    ctx->pc = 0x327130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17944));
    // 0x327134: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x327134u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x327138: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x327138u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
label_32713c:
    // 0x32713c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32713cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x327140: 0x16630025  bne         $s3, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x327140u;
    {
        const bool branch_taken_0x327140 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x327144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x327140u;
            // 0x327144: 0xae110008  sw          $s1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327140) {
            ctx->pc = 0x3271D8u;
            goto label_3271d8;
        }
    }
    ctx->pc = 0x327148u;
    // 0x327148: 0x92840010  lbu         $a0, 0x10($s4)
    ctx->pc = 0x327148u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x32714c: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x32714cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x327150: 0x10830021  beq         $a0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x327150u;
    {
        const bool branch_taken_0x327150 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x327150) {
            ctx->pc = 0x3271D8u;
            goto label_3271d8;
        }
    }
    ctx->pc = 0x327158u;
    // 0x327158: 0x2403002b  addiu       $v1, $zero, 0x2B
    ctx->pc = 0x327158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x32715c: 0x1083001e  beq         $a0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x32715Cu;
    {
        const bool branch_taken_0x32715c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x32715c) {
            ctx->pc = 0x3271D8u;
            goto label_3271d8;
        }
    }
    ctx->pc = 0x327164u;
    // 0x327164: 0x2403002e  addiu       $v1, $zero, 0x2E
    ctx->pc = 0x327164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x327168: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x327168u;
    {
        const bool branch_taken_0x327168 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x327168) {
            ctx->pc = 0x3271D8u;
            goto label_3271d8;
        }
    }
    ctx->pc = 0x327170u;
    // 0x327170: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x327170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x327174: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x327174u;
    {
        const bool branch_taken_0x327174 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x327174) {
            ctx->pc = 0x3271D8u;
            goto label_3271d8;
        }
    }
    ctx->pc = 0x32717Cu;
    // 0x32717c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x32717cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x327180: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x327180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x327184: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x327184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x327188: 0xae840674  sw          $a0, 0x674($s4)
    ctx->pc = 0x327188u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1652), GPR_U32(ctx, 4));
    // 0x32718c: 0x8c633e38  lw          $v1, 0x3E38($v1)
    ctx->pc = 0x32718cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15928)));
    // 0x327190: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x327190u;
    {
        const bool branch_taken_0x327190 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x327190) {
            ctx->pc = 0x3271D8u;
            goto label_3271d8;
        }
    }
    ctx->pc = 0x327198u;
    // 0x327198: 0x8e830674  lw          $v1, 0x674($s4)
    ctx->pc = 0x327198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1652)));
    // 0x32719c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32719cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3271a0: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x3271a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x3271a4: 0x8c680004  lw          $t0, 0x4($v1)
    ctx->pc = 0x3271a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3271a8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3271a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3271ac:
    // 0x3271ac: 0x8d050038  lw          $a1, 0x38($t0)
    ctx->pc = 0x3271acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
    // 0x3271b0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3271b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3271b4: 0x8c863e38  lw          $a2, 0x3E38($a0)
    ctx->pc = 0x3271b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 15928)));
    // 0x3271b8: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x3271b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x3271bc: 0xac653e38  sw          $a1, 0x3E38($v1)
    ctx->pc = 0x3271bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15928), GPR_U32(ctx, 5));
    // 0x3271c0: 0x8e850674  lw          $a1, 0x674($s4)
    ctx->pc = 0x3271c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1652)));
    // 0x3271c4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x3271c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3271c8: 0xe5282a  slt         $a1, $a3, $a1
    ctx->pc = 0x3271c8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3271cc: 0x14a0fff7  bnez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3271CCu;
    {
        const bool branch_taken_0x3271cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3271D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3271CCu;
            // 0x3271d0: 0x25080050  addiu       $t0, $t0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3271cc) {
            ctx->pc = 0x3271ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3271ac;
        }
    }
    ctx->pc = 0x3271D4u;
    // 0x3271d4: 0x0  nop
    ctx->pc = 0x3271d4u;
    // NOP
label_3271d8:
    // 0x3271d8: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x3271d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x3271dc: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x3271dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3271e0: 0xae430020  sw          $v1, 0x20($s2)
    ctx->pc = 0x3271e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
    // 0x3271e4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3271e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3271e8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3271e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3271ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3271ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3271f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3271f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3271f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3271f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3271f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3271f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3271fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3271FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3271FCu;
            // 0x327200: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x327204u;
    // 0x327204: 0x0  nop
    ctx->pc = 0x327204u;
    // NOP
    // 0x327208: 0x0  nop
    ctx->pc = 0x327208u;
    // NOP
    // 0x32720c: 0x0  nop
    ctx->pc = 0x32720cu;
    // NOP
}
