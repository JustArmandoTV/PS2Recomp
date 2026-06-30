#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B3AD8
// Address: 0x1b3ad8 - 0x1b3b18
void sub_001B3AD8_0x1b3ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3AD8_0x1b3ad8");
#endif

    switch (ctx->pc) {
        case 0x1b3ad8u: goto label_1b3ad8;
        case 0x1b3adcu: goto label_1b3adc;
        case 0x1b3ae0u: goto label_1b3ae0;
        case 0x1b3ae4u: goto label_1b3ae4;
        case 0x1b3ae8u: goto label_1b3ae8;
        case 0x1b3aecu: goto label_1b3aec;
        case 0x1b3af0u: goto label_1b3af0;
        case 0x1b3af4u: goto label_1b3af4;
        case 0x1b3af8u: goto label_1b3af8;
        case 0x1b3afcu: goto label_1b3afc;
        case 0x1b3b00u: goto label_1b3b00;
        case 0x1b3b04u: goto label_1b3b04;
        case 0x1b3b08u: goto label_1b3b08;
        case 0x1b3b0cu: goto label_1b3b0c;
        case 0x1b3b10u: goto label_1b3b10;
        case 0x1b3b14u: goto label_1b3b14;
        default: break;
    }

    ctx->pc = 0x1b3ad8u;

label_1b3ad8:
    // 0x1b3ad8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b3ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b3adc:
    // 0x1b3adc: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1b3adcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1b3ae0:
    // 0x1b3ae0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b3ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b3ae4:
    // 0x1b3ae4: 0x24860950  addiu       $a2, $a0, 0x950
    ctx->pc = 0x1b3ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 2384));
label_1b3ae8:
    // 0x1b3ae8: 0x8c820950  lw          $v0, 0x950($a0)
    ctx->pc = 0x1b3ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2384)));
label_1b3aec:
    // 0x1b3aec: 0x8c870d5c  lw          $a3, 0xD5C($a0)
    ctx->pc = 0x1b3aecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3420)));
label_1b3af0:
    // 0x1b3af0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1b3af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1b3af4:
    // 0x1b3af4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1b3af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1b3af8:
    // 0x1b3af8: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
label_1b3afc:
    if (ctx->pc == 0x1B3AFCu) {
        ctx->pc = 0x1B3AFCu;
            // 0x1b3afc: 0xac820950  sw          $v0, 0x950($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2384), GPR_U32(ctx, 2));
        ctx->pc = 0x1B3B00u;
        goto label_1b3b00;
    }
    ctx->pc = 0x1B3AF8u;
    {
        const bool branch_taken_0x1b3af8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3AF8u;
            // 0x1b3afc: 0xac820950  sw          $v0, 0x950($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2384), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3af8) {
            ctx->pc = 0x1B3B08u;
            goto label_1b3b08;
        }
    }
    ctx->pc = 0x1B3B00u;
label_1b3b00:
    // 0x1b3b00: 0xe0f809  jalr        $a3
label_1b3b04:
    if (ctx->pc == 0x1B3B04u) {
        ctx->pc = 0x1B3B04u;
            // 0x1b3b04: 0x8c840d60  lw          $a0, 0xD60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3424)));
        ctx->pc = 0x1B3B08u;
        goto label_1b3b08;
    }
    ctx->pc = 0x1B3B00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x1B3B08u);
        ctx->pc = 0x1B3B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3B00u;
            // 0x1b3b04: 0x8c840d60  lw          $a0, 0xD60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3424)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B3B08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B3B08u; }
            if (ctx->pc != 0x1B3B08u) { return; }
        }
        }
    }
    ctx->pc = 0x1B3B08u;
label_1b3b08:
    // 0x1b3b08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b3b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b3b0c:
    // 0x1b3b0c: 0x3e00008  jr          $ra
label_1b3b10:
    if (ctx->pc == 0x1B3B10u) {
        ctx->pc = 0x1B3B10u;
            // 0x1b3b10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1B3B14u;
        goto label_1b3b14;
    }
    ctx->pc = 0x1B3B0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3B0Cu;
            // 0x1b3b10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B3B14u;
label_1b3b14:
    // 0x1b3b14: 0x0  nop
    ctx->pc = 0x1b3b14u;
    // NOP
}
