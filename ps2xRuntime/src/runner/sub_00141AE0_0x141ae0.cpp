#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00141AE0
// Address: 0x141ae0 - 0x141b30
void sub_00141AE0_0x141ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141AE0_0x141ae0");
#endif

    ctx->pc = 0x141ae0u;

    // 0x141ae0: 0xaf858230  sw          $a1, -0x7DD0($gp)
    ctx->pc = 0x141ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935088), GPR_U32(ctx, 5));
    // 0x141ae4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x141ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141ae8: 0xaf848224  sw          $a0, -0x7DDC($gp)
    ctx->pc = 0x141ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935076), GPR_U32(ctx, 4));
    // 0x141aec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x141aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141af0: 0xaf868228  sw          $a2, -0x7DD8($gp)
    ctx->pc = 0x141af0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935080), GPR_U32(ctx, 6));
    // 0x141af4: 0x14c30002  bne         $a2, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x141AF4u;
    {
        const bool branch_taken_0x141af4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x141AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141AF4u;
            // 0x141af8: 0xaf87822c  sw          $a3, -0x7DD4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935084), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141af4) {
            ctx->pc = 0x141B00u;
            goto label_141b00;
        }
    }
    ctx->pc = 0x141AFCu;
    // 0x141afc: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x141afcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
label_141b00:
    // 0x141b00: 0x7203c  dsll32      $a0, $a3, 0
    ctx->pc = 0x141b00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 0));
    // 0x141b04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x141b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141b08: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x141b08u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x141b0c: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x141B0Cu;
    {
        const bool branch_taken_0x141b0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x141b0c) {
            ctx->pc = 0x141B10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x141B0Cu;
            // 0x141b10: 0xff858238  sd          $a1, -0x7DC8($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294935096), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x141B1Cu;
            goto label_141b1c;
        }
    }
    ctx->pc = 0x141B14u;
    // 0x141b14: 0x34a50004  ori         $a1, $a1, 0x4
    ctx->pc = 0x141b14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
    // 0x141b18: 0xff858238  sd          $a1, -0x7DC8($gp)
    ctx->pc = 0x141b18u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935096), GPR_U64(ctx, 5));
label_141b1c:
    // 0x141b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x141B1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x141B24u;
    // 0x141b24: 0x0  nop
    ctx->pc = 0x141b24u;
    // NOP
    // 0x141b28: 0x0  nop
    ctx->pc = 0x141b28u;
    // NOP
    // 0x141b2c: 0x0  nop
    ctx->pc = 0x141b2cu;
    // NOP
}
