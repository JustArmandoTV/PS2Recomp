#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AA528
// Address: 0x1aa528 - 0x1aa5d8
void sub_001AA528_0x1aa528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA528_0x1aa528");
#endif

    switch (ctx->pc) {
        case 0x1aa53cu: goto label_1aa53c;
        default: break;
    }

    ctx->pc = 0x1aa528u;

    // 0x1aa528: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aa528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aa52c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aa52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1aa530: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1aa530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1aa534: 0xc06aaa8  jal         func_1AAAA0
    ctx->pc = 0x1AA534u;
    SET_GPR_U32(ctx, 31, 0x1AA53Cu);
    ctx->pc = 0x1AA538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA534u;
            // 0x1aa538: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AAAA0u;
    if (runtime->hasFunction(0x1AAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x1AAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA53Cu; }
        if (ctx->pc != 0x1AA53Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AAAA0_0x1aaaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA53Cu; }
        if (ctx->pc != 0x1AA53Cu) { return; }
    }
    ctx->pc = 0x1AA53Cu;
label_1aa53c:
    // 0x1aa53c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1aa53cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa540: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1aa540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1aa544: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x1aa544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x1aa548: 0x10a0001f  beqz        $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1AA548u;
    {
        const bool branch_taken_0x1aa548 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA54Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA548u;
            // 0x1aa54c: 0x26070d88  addiu       $a3, $s0, 0xD88 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 3464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa548) {
            ctx->pc = 0x1AA5C8u;
            goto label_1aa5c8;
        }
    }
    ctx->pc = 0x1AA550u;
    // 0x1aa550: 0x8e061fec  lw          $a2, 0x1FEC($s0)
    ctx->pc = 0x1aa550u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8172)));
    // 0x1aa554: 0xdcc40018  ld          $a0, 0x18($a2)
    ctx->pc = 0x1aa554u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x1aa558: 0x1082001b  beq         $a0, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1AA558u;
    {
        const bool branch_taken_0x1aa558 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AA55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA558u;
            // 0x1aa55c: 0x2608090c  addiu       $t0, $s0, 0x90C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 2316));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa558) {
            ctx->pc = 0x1AA5C8u;
            goto label_1aa5c8;
        }
    }
    ctx->pc = 0x1AA560u;
    // 0x1aa560: 0xdca20020  ld          $v0, 0x20($a1)
    ctx->pc = 0x1aa560u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1aa564: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1aa564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1aa568: 0x82102f  dsubu       $v0, $a0, $v0
    ctx->pc = 0x1aa568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
    // 0x1aa56c: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1AA56Cu;
    {
        const bool branch_taken_0x1aa56c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AA570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA56Cu;
            // 0x1aa570: 0xfce20158  sd          $v0, 0x158($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 344), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa56c) {
            ctx->pc = 0x1AA5C8u;
            goto label_1aa5c8;
        }
    }
    ctx->pc = 0x1AA574u;
    // 0x1aa574: 0x8d030018  lw          $v1, 0x18($t0)
    ctx->pc = 0x1aa574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x1aa578: 0xdce40150  ld          $a0, 0x150($a3)
    ctx->pc = 0x1aa578u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 336)));
    // 0x1aa57c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1aa57cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1aa580: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aa580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1aa584: 0xfca40018  sd          $a0, 0x18($a1)
    ctx->pc = 0x1aa584u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 4));
    // 0x1aa588: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1aa588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1aa58c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aa58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1aa590: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x1aa590u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1aa594: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1aa594u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1aa598: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1aa598u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1aa59c: 0xfca30020  sd          $v1, 0x20($a1)
    ctx->pc = 0x1aa59cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 3));
    // 0x1aa5a0: 0x8d04001c  lw          $a0, 0x1C($t0)
    ctx->pc = 0x1aa5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x1aa5a4: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x1aa5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x1aa5a8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1aa5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1aa5ac: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x1aa5acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x1aa5b0: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1aa5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1aa5b4: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x1aa5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x1aa5b8: 0x8cc2002c  lw          $v0, 0x2C($a2)
    ctx->pc = 0x1aa5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x1aa5bc: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x1aa5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x1aa5c0: 0x8cc30030  lw          $v1, 0x30($a2)
    ctx->pc = 0x1aa5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x1aa5c4: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x1aa5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_1aa5c8:
    // 0x1aa5c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aa5c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa5cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1aa5ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aa5d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA5D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA5D0u;
            // 0x1aa5d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AA5D8u;
}
