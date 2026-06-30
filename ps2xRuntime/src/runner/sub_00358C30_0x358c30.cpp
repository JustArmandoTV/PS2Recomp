#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00358C30
// Address: 0x358c30 - 0x358cd0
void sub_00358C30_0x358c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358C30_0x358c30");
#endif

    ctx->pc = 0x358c30u;

    // 0x358c30: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x358c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x358c34: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x358c34u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
    // 0x358c38: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x358c38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
    // 0x358c3c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x358c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x358c40: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x358c40u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x358c44: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x358c44u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
    // 0x358c48: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x358c48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x358c4c: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x358c4cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
    // 0x358c50: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x358c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x358c54: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x358c54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
    // 0x358c58: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x358c58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x358c5c: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x358c5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x358c60: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x358c60u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x358c64: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x358c64u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
    // 0x358c68: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x358c68u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
    // 0x358c6c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x358c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x358c70: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x358c70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x358c74: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x358c74u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x358c78: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x358c78u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
    // 0x358c7c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x358c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x358c80: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x358c80u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
    // 0x358c84: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x358c84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
    // 0x358c88: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x358c88u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
    // 0x358c8c: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x358c8cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x358c90: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x358c90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x358c94: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x358c94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x358c98: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x358c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x358c9c: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x358c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
    // 0x358ca0: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x358ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
    // 0x358ca4: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x358ca4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x358ca8: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x358ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
    // 0x358cac: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x358cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
    // 0x358cb0: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x358cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x358cb4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x358cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x358cb8: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x358cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
    // 0x358cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x358CBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358CBCu;
            // 0x358cc0: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x358CC4u;
    // 0x358cc4: 0x0  nop
    ctx->pc = 0x358cc4u;
    // NOP
    // 0x358cc8: 0x0  nop
    ctx->pc = 0x358cc8u;
    // NOP
    // 0x358ccc: 0x0  nop
    ctx->pc = 0x358cccu;
    // NOP
}
