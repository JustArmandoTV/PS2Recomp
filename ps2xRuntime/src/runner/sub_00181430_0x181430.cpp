#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00181430
// Address: 0x181430 - 0x1814a8
void sub_00181430_0x181430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181430_0x181430");
#endif

    switch (ctx->pc) {
        case 0x181458u: goto label_181458;
        case 0x18146cu: goto label_18146c;
        default: break;
    }

    ctx->pc = 0x181430u;

label_181430:
    // 0x181430: 0x3e00008  jr          $ra
    ctx->pc = 0x181430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x181438u;
    // 0x181438: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x181438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18143c: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x18143cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x181440: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x181440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x181444: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x181444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x181448: 0x2450b4f8  addiu       $s0, $v0, -0x4B08
    ctx->pc = 0x181448u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948088));
    // 0x18144c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18144cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x181450: 0x24110027  addiu       $s1, $zero, 0x27
    ctx->pc = 0x181450u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x181454: 0x0  nop
    ctx->pc = 0x181454u;
    // NOP
label_181458:
    // 0x181458: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x181458u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18145c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18145Cu;
    {
        const bool branch_taken_0x18145c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18145c) {
            ctx->pc = 0x181460u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18145Cu;
            // 0x181460: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x181470u;
            goto label_181470;
        }
    }
    ctx->pc = 0x181464u;
    // 0x181464: 0xc06050c  jal         func_181430
    ctx->pc = 0x181464u;
    SET_GPR_U32(ctx, 31, 0x18146Cu);
    ctx->pc = 0x181468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181464u;
            // 0x181468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181430u;
    goto label_181430;
    ctx->pc = 0x18146Cu;
label_18146c:
    // 0x18146c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x18146cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_181470:
    // 0x181470: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x181470u;
    {
        const bool branch_taken_0x181470 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x181474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181470u;
            // 0x181474: 0x26100038  addiu       $s0, $s0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181470) {
            ctx->pc = 0x181458u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_181458;
        }
    }
    ctx->pc = 0x181478u;
    // 0x181478: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x181478u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18147c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18147cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x181480: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x181480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181484: 0x3e00008  jr          $ra
    ctx->pc = 0x181484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181484u;
            // 0x181488: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18148Cu;
    // 0x18148c: 0x0  nop
    ctx->pc = 0x18148cu;
    // NOP
    // 0x181490: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x181490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x181494: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x181494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x181498: 0xac44b484  sw          $a0, -0x4B7C($v0)
    ctx->pc = 0x181498u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294947972), GPR_U32(ctx, 4));
    // 0x18149c: 0x3e00008  jr          $ra
    ctx->pc = 0x18149Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1814A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18149Cu;
            // 0x1814a0: 0xac65b488  sw          $a1, -0x4B78($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294947976), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1814A4u;
    // 0x1814a4: 0x0  nop
    ctx->pc = 0x1814a4u;
    // NOP
}
