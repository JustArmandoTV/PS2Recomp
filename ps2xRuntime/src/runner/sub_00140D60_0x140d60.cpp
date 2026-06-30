#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00140D60
// Address: 0x140d60 - 0x140e20
void sub_00140D60_0x140d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140D60_0x140d60");
#endif

    switch (ctx->pc) {
        case 0x140e14u: goto label_140e14;
        default: break;
    }

    ctx->pc = 0x140d60u;

    // 0x140d60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x140d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x140d64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x140d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x140d68: 0x94a80004  lhu         $t0, 0x4($a1)
    ctx->pc = 0x140d68u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x140d6c: 0x3103000a  andi        $v1, $t0, 0xA
    ctx->pc = 0x140d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)10);
    // 0x140d70: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x140D70u;
    {
        const bool branch_taken_0x140d70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x140d70) {
            ctx->pc = 0x140D94u;
            goto label_140d94;
        }
    }
    ctx->pc = 0x140D78u;
    // 0x140d78: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x140d78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x140d7c: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x140d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x140d80: 0x2463585c  addiu       $v1, $v1, 0x585C
    ctx->pc = 0x140d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22620));
    // 0x140d84: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x140d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x140d88: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x140d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x140d8c: 0x51030022  beql        $t0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x140D8Cu;
    {
        const bool branch_taken_0x140d8c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x140d8c) {
            ctx->pc = 0x140D90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x140D8Cu;
            // 0x140d90: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x140E18u;
            goto label_140e18;
        }
    }
    ctx->pc = 0x140D94u;
label_140d94:
    // 0x140d94: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x140d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x140d98: 0x8383c  dsll32      $a3, $t0, 0
    ctx->pc = 0x140d98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) << (32 + 0));
    // 0x140d9c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x140d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x140da0: 0x2442585c  addiu       $v0, $v0, 0x585C
    ctx->pc = 0x140da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22620));
    // 0x140da4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x140da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x140da8: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x140da8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x140dac: 0x31020002  andi        $v0, $t0, 0x2
    ctx->pc = 0x140dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2);
    // 0x140db0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x140DB0u;
    {
        const bool branch_taken_0x140db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x140DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140DB0u;
            // 0x140db4: 0x7383e  dsrl32      $a3, $a3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140db0) {
            ctx->pc = 0x140DD0u;
            goto label_140dd0;
        }
    }
    ctx->pc = 0x140DB8u;
    // 0x140db8: 0x94a30018  lhu         $v1, 0x18($a1)
    ctx->pc = 0x140db8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x140dbc: 0x94a2001a  lhu         $v0, 0x1A($a1)
    ctx->pc = 0x140dbcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 26)));
    // 0x140dc0: 0x31938  dsll        $v1, $v1, 4
    ctx->pc = 0x140dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 4);
    // 0x140dc4: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x140dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x140dc8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x140dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x140dcc: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x140dccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_140dd0:
    // 0x140dd0: 0x31020008  andi        $v0, $t0, 0x8
    ctx->pc = 0x140dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)8);
    // 0x140dd4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x140DD4u;
    {
        const bool branch_taken_0x140dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140dd4) {
            ctx->pc = 0x140DD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x140DD4u;
            // 0x140dd8: 0x8f8581d4  lw          $a1, -0x7E2C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934996)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x140DF8u;
            goto label_140df8;
        }
    }
    ctx->pc = 0x140DDCu;
    // 0x140ddc: 0x94a3001c  lhu         $v1, 0x1C($a1)
    ctx->pc = 0x140ddcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x140de0: 0x94a2001e  lhu         $v0, 0x1E($a1)
    ctx->pc = 0x140de0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 30)));
    // 0x140de4: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x140de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x140de8: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x140de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x140dec: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x140decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x140df0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x140df0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x140df4: 0x8f8581d4  lw          $a1, -0x7E2C($gp)
    ctx->pc = 0x140df4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934996)));
label_140df8:
    // 0x140df8: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x140df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x140dfc: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x140dfcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x140e00: 0x8f8481d0  lw          $a0, -0x7E30($gp)
    ctx->pc = 0x140e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934992)));
    // 0x140e04: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x140e04u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x140e08: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x140e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x140e0c: 0xc057540  jal         func_15D500
    ctx->pc = 0x140E0Cu;
    SET_GPR_U32(ctx, 31, 0x140E14u);
    ctx->pc = 0x140E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140E0Cu;
            // 0x140e10: 0xaf8281d4  sw          $v0, -0x7E2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934996), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140E14u; }
        if (ctx->pc != 0x140E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140E14u; }
        if (ctx->pc != 0x140E14u) { return; }
    }
    ctx->pc = 0x140E14u;
label_140e14:
    // 0x140e14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x140e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_140e18:
    // 0x140e18: 0x3e00008  jr          $ra
    ctx->pc = 0x140E18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140E18u;
            // 0x140e1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x140E20u;
}
