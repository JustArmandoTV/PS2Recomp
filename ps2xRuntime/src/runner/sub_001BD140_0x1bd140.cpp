#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BD140
// Address: 0x1bd140 - 0x1bd188
void sub_001BD140_0x1bd140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BD140_0x1bd140");
#endif

    switch (ctx->pc) {
        case 0x1bd158u: goto label_1bd158;
        default: break;
    }

    ctx->pc = 0x1bd140u;

    // 0x1bd140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bd140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bd144: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1bd144u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bd148: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bd148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bd14c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bd14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1bd150: 0xc06f2e6  jal         func_1BCB98
    ctx->pc = 0x1BD150u;
    SET_GPR_U32(ctx, 31, 0x1BD158u);
    ctx->pc = 0x1BD154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD150u;
            // 0x1bd154: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BCB98u;
    if (runtime->hasFunction(0x1BCB98u)) {
        auto targetFn = runtime->lookupFunction(0x1BCB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD158u; }
        if (ctx->pc != 0x1BD158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BCB98_0x1bcb98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD158u; }
        if (ctx->pc != 0x1BD158u) { return; }
    }
    ctx->pc = 0x1BD158u;
label_1bd158:
    // 0x1bd158: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1bd158u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd15c: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BD15Cu;
    {
        const bool branch_taken_0x1bd15c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd15c) {
            ctx->pc = 0x1BD160u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD15Cu;
            // 0x1bd160: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BD178u;
            goto label_1bd178;
        }
    }
    ctx->pc = 0x1BD164u;
    // 0x1bd164: 0x90630023  lbu         $v1, 0x23($v1)
    ctx->pc = 0x1bd164u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 35)));
    // 0x1bd168: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bd168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd16c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1bd16cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1bd170: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1bd170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1bd174: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bd174u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bd178:
    // 0x1bd178: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bd178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bd17c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD17Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD17Cu;
            // 0x1bd180: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BD184u;
    // 0x1bd184: 0x0  nop
    ctx->pc = 0x1bd184u;
    // NOP
}
