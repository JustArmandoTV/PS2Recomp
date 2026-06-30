#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C6A48
// Address: 0x1c6a48 - 0x1c6a70
void sub_001C6A48_0x1c6a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6A48_0x1c6a48");
#endif

    ctx->pc = 0x1c6a48u;

    // 0x1c6a48: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1c6a48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1c6a4c: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x1c6a4cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
    // 0x1c6a50: 0x2482ff9f  addiu       $v0, $a0, -0x61
    ctx->pc = 0x1c6a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967199));
    // 0x1c6a54: 0x2483ffe0  addiu       $v1, $a0, -0x20
    ctx->pc = 0x1c6a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x1c6a58: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x1c6a58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x1c6a5c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C6A5Cu;
    {
        const bool branch_taken_0x1c6a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6A5Cu;
            // 0x1c6a60: 0x31e00  sll         $v1, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6a5c) {
            ctx->pc = 0x1C6A68u;
            goto label_1c6a68;
        }
    }
    ctx->pc = 0x1C6A64u;
    // 0x1c6a64: 0x32603  sra         $a0, $v1, 24
    ctx->pc = 0x1c6a64u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 24));
label_1c6a68:
    // 0x1c6a68: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6A68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6A68u;
            // 0x1c6a6c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C6A70u;
}
