#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029D000
// Address: 0x29d000 - 0x29d080
void sub_0029D000_0x29d000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D000_0x29d000");
#endif

    switch (ctx->pc) {
        case 0x29d034u: goto label_29d034;
        default: break;
    }

    ctx->pc = 0x29d000u;

    // 0x29d000: 0x3c029e37  lui         $v0, 0x9E37
    ctx->pc = 0x29d000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40503 << 16));
    // 0x29d004: 0x51902  srl         $v1, $a1, 4
    ctx->pc = 0x29d004u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x29d008: 0x344279b1  ori         $v0, $v0, 0x79B1
    ctx->pc = 0x29d008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31153);
    // 0x29d00c: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x29d00cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29d010: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x29d010u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x29d014: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x29d014u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29d018: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x29d018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x29d01c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x29d01cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29d020: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x29d020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x29d024: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x29d024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29d028: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x29D028u;
    {
        const bool branch_taken_0x29d028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d028) {
            ctx->pc = 0x29D068u;
            goto label_29d068;
        }
    }
    ctx->pc = 0x29D030u;
    // 0x29d030: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x29d030u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_29d034:
    // 0x29d034: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x29d034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x29d038: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x29d038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29d03c: 0x54a30003  bnel        $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29D03Cu;
    {
        const bool branch_taken_0x29d03c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x29d03c) {
            ctx->pc = 0x29D040u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29D03Cu;
            // 0x29d040: 0x24430001  addiu       $v1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29D04Cu;
            goto label_29d04c;
        }
    }
    ctx->pc = 0x29D044u;
    // 0x29d044: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x29D044u;
    {
        const bool branch_taken_0x29d044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d044) {
            ctx->pc = 0x29D06Cu;
            goto label_29d06c;
        }
    }
    ctx->pc = 0x29D04Cu;
label_29d04c:
    // 0x29d04c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x29d04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29d050: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x29d050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x29d054: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x29d054u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29d058: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x29d058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x29d05c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x29d05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29d060: 0x5460fff4  bnel        $v1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x29D060u;
    {
        const bool branch_taken_0x29d060 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d060) {
            ctx->pc = 0x29D064u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29D060u;
            // 0x29d064: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29D034u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29d034;
        }
    }
    ctx->pc = 0x29D068u;
label_29d068:
    // 0x29d068: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x29d068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_29d06c:
    // 0x29d06c: 0x3e00008  jr          $ra
    ctx->pc = 0x29D06Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29D074u;
    // 0x29d074: 0x0  nop
    ctx->pc = 0x29d074u;
    // NOP
    // 0x29d078: 0x0  nop
    ctx->pc = 0x29d078u;
    // NOP
    // 0x29d07c: 0x0  nop
    ctx->pc = 0x29d07cu;
    // NOP
}
