#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00556880
// Address: 0x556880 - 0x556900
void sub_00556880_0x556880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00556880_0x556880");
#endif

    switch (ctx->pc) {
        case 0x5568b0u: goto label_5568b0;
        default: break;
    }

    ctx->pc = 0x556880u;

    // 0x556880: 0x801826  xor         $v1, $a0, $zero
    ctx->pc = 0x556880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 0));
    // 0x556884: 0xa01026  xor         $v0, $a1, $zero
    ctx->pc = 0x556884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 0));
    // 0x556888: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x556888u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x55688c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x55688cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x556890: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x556890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x556894: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x556894u;
    {
        const bool branch_taken_0x556894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x556894) {
            ctx->pc = 0x556898u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x556894u;
            // 0x556898: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5568A4u;
            goto label_5568a4;
        }
    }
    ctx->pc = 0x55689Cu;
    // 0x55689c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x55689Cu;
    {
        const bool branch_taken_0x55689c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5568A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x55689Cu;
            // 0x5568a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x55689c) {
            ctx->pc = 0x5568ECu;
            goto label_5568ec;
        }
    }
    ctx->pc = 0x5568A4u;
label_5568a4:
    // 0x5568a4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x5568a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x5568a8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x5568A8u;
    {
        const bool branch_taken_0x5568a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x5568ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5568A8u;
            // 0x5568ac: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5568a8) {
            ctx->pc = 0x5568E0u;
            goto label_5568e0;
        }
    }
    ctx->pc = 0x5568B0u;
label_5568b0:
    // 0x5568b0: 0x90880000  lbu         $t0, 0x0($a0)
    ctx->pc = 0x5568b0u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x5568b4: 0x306900ff  andi        $t1, $v1, 0xFF
    ctx->pc = 0x5568b4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x5568b8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x5568b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5568bc: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x5568bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x5568c0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x5568c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x5568c4: 0x1284026  xor         $t0, $t1, $t0
    ctx->pc = 0x5568c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 8));
    // 0x5568c8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x5568c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x5568cc: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x5568ccu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x5568d0: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x5568d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x5568d4: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x5568d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x5568d8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x5568D8u;
    {
        const bool branch_taken_0x5568d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x5568DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5568D8u;
            // 0x5568dc: 0x681826  xor         $v1, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5568d8) {
            ctx->pc = 0x5568B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5568b0;
        }
    }
    ctx->pc = 0x5568E0u;
label_5568e0:
    // 0x5568e0: 0x601027  not         $v0, $v1
    ctx->pc = 0x5568e0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x5568e4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x5568e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x5568e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x5568e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5568ec:
    // 0x5568ec: 0x3e00008  jr          $ra
    ctx->pc = 0x5568ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5568F4u;
    // 0x5568f4: 0x0  nop
    ctx->pc = 0x5568f4u;
    // NOP
    // 0x5568f8: 0x0  nop
    ctx->pc = 0x5568f8u;
    // NOP
    // 0x5568fc: 0x0  nop
    ctx->pc = 0x5568fcu;
    // NOP
}
