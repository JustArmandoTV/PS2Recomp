#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BD260
// Address: 0x1bd260 - 0x1bd2b0
void sub_001BD260_0x1bd260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BD260_0x1bd260");
#endif

    switch (ctx->pc) {
        case 0x1bd278u: goto label_1bd278;
        default: break;
    }

    ctx->pc = 0x1bd260u;

    // 0x1bd260: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bd260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bd264: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1bd264u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bd268: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bd268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bd26c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bd26cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1bd270: 0xc06f2e6  jal         func_1BCB98
    ctx->pc = 0x1BD270u;
    SET_GPR_U32(ctx, 31, 0x1BD278u);
    ctx->pc = 0x1BD274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD270u;
            // 0x1bd274: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BCB98u;
    if (runtime->hasFunction(0x1BCB98u)) {
        auto targetFn = runtime->lookupFunction(0x1BCB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD278u; }
        if (ctx->pc != 0x1BD278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BCB98_0x1bcb98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD278u; }
        if (ctx->pc != 0x1BD278u) { return; }
    }
    ctx->pc = 0x1BD278u;
label_1bd278:
    // 0x1bd278: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1bd278u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd27c: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BD27Cu;
    {
        const bool branch_taken_0x1bd27c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd27c) {
            ctx->pc = 0x1BD280u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD27Cu;
            // 0x1bd280: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BD2A4u;
            goto label_1bd2a4;
        }
    }
    ctx->pc = 0x1BD284u;
    // 0x1bd284: 0x90620026  lbu         $v0, 0x26($v1)
    ctx->pc = 0x1bd284u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 38)));
    // 0x1bd288: 0x28430040  slti        $v1, $v0, 0x40
    ctx->pc = 0x1bd288u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1bd28c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD28Cu;
    {
        const bool branch_taken_0x1bd28c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD28Cu;
            // 0x1bd290: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd28c) {
            ctx->pc = 0x1BD29Cu;
            goto label_1bd29c;
        }
    }
    ctx->pc = 0x1BD294u;
    // 0x1bd294: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1bd294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bd298: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1bd298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1bd29c:
    // 0x1bd29c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bd29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd2a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bd2a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bd2a4:
    // 0x1bd2a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bd2a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bd2a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD2A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD2ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD2A8u;
            // 0x1bd2ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BD2B0u;
}
