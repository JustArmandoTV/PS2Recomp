#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B8D70
// Address: 0x1b8d70 - 0x1b8dd8
void sub_001B8D70_0x1b8d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8D70_0x1b8d70");
#endif

    switch (ctx->pc) {
        case 0x1b8d70u: goto label_1b8d70;
        case 0x1b8d74u: goto label_1b8d74;
        case 0x1b8d78u: goto label_1b8d78;
        case 0x1b8d7cu: goto label_1b8d7c;
        case 0x1b8d80u: goto label_1b8d80;
        case 0x1b8d84u: goto label_1b8d84;
        case 0x1b8d88u: goto label_1b8d88;
        case 0x1b8d8cu: goto label_1b8d8c;
        case 0x1b8d90u: goto label_1b8d90;
        case 0x1b8d94u: goto label_1b8d94;
        case 0x1b8d98u: goto label_1b8d98;
        case 0x1b8d9cu: goto label_1b8d9c;
        case 0x1b8da0u: goto label_1b8da0;
        case 0x1b8da4u: goto label_1b8da4;
        case 0x1b8da8u: goto label_1b8da8;
        case 0x1b8dacu: goto label_1b8dac;
        case 0x1b8db0u: goto label_1b8db0;
        case 0x1b8db4u: goto label_1b8db4;
        case 0x1b8db8u: goto label_1b8db8;
        case 0x1b8dbcu: goto label_1b8dbc;
        case 0x1b8dc0u: goto label_1b8dc0;
        case 0x1b8dc4u: goto label_1b8dc4;
        case 0x1b8dc8u: goto label_1b8dc8;
        case 0x1b8dccu: goto label_1b8dcc;
        case 0x1b8dd0u: goto label_1b8dd0;
        case 0x1b8dd4u: goto label_1b8dd4;
        default: break;
    }

    ctx->pc = 0x1b8d70u;

label_1b8d70:
    // 0x1b8d70: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1b8d70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1b8d74:
    // 0x1b8d74: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b8d74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b8d78:
    // 0x1b8d78: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1b8d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1b8d7c:
    // 0x1b8d7c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1b8d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1b8d80:
    // 0x1b8d80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b8d80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1b8d84:
    // 0x1b8d84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b8d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b8d88:
    // 0x1b8d88: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x1b8d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1b8d8c:
    // 0x1b8d8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b8d8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8d90:
    // 0x1b8d90: 0x8c691fac  lw          $t1, 0x1FAC($v1)
    ctx->pc = 0x1b8d90u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8108)));
label_1b8d94:
    // 0x1b8d94: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1b8d94u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1b8d98:
    // 0x1b8d98: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b8d98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8d9c:
    // 0x1b8d9c: 0xc91821  addu        $v1, $a2, $t1
    ctx->pc = 0x1b8d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_1b8da0:
    // 0x1b8da0: 0x11200004  beqz        $t1, . + 4 + (0x4 << 2)
label_1b8da4:
    if (ctx->pc == 0x1B8DA4u) {
        ctx->pc = 0x1B8DA4u;
            // 0x1b8da4: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B8DA8u;
        goto label_1b8da8;
    }
    ctx->pc = 0x1B8DA0u;
    {
        const bool branch_taken_0x1b8da0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8DA0u;
            // 0x1b8da4: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8da0) {
            ctx->pc = 0x1B8DB4u;
            goto label_1b8db4;
        }
    }
    ctx->pc = 0x1B8DA8u;
label_1b8da8:
    // 0x1b8da8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b8da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1b8dac:
    // 0x1b8dac: 0x40f809  jalr        $v0
label_1b8db0:
    if (ctx->pc == 0x1B8DB0u) {
        ctx->pc = 0x1B8DB4u;
        goto label_1b8db4;
    }
    ctx->pc = 0x1B8DACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B8DB4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B8DB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B8DB4u; }
            if (ctx->pc != 0x1B8DB4u) { return; }
        }
        }
    }
    ctx->pc = 0x1B8DB4u;
label_1b8db4:
    // 0x1b8db4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b8db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b8db8:
    // 0x1b8db8: 0x3e00008  jr          $ra
label_1b8dbc:
    if (ctx->pc == 0x1B8DBCu) {
        ctx->pc = 0x1B8DBCu;
            // 0x1b8dbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1B8DC0u;
        goto label_1b8dc0;
    }
    ctx->pc = 0x1B8DB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8DB8u;
            // 0x1b8dbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B8DC0u;
label_1b8dc0:
    // 0x1b8dc0: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1b8dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1b8dc4:
    // 0x1b8dc4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1b8dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1b8dc8:
    // 0x1b8dc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b8dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1b8dcc:
    // 0x1b8dcc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1b8dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1b8dd0:
    // 0x1b8dd0: 0x3e00008  jr          $ra
label_1b8dd4:
    if (ctx->pc == 0x1B8DD4u) {
        ctx->pc = 0x1B8DD4u;
            // 0x1b8dd4: 0xac861fa0  sw          $a2, 0x1FA0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8096), GPR_U32(ctx, 6));
        ctx->pc = 0x1B8DD8u;
        goto label_fallthrough_0x1b8dd0;
    }
    ctx->pc = 0x1B8DD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8DD0u;
            // 0x1b8dd4: 0xac861fa0  sw          $a2, 0x1FA0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8096), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1b8dd0:
    ctx->pc = 0x1B8DD8u;
}
