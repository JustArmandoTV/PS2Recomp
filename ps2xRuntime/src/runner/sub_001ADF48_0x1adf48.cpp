#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ADF48
// Address: 0x1adf48 - 0x1adfa8
void sub_001ADF48_0x1adf48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ADF48_0x1adf48");
#endif

    ctx->pc = 0x1adf48u;

    // 0x1adf48: 0x8c822030  lw          $v0, 0x2030($a0)
    ctx->pc = 0x1adf48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8240)));
    // 0x1adf4c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1adf4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adf50: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1adf50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1adf54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1adf54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adf58: 0x8c450074  lw          $a1, 0x74($v0)
    ctx->pc = 0x1adf58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x1adf5c: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1ADF5Cu;
    {
        const bool branch_taken_0x1adf5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1ADF60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADF5Cu;
            // 0x1adf60: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adf5c) {
            ctx->pc = 0x1ADF90u;
            goto label_1adf90;
        }
    }
    ctx->pc = 0x1ADF64u;
    // 0x1adf64: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1ADF64u;
    {
        const bool branch_taken_0x1adf64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADF64u;
            // 0x1adf68: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adf64) {
            ctx->pc = 0x1ADF9Cu;
            goto label_1adf9c;
        }
    }
    ctx->pc = 0x1ADF6Cu;
    // 0x1adf6c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1adf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1adf70: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1ADF70u;
    {
        const bool branch_taken_0x1adf70 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ADF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADF70u;
            // 0x1adf74: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adf70) {
            ctx->pc = 0x1ADF9Cu;
            goto label_1adf9c;
        }
    }
    ctx->pc = 0x1ADF78u;
    // 0x1adf78: 0x2482fffe  addiu       $v0, $a0, -0x2
    ctx->pc = 0x1adf78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x1adf7c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1adf7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1adf80: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ADF80u;
    {
        const bool branch_taken_0x1adf80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1adf80) {
            ctx->pc = 0x1ADF84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADF80u;
            // 0x1adf84: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ADF98u;
            goto label_1adf98;
        }
    }
    ctx->pc = 0x1ADF88u;
    // 0x1adf88: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADF88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADF88u;
            // 0x1adf8c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ADF90u;
label_1adf90:
    // 0x1adf90: 0x851026  xor         $v0, $a0, $a1
    ctx->pc = 0x1adf90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
    // 0x1adf94: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x1adf94u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1adf98:
    // 0x1adf98: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1adf98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1adf9c:
    // 0x1adf9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADF9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ADFA4u;
    // 0x1adfa4: 0x0  nop
    ctx->pc = 0x1adfa4u;
    // NOP
}
