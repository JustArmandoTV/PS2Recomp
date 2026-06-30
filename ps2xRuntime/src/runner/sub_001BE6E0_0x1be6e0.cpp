#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BE6E0
// Address: 0x1be6e0 - 0x1be730
void sub_001BE6E0_0x1be6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE6E0_0x1be6e0");
#endif

    switch (ctx->pc) {
        case 0x1be704u: goto label_1be704;
        case 0x1be70cu: goto label_1be70c;
        default: break;
    }

    ctx->pc = 0x1be6e0u;

    // 0x1be6e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1be6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1be6e4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1be6e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be6e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1be6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1be6ec: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1BE6ECu;
    {
        const bool branch_taken_0x1be6ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE6F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE6ECu;
            // 0x1be6f0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be6ec) {
            ctx->pc = 0x1BE720u;
            goto label_1be720;
        }
    }
    ctx->pc = 0x1BE6F4u;
    // 0x1be6f4: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x1be6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1be6f8: 0x8c500030  lw          $s0, 0x30($v0)
    ctx->pc = 0x1be6f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1be6fc: 0xc06fb8c  jal         func_1BEE30
    ctx->pc = 0x1BE6FCu;
    SET_GPR_U32(ctx, 31, 0x1BE704u);
    ctx->pc = 0x1BE700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE6FCu;
            // 0x1be700: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BEE30u;
    if (runtime->hasFunction(0x1BEE30u)) {
        auto targetFn = runtime->lookupFunction(0x1BEE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE704u; }
        if (ctx->pc != 0x1BE704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BEE30_0x1bee30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE704u; }
        if (ctx->pc != 0x1BE704u) { return; }
    }
    ctx->pc = 0x1BE704u;
label_1be704:
    // 0x1be704: 0xc06f524  jal         func_1BD490
    ctx->pc = 0x1BE704u;
    SET_GPR_U32(ctx, 31, 0x1BE70Cu);
    ctx->pc = 0x1BE708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE704u;
            // 0x1be708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BD490u;
    if (runtime->hasFunction(0x1BD490u)) {
        auto targetFn = runtime->lookupFunction(0x1BD490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE70Cu; }
        if (ctx->pc != 0x1BE70Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BD490_0x1bd490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE70Cu; }
        if (ctx->pc != 0x1BE70Cu) { return; }
    }
    ctx->pc = 0x1BE70Cu;
label_1be70c:
    // 0x1be70c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1be70cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1be710: 0x24639d38  addiu       $v1, $v1, -0x62C8
    ctx->pc = 0x1be710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942008));
    // 0x1be714: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1be714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1be718: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1be718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1be71c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1be71cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1be720:
    // 0x1be720: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1be720u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be724: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1be724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1be728: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE728u;
            // 0x1be72c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BE730u;
}
