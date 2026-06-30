#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019ECE8
// Address: 0x19ece8 - 0x19ed58
void sub_0019ECE8_0x19ece8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019ECE8_0x19ece8");
#endif

    switch (ctx->pc) {
        case 0x19ed40u: goto label_19ed40;
        default: break;
    }

    ctx->pc = 0x19ece8u;

    // 0x19ece8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19ece8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19ecec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19ececu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19ecf0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19ecf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19ecf4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x19ecf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ecf8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19ecf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19ecfc: 0x8c83009c  lw          $v1, 0x9C($a0)
    ctx->pc = 0x19ecfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x19ed00: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19ED00u;
    {
        const bool branch_taken_0x19ed00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19ED04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19ED00u;
            // 0x19ed04: 0x2c640003  sltiu       $a0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ed00) {
            ctx->pc = 0x19ED30u;
            goto label_19ed30;
        }
    }
    ctx->pc = 0x19ED08u;
    // 0x19ed08: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x19ED08u;
    {
        const bool branch_taken_0x19ed08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ed08) {
            ctx->pc = 0x19ED0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19ED08u;
            // 0x19ed0c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19ED20u;
            goto label_19ed20;
        }
    }
    ctx->pc = 0x19ED10u;
    // 0x19ed10: 0x1070000c  beq         $v1, $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x19ED10u;
    {
        const bool branch_taken_0x19ed10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x19ED14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19ED10u;
            // 0x19ed14: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ed10) {
            ctx->pc = 0x19ED44u;
            goto label_19ed44;
        }
    }
    ctx->pc = 0x19ED18u;
    // 0x19ed18: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19ED18u;
    {
        const bool branch_taken_0x19ed18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ED1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19ED18u;
            // 0x19ed1c: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ed18) {
            ctx->pc = 0x19ED38u;
            goto label_19ed38;
        }
    }
    ctx->pc = 0x19ED20u;
label_19ed20:
    // 0x19ed20: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19ED20u;
    {
        const bool branch_taken_0x19ed20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19ed20) {
            ctx->pc = 0x19ED24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19ED20u;
            // 0x19ed24: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19ED40u;
            goto label_19ed40;
        }
    }
    ctx->pc = 0x19ED28u;
    // 0x19ed28: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19ED28u;
    {
        const bool branch_taken_0x19ed28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ED2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19ED28u;
            // 0x19ed2c: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ed28) {
            ctx->pc = 0x19ED38u;
            goto label_19ed38;
        }
    }
    ctx->pc = 0x19ED30u;
label_19ed30:
    // 0x19ed30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19ED30u;
    {
        const bool branch_taken_0x19ed30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ED34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19ED30u;
            // 0x19ed34: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ed30) {
            ctx->pc = 0x19ED40u;
            goto label_19ed40;
        }
    }
    ctx->pc = 0x19ED38u;
label_19ed38:
    // 0x19ed38: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x19ED38u;
    SET_GPR_U32(ctx, 31, 0x19ED40u);
    ctx->pc = 0x19ED3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19ED38u;
            // 0x19ed3c: 0x24849e88  addiu       $a0, $a0, -0x6178 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ED40u; }
        if (ctx->pc != 0x19ED40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ED40u; }
        if (ctx->pc != 0x19ED40u) { return; }
    }
    ctx->pc = 0x19ED40u;
label_19ed40:
    // 0x19ed40: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19ed40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19ed44:
    // 0x19ed44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19ed44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ed48: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19ed48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19ed4c: 0x3e00008  jr          $ra
    ctx->pc = 0x19ED4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19ED50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19ED4Cu;
            // 0x19ed50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19ED54u;
    // 0x19ed54: 0x0  nop
    ctx->pc = 0x19ed54u;
    // NOP
}
