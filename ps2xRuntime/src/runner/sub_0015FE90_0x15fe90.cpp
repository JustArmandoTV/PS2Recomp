#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015FE90
// Address: 0x15fe90 - 0x15ff20
void sub_0015FE90_0x15fe90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015FE90_0x15fe90");
#endif

    switch (ctx->pc) {
        case 0x15feacu: goto label_15feac;
        case 0x15fee8u: goto label_15fee8;
        default: break;
    }

    ctx->pc = 0x15fe90u;

    // 0x15fe90: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x15fe90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15fe94: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x15fe94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x15fe98: 0x50a0000d  beql        $a1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x15FE98u;
    {
        const bool branch_taken_0x15fe98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fe98) {
            ctx->pc = 0x15FE9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15FE98u;
            // 0x15fe9c: 0x8cc30008  lw          $v1, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15FED0u;
            goto label_15fed0;
        }
    }
    ctx->pc = 0x15FEA0u;
    // 0x15fea0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x15fea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15fea4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x15FEA4u;
    {
        const bool branch_taken_0x15fea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fea4) {
            ctx->pc = 0x15FEC8u;
            goto label_15fec8;
        }
    }
    ctx->pc = 0x15FEACu;
label_15feac:
    // 0x15feac: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x15feacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15feb0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x15feb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15feb4: 0x0  nop
    ctx->pc = 0x15feb4u;
    // NOP
    // 0x15feb8: 0x0  nop
    ctx->pc = 0x15feb8u;
    // NOP
    // 0x15febc: 0x0  nop
    ctx->pc = 0x15febcu;
    // NOP
    // 0x15fec0: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15FEC0u;
    {
        const bool branch_taken_0x15fec0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15fec0) {
            ctx->pc = 0x15FEACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15feac;
        }
    }
    ctx->pc = 0x15FEC8u;
label_15fec8:
    // 0x15fec8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x15FEC8u;
    {
        const bool branch_taken_0x15fec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15FEC8u;
            // 0x15fecc: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fec8) {
            ctx->pc = 0x15FF18u;
            goto label_15ff18;
        }
    }
    ctx->pc = 0x15FED0u;
label_15fed0:
    // 0x15fed0: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x15fed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x15fed4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x15fed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x15fed8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x15fed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15fedc: 0x10c3000a  beq         $a2, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x15FEDCu;
    {
        const bool branch_taken_0x15fedc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x15fedc) {
            ctx->pc = 0x15FF08u;
            goto label_15ff08;
        }
    }
    ctx->pc = 0x15FEE4u;
    // 0x15fee4: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x15fee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_15fee8:
    // 0x15fee8: 0x653024  and         $a2, $v1, $a1
    ctx->pc = 0x15fee8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x15feec: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x15feecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x15fef0: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x15fef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x15fef4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x15fef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x15fef8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x15fef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15fefc: 0x54c3fffa  bnel        $a2, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15FEFCu;
    {
        const bool branch_taken_0x15fefc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x15fefc) {
            ctx->pc = 0x15FF00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15FEFCu;
            // 0x15ff00: 0x8cc30008  lw          $v1, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15FEE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15fee8;
        }
    }
    ctx->pc = 0x15FF04u;
    // 0x15ff04: 0x0  nop
    ctx->pc = 0x15ff04u;
    // NOP
label_15ff08:
    // 0x15ff08: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x15ff08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x15ff0c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x15ff0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x15ff10: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x15ff10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x15ff14: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x15ff14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_15ff18:
    // 0x15ff18: 0x3e00008  jr          $ra
    ctx->pc = 0x15FF18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15FF20u;
}
