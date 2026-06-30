#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B8CD0
// Address: 0x3b8cd0 - 0x3b8d30
void sub_003B8CD0_0x3b8cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B8CD0_0x3b8cd0");
#endif

    switch (ctx->pc) {
        case 0x3b8cd0u: goto label_3b8cd0;
        case 0x3b8cd4u: goto label_3b8cd4;
        case 0x3b8cd8u: goto label_3b8cd8;
        case 0x3b8cdcu: goto label_3b8cdc;
        case 0x3b8ce0u: goto label_3b8ce0;
        case 0x3b8ce4u: goto label_3b8ce4;
        case 0x3b8ce8u: goto label_3b8ce8;
        case 0x3b8cecu: goto label_3b8cec;
        case 0x3b8cf0u: goto label_3b8cf0;
        case 0x3b8cf4u: goto label_3b8cf4;
        case 0x3b8cf8u: goto label_3b8cf8;
        case 0x3b8cfcu: goto label_3b8cfc;
        case 0x3b8d00u: goto label_3b8d00;
        case 0x3b8d04u: goto label_3b8d04;
        case 0x3b8d08u: goto label_3b8d08;
        case 0x3b8d0cu: goto label_3b8d0c;
        case 0x3b8d10u: goto label_3b8d10;
        case 0x3b8d14u: goto label_3b8d14;
        case 0x3b8d18u: goto label_3b8d18;
        case 0x3b8d1cu: goto label_3b8d1c;
        case 0x3b8d20u: goto label_3b8d20;
        case 0x3b8d24u: goto label_3b8d24;
        case 0x3b8d28u: goto label_3b8d28;
        case 0x3b8d2cu: goto label_3b8d2c;
        default: break;
    }

    ctx->pc = 0x3b8cd0u;

label_3b8cd0:
    // 0x3b8cd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b8cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3b8cd4:
    // 0x3b8cd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b8cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3b8cd8:
    // 0x3b8cd8: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x3b8cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3b8cdc:
    // 0x3b8cdc: 0x8c8c0008  lw          $t4, 0x8($a0)
    ctx->pc = 0x3b8cdcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3b8ce0:
    // 0x3b8ce0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3b8ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3b8ce4:
    // 0x3b8ce4: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x3b8ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
label_3b8ce8:
    // 0x3b8ce8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3b8ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3b8cec:
    // 0x3b8cec: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3b8cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3b8cf0:
    // 0x3b8cf0: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
label_3b8cf4:
    if (ctx->pc == 0x3B8CF4u) {
        ctx->pc = 0x3B8CF4u;
            // 0x3b8cf4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x3B8CF8u;
        goto label_3b8cf8;
    }
    ctx->pc = 0x3B8CF0u;
    {
        const bool branch_taken_0x3b8cf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b8cf0) {
            ctx->pc = 0x3B8CF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8CF0u;
            // 0x3b8cf4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B8D1Cu;
            goto label_3b8d1c;
        }
    }
    ctx->pc = 0x3B8CF8u;
label_3b8cf8:
    // 0x3b8cf8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3b8cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_3b8cfc:
    // 0x3b8cfc: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x3b8cfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_3b8d00:
    // 0x3b8d00: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3b8d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3b8d04:
    // 0x3b8d04: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3b8d04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3b8d08:
    // 0x3b8d08: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3b8d08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3b8d0c:
    // 0x3b8d0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3b8d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3b8d10:
    // 0x3b8d10: 0x320f809  jalr        $t9
label_3b8d14:
    if (ctx->pc == 0x3B8D14u) {
        ctx->pc = 0x3B8D14u;
            // 0x3b8d14: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x3B8D18u;
        goto label_3b8d18;
    }
    ctx->pc = 0x3B8D10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B8D18u);
        ctx->pc = 0x3B8D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8D10u;
            // 0x3b8d14: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B8D18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B8D18u; }
            if (ctx->pc != 0x3B8D18u) { return; }
        }
        }
    }
    ctx->pc = 0x3B8D18u;
label_3b8d18:
    // 0x3b8d18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b8d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b8d1c:
    // 0x3b8d1c: 0x3e00008  jr          $ra
label_3b8d20:
    if (ctx->pc == 0x3B8D20u) {
        ctx->pc = 0x3B8D20u;
            // 0x3b8d20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x3B8D24u;
        goto label_3b8d24;
    }
    ctx->pc = 0x3B8D1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B8D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B8D1Cu;
            // 0x3b8d20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B8D24u;
label_3b8d24:
    // 0x3b8d24: 0x0  nop
    ctx->pc = 0x3b8d24u;
    // NOP
label_3b8d28:
    // 0x3b8d28: 0x0  nop
    ctx->pc = 0x3b8d28u;
    // NOP
label_3b8d2c:
    // 0x3b8d2c: 0x0  nop
    ctx->pc = 0x3b8d2cu;
    // NOP
}
