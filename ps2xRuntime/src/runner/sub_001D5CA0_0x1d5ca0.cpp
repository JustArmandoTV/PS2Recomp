#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D5CA0
// Address: 0x1d5ca0 - 0x1d5d00
void sub_001D5CA0_0x1d5ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5CA0_0x1d5ca0");
#endif

    ctx->pc = 0x1d5ca0u;

    // 0x1d5ca0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1d5ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1d5ca4: 0x8c430550  lw          $v1, 0x550($v0)
    ctx->pc = 0x1d5ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1360)));
    // 0x1d5ca8: 0x8062010d  lb          $v0, 0x10D($v1)
    ctx->pc = 0x1d5ca8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 269)));
    // 0x1d5cac: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x1d5cacu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1d5cb0: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5CB0u;
    {
        const bool branch_taken_0x1d5cb0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5cb0) {
            ctx->pc = 0x1D5CB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5CB0u;
            // 0x1d5cb4: 0x8063010f  lb          $v1, 0x10F($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 271)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D5CC0u;
            goto label_1d5cc0;
        }
    }
    ctx->pc = 0x1D5CB8u;
    // 0x1d5cb8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1D5CB8u;
    {
        const bool branch_taken_0x1d5cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5CB8u;
            // 0x1d5cbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5cb8) {
            ctx->pc = 0x1D5CF0u;
            goto label_1d5cf0;
        }
    }
    ctx->pc = 0x1D5CC0u;
label_1d5cc0:
    // 0x1d5cc0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1d5cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d5cc4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1d5cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1d5cc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d5cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5ccc: 0x306400e0  andi        $a0, $v1, 0xE0
    ctx->pc = 0x1d5cccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)224);
    // 0x1d5cd0: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x1d5cd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1d5cd4: 0x621804  sllv        $v1, $v0, $v1
    ctx->pc = 0x1d5cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x1d5cd8: 0x41142  srl         $v0, $a0, 5
    ctx->pc = 0x1d5cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x1d5cdc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d5cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d5ce0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1d5ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1d5ce4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d5ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d5ce8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d5ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d5cec: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d5cecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1d5cf0:
    // 0x1d5cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5CF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D5CF8u;
    // 0x1d5cf8: 0x0  nop
    ctx->pc = 0x1d5cf8u;
    // NOP
    // 0x1d5cfc: 0x0  nop
    ctx->pc = 0x1d5cfcu;
    // NOP
}
