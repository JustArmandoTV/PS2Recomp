#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029CF70
// Address: 0x29cf70 - 0x29d000
void sub_0029CF70_0x29cf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029CF70_0x29cf70");
#endif

    switch (ctx->pc) {
        case 0x29cfa4u: goto label_29cfa4;
        default: break;
    }

    ctx->pc = 0x29cf70u;

    // 0x29cf70: 0x3c029e37  lui         $v0, 0x9E37
    ctx->pc = 0x29cf70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40503 << 16));
    // 0x29cf74: 0x51902  srl         $v1, $a1, 4
    ctx->pc = 0x29cf74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x29cf78: 0x344279b1  ori         $v0, $v0, 0x79B1
    ctx->pc = 0x29cf78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31153);
    // 0x29cf7c: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x29cf7cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29cf80: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x29cf80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x29cf84: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x29cf84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29cf88: 0x1021824  and         $v1, $t0, $v0
    ctx->pc = 0x29cf88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x29cf8c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x29cf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29cf90: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x29cf90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x29cf94: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x29cf94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29cf98: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x29CF98u;
    {
        const bool branch_taken_0x29cf98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cf98) {
            ctx->pc = 0x29CFE8u;
            goto label_29cfe8;
        }
    }
    ctx->pc = 0x29CFA0u;
    // 0x29cfa0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x29cfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_29cfa4:
    // 0x29cfa4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x29cfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x29cfa8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x29cfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29cfac: 0x54a20006  bnel        $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29CFACu;
    {
        const bool branch_taken_0x29cfac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x29cfac) {
            ctx->pc = 0x29CFB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29CFACu;
            // 0x29cfb0: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29CFC8u;
            goto label_29cfc8;
        }
    }
    ctx->pc = 0x29CFB4u;
    // 0x29cfb4: 0x681021  addu        $v0, $v1, $t0
    ctx->pc = 0x29cfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x29cfb8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29cfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29cfbc: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x29cfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x29cfc0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x29CFC0u;
    {
        const bool branch_taken_0x29cfc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CFC0u;
            // 0x29cfc4: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cfc0) {
            ctx->pc = 0x29CFECu;
            goto label_29cfec;
        }
    }
    ctx->pc = 0x29CFC8u;
label_29cfc8:
    // 0x29cfc8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x29cfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x29cfcc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x29cfccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x29cfd0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x29cfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29cfd4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x29cfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x29cfd8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x29cfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29cfdc: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x29CFDCu;
    {
        const bool branch_taken_0x29cfdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29cfdc) {
            ctx->pc = 0x29CFE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29CFDCu;
            // 0x29cfe0: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29CFA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29cfa4;
        }
    }
    ctx->pc = 0x29CFE4u;
    // 0x29cfe4: 0x0  nop
    ctx->pc = 0x29cfe4u;
    // NOP
label_29cfe8:
    // 0x29cfe8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x29cfe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29cfec:
    // 0x29cfec: 0x3e00008  jr          $ra
    ctx->pc = 0x29CFECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29CFF4u;
    // 0x29cff4: 0x0  nop
    ctx->pc = 0x29cff4u;
    // NOP
    // 0x29cff8: 0x0  nop
    ctx->pc = 0x29cff8u;
    // NOP
    // 0x29cffc: 0x0  nop
    ctx->pc = 0x29cffcu;
    // NOP
}
