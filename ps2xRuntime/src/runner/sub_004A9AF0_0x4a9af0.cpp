#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A9AF0
// Address: 0x4a9af0 - 0x4a9b50
void sub_004A9AF0_0x4a9af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A9AF0_0x4a9af0");
#endif

    ctx->pc = 0x4a9af0u;

    // 0x4a9af0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x4a9af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4a9af4: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x4a9af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4a9af8: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x4a9af8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x4a9afc: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x4a9afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x4a9b00: 0x5462000f  bnel        $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4A9B00u;
    {
        const bool branch_taken_0x4a9b00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4a9b00) {
            ctx->pc = 0x4A9B04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9B00u;
            // 0x4a9b04: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A9B40u;
            goto label_4a9b40;
        }
    }
    ctx->pc = 0x4A9B08u;
    // 0x4a9b08: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4a9b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a9b0c: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x4a9b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4a9b10: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4a9b10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4a9b14: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4a9b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x4a9b18: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A9B18u;
    {
        const bool branch_taken_0x4a9b18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4a9b18) {
            ctx->pc = 0x4A9B1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9B18u;
            // 0x4a9b1c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A9B2Cu;
            goto label_4a9b2c;
        }
    }
    ctx->pc = 0x4A9B20u;
    // 0x4a9b20: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4a9b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4a9b24: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4a9b24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4a9b28: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4a9b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4a9b2c:
    // 0x4a9b2c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4a9b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a9b30: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x4a9b30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x4a9b34: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x4a9b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x4a9b38: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x4a9b38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x4a9b3c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4a9b3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a9b40:
    // 0x4a9b40: 0x3e00008  jr          $ra
    ctx->pc = 0x4A9B40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A9B48u;
    // 0x4a9b48: 0x0  nop
    ctx->pc = 0x4a9b48u;
    // NOP
    // 0x4a9b4c: 0x0  nop
    ctx->pc = 0x4a9b4cu;
    // NOP
}
