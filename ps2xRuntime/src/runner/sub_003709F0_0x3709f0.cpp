#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003709F0
// Address: 0x3709f0 - 0x370a90
void sub_003709F0_0x3709f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003709F0_0x3709f0");
#endif

    ctx->pc = 0x3709f0u;

    // 0x3709f0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3709f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3709f4: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x3709f4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
    // 0x3709f8: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x3709f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
    // 0x3709fc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3709fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x370a00: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x370a00u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x370a04: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x370a04u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
    // 0x370a08: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x370a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x370a0c: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x370a0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
    // 0x370a10: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x370a10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x370a14: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x370a14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
    // 0x370a18: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x370a18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x370a1c: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x370a1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x370a20: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x370a20u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x370a24: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x370a24u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
    // 0x370a28: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x370a28u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
    // 0x370a2c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x370a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x370a30: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x370a30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x370a34: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x370a34u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x370a38: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x370a38u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
    // 0x370a3c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x370a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x370a40: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x370a40u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
    // 0x370a44: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x370a44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
    // 0x370a48: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x370a48u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
    // 0x370a4c: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x370a4cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x370a50: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x370a50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x370a54: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x370a54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x370a58: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x370a58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x370a5c: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x370a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
    // 0x370a60: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x370a60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
    // 0x370a64: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x370a64u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x370a68: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x370a68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
    // 0x370a6c: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x370a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
    // 0x370a70: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x370a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x370a74: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x370a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x370a78: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x370a78u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
    // 0x370a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x370A7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x370A7Cu;
            // 0x370a80: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x370A84u;
    // 0x370a84: 0x0  nop
    ctx->pc = 0x370a84u;
    // NOP
    // 0x370a88: 0x0  nop
    ctx->pc = 0x370a88u;
    // NOP
    // 0x370a8c: 0x0  nop
    ctx->pc = 0x370a8cu;
    // NOP
}
