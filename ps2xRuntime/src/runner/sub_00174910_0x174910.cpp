#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00174910
// Address: 0x174910 - 0x174980
void sub_00174910_0x174910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174910_0x174910");
#endif

    switch (ctx->pc) {
        case 0x174910u: goto label_174910;
        case 0x174914u: goto label_174914;
        case 0x174918u: goto label_174918;
        case 0x17491cu: goto label_17491c;
        case 0x174920u: goto label_174920;
        case 0x174924u: goto label_174924;
        case 0x174928u: goto label_174928;
        case 0x17492cu: goto label_17492c;
        case 0x174930u: goto label_174930;
        case 0x174934u: goto label_174934;
        case 0x174938u: goto label_174938;
        case 0x17493cu: goto label_17493c;
        case 0x174940u: goto label_174940;
        case 0x174944u: goto label_174944;
        case 0x174948u: goto label_174948;
        case 0x17494cu: goto label_17494c;
        case 0x174950u: goto label_174950;
        case 0x174954u: goto label_174954;
        case 0x174958u: goto label_174958;
        case 0x17495cu: goto label_17495c;
        case 0x174960u: goto label_174960;
        case 0x174964u: goto label_174964;
        case 0x174968u: goto label_174968;
        case 0x17496cu: goto label_17496c;
        case 0x174970u: goto label_174970;
        case 0x174974u: goto label_174974;
        case 0x174978u: goto label_174978;
        case 0x17497cu: goto label_17497c;
        default: break;
    }

    ctx->pc = 0x174910u;

label_174910:
    // 0x174910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x174910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_174914:
    // 0x174914: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x174914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_174918:
    // 0x174918: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x174918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17491c:
    // 0x17491c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
label_174920:
    if (ctx->pc == 0x174920u) {
        ctx->pc = 0x174920u;
            // 0x174920: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->pc = 0x174924u;
        goto label_174924;
    }
    ctx->pc = 0x17491Cu;
    {
        const bool branch_taken_0x17491c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x174920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17491Cu;
            // 0x174920: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17491c) {
            ctx->pc = 0x174938u;
            goto label_174938;
        }
    }
    ctx->pc = 0x174924u;
label_174924:
    // 0x174924: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x174924u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_174928:
    // 0x174928: 0xc059f4e  jal         func_167D38
label_17492c:
    if (ctx->pc == 0x17492Cu) {
        ctx->pc = 0x17492Cu;
            // 0x17492c: 0x248445b0  addiu       $a0, $a0, 0x45B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17840));
        ctx->pc = 0x174930u;
        goto label_174930;
    }
    ctx->pc = 0x174928u;
    SET_GPR_U32(ctx, 31, 0x174930u);
    ctx->pc = 0x17492Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174928u;
            // 0x17492c: 0x248445b0  addiu       $a0, $a0, 0x45B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17840));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174930u; }
        if (ctx->pc != 0x174930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174930u; }
        if (ctx->pc != 0x174930u) { return; }
    }
    ctx->pc = 0x174930u;
label_174930:
    // 0x174930: 0x1000000e  b           . + 4 + (0xE << 2)
label_174934:
    if (ctx->pc == 0x174934u) {
        ctx->pc = 0x174934u;
            // 0x174934: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x174938u;
        goto label_174938;
    }
    ctx->pc = 0x174930u;
    {
        const bool branch_taken_0x174930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174930u;
            // 0x174934: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174930) {
            ctx->pc = 0x17496Cu;
            goto label_17496c;
        }
    }
    ctx->pc = 0x174938u;
label_174938:
    // 0x174938: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x174938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_17493c:
    // 0x17493c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_174940:
    if (ctx->pc == 0x174940u) {
        ctx->pc = 0x174940u;
            // 0x174940: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x174944u;
        goto label_174944;
    }
    ctx->pc = 0x17493Cu;
    {
        const bool branch_taken_0x17493c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x174940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17493Cu;
            // 0x174940: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17493c) {
            ctx->pc = 0x174968u;
            goto label_174968;
        }
    }
    ctx->pc = 0x174944u;
label_174944:
    // 0x174944: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x174944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_174948:
    // 0x174948: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x174948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_17494c:
    // 0x17494c: 0x40f809  jalr        $v0
label_174950:
    if (ctx->pc == 0x174950u) {
        ctx->pc = 0x174950u;
            // 0x174950: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x174954u;
        goto label_174954;
    }
    ctx->pc = 0x17494Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x174954u);
        ctx->pc = 0x174950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17494Cu;
            // 0x174950: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x174954u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x174954u; }
            if (ctx->pc != 0x174954u) { return; }
        }
        }
    }
    ctx->pc = 0x174954u;
label_174954:
    // 0x174954: 0x8603003e  lh          $v1, 0x3E($s0)
    ctx->pc = 0x174954u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 62)));
label_174958:
    // 0x174958: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x174958u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
label_17495c:
    // 0x17495c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x17495cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_174960:
    // 0x174960: 0x10000002  b           . + 4 + (0x2 << 2)
label_174964:
    if (ctx->pc == 0x174964u) {
        ctx->pc = 0x174964u;
            // 0x174964: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x174968u;
        goto label_174968;
    }
    ctx->pc = 0x174960u;
    {
        const bool branch_taken_0x174960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174960u;
            // 0x174964: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x174960) {
            ctx->pc = 0x17496Cu;
            goto label_17496c;
        }
    }
    ctx->pc = 0x174968u;
label_174968:
    // 0x174968: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x174968u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17496c:
    // 0x17496c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17496cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_174970:
    // 0x174970: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x174970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_174974:
    // 0x174974: 0x3e00008  jr          $ra
label_174978:
    if (ctx->pc == 0x174978u) {
        ctx->pc = 0x174978u;
            // 0x174978: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x17497Cu;
        goto label_17497c;
    }
    ctx->pc = 0x174974u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174974u;
            // 0x174978: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17497Cu;
label_17497c:
    // 0x17497c: 0x0  nop
    ctx->pc = 0x17497cu;
    // NOP
}
