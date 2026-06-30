#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B6A90
// Address: 0x3b6a90 - 0x3b6b30
void sub_003B6A90_0x3b6a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B6A90_0x3b6a90");
#endif

    ctx->pc = 0x3b6a90u;

    // 0x3b6a90: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3b6a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3b6a94: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x3b6a94u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
    // 0x3b6a98: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x3b6a98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
    // 0x3b6a9c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3b6a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3b6aa0: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x3b6aa0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x3b6aa4: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x3b6aa4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
    // 0x3b6aa8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3b6aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3b6aac: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x3b6aacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
    // 0x3b6ab0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3b6ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3b6ab4: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x3b6ab4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
    // 0x3b6ab8: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x3b6ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x3b6abc: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x3b6abcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x3b6ac0: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x3b6ac0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x3b6ac4: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x3b6ac4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
    // 0x3b6ac8: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x3b6ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
    // 0x3b6acc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3b6accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3b6ad0: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x3b6ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x3b6ad4: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x3b6ad4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x3b6ad8: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x3b6ad8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
    // 0x3b6adc: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x3b6adcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x3b6ae0: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x3b6ae0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
    // 0x3b6ae4: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x3b6ae4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
    // 0x3b6ae8: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x3b6ae8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
    // 0x3b6aec: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x3b6aecu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x3b6af0: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x3b6af0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x3b6af4: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x3b6af4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x3b6af8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3b6af8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3b6afc: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x3b6afcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
    // 0x3b6b00: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x3b6b00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
    // 0x3b6b04: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x3b6b04u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x3b6b08: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x3b6b08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
    // 0x3b6b0c: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x3b6b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
    // 0x3b6b10: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x3b6b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x3b6b14: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3b6b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3b6b18: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x3b6b18u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
    // 0x3b6b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B6B1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B6B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6B1Cu;
            // 0x3b6b20: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B6B24u;
    // 0x3b6b24: 0x0  nop
    ctx->pc = 0x3b6b24u;
    // NOP
    // 0x3b6b28: 0x0  nop
    ctx->pc = 0x3b6b28u;
    // NOP
    // 0x3b6b2c: 0x0  nop
    ctx->pc = 0x3b6b2cu;
    // NOP
}
