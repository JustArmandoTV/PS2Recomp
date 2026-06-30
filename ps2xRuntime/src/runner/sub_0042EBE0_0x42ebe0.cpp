#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0042EBE0
// Address: 0x42ebe0 - 0x42ec80
void sub_0042EBE0_0x42ebe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042EBE0_0x42ebe0");
#endif

    ctx->pc = 0x42ebe0u;

    // 0x42ebe0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x42ebe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x42ebe4: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x42ebe4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
    // 0x42ebe8: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x42ebe8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
    // 0x42ebec: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x42ebecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x42ebf0: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x42ebf0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x42ebf4: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x42ebf4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
    // 0x42ebf8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x42ebf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x42ebfc: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x42ebfcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
    // 0x42ec00: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x42ec00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x42ec04: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x42ec04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
    // 0x42ec08: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x42ec08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x42ec0c: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x42ec0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x42ec10: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x42ec10u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x42ec14: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x42ec14u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
    // 0x42ec18: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x42ec18u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
    // 0x42ec1c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x42ec1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x42ec20: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x42ec20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x42ec24: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x42ec24u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x42ec28: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x42ec28u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
    // 0x42ec2c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x42ec2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x42ec30: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x42ec30u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
    // 0x42ec34: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x42ec34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
    // 0x42ec38: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x42ec38u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
    // 0x42ec3c: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x42ec3cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x42ec40: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x42ec40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x42ec44: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x42ec44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x42ec48: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x42ec48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x42ec4c: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x42ec4cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
    // 0x42ec50: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x42ec50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
    // 0x42ec54: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x42ec54u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x42ec58: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x42ec58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
    // 0x42ec5c: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x42ec5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
    // 0x42ec60: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x42ec60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x42ec64: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x42ec64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x42ec68: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x42ec68u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
    // 0x42ec6c: 0x3e00008  jr          $ra
    ctx->pc = 0x42EC6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42EC70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42EC6Cu;
            // 0x42ec70: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42EC74u;
    // 0x42ec74: 0x0  nop
    ctx->pc = 0x42ec74u;
    // NOP
    // 0x42ec78: 0x0  nop
    ctx->pc = 0x42ec78u;
    // NOP
    // 0x42ec7c: 0x0  nop
    ctx->pc = 0x42ec7cu;
    // NOP
}
