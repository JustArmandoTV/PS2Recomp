#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C5108
// Address: 0x1c5108 - 0x1c5170
void sub_001C5108_0x1c5108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5108_0x1c5108");
#endif

    ctx->pc = 0x1c5108u;

    // 0x1c5108: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c5108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c510c: 0x10a2000c  beq         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C510Cu;
    {
        const bool branch_taken_0x1c510c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C5110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C510Cu;
            // 0x1c5110: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c510c) {
            ctx->pc = 0x1C5140u;
            goto label_1c5140;
        }
    }
    ctx->pc = 0x1C5114u;
    // 0x1c5114: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C5114u;
    {
        const bool branch_taken_0x1c5114 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5114u;
            // 0x1c5118: 0x8c44a4d8  lw          $a0, -0x5B28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5114) {
            ctx->pc = 0x1C5130u;
            goto label_1c5130;
        }
    }
    ctx->pc = 0x1C511Cu;
    // 0x1c511c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c511cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c5120: 0x50a2000b  beql        $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C5120u;
    {
        const bool branch_taken_0x1c5120 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c5120) {
            ctx->pc = 0x1C5124u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5120u;
            // 0x1c5124: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C5150u;
            goto label_1c5150;
        }
    }
    ctx->pc = 0x1C5128u;
    // 0x1c5128: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C512Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5128u;
            // 0x1c512c: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C5130u;
label_1c5130:
    // 0x1c5130: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x1c5130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1c5134: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C5134u;
    {
        const bool branch_taken_0x1c5134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5134u;
            // 0x1c5138: 0x30630400  andi        $v1, $v1, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5134) {
            ctx->pc = 0x1C515Cu;
            goto label_1c515c;
        }
    }
    ctx->pc = 0x1C513Cu;
    // 0x1c513c: 0x0  nop
    ctx->pc = 0x1c513cu;
    // NOP
label_1c5140:
    // 0x1c5140: 0x8c44a4d8  lw          $a0, -0x5B28($v0)
    ctx->pc = 0x1c5140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943960)));
    // 0x1c5144: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x1c5144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1c5148: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C5148u;
    {
        const bool branch_taken_0x1c5148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C514Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5148u;
            // 0x1c514c: 0x30630001  andi        $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5148) {
            ctx->pc = 0x1C5160u;
            goto label_1c5160;
        }
    }
    ctx->pc = 0x1C5150u;
label_1c5150:
    // 0x1c5150: 0x8c44a4d8  lw          $a0, -0x5B28($v0)
    ctx->pc = 0x1c5150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943960)));
    // 0x1c5154: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x1c5154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1c5158: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1c5158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_1c515c:
    // 0x1c515c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1c515cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1c5160:
    // 0x1c5160: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1c5160u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1c5164: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5164u;
            // 0x1c5168: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C516Cu;
    // 0x1c516c: 0x0  nop
    ctx->pc = 0x1c516cu;
    // NOP
}
