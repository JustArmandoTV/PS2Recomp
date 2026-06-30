#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0038ECA0
// Address: 0x38eca0 - 0x38ed40
void sub_0038ECA0_0x38eca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038ECA0_0x38eca0");
#endif

    ctx->pc = 0x38eca0u;

    // 0x38eca0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x38eca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x38eca4: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x38eca4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
    // 0x38eca8: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x38eca8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
    // 0x38ecac: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x38ecacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x38ecb0: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x38ecb0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x38ecb4: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x38ecb4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
    // 0x38ecb8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x38ecb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x38ecbc: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x38ecbcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
    // 0x38ecc0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x38ecc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x38ecc4: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x38ecc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
    // 0x38ecc8: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x38ecc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x38eccc: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x38ecccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x38ecd0: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x38ecd0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x38ecd4: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x38ecd4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
    // 0x38ecd8: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x38ecd8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
    // 0x38ecdc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x38ecdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x38ece0: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x38ece0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x38ece4: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x38ece4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x38ece8: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x38ece8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
    // 0x38ecec: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x38ececu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x38ecf0: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x38ecf0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
    // 0x38ecf4: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x38ecf4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
    // 0x38ecf8: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x38ecf8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
    // 0x38ecfc: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x38ecfcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x38ed00: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x38ed00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x38ed04: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x38ed04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x38ed08: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x38ed08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x38ed0c: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x38ed0cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
    // 0x38ed10: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x38ed10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
    // 0x38ed14: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x38ed14u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x38ed18: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x38ed18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
    // 0x38ed1c: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x38ed1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
    // 0x38ed20: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x38ed20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x38ed24: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x38ed24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x38ed28: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x38ed28u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
    // 0x38ed2c: 0x3e00008  jr          $ra
    ctx->pc = 0x38ED2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38ED30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38ED2Cu;
            // 0x38ed30: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38ED34u;
    // 0x38ed34: 0x0  nop
    ctx->pc = 0x38ed34u;
    // NOP
    // 0x38ed38: 0x0  nop
    ctx->pc = 0x38ed38u;
    // NOP
    // 0x38ed3c: 0x0  nop
    ctx->pc = 0x38ed3cu;
    // NOP
}
