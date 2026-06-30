#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B8CA0
// Address: 0x1b8ca0 - 0x1b8d70
void sub_001B8CA0_0x1b8ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8CA0_0x1b8ca0");
#endif

    switch (ctx->pc) {
        case 0x1b8ca0u: goto label_1b8ca0;
        case 0x1b8ca4u: goto label_1b8ca4;
        case 0x1b8ca8u: goto label_1b8ca8;
        case 0x1b8cacu: goto label_1b8cac;
        case 0x1b8cb0u: goto label_1b8cb0;
        case 0x1b8cb4u: goto label_1b8cb4;
        case 0x1b8cb8u: goto label_1b8cb8;
        case 0x1b8cbcu: goto label_1b8cbc;
        case 0x1b8cc0u: goto label_1b8cc0;
        case 0x1b8cc4u: goto label_1b8cc4;
        case 0x1b8cc8u: goto label_1b8cc8;
        case 0x1b8cccu: goto label_1b8ccc;
        case 0x1b8cd0u: goto label_1b8cd0;
        case 0x1b8cd4u: goto label_1b8cd4;
        case 0x1b8cd8u: goto label_1b8cd8;
        case 0x1b8cdcu: goto label_1b8cdc;
        case 0x1b8ce0u: goto label_1b8ce0;
        case 0x1b8ce4u: goto label_1b8ce4;
        case 0x1b8ce8u: goto label_1b8ce8;
        case 0x1b8cecu: goto label_1b8cec;
        case 0x1b8cf0u: goto label_1b8cf0;
        case 0x1b8cf4u: goto label_1b8cf4;
        case 0x1b8cf8u: goto label_1b8cf8;
        case 0x1b8cfcu: goto label_1b8cfc;
        case 0x1b8d00u: goto label_1b8d00;
        case 0x1b8d04u: goto label_1b8d04;
        case 0x1b8d08u: goto label_1b8d08;
        case 0x1b8d0cu: goto label_1b8d0c;
        case 0x1b8d10u: goto label_1b8d10;
        case 0x1b8d14u: goto label_1b8d14;
        case 0x1b8d18u: goto label_1b8d18;
        case 0x1b8d1cu: goto label_1b8d1c;
        case 0x1b8d20u: goto label_1b8d20;
        case 0x1b8d24u: goto label_1b8d24;
        case 0x1b8d28u: goto label_1b8d28;
        case 0x1b8d2cu: goto label_1b8d2c;
        case 0x1b8d30u: goto label_1b8d30;
        case 0x1b8d34u: goto label_1b8d34;
        case 0x1b8d38u: goto label_1b8d38;
        case 0x1b8d3cu: goto label_1b8d3c;
        case 0x1b8d40u: goto label_1b8d40;
        case 0x1b8d44u: goto label_1b8d44;
        case 0x1b8d48u: goto label_1b8d48;
        case 0x1b8d4cu: goto label_1b8d4c;
        case 0x1b8d50u: goto label_1b8d50;
        case 0x1b8d54u: goto label_1b8d54;
        case 0x1b8d58u: goto label_1b8d58;
        case 0x1b8d5cu: goto label_1b8d5c;
        case 0x1b8d60u: goto label_1b8d60;
        case 0x1b8d64u: goto label_1b8d64;
        case 0x1b8d68u: goto label_1b8d68;
        case 0x1b8d6cu: goto label_1b8d6c;
        default: break;
    }

    ctx->pc = 0x1b8ca0u;

label_1b8ca0:
    // 0x1b8ca0: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1b8ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1b8ca4:
    // 0x1b8ca4: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x1b8ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1b8ca8:
    // 0x1b8ca8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1b8ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1b8cac:
    // 0x1b8cac: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1b8cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1b8cb0:
    // 0x1b8cb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b8cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1b8cb4:
    // 0x1b8cb4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b8cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1b8cb8:
    // 0x1b8cb8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1b8cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1b8cbc:
    // 0x1b8cbc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1b8cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1b8cc0:
    // 0x1b8cc0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b8cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1b8cc4:
    // 0x1b8cc4: 0xac651fb0  sw          $a1, 0x1FB0($v1)
    ctx->pc = 0x1b8cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8112), GPR_U32(ctx, 5));
label_1b8cc8:
    // 0x1b8cc8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1b8cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1b8ccc:
    // 0x1b8ccc: 0x3e00008  jr          $ra
label_1b8cd0:
    if (ctx->pc == 0x1B8CD0u) {
        ctx->pc = 0x1B8CD0u;
            // 0x1b8cd0: 0xac8613d0  sw          $a2, 0x13D0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 5072), GPR_U32(ctx, 6));
        ctx->pc = 0x1B8CD4u;
        goto label_1b8cd4;
    }
    ctx->pc = 0x1B8CCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8CCCu;
            // 0x1b8cd0: 0xac8613d0  sw          $a2, 0x13D0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 5072), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B8CD4u;
label_1b8cd4:
    // 0x1b8cd4: 0x0  nop
    ctx->pc = 0x1b8cd4u;
    // NOP
label_1b8cd8:
    // 0x1b8cd8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b8cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b8cdc:
    // 0x1b8cdc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b8cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1b8ce0:
    // 0x1b8ce0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b8ce0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b8ce4:
    // 0x1b8ce4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b8ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1b8ce8:
    // 0x1b8ce8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b8ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8cec:
    // 0x1b8cec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b8cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1b8cf0:
    // 0x1b8cf0: 0x26501fa0  addiu       $s0, $s2, 0x1FA0
    ctx->pc = 0x1b8cf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 8096));
label_1b8cf4:
    // 0x1b8cf4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b8cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1b8cf8:
    // 0x1b8cf8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b8cf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8cfc:
    // 0x1b8cfc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b8cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1b8d00:
    // 0x1b8d00: 0x59880  sll         $s3, $a1, 2
    ctx->pc = 0x1b8d00u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1b8d04:
    // 0x1b8d04: 0x0  nop
    ctx->pc = 0x1b8d04u;
    // NOP
label_1b8d08:
    // 0x1b8d08: 0x2a220009  slti        $v0, $s1, 0x9
    ctx->pc = 0x1b8d08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
label_1b8d0c:
    // 0x1b8d0c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1b8d10:
    if (ctx->pc == 0x1B8D10u) {
        ctx->pc = 0x1B8D10u;
            // 0x1b8d10: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x1B8D14u;
        goto label_1b8d14;
    }
    ctx->pc = 0x1B8D0Cu;
    {
        const bool branch_taken_0x1b8d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8D0Cu;
            // 0x1b8d10: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8d0c) {
            ctx->pc = 0x1B8D50u;
            goto label_1b8d50;
        }
    }
    ctx->pc = 0x1B8D14u;
label_1b8d14:
    // 0x1b8d14: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1b8d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1b8d18:
    // 0x1b8d18: 0x26100044  addiu       $s0, $s0, 0x44
    ctx->pc = 0x1b8d18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
label_1b8d1c:
    // 0x1b8d1c: 0x0  nop
    ctx->pc = 0x1b8d1cu;
    // NOP
label_1b8d20:
    // 0x1b8d20: 0x0  nop
    ctx->pc = 0x1b8d20u;
    // NOP
label_1b8d24:
    // 0x1b8d24: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
label_1b8d28:
    if (ctx->pc == 0x1B8D28u) {
        ctx->pc = 0x1B8D28u;
            // 0x1b8d28: 0x2621821  addu        $v1, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->pc = 0x1B8D2Cu;
        goto label_1b8d2c;
    }
    ctx->pc = 0x1B8D24u;
    {
        const bool branch_taken_0x1b8d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8D24u;
            // 0x1b8d28: 0x2621821  addu        $v1, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8d24) {
            ctx->pc = 0x1B8D08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b8d08;
        }
    }
    ctx->pc = 0x1B8D2Cu;
label_1b8d2c:
    // 0x1b8d2c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b8d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1b8d30:
    // 0x1b8d30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b8d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b8d34:
    // 0x1b8d34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b8d34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8d38:
    // 0x1b8d38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b8d38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8d3c:
    // 0x1b8d3c: 0x40f809  jalr        $v0
label_1b8d40:
    if (ctx->pc == 0x1B8D40u) {
        ctx->pc = 0x1B8D40u;
            // 0x1b8d40: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B8D44u;
        goto label_1b8d44;
    }
    ctx->pc = 0x1B8D3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B8D44u);
        ctx->pc = 0x1B8D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8D3Cu;
            // 0x1b8d40: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B8D44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B8D44u; }
            if (ctx->pc != 0x1B8D44u) { return; }
        }
        }
    }
    ctx->pc = 0x1B8D44u;
label_1b8d44:
    // 0x1b8d44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b8d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b8d48:
    // 0x1b8d48: 0x1080fff0  beqz        $a0, . + 4 + (-0x10 << 2)
label_1b8d4c:
    if (ctx->pc == 0x1B8D4Cu) {
        ctx->pc = 0x1B8D4Cu;
            // 0x1b8d4c: 0x2a220009  slti        $v0, $s1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->pc = 0x1B8D50u;
        goto label_1b8d50;
    }
    ctx->pc = 0x1B8D48u;
    {
        const bool branch_taken_0x1b8d48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8D48u;
            // 0x1b8d4c: 0x2a220009  slti        $v0, $s1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8d48) {
            ctx->pc = 0x1B8D0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b8d0c;
        }
    }
    ctx->pc = 0x1B8D50u;
label_1b8d50:
    // 0x1b8d50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b8d50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b8d54:
    // 0x1b8d54: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1b8d54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b8d58:
    // 0x1b8d58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b8d58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1b8d5c:
    // 0x1b8d5c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b8d5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b8d60:
    // 0x1b8d60: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b8d60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1b8d64:
    // 0x1b8d64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b8d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b8d68:
    // 0x1b8d68: 0x3e00008  jr          $ra
label_1b8d6c:
    if (ctx->pc == 0x1B8D6Cu) {
        ctx->pc = 0x1B8D6Cu;
            // 0x1b8d6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1B8D70u;
        goto label_fallthrough_0x1b8d68;
    }
    ctx->pc = 0x1B8D68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8D68u;
            // 0x1b8d6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1b8d68:
    ctx->pc = 0x1B8D70u;
}
