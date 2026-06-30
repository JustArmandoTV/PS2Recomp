#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AB5B8
// Address: 0x1ab5b8 - 0x1ab618
void sub_001AB5B8_0x1ab5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB5B8_0x1ab5b8");
#endif

    switch (ctx->pc) {
        case 0x1ab5ccu: goto label_1ab5cc;
        case 0x1ab5dcu: goto label_1ab5dc;
        case 0x1ab5ecu: goto label_1ab5ec;
        default: break;
    }

    ctx->pc = 0x1ab5b8u;

    // 0x1ab5b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ab5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ab5bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ab5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ab5c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ab5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ab5c4: 0xc06c0a8  jal         func_1B02A0
    ctx->pc = 0x1AB5C4u;
    SET_GPR_U32(ctx, 31, 0x1AB5CCu);
    ctx->pc = 0x1AB5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB5C4u;
            // 0x1ab5c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B02A0u;
    if (runtime->hasFunction(0x1B02A0u)) {
        auto targetFn = runtime->lookupFunction(0x1B02A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB5CCu; }
        if (ctx->pc != 0x1AB5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B02A0_0x1b02a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB5CCu; }
        if (ctx->pc != 0x1AB5CCu) { return; }
    }
    ctx->pc = 0x1AB5CCu;
label_1ab5cc:
    // 0x1ab5cc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AB5CCu;
    {
        const bool branch_taken_0x1ab5cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB5D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB5CCu;
            // 0x1ab5d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab5cc) {
            ctx->pc = 0x1AB5F4u;
            goto label_1ab5f4;
        }
    }
    ctx->pc = 0x1AB5D4u;
    // 0x1ab5d4: 0xc06ad86  jal         func_1AB618
    ctx->pc = 0x1AB5D4u;
    SET_GPR_U32(ctx, 31, 0x1AB5DCu);
    ctx->pc = 0x1AB618u;
    if (runtime->hasFunction(0x1AB618u)) {
        auto targetFn = runtime->lookupFunction(0x1AB618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB5DCu; }
        if (ctx->pc != 0x1AB5DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB618_0x1ab618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB5DCu; }
        if (ctx->pc != 0x1AB5DCu) { return; }
    }
    ctx->pc = 0x1AB5DCu;
label_1ab5dc:
    // 0x1ab5dc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AB5DCu;
    {
        const bool branch_taken_0x1ab5dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB5DCu;
            // 0x1ab5e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab5dc) {
            ctx->pc = 0x1AB600u;
            goto label_1ab600;
        }
    }
    ctx->pc = 0x1AB5E4u;
    // 0x1ab5e4: 0xc06ada0  jal         func_1AB680
    ctx->pc = 0x1AB5E4u;
    SET_GPR_U32(ctx, 31, 0x1AB5ECu);
    ctx->pc = 0x1AB680u;
    if (runtime->hasFunction(0x1AB680u)) {
        auto targetFn = runtime->lookupFunction(0x1AB680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB5ECu; }
        if (ctx->pc != 0x1AB5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB680_0x1ab680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB5ECu; }
        if (ctx->pc != 0x1AB5ECu) { return; }
    }
    ctx->pc = 0x1AB5ECu;
label_1ab5ec:
    // 0x1ab5ec: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AB5ECu;
    {
        const bool branch_taken_0x1ab5ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab5ec) {
            ctx->pc = 0x1AB5F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB5ECu;
            // 0x1ab5f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AB604u;
            goto label_1ab604;
        }
    }
    ctx->pc = 0x1AB5F4u;
label_1ab5f4:
    // 0x1ab5f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AB5F4u;
    {
        const bool branch_taken_0x1ab5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB5F4u;
            // 0x1ab5f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab5f4) {
            ctx->pc = 0x1AB604u;
            goto label_1ab604;
        }
    }
    ctx->pc = 0x1AB5FCu;
    // 0x1ab5fc: 0x0  nop
    ctx->pc = 0x1ab5fcu;
    // NOP
label_1ab600:
    // 0x1ab600: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ab600u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab604:
    // 0x1ab604: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ab604u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab608: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ab608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ab60c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB60Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB60Cu;
            // 0x1ab610: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AB614u;
    // 0x1ab614: 0x0  nop
    ctx->pc = 0x1ab614u;
    // NOP
}
