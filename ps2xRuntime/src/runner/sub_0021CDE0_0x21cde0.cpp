#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021CDE0
// Address: 0x21cde0 - 0x21ce40
void sub_0021CDE0_0x21cde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021CDE0_0x21cde0");
#endif

    ctx->pc = 0x21cde0u;

    // 0x21cde0: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x21cde0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21cde4: 0x2403001a  addiu       $v1, $zero, 0x1A
    ctx->pc = 0x21cde4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x21cde8: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x21CDE8u;
    {
        const bool branch_taken_0x21cde8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x21CDECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21CDE8u;
            // 0x21cdec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cde8) {
            ctx->pc = 0x21CE28u;
            goto label_21ce28;
        }
    }
    ctx->pc = 0x21CDF0u;
    // 0x21cdf0: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x21cdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x21cdf4: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x21CDF4u;
    {
        const bool branch_taken_0x21cdf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x21cdf4) {
            ctx->pc = 0x21CDF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21CDF4u;
            // 0x21cdf8: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21CE1Cu;
            goto label_21ce1c;
        }
    }
    ctx->pc = 0x21CDFCu;
    // 0x21cdfc: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x21cdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x21ce00: 0x5083000c  beql        $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x21CE00u;
    {
        const bool branch_taken_0x21ce00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x21ce00) {
            ctx->pc = 0x21CE04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21CE00u;
            // 0x21ce04: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x21CE34u;
            goto label_21ce34;
        }
    }
    ctx->pc = 0x21CE08u;
    // 0x21ce08: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x21ce08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x21ce0c: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x21CE0Cu;
    {
        const bool branch_taken_0x21ce0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x21ce0c) {
            ctx->pc = 0x21CE10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21CE0Cu;
            // 0x21ce10: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x21CE34u;
            goto label_21ce34;
        }
    }
    ctx->pc = 0x21CE14u;
    // 0x21ce14: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x21CE14u;
    {
        const bool branch_taken_0x21ce14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ce14) {
            ctx->pc = 0x21CE34u;
            goto label_21ce34;
        }
    }
    ctx->pc = 0x21CE1Cu;
label_21ce1c:
    // 0x21ce1c: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x21ce1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x21ce20: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21CE20u;
    {
        const bool branch_taken_0x21ce20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21CE20u;
            // 0x21ce24: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ce20) {
            ctx->pc = 0x21CE34u;
            goto label_21ce34;
        }
    }
    ctx->pc = 0x21CE28u;
label_21ce28:
    // 0x21ce28: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x21ce28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x21ce2c: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x21ce2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x21ce30: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x21ce30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_21ce34:
    // 0x21ce34: 0x3e00008  jr          $ra
    ctx->pc = 0x21CE34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21CE3Cu;
    // 0x21ce3c: 0x0  nop
    ctx->pc = 0x21ce3cu;
    // NOP
}
