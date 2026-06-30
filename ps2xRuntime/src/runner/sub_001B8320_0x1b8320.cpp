#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B8320
// Address: 0x1b8320 - 0x1b8388
void sub_001B8320_0x1b8320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8320_0x1b8320");
#endif

    switch (ctx->pc) {
        case 0x1b8344u: goto label_1b8344;
        case 0x1b8378u: goto label_1b8378;
        default: break;
    }

    ctx->pc = 0x1b8320u;

    // 0x1b8320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b8320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b8324: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b8324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b8328: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b8328u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b832c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b832cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b8330: 0x8e021350  lw          $v0, 0x1350($s0)
    ctx->pc = 0x1b8330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4944)));
    // 0x1b8334: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B8334u;
    {
        const bool branch_taken_0x1b8334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8334u;
            // 0x1b8338: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8334) {
            ctx->pc = 0x1B8378u;
            goto label_1b8378;
        }
    }
    ctx->pc = 0x1B833Cu;
    // 0x1b833c: 0xc06a25c  jal         func_1A8970
    ctx->pc = 0x1B833Cu;
    SET_GPR_U32(ctx, 31, 0x1B8344u);
    ctx->pc = 0x1A8970u;
    if (runtime->hasFunction(0x1A8970u)) {
        auto targetFn = runtime->lookupFunction(0x1A8970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8344u; }
        if (ctx->pc != 0x1B8344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8970_0x1a8970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8344u; }
        if (ctx->pc != 0x1B8344u) { return; }
    }
    ctx->pc = 0x1B8344u;
label_1b8344:
    // 0x1b8344: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b8344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b8348: 0x8e021358  lw          $v0, 0x1358($s0)
    ctx->pc = 0x1b8348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4952)));
    // 0x1b834c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b834cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8350: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B8350u;
    {
        const bool branch_taken_0x1b8350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B8354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8350u;
            // 0x1b8354: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8350) {
            ctx->pc = 0x1B8370u;
            goto label_1b8370;
        }
    }
    ctx->pc = 0x1B8358u;
    // 0x1b8358: 0x8e021350  lw          $v0, 0x1350($s0)
    ctx->pc = 0x1b8358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4944)));
    // 0x1b835c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1b835cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b8360: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B8360u;
    {
        const bool branch_taken_0x1b8360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8360u;
            // 0x1b8364: 0xae051358  sw          $a1, 0x1358($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4952), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8360) {
            ctx->pc = 0x1B8370u;
            goto label_1b8370;
        }
    }
    ctx->pc = 0x1B8368u;
    // 0x1b8368: 0xae001354  sw          $zero, 0x1354($s0)
    ctx->pc = 0x1b8368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4948), GPR_U32(ctx, 0));
    // 0x1b836c: 0xae001358  sw          $zero, 0x1358($s0)
    ctx->pc = 0x1b836cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4952), GPR_U32(ctx, 0));
label_1b8370:
    // 0x1b8370: 0xc06a262  jal         func_1A8988
    ctx->pc = 0x1B8370u;
    SET_GPR_U32(ctx, 31, 0x1B8378u);
    ctx->pc = 0x1A8988u;
    if (runtime->hasFunction(0x1A8988u)) {
        auto targetFn = runtime->lookupFunction(0x1A8988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8378u; }
        if (ctx->pc != 0x1B8378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8988_0x1a8988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8378u; }
        if (ctx->pc != 0x1B8378u) { return; }
    }
    ctx->pc = 0x1B8378u;
label_1b8378:
    // 0x1b8378: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b8378u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b837c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b837cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b8380: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8380u;
            // 0x1b8384: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B8388u;
}
