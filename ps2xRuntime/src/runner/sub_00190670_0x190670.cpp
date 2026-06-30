#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00190670
// Address: 0x190670 - 0x190738
void sub_00190670_0x190670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190670_0x190670");
#endif

    switch (ctx->pc) {
        case 0x190680u: goto label_190680;
        case 0x1906a8u: goto label_1906a8;
        default: break;
    }

    ctx->pc = 0x190670u;

    // 0x190670: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x190670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x190674: 0x30c3000f  andi        $v1, $a2, 0xF
    ctx->pc = 0x190674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x190678: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x190678u;
    {
        const bool branch_taken_0x190678 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19067Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190678u;
            // 0x19067c: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190678) {
            ctx->pc = 0x19069Cu;
            goto label_19069c;
        }
    }
    ctx->pc = 0x190680u;
label_190680:
    // 0x190680: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x190680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x190684: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x190684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x190688: 0x0  nop
    ctx->pc = 0x190688u;
    // NOP
    // 0x19068c: 0x0  nop
    ctx->pc = 0x19068cu;
    // NOP
    // 0x190690: 0x0  nop
    ctx->pc = 0x190690u;
    // NOP
    // 0x190694: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x190694u;
    {
        const bool branch_taken_0x190694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x190698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190694u;
            // 0x190698: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190694) {
            ctx->pc = 0x190680u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_190680;
        }
    }
    ctx->pc = 0x19069Cu;
label_19069c:
    // 0x19069c: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x19069cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x1906a0: 0x10c00023  beqz        $a2, . + 4 + (0x23 << 2)
    ctx->pc = 0x1906A0u;
    {
        const bool branch_taken_0x1906a0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1906a0) {
            ctx->pc = 0x190730u;
            goto label_190730;
        }
    }
    ctx->pc = 0x1906A8u;
label_1906a8:
    // 0x1906a8: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1906a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1906ac: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1906acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1906b0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1906b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1906b4: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1906b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1906b8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1906b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1906bc: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1906bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1906c0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1906c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1906c4: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1906c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1906c8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1906c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1906cc: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1906ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1906d0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1906d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1906d4: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1906d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1906d8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1906d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1906dc: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1906dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1906e0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1906e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1906e4: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1906e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1906e8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1906e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1906ec: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1906ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1906f0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1906f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1906f4: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1906f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1906f8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1906f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1906fc: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x1906fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x190700: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x190700u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x190704: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x190704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x190708: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x190708u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x19070c: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x19070cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x190710: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x190710u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x190714: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x190714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x190718: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x190718u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x19071c: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x19071cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x190720: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x190720u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x190724: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x190724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x190728: 0x14c0ffdf  bnez        $a2, . + 4 + (-0x21 << 2)
    ctx->pc = 0x190728u;
    {
        const bool branch_taken_0x190728 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x19072Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190728u;
            // 0x19072c: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190728) {
            ctx->pc = 0x1906A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1906a8;
        }
    }
    ctx->pc = 0x190730u;
label_190730:
    // 0x190730: 0x3e00008  jr          $ra
    ctx->pc = 0x190730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x190738u;
}
