#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029F160
// Address: 0x29f160 - 0x29f1e0
void sub_0029F160_0x29f160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F160_0x29f160");
#endif

    switch (ctx->pc) {
        case 0x29f180u: goto label_29f180;
        case 0x29f1a0u: goto label_29f1a0;
        default: break;
    }

    ctx->pc = 0x29f160u;

    // 0x29f160: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x29f160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29f164: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x29f164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x29f168: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x29f168u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x29f16c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29f16cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29f170: 0xe33021  addu        $a2, $a3, $v1
    ctx->pc = 0x29f170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x29f174: 0x10e60016  beq         $a3, $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x29F174u;
    {
        const bool branch_taken_0x29f174 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x29F178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F174u;
            // 0x29f178: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f174) {
            ctx->pc = 0x29F1D0u;
            goto label_29f1d0;
        }
    }
    ctx->pc = 0x29F17Cu;
    // 0x29f17c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x29f17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_29f180:
    // 0x29f180: 0x460000f  bltz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x29F180u;
    {
        const bool branch_taken_0x29f180 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x29f180) {
            ctx->pc = 0x29F1C0u;
            goto label_29f1c0;
        }
    }
    ctx->pc = 0x29F188u;
    // 0x29f188: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29f188u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29f18c: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x29f18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x29f190: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x29f190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29f194: 0x460000a  bltz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x29F194u;
    {
        const bool branch_taken_0x29f194 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x29f194) {
            ctx->pc = 0x29F1C0u;
            goto label_29f1c0;
        }
    }
    ctx->pc = 0x29F19Cu;
    // 0x29f19c: 0x0  nop
    ctx->pc = 0x29f19cu;
    // NOP
label_29f1a0:
    // 0x29f1a0: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x29f1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x29f1a4: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x29f1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29f1a8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x29f1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29f1ac: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x29f1acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29f1b0: 0xe51821  addu        $v1, $a3, $a1
    ctx->pc = 0x29f1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x29f1b4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x29f1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29f1b8: 0x461fff9  bgez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x29F1B8u;
    {
        const bool branch_taken_0x29f1b8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x29f1b8) {
            ctx->pc = 0x29F1A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29f1a0;
        }
    }
    ctx->pc = 0x29F1C0u;
label_29f1c0:
    // 0x29f1c0: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x29f1c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x29f1c4: 0x5506ffee  bnel        $t0, $a2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x29F1C4u;
    {
        const bool branch_taken_0x29f1c4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 6));
        if (branch_taken_0x29f1c4) {
            ctx->pc = 0x29F1C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29F1C4u;
            // 0x29f1c8: 0x8d030000  lw          $v1, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29F180u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29f180;
        }
    }
    ctx->pc = 0x29F1CCu;
    // 0x29f1cc: 0x0  nop
    ctx->pc = 0x29f1ccu;
    // NOP
label_29f1d0:
    // 0x29f1d0: 0x3e00008  jr          $ra
    ctx->pc = 0x29F1D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29F1D8u;
    // 0x29f1d8: 0x0  nop
    ctx->pc = 0x29f1d8u;
    // NOP
    // 0x29f1dc: 0x0  nop
    ctx->pc = 0x29f1dcu;
    // NOP
}
