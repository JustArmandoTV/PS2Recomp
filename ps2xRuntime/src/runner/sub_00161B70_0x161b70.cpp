#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00161B70
// Address: 0x161b70 - 0x161bd8
void sub_00161B70_0x161b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161B70_0x161b70");
#endif

    switch (ctx->pc) {
        case 0x161b88u: goto label_161b88;
        default: break;
    }

    ctx->pc = 0x161b70u;

    // 0x161b70: 0x28a30003  slti        $v1, $a1, 0x3
    ctx->pc = 0x161b70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x161b74: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x161B74u;
    {
        const bool branch_taken_0x161b74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x161B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161B74u;
            // 0x161b78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161b74) {
            ctx->pc = 0x161BD0u;
            goto label_161bd0;
        }
    }
    ctx->pc = 0x161B7Cu;
    // 0x161b7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x161b7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161b80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x161B80u;
    {
        const bool branch_taken_0x161b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161B80u;
            // 0x161b84: 0x24080077  addiu       $t0, $zero, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161b80) {
            ctx->pc = 0x161B8Cu;
            goto label_161b8c;
        }
    }
    ctx->pc = 0x161B88u;
label_161b88:
    // 0x161b88: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x161b88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_161b8c:
    // 0x161b8c: 0xe5102a  slt         $v0, $a3, $a1
    ctx->pc = 0x161b8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x161b90: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x161B90u;
    {
        const bool branch_taken_0x161b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161B90u;
            // 0x161b94: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161b90) {
            ctx->pc = 0x161BD0u;
            goto label_161bd0;
        }
    }
    ctx->pc = 0x161B98u;
    // 0x161b98: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x161b98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161b9c: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x161b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x161ba0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x161ba0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x161ba4: 0x14660004  bne         $v1, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x161BA4u;
    {
        const bool branch_taken_0x161ba4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x161ba4) {
            ctx->pc = 0x161BB8u;
            goto label_161bb8;
        }
    }
    ctx->pc = 0x161BACu;
    // 0x161bac: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x161bacu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x161bb0: 0x10480007  beq         $v0, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x161BB0u;
    {
        const bool branch_taken_0x161bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x161BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161BB0u;
            // 0x161bb4: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161bb0) {
            ctx->pc = 0x161BD0u;
            goto label_161bd0;
        }
    }
    ctx->pc = 0x161BB8u;
label_161bb8:
    // 0x161bb8: 0x5468fff3  bnel        $v1, $t0, . + 4 + (-0xD << 2)
    ctx->pc = 0x161BB8u;
    {
        const bool branch_taken_0x161bb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x161bb8) {
            ctx->pc = 0x161BBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x161BB8u;
            // 0x161bbc: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x161B88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_161b88;
        }
    }
    ctx->pc = 0x161BC0u;
    // 0x161bc0: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x161bc0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x161bc4: 0x5446fff0  bnel        $v0, $a2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x161BC4u;
    {
        const bool branch_taken_0x161bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x161bc4) {
            ctx->pc = 0x161BC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x161BC4u;
            // 0x161bc8: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x161B88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_161b88;
        }
    }
    ctx->pc = 0x161BCCu;
    // 0x161bcc: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x161bccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_161bd0:
    // 0x161bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x161BD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x161BD8u;
}
