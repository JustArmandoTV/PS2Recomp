#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00352C00
// Address: 0x352c00 - 0x352ca0
void sub_00352C00_0x352c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00352C00_0x352c00");
#endif

    ctx->pc = 0x352c00u;

    // 0x352c00: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x352c00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x352c04: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x352c04u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
    // 0x352c08: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x352c08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
    // 0x352c0c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x352c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x352c10: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x352c10u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x352c14: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x352c14u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
    // 0x352c18: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x352c18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x352c1c: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x352c1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
    // 0x352c20: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x352c20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x352c24: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x352c24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
    // 0x352c28: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x352c28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x352c2c: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x352c2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x352c30: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x352c30u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x352c34: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x352c34u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
    // 0x352c38: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x352c38u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
    // 0x352c3c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x352c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x352c40: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x352c40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x352c44: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x352c44u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x352c48: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x352c48u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
    // 0x352c4c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x352c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x352c50: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x352c50u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
    // 0x352c54: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x352c54u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
    // 0x352c58: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x352c58u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
    // 0x352c5c: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x352c5cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x352c60: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x352c60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x352c64: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x352c64u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x352c68: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x352c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x352c6c: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x352c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
    // 0x352c70: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x352c70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
    // 0x352c74: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x352c74u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x352c78: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x352c78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
    // 0x352c7c: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x352c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
    // 0x352c80: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x352c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x352c84: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x352c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x352c88: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x352c88u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
    // 0x352c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x352C8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x352C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x352C8Cu;
            // 0x352c90: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x352C94u;
    // 0x352c94: 0x0  nop
    ctx->pc = 0x352c94u;
    // NOP
    // 0x352c98: 0x0  nop
    ctx->pc = 0x352c98u;
    // NOP
    // 0x352c9c: 0x0  nop
    ctx->pc = 0x352c9cu;
    // NOP
}
