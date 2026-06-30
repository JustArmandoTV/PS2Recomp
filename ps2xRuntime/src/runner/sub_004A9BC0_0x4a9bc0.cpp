#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A9BC0
// Address: 0x4a9bc0 - 0x4a9c30
void sub_004A9BC0_0x4a9bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A9BC0_0x4a9bc0");
#endif

    ctx->pc = 0x4a9bc0u;

    // 0x4a9bc0: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x4a9bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x4a9bc4: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x4a9bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4a9bc8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x4a9bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a9bcc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A9BCCu;
    {
        const bool branch_taken_0x4a9bcc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4A9BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9BCCu;
            // 0x4a9bd0: 0x21883  sra         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9bcc) {
            ctx->pc = 0x4A9BDCu;
            goto label_4a9bdc;
        }
    }
    ctx->pc = 0x4A9BD4u;
    // 0x4a9bd4: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x4a9bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x4a9bd8: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x4a9bd8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_4a9bdc:
    // 0x4a9bdc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x4a9bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x4a9be0: 0x5462000f  bnel        $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4A9BE0u;
    {
        const bool branch_taken_0x4a9be0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4a9be0) {
            ctx->pc = 0x4A9BE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9BE0u;
            // 0x4a9be4: 0x8c830010  lw          $v1, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A9C20u;
            goto label_4a9c20;
        }
    }
    ctx->pc = 0x4A9BE8u;
    // 0x4a9be8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4a9be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a9bec: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4a9becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4a9bf0: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A9BF0u;
    {
        const bool branch_taken_0x4a9bf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4a9bf0) {
            ctx->pc = 0x4A9BF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9BF0u;
            // 0x4a9bf4: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A9C04u;
            goto label_4a9c04;
        }
    }
    ctx->pc = 0x4A9BF8u;
    // 0x4a9bf8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4a9bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x4a9bfc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4a9bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4a9c00: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4a9c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4a9c04:
    // 0x4a9c04: 0x2462fffc  addiu       $v0, $v1, -0x4
    ctx->pc = 0x4a9c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x4a9c08: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4a9c08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4a9c0c: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x4a9c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
    // 0x4a9c10: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x4a9c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x4a9c14: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x4a9c14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x4a9c18: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x4a9c18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x4a9c1c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x4a9c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_4a9c20:
    // 0x4a9c20: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4a9c20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a9c24: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x4a9c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x4a9c28: 0x3e00008  jr          $ra
    ctx->pc = 0x4A9C28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A9C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A9C28u;
            // 0x4a9c2c: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A9C30u;
}
