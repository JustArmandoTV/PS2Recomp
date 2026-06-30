#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A5610
// Address: 0x1a5610 - 0x1a56e0
void sub_001A5610_0x1a5610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5610_0x1a5610");
#endif

    switch (ctx->pc) {
        case 0x1a5658u: goto label_1a5658;
        case 0x1a56c0u: goto label_1a56c0;
        case 0x1a56c8u: goto label_1a56c8;
        default: break;
    }

    ctx->pc = 0x1a5610u;

    // 0x1a5610: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1a5610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1a5614: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1A5614u;
    {
        const bool branch_taken_0x1a5614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5614u;
            // 0x1a5618: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5614) {
            ctx->pc = 0x1A564Cu;
            goto label_1a564c;
        }
    }
    ctx->pc = 0x1A561Cu;
    // 0x1a561c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a561cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a5620: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A5620u;
    {
        const bool branch_taken_0x1a5620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5620u;
            // 0x1a5624: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5620) {
            ctx->pc = 0x1A564Cu;
            goto label_1a564c;
        }
    }
    ctx->pc = 0x1A5628u;
    // 0x1a5628: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1a5628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a562c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A562Cu;
    {
        const bool branch_taken_0x1a562c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A562Cu;
            // 0x1a5630: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a562c) {
            ctx->pc = 0x1A564Cu;
            goto label_1a564c;
        }
    }
    ctx->pc = 0x1A5634u;
    // 0x1a5634: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1a5634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1a5638: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5638u;
    {
        const bool branch_taken_0x1a5638 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1a5638) {
            ctx->pc = 0x1A564Cu;
            goto label_1a564c;
        }
    }
    ctx->pc = 0x1A5640u;
    // 0x1a5640: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1a5640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1a5644: 0x58600001  blezl       $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A5644u;
    {
        const bool branch_taken_0x1a5644 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1a5644) {
            ctx->pc = 0x1A5648u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5644u;
            // 0x1a5648: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A564Cu;
            goto label_1a564c;
        }
    }
    ctx->pc = 0x1A564Cu;
label_1a564c:
    // 0x1a564c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A564Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A5654u;
    // 0x1a5654: 0x0  nop
    ctx->pc = 0x1a5654u;
    // NOP
label_1a5658:
    // 0x1a5658: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x1a5658u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1a565c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a565cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a5660: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1a5660u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1a5664: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a5664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a5668: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a5668u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a566c: 0x24831380  addiu       $v1, $a0, 0x1380
    ctx->pc = 0x1a566cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4992));
    // 0x1a5670: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1a5670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1a5674: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a5674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a5678: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a5678u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a567c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1a567cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a5680: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x1a5680u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a5684: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1a5684u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5688: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a5688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a568c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a568cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5690: 0x10470007  beq         $v0, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A5690u;
    {
        const bool branch_taken_0x1a5690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x1A5694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5690u;
            // 0x1a5694: 0x26030010  addiu       $v1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5690) {
            ctx->pc = 0x1A56B0u;
            goto label_1a56b0;
        }
    }
    ctx->pc = 0x1A5698u;
    // 0x1a5698: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1a5698u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1a569c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a569cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a56a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a56a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a56a4: 0x34a50409  ori         $a1, $a1, 0x409
    ctx->pc = 0x1a56a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1033);
    // 0x1a56a8: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1A56A8u;
    ctx->pc = 0x1A56ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A56A8u;
            // 0x1a56ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A56B0u;
label_1a56b0:
    // 0x1a56b0: 0x8d070004  lw          $a3, 0x4($t0)
    ctx->pc = 0x1a56b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1a56b4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1a56b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a56b8: 0xc0695b8  jal         func_1A56E0
    ctx->pc = 0x1A56B8u;
    SET_GPR_U32(ctx, 31, 0x1A56C0u);
    ctx->pc = 0x1A56BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A56B8u;
            // 0x1a56bc: 0x7382b  sltu        $a3, $zero, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A56E0u;
    if (runtime->hasFunction(0x1A56E0u)) {
        auto targetFn = runtime->lookupFunction(0x1A56E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A56C0u; }
        if (ctx->pc != 0x1A56C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A56E0_0x1a56e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A56C0u; }
        if (ctx->pc != 0x1A56C0u) { return; }
    }
    ctx->pc = 0x1A56C0u;
label_1a56c0:
    // 0x1a56c0: 0xc06d2bc  jal         func_1B4AF0
    ctx->pc = 0x1A56C0u;
    SET_GPR_U32(ctx, 31, 0x1A56C8u);
    ctx->pc = 0x1A56C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A56C0u;
            // 0x1a56c4: 0x26040038  addiu       $a0, $s0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4AF0u;
    if (runtime->hasFunction(0x1B4AF0u)) {
        auto targetFn = runtime->lookupFunction(0x1B4AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A56C8u; }
        if (ctx->pc != 0x1A56C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4AF0_0x1b4af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A56C8u; }
        if (ctx->pc != 0x1A56C8u) { return; }
    }
    ctx->pc = 0x1A56C8u;
label_1a56c8:
    // 0x1a56c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a56c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a56cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a56ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a56d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a56d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a56d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A56D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A56D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A56D4u;
            // 0x1a56d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A56DCu;
    // 0x1a56dc: 0x0  nop
    ctx->pc = 0x1a56dcu;
    // NOP
}
