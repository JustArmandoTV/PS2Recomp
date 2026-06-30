#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BCC60
// Address: 0x1bcc60 - 0x1bcca8
void sub_001BCC60_0x1bcc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BCC60_0x1bcc60");
#endif

    switch (ctx->pc) {
        case 0x1bcc78u: goto label_1bcc78;
        default: break;
    }

    ctx->pc = 0x1bcc60u;

    // 0x1bcc60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bcc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bcc64: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1bcc64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bcc68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bcc68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bcc6c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bcc6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1bcc70: 0xc06f2e6  jal         func_1BCB98
    ctx->pc = 0x1BCC70u;
    SET_GPR_U32(ctx, 31, 0x1BCC78u);
    ctx->pc = 0x1BCC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCC70u;
            // 0x1bcc74: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BCB98u;
    if (runtime->hasFunction(0x1BCB98u)) {
        auto targetFn = runtime->lookupFunction(0x1BCB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCC78u; }
        if (ctx->pc != 0x1BCC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BCB98_0x1bcb98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCC78u; }
        if (ctx->pc != 0x1BCC78u) { return; }
    }
    ctx->pc = 0x1BCC78u;
label_1bcc78:
    // 0x1bcc78: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1bcc78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bcc7c: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BCC7Cu;
    {
        const bool branch_taken_0x1bcc7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcc7c) {
            ctx->pc = 0x1BCC80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCC7Cu;
            // 0x1bcc80: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BCC98u;
            goto label_1bcc98;
        }
    }
    ctx->pc = 0x1BCC84u;
    // 0x1bcc84: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x1bcc84u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1bcc88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bcc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bcc8c: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x1bcc8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1bcc90: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1bcc90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1bcc94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bcc94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bcc98:
    // 0x1bcc98: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bcc98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bcc9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BCC9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BCCA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCC9Cu;
            // 0x1bcca0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BCCA4u;
    // 0x1bcca4: 0x0  nop
    ctx->pc = 0x1bcca4u;
    // NOP
}
