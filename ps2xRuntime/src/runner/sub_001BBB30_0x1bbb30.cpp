#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BBB30
// Address: 0x1bbb30 - 0x1bbbb8
void sub_001BBB30_0x1bbb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BBB30_0x1bbb30");
#endif

    switch (ctx->pc) {
        case 0x1bbb70u: goto label_1bbb70;
        default: break;
    }

    ctx->pc = 0x1bbb30u;

    // 0x1bbb30: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x1bbb30u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bbb34: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x1bbb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x1bbb38: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1BBB38u;
    {
        const bool branch_taken_0x1bbb38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BBB3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBB38u;
            // 0x1bbb3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbb38) {
            ctx->pc = 0x1BBBACu;
            goto label_1bbbac;
        }
    }
    ctx->pc = 0x1BBB40u;
    // 0x1bbb40: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1bbb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1bbb44: 0x5062001a  beql        $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1BBB44u;
    {
        const bool branch_taken_0x1bbb44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bbb44) {
            ctx->pc = 0x1BBB48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBB44u;
            // 0x1bbb48: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BBBB0u;
            goto label_1bbbb0;
        }
    }
    ctx->pc = 0x1BBB4Cu;
    // 0x1bbb4c: 0x50600018  beql        $v1, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1BBB4Cu;
    {
        const bool branch_taken_0x1bbb4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbb4c) {
            ctx->pc = 0x1BBB50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBB4Cu;
            // 0x1bbb50: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BBBB0u;
            goto label_1bbbb0;
        }
    }
    ctx->pc = 0x1BBB54u;
    // 0x1bbb54: 0x2462ffd0  addiu       $v0, $v1, -0x30
    ctx->pc = 0x1bbb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x1bbb58: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x1bbb58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1bbb5c: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1BBB5Cu;
    {
        const bool branch_taken_0x1bbb5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbb5c) {
            ctx->pc = 0x1BBB60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBB5Cu;
            // 0x1bbb60: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BBBB0u;
            goto label_1bbbb0;
        }
    }
    ctx->pc = 0x1BBB64u;
    // 0x1bbb64: 0x2408002e  addiu       $t0, $zero, 0x2E
    ctx->pc = 0x1bbb64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x1bbb68: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x1bbb68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1bbb6c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1bbb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1bbb70:
    // 0x1bbb70: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1bbb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1bbb74: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1bbb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1bbb78: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1bbb78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1bbb7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bbb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bbb80: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x1bbb80u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bbb84: 0x2446ffd0  addiu       $a2, $v0, -0x30
    ctx->pc = 0x1bbb84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x1bbb88: 0x10680008  beq         $v1, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BBB88u;
    {
        const bool branch_taken_0x1bbb88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x1BBB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBB88u;
            // 0x1bbb8c: 0x2462ffd0  addiu       $v0, $v1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbb88) {
            ctx->pc = 0x1BBBACu;
            goto label_1bbbac;
        }
    }
    ctx->pc = 0x1BBB90u;
    // 0x1bbb90: 0x50670007  beql        $v1, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BBB90u;
    {
        const bool branch_taken_0x1bbb90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x1bbb90) {
            ctx->pc = 0x1BBB94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBB90u;
            // 0x1bbb94: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BBBB0u;
            goto label_1bbbb0;
        }
    }
    ctx->pc = 0x1BBB98u;
    // 0x1bbb98: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BBB98u;
    {
        const bool branch_taken_0x1bbb98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbb98) {
            ctx->pc = 0x1BBB9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBB98u;
            // 0x1bbb9c: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BBBB0u;
            goto label_1bbbb0;
        }
    }
    ctx->pc = 0x1BBBA0u;
    // 0x1bbba0: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x1bbba0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1bbba4: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x1BBBA4u;
    {
        const bool branch_taken_0x1bbba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bbba4) {
            ctx->pc = 0x1BBBA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBBA4u;
            // 0x1bbba8: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BBB70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bbb70;
        }
    }
    ctx->pc = 0x1BBBACu;
label_1bbbac:
    // 0x1bbbac: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1bbbacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_1bbbb0:
    // 0x1bbbb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBBB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBBB0u;
            // 0x1bbbb4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BBBB8u;
}
