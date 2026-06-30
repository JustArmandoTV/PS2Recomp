#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C6D40
// Address: 0x1c6d40 - 0x1c6d78
void sub_001C6D40_0x1c6d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6D40_0x1c6d40");
#endif

    ctx->pc = 0x1c6d40u;

    // 0x1c6d40: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1c6d40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1c6d44: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x1c6d44u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
    // 0x1c6d48: 0x2482ff9f  addiu       $v0, $a0, -0x61
    ctx->pc = 0x1c6d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967199));
    // 0x1c6d4c: 0x2483ffe0  addiu       $v1, $a0, -0x20
    ctx->pc = 0x1c6d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x1c6d50: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x1c6d50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x1c6d54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6D54u;
    {
        const bool branch_taken_0x1c6d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6D54u;
            // 0x1c6d58: 0x31e00  sll         $v1, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6d54) {
            ctx->pc = 0x1C6D68u;
            goto label_1c6d68;
        }
    }
    ctx->pc = 0x1C6D5Cu;
    // 0x1c6d5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6D5Cu;
    {
        const bool branch_taken_0x1c6d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6D5Cu;
            // 0x1c6d60: 0x32603  sra         $a0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6d5c) {
            ctx->pc = 0x1C6D70u;
            goto label_1c6d70;
        }
    }
    ctx->pc = 0x1C6D64u;
    // 0x1c6d64: 0x0  nop
    ctx->pc = 0x1c6d64u;
    // NOP
label_1c6d68:
    // 0x1c6d68: 0x3882002e  xori        $v0, $a0, 0x2E
    ctx->pc = 0x1c6d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)46);
    // 0x1c6d6c: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x1c6d6cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_1c6d70:
    // 0x1c6d70: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6D70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6D70u;
            // 0x1c6d74: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C6D78u;
}
