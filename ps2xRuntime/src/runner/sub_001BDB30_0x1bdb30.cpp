#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BDB30
// Address: 0x1bdb30 - 0x1bdba8
void sub_001BDB30_0x1bdb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BDB30_0x1bdb30");
#endif

    switch (ctx->pc) {
        case 0x1bdb50u: goto label_1bdb50;
        case 0x1bdb88u: goto label_1bdb88;
        default: break;
    }

    ctx->pc = 0x1bdb30u;

    // 0x1bdb30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bdb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bdb34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bdb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bdb38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bdb38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdb3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bdb3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bdb40: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1bdb40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdb44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bdb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bdb48: 0xc06fd96  jal         func_1BF658
    ctx->pc = 0x1BDB48u;
    SET_GPR_U32(ctx, 31, 0x1BDB50u);
    ctx->pc = 0x1BDB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDB48u;
            // 0x1bdb4c: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BF658u;
    if (runtime->hasFunction(0x1BF658u)) {
        auto targetFn = runtime->lookupFunction(0x1BF658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDB50u; }
        if (ctx->pc != 0x1BDB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BF658_0x1bf658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDB50u; }
        if (ctx->pc != 0x1BDB50u) { return; }
    }
    ctx->pc = 0x1BDB50u;
label_1bdb50:
    // 0x1bdb50: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1bdb50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1bdb54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bdb54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bdb58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bdb58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdb5c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1bdb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1bdb60: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BDB60u;
    {
        const bool branch_taken_0x1bdb60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BDB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDB60u;
            // 0x1bdb64: 0x24c6b418  addiu       $a2, $a2, -0x4BE8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdb60) {
            ctx->pc = 0x1BDB80u;
            goto label_1bdb80;
        }
    }
    ctx->pc = 0x1BDB68u;
    // 0x1bdb68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bdb68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdb6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bdb6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bdb70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bdb70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bdb74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bdb74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bdb78: 0x806f9cc  j           func_1BE730
    ctx->pc = 0x1BDB78u;
    ctx->pc = 0x1BDB7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDB78u;
            // 0x1bdb7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE730u;
    if (runtime->hasFunction(0x1BE730u)) {
        auto targetFn = runtime->lookupFunction(0x1BE730u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001BE730_0x1be730(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BDB80u;
label_1bdb80:
    // 0x1bdb80: 0xc06fee4  jal         func_1BFB90
    ctx->pc = 0x1BDB80u;
    SET_GPR_U32(ctx, 31, 0x1BDB88u);
    ctx->pc = 0x1BFB90u;
    if (runtime->hasFunction(0x1BFB90u)) {
        auto targetFn = runtime->lookupFunction(0x1BFB90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDB88u; }
        if (ctx->pc != 0x1BDB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BFB90_0x1bfb90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BDB88u; }
        if (ctx->pc != 0x1BDB88u) { return; }
    }
    ctx->pc = 0x1BDB88u;
label_1bdb88:
    // 0x1bdb88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bdb88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdb8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bdb8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bdb90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bdb90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bdb94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bdb94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bdb98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bdb98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bdb9c: 0x806f66e  j           func_1BD9B8
    ctx->pc = 0x1BDB9Cu;
    ctx->pc = 0x1BDBA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDB9Cu;
            // 0x1bdba0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BD9B8u;
    {
        auto targetFn = runtime->lookupFunction(0x1BD9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1BDBA4u;
    // 0x1bdba4: 0x0  nop
    ctx->pc = 0x1bdba4u;
    // NOP
}
