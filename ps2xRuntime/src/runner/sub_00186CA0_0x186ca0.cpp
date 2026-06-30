#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00186CA0
// Address: 0x186ca0 - 0x186e28
void sub_00186CA0_0x186ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186CA0_0x186ca0");
#endif

    switch (ctx->pc) {
        case 0x186ca0u: goto label_186ca0;
        case 0x186ca4u: goto label_186ca4;
        case 0x186ca8u: goto label_186ca8;
        case 0x186cacu: goto label_186cac;
        case 0x186cb0u: goto label_186cb0;
        case 0x186cb4u: goto label_186cb4;
        case 0x186cb8u: goto label_186cb8;
        case 0x186cbcu: goto label_186cbc;
        case 0x186cc0u: goto label_186cc0;
        case 0x186cc4u: goto label_186cc4;
        case 0x186cc8u: goto label_186cc8;
        case 0x186cccu: goto label_186ccc;
        case 0x186cd0u: goto label_186cd0;
        case 0x186cd4u: goto label_186cd4;
        case 0x186cd8u: goto label_186cd8;
        case 0x186cdcu: goto label_186cdc;
        case 0x186ce0u: goto label_186ce0;
        case 0x186ce4u: goto label_186ce4;
        case 0x186ce8u: goto label_186ce8;
        case 0x186cecu: goto label_186cec;
        case 0x186cf0u: goto label_186cf0;
        case 0x186cf4u: goto label_186cf4;
        case 0x186cf8u: goto label_186cf8;
        case 0x186cfcu: goto label_186cfc;
        case 0x186d00u: goto label_186d00;
        case 0x186d04u: goto label_186d04;
        case 0x186d08u: goto label_186d08;
        case 0x186d0cu: goto label_186d0c;
        case 0x186d10u: goto label_186d10;
        case 0x186d14u: goto label_186d14;
        case 0x186d18u: goto label_186d18;
        case 0x186d1cu: goto label_186d1c;
        case 0x186d20u: goto label_186d20;
        case 0x186d24u: goto label_186d24;
        case 0x186d28u: goto label_186d28;
        case 0x186d2cu: goto label_186d2c;
        case 0x186d30u: goto label_186d30;
        case 0x186d34u: goto label_186d34;
        case 0x186d38u: goto label_186d38;
        case 0x186d3cu: goto label_186d3c;
        case 0x186d40u: goto label_186d40;
        case 0x186d44u: goto label_186d44;
        case 0x186d48u: goto label_186d48;
        case 0x186d4cu: goto label_186d4c;
        case 0x186d50u: goto label_186d50;
        case 0x186d54u: goto label_186d54;
        case 0x186d58u: goto label_186d58;
        case 0x186d5cu: goto label_186d5c;
        case 0x186d60u: goto label_186d60;
        case 0x186d64u: goto label_186d64;
        case 0x186d68u: goto label_186d68;
        case 0x186d6cu: goto label_186d6c;
        case 0x186d70u: goto label_186d70;
        case 0x186d74u: goto label_186d74;
        case 0x186d78u: goto label_186d78;
        case 0x186d7cu: goto label_186d7c;
        case 0x186d80u: goto label_186d80;
        case 0x186d84u: goto label_186d84;
        case 0x186d88u: goto label_186d88;
        case 0x186d8cu: goto label_186d8c;
        case 0x186d90u: goto label_186d90;
        case 0x186d94u: goto label_186d94;
        case 0x186d98u: goto label_186d98;
        case 0x186d9cu: goto label_186d9c;
        case 0x186da0u: goto label_186da0;
        case 0x186da4u: goto label_186da4;
        case 0x186da8u: goto label_186da8;
        case 0x186dacu: goto label_186dac;
        case 0x186db0u: goto label_186db0;
        case 0x186db4u: goto label_186db4;
        case 0x186db8u: goto label_186db8;
        case 0x186dbcu: goto label_186dbc;
        case 0x186dc0u: goto label_186dc0;
        case 0x186dc4u: goto label_186dc4;
        case 0x186dc8u: goto label_186dc8;
        case 0x186dccu: goto label_186dcc;
        case 0x186dd0u: goto label_186dd0;
        case 0x186dd4u: goto label_186dd4;
        case 0x186dd8u: goto label_186dd8;
        case 0x186ddcu: goto label_186ddc;
        case 0x186de0u: goto label_186de0;
        case 0x186de4u: goto label_186de4;
        case 0x186de8u: goto label_186de8;
        case 0x186decu: goto label_186dec;
        case 0x186df0u: goto label_186df0;
        case 0x186df4u: goto label_186df4;
        case 0x186df8u: goto label_186df8;
        case 0x186dfcu: goto label_186dfc;
        case 0x186e00u: goto label_186e00;
        case 0x186e04u: goto label_186e04;
        case 0x186e08u: goto label_186e08;
        case 0x186e0cu: goto label_186e0c;
        case 0x186e10u: goto label_186e10;
        case 0x186e14u: goto label_186e14;
        case 0x186e18u: goto label_186e18;
        case 0x186e1cu: goto label_186e1c;
        case 0x186e20u: goto label_186e20;
        case 0x186e24u: goto label_186e24;
        default: break;
    }

    ctx->pc = 0x186ca0u;

label_186ca0:
    // 0x186ca0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x186ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_186ca4:
    // 0x186ca4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x186ca4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_186ca8:
    // 0x186ca8: 0x15000009  bnez        $t0, . + 4 + (0x9 << 2)
label_186cac:
    if (ctx->pc == 0x186CACu) {
        ctx->pc = 0x186CACu;
            // 0x186cac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x186CB0u;
        goto label_186cb0;
    }
    ctx->pc = 0x186CA8u;
    {
        const bool branch_taken_0x186ca8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x186CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186CA8u;
            // 0x186cac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186ca8) {
            ctx->pc = 0x186CD0u;
            goto label_186cd0;
        }
    }
    ctx->pc = 0x186CB0u;
label_186cb0:
    // 0x186cb0: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x186cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_186cb4:
    // 0x186cb4: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x186cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_186cb8:
    // 0x186cb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x186cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_186cbc:
    // 0x186cbc: 0x24847da0  addiu       $a0, $a0, 0x7DA0
    ctx->pc = 0x186cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32160));
label_186cc0:
    // 0x186cc0: 0x24a57c90  addiu       $a1, $a1, 0x7C90
    ctx->pc = 0x186cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31888));
label_186cc4:
    // 0x186cc4: 0x80618a8  j           func_1862A0
label_186cc8:
    if (ctx->pc == 0x186CC8u) {
        ctx->pc = 0x186CC8u;
            // 0x186cc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x186CCCu;
        goto label_186ccc;
    }
    ctx->pc = 0x186CC4u;
    ctx->pc = 0x186CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186CC4u;
            // 0x186cc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1862A0u;
    if (runtime->hasFunction(0x1862A0u)) {
        auto targetFn = runtime->lookupFunction(0x1862A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001862A0_0x1862a0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x186CCCu;
label_186ccc:
    // 0x186ccc: 0x0  nop
    ctx->pc = 0x186cccu;
    // NOP
label_186cd0:
    // 0x186cd0: 0x81020004  lb          $v0, 0x4($t0)
    ctx->pc = 0x186cd0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
label_186cd4:
    // 0x186cd4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_186cd8:
    if (ctx->pc == 0x186CD8u) {
        ctx->pc = 0x186CD8u;
            // 0x186cd8: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->pc = 0x186CDCu;
        goto label_186cdc;
    }
    ctx->pc = 0x186CD4u;
    {
        const bool branch_taken_0x186cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x186CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186CD4u;
            // 0x186cd8: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x186cd4) {
            ctx->pc = 0x186CF8u;
            goto label_186cf8;
        }
    }
    ctx->pc = 0x186CDCu;
label_186cdc:
    // 0x186cdc: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x186cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_186ce0:
    // 0x186ce0: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x186ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_186ce4:
    // 0x186ce4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x186ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_186ce8:
    // 0x186ce8: 0x24847db0  addiu       $a0, $a0, 0x7DB0
    ctx->pc = 0x186ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32176));
label_186cec:
    // 0x186cec: 0x24a57cc0  addiu       $a1, $a1, 0x7CC0
    ctx->pc = 0x186cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31936));
label_186cf0:
    // 0x186cf0: 0x80618a8  j           func_1862A0
label_186cf4:
    if (ctx->pc == 0x186CF4u) {
        ctx->pc = 0x186CF4u;
            // 0x186cf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x186CF8u;
        goto label_186cf8;
    }
    ctx->pc = 0x186CF0u;
    ctx->pc = 0x186CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186CF0u;
            // 0x186cf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1862A0u;
    if (runtime->hasFunction(0x1862A0u)) {
        auto targetFn = runtime->lookupFunction(0x1862A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001862A0_0x1862a0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x186CF8u;
label_186cf8:
    // 0x186cf8: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_186cfc:
    if (ctx->pc == 0x186CFCu) {
        ctx->pc = 0x186CFCu;
            // 0x186cfc: 0x8d020028  lw          $v0, 0x28($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
        ctx->pc = 0x186D00u;
        goto label_186d00;
    }
    ctx->pc = 0x186CF8u;
    {
        const bool branch_taken_0x186cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186cf8) {
            ctx->pc = 0x186CFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x186CF8u;
            // 0x186cfc: 0x8d020028  lw          $v0, 0x28($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x186D68u;
            goto label_186d68;
        }
    }
    ctx->pc = 0x186D00u;
label_186d00:
    // 0x186d00: 0x8cca0004  lw          $t2, 0x4($a2)
    ctx->pc = 0x186d00u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_186d04:
    // 0x186d04: 0x1940002c  blez        $t2, . + 4 + (0x2C << 2)
label_186d08:
    if (ctx->pc == 0x186D08u) {
        ctx->pc = 0x186D08u;
            // 0x186d08: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x186D0Cu;
        goto label_186d0c;
    }
    ctx->pc = 0x186D04u;
    {
        const bool branch_taken_0x186d04 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x186D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186D04u;
            // 0x186d08: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186d04) {
            ctx->pc = 0x186DB8u;
            goto label_186db8;
        }
    }
    ctx->pc = 0x186D0Cu;
label_186d0c:
    // 0x186d0c: 0x8cc90000  lw          $t1, 0x0($a2)
    ctx->pc = 0x186d0cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_186d10:
    // 0x186d10: 0x11200029  beqz        $t1, . + 4 + (0x29 << 2)
label_186d14:
    if (ctx->pc == 0x186D14u) {
        ctx->pc = 0x186D14u;
            // 0x186d14: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x186D18u;
        goto label_186d18;
    }
    ctx->pc = 0x186D10u;
    {
        const bool branch_taken_0x186d10 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x186D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186D10u;
            // 0x186d14: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186d10) {
            ctx->pc = 0x186DB8u;
            goto label_186db8;
        }
    }
    ctx->pc = 0x186D18u;
label_186d18:
    // 0x186d18: 0x250b0008  addiu       $t3, $t0, 0x8
    ctx->pc = 0x186d18u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_186d1c:
    // 0x186d1c: 0x81020005  lb          $v0, 0x5($t0)
    ctx->pc = 0x186d1cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 5)));
label_186d20:
    // 0x186d20: 0xab1821  addu        $v1, $a1, $t3
    ctx->pc = 0x186d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
label_186d24:
    // 0x186d24: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x186d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_186d28:
    // 0x186d28: 0x1444000b  bne         $v0, $a0, . + 4 + (0xB << 2)
label_186d2c:
    if (ctx->pc == 0x186D2Cu) {
        ctx->pc = 0x186D2Cu;
            // 0x186d2c: 0x8c670010  lw          $a3, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->pc = 0x186D30u;
        goto label_186d30;
    }
    ctx->pc = 0x186D28u;
    {
        const bool branch_taken_0x186d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x186D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186D28u;
            // 0x186d2c: 0x8c670010  lw          $a3, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186d28) {
            ctx->pc = 0x186D58u;
            goto label_186d58;
        }
    }
    ctx->pc = 0x186D30u;
label_186d30:
    // 0x186d30: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
label_186d34:
    if (ctx->pc == 0x186D34u) {
        ctx->pc = 0x186D34u;
            // 0x186d34: 0x12a1021  addu        $v0, $t1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
        ctx->pc = 0x186D38u;
        goto label_186d38;
    }
    ctx->pc = 0x186D30u;
    {
        const bool branch_taken_0x186d30 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x186D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186D30u;
            // 0x186d34: 0x12a1021  addu        $v0, $t1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186d30) {
            ctx->pc = 0x186D58u;
            goto label_186d58;
        }
    }
    ctx->pc = 0x186D38u;
label_186d38:
    // 0x186d38: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x186d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_186d3c:
    // 0x186d3c: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
label_186d40:
    if (ctx->pc == 0x186D40u) {
        ctx->pc = 0x186D40u;
            // 0x186d40: 0x8d070014  lw          $a3, 0x14($t0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
        ctx->pc = 0x186D44u;
        goto label_186d44;
    }
    ctx->pc = 0x186D3Cu;
    {
        const bool branch_taken_0x186d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x186d3c) {
            ctx->pc = 0x186D40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x186D3Cu;
            // 0x186d40: 0x8d070014  lw          $a3, 0x14($t0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x186D5Cu;
            goto label_186d5c;
        }
    }
    ctx->pc = 0x186D44u;
label_186d44:
    // 0x186d44: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x186d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_186d48:
    // 0x186d48: 0xace90008  sw          $t1, 0x8($a3)
    ctx->pc = 0x186d48u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 9));
label_186d4c:
    // 0x186d4c: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x186d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_186d50:
    // 0x186d50: 0x10000019  b           . + 4 + (0x19 << 2)
label_186d54:
    if (ctx->pc == 0x186D54u) {
        ctx->pc = 0x186D54u;
            // 0x186d54: 0xace2000c  sw          $v0, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
        ctx->pc = 0x186D58u;
        goto label_186d58;
    }
    ctx->pc = 0x186D50u;
    {
        const bool branch_taken_0x186d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186D50u;
            // 0x186d54: 0xace2000c  sw          $v0, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186d50) {
            ctx->pc = 0x186DB8u;
            goto label_186db8;
        }
    }
    ctx->pc = 0x186D58u;
label_186d58:
    // 0x186d58: 0x8d070014  lw          $a3, 0x14($t0)
    ctx->pc = 0x186d58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_186d5c:
    // 0x186d5c: 0x54e0000a  bnel        $a3, $zero, . + 4 + (0xA << 2)
label_186d60:
    if (ctx->pc == 0x186D60u) {
        ctx->pc = 0x186D60u;
            // 0x186d60: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->pc = 0x186D64u;
        goto label_186d64;
    }
    ctx->pc = 0x186D5Cu;
    {
        const bool branch_taken_0x186d5c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x186d5c) {
            ctx->pc = 0x186D60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x186D5Cu;
            // 0x186d60: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x186D88u;
            goto label_186d88;
        }
    }
    ctx->pc = 0x186D64u;
label_186d64:
    // 0x186d64: 0x8d020028  lw          $v0, 0x28($t0)
    ctx->pc = 0x186d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
label_186d68:
    // 0x186d68: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_186d6c:
    if (ctx->pc == 0x186D6Cu) {
        ctx->pc = 0x186D6Cu;
            // 0x186d6c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x186D70u;
        goto label_186d70;
    }
    ctx->pc = 0x186D68u;
    {
        const bool branch_taken_0x186d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186D68u;
            // 0x186d6c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186d68) {
            ctx->pc = 0x186DB8u;
            goto label_186db8;
        }
    }
    ctx->pc = 0x186D70u;
label_186d70:
    // 0x186d70: 0x8d04002c  lw          $a0, 0x2C($t0)
    ctx->pc = 0x186d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
label_186d74:
    // 0x186d74: 0x40f809  jalr        $v0
label_186d78:
    if (ctx->pc == 0x186D78u) {
        ctx->pc = 0x186D78u;
            // 0x186d78: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x186D7Cu;
        goto label_186d7c;
    }
    ctx->pc = 0x186D74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x186D7Cu);
        ctx->pc = 0x186D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186D74u;
            // 0x186d78: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x186D7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x186D7Cu; }
            if (ctx->pc != 0x186D7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x186D7Cu;
label_186d7c:
    // 0x186d7c: 0x1000000e  b           . + 4 + (0xE << 2)
label_186d80:
    if (ctx->pc == 0x186D80u) {
        ctx->pc = 0x186D80u;
            // 0x186d80: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x186D84u;
        goto label_186d84;
    }
    ctx->pc = 0x186D7Cu;
    {
        const bool branch_taken_0x186d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186D7Cu;
            // 0x186d80: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186d7c) {
            ctx->pc = 0x186DB8u;
            goto label_186db8;
        }
    }
    ctx->pc = 0x186D84u;
label_186d84:
    // 0x186d84: 0x0  nop
    ctx->pc = 0x186d84u;
    // NOP
label_186d88:
    // 0x186d88: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x186d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_186d8c:
    // 0x186d8c: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x186d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_186d90:
    // 0x186d90: 0x68c40007  ldl         $a0, 0x7($a2)
    ctx->pc = 0x186d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_186d94:
    // 0x186d94: 0x6cc40000  ldr         $a0, 0x0($a2)
    ctx->pc = 0x186d94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_186d98:
    // 0x186d98: 0xb0e4000f  sdl         $a0, 0xF($a3)
    ctx->pc = 0x186d98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_186d9c:
    // 0x186d9c: 0xb4e40008  sdr         $a0, 0x8($a3)
    ctx->pc = 0x186d9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_186da0:
    // 0x186da0: 0xad020014  sw          $v0, 0x14($t0)
    ctx->pc = 0x186da0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 2));
label_186da4:
    // 0x186da4: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x186da4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_186da8:
    // 0x186da8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x186da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_186dac:
    // 0x186dac: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x186dacu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_186db0:
    // 0x186db0: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x186db0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
label_186db4:
    // 0x186db4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x186db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_186db8:
    // 0x186db8: 0x3e00008  jr          $ra
label_186dbc:
    if (ctx->pc == 0x186DBCu) {
        ctx->pc = 0x186DBCu;
            // 0x186dbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x186DC0u;
        goto label_186dc0;
    }
    ctx->pc = 0x186DB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186DB8u;
            // 0x186dbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x186DC0u;
label_186dc0:
    // 0x186dc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x186dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_186dc4:
    // 0x186dc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x186dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_186dc8:
    // 0x186dc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x186dc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_186dcc:
    // 0x186dcc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x186dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_186dd0:
    // 0x186dd0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x186dd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_186dd4:
    // 0x186dd4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x186dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_186dd8:
    // 0x186dd8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x186dd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_186ddc:
    // 0x186ddc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x186ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_186de0:
    // 0x186de0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x186de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_186de4:
    // 0x186de4: 0xc06127c  jal         func_1849F0
label_186de8:
    if (ctx->pc == 0x186DE8u) {
        ctx->pc = 0x186DE8u;
            // 0x186de8: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x186DECu;
        goto label_186dec;
    }
    ctx->pc = 0x186DE4u;
    SET_GPR_U32(ctx, 31, 0x186DECu);
    ctx->pc = 0x186DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186DE4u;
            // 0x186de8: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1849F0u;
    if (runtime->hasFunction(0x1849F0u)) {
        auto targetFn = runtime->lookupFunction(0x1849F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186DECu; }
        if (ctx->pc != 0x186DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001849F0_0x1849f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186DECu; }
        if (ctx->pc != 0x186DECu) { return; }
    }
    ctx->pc = 0x186DECu;
label_186dec:
    // 0x186dec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x186decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_186df0:
    // 0x186df0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x186df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_186df4:
    // 0x186df4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x186df4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_186df8:
    // 0x186df8: 0xc061b8a  jal         func_186E28
label_186dfc:
    if (ctx->pc == 0x186DFCu) {
        ctx->pc = 0x186DFCu;
            // 0x186dfc: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x186E00u;
        goto label_186e00;
    }
    ctx->pc = 0x186DF8u;
    SET_GPR_U32(ctx, 31, 0x186E00u);
    ctx->pc = 0x186DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186DF8u;
            // 0x186dfc: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186E28u;
    if (runtime->hasFunction(0x186E28u)) {
        auto targetFn = runtime->lookupFunction(0x186E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186E00u; }
        if (ctx->pc != 0x186E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186E28_0x186e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186E00u; }
        if (ctx->pc != 0x186E00u) { return; }
    }
    ctx->pc = 0x186E00u;
label_186e00:
    // 0x186e00: 0xc061282  jal         func_184A08
label_186e04:
    if (ctx->pc == 0x186E04u) {
        ctx->pc = 0x186E04u;
            // 0x186e04: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x186E08u;
        goto label_186e08;
    }
    ctx->pc = 0x186E00u;
    SET_GPR_U32(ctx, 31, 0x186E08u);
    ctx->pc = 0x186E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186E00u;
            // 0x186e04: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A08u;
    if (runtime->hasFunction(0x184A08u)) {
        auto targetFn = runtime->lookupFunction(0x184A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186E08u; }
        if (ctx->pc != 0x186E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184A08_0x184a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186E08u; }
        if (ctx->pc != 0x186E08u) { return; }
    }
    ctx->pc = 0x186E08u;
label_186e08:
    // 0x186e08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x186e08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_186e0c:
    // 0x186e0c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x186e0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_186e10:
    // 0x186e10: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x186e10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_186e14:
    // 0x186e14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x186e14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_186e18:
    // 0x186e18: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x186e18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_186e1c:
    // 0x186e1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x186e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_186e20:
    // 0x186e20: 0x3e00008  jr          $ra
label_186e24:
    if (ctx->pc == 0x186E24u) {
        ctx->pc = 0x186E24u;
            // 0x186e24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x186E28u;
        goto label_fallthrough_0x186e20;
    }
    ctx->pc = 0x186E20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186E20u;
            // 0x186e24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x186e20:
    ctx->pc = 0x186E28u;
}
