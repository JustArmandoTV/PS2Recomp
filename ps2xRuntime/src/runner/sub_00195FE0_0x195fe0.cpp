#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00195FE0
// Address: 0x195fe0 - 0x196068
void sub_00195FE0_0x195fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195FE0_0x195fe0");
#endif

    switch (ctx->pc) {
        case 0x195ff0u: goto label_195ff0;
        case 0x196010u: goto label_196010;
        case 0x196038u: goto label_196038;
        default: break;
    }

    ctx->pc = 0x195fe0u;

    // 0x195fe0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x195fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x195fe4: 0x2403017f  addiu       $v1, $zero, 0x17F
    ctx->pc = 0x195fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 383));
    // 0x195fe8: 0x2444ff38  addiu       $a0, $v0, -0xC8
    ctx->pc = 0x195fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967096));
    // 0x195fec: 0x0  nop
    ctx->pc = 0x195fecu;
    // NOP
label_195ff0:
    // 0x195ff0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x195ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x195ff4: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x195ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x195ff8: 0x0  nop
    ctx->pc = 0x195ff8u;
    // NOP
    // 0x195ffc: 0x0  nop
    ctx->pc = 0x195ffcu;
    // NOP
    // 0x196000: 0x0  nop
    ctx->pc = 0x196000u;
    // NOP
    // 0x196004: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x196004u;
    {
        const bool branch_taken_0x196004 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x196008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196004u;
            // 0x196008: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196004) {
            ctx->pc = 0x195FF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_195ff0;
        }
    }
    ctx->pc = 0x19600Cu;
    // 0x19600c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19600cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196010:
    // 0x196010: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x196010u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x196014: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x196014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x196018: 0x28620100  slti        $v0, $v1, 0x100
    ctx->pc = 0x196018u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x19601c: 0x0  nop
    ctx->pc = 0x19601cu;
    // NOP
    // 0x196020: 0x0  nop
    ctx->pc = 0x196020u;
    // NOP
    // 0x196024: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x196024u;
    {
        const bool branch_taken_0x196024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x196028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196024u;
            // 0x196028: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196024) {
            ctx->pc = 0x196010u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_196010;
        }
    }
    ctx->pc = 0x19602Cu;
    // 0x19602c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19602cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x196030: 0x2403017f  addiu       $v1, $zero, 0x17F
    ctx->pc = 0x196030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 383));
    // 0x196034: 0x0  nop
    ctx->pc = 0x196034u;
    // NOP
label_196038:
    // 0x196038: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x196038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19603c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x19603cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x196040: 0x0  nop
    ctx->pc = 0x196040u;
    // NOP
    // 0x196044: 0x0  nop
    ctx->pc = 0x196044u;
    // NOP
    // 0x196048: 0x0  nop
    ctx->pc = 0x196048u;
    // NOP
    // 0x19604c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x19604Cu;
    {
        const bool branch_taken_0x19604c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x196050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19604Cu;
            // 0x196050: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19604c) {
            ctx->pc = 0x196038u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_196038;
        }
    }
    ctx->pc = 0x196054u;
    // 0x196054: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x196054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x196058: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x196058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x19605c: 0x244200b8  addiu       $v0, $v0, 0xB8
    ctx->pc = 0x19605cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x196060: 0x3e00008  jr          $ra
    ctx->pc = 0x196060u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196060u;
            // 0x196064: 0xac626a64  sw          $v0, 0x6A64($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 27236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x196068u;
}
