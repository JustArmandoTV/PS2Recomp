#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00125568
// Address: 0x125568 - 0x1255f0
void sub_00125568_0x125568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125568_0x125568");
#endif

    switch (ctx->pc) {
        case 0x1255b8u: goto label_1255b8;
        default: break;
    }

    ctx->pc = 0x125568u;

    // 0x125568: 0xdc8e0000  ld          $t6, 0x0($a0)
    ctx->pc = 0x125568u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12556c: 0xe7d3e  dsrl32      $t7, $t6, 20
    ctx->pc = 0x12556cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) >> (32 + 20));
    // 0x125570: 0xe6ffe  dsrl32      $t5, $t6, 31
    ctx->pc = 0x125570u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) >> (32 + 31));
    // 0x125574: 0x31ec07ff  andi        $t4, $t7, 0x7FF
    ctx->pc = 0x125574u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)2047);
    // 0x125578: 0xacad0004  sw          $t5, 0x4($a1)
    ctx->pc = 0x125578u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 13));
    // 0x12557c: 0x240ff000  addiu       $t7, $zero, -0x1000
    ctx->pc = 0x12557cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x125580: 0xf7b3a  dsrl        $t7, $t7, 12
    ctx->pc = 0x125580u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 12);
    // 0x125584: 0x1cf7024  and         $t6, $t6, $t7
    ctx->pc = 0x125584u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 15));
    // 0x125588: 0x1180000b  beqz        $t4, . + 4 + (0xB << 2)
    ctx->pc = 0x125588u;
    {
        const bool branch_taken_0x125588 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x12558Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125588u;
            // 0x12558c: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125588) {
            ctx->pc = 0x1255B8u;
            goto label_1255b8;
        }
    }
    ctx->pc = 0x125590u;
    // 0x125590: 0x240f07ff  addiu       $t7, $zero, 0x7FF
    ctx->pc = 0x125590u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x125594: 0x118f000a  beq         $t4, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x125594u;
    {
        const bool branch_taken_0x125594 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 15));
        ctx->pc = 0x125598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125594u;
            // 0x125598: 0xe7a38  dsll        $t7, $t6, 8 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) << 8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125594) {
            ctx->pc = 0x1255C0u;
            goto label_1255c0;
        }
    }
    ctx->pc = 0x12559Cu;
    // 0x12559c: 0x258dfc01  addiu       $t5, $t4, -0x3FF
    ctx->pc = 0x12559cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), 4294966273));
    // 0x1255a0: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1255a0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1255a4: 0xacad0008  sw          $t5, 0x8($a1)
    ctx->pc = 0x1255a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 13));
    // 0x1255a8: 0xe773c  dsll32      $t6, $t6, 28
    ctx->pc = 0x1255a8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 28));
    // 0x1255ac: 0x1ee7825  or          $t7, $t7, $t6
    ctx->pc = 0x1255acu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x1255b0: 0xfcaf0010  sd          $t7, 0x10($a1)
    ctx->pc = 0x1255b0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 15));
    // 0x1255b4: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1255b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1255b8:
    // 0x1255b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1255B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1255BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1255B8u;
            // 0x1255bc: 0xacaf0000  sw          $t7, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1255C0u;
label_1255c0:
    // 0x1255c0: 0x55c00003  bnel        $t6, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1255C0u;
    {
        const bool branch_taken_0x1255c0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        if (branch_taken_0x1255c0) {
            ctx->pc = 0x1255C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1255C0u;
            // 0x1255c4: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1255D0u;
            goto label_1255d0;
        }
    }
    ctx->pc = 0x1255C8u;
    // 0x1255c8: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1255C8u;
    {
        const bool branch_taken_0x1255c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1255CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1255C8u;
            // 0x1255cc: 0x240f0004  addiu       $t7, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1255c8) {
            ctx->pc = 0x1255B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1255b8;
        }
    }
    ctx->pc = 0x1255D0u;
label_1255d0:
    // 0x1255d0: 0xf7cfc  dsll32      $t7, $t7, 19
    ctx->pc = 0x1255d0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 19));
    // 0x1255d4: 0x1cf7824  and         $t7, $t6, $t7
    ctx->pc = 0x1255d4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & GPR_U64(ctx, 15));
    // 0x1255d8: 0x51e00003  beql        $t7, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1255D8u;
    {
        const bool branch_taken_0x1255d8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x1255d8) {
            ctx->pc = 0x1255DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1255D8u;
            // 0x1255dc: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1255E8u;
            goto label_1255e8;
        }
    }
    ctx->pc = 0x1255E0u;
    // 0x1255e0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1255e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1255e4: 0xacaf0000  sw          $t7, 0x0($a1)
    ctx->pc = 0x1255e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 15));
label_1255e8:
    // 0x1255e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1255E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1255ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1255E8u;
            // 0x1255ec: 0xfcae0010  sd          $t6, 0x10($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1255F0u;
}
