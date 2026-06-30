#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004E3EC0
// Address: 0x4e3ec0 - 0x4e3f60
void sub_004E3EC0_0x4e3ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3EC0_0x4e3ec0");
#endif

    ctx->pc = 0x4e3ec0u;

    // 0x4e3ec0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e3ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x4e3ec4: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x4e3ec4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
    // 0x4e3ec8: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x4e3ec8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
    // 0x4e3ecc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e3eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x4e3ed0: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x4e3ed0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4e3ed4: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x4e3ed4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
    // 0x4e3ed8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e3ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x4e3edc: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x4e3edcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
    // 0x4e3ee0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e3ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x4e3ee4: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x4e3ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
    // 0x4e3ee8: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x4e3ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x4e3eec: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x4e3eecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x4e3ef0: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x4e3ef0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x4e3ef4: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x4e3ef4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
    // 0x4e3ef8: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x4e3ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
    // 0x4e3efc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e3efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x4e3f00: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x4e3f00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x4e3f04: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4e3f04u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x4e3f08: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x4e3f08u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
    // 0x4e3f0c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x4e3f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x4e3f10: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x4e3f10u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
    // 0x4e3f14: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x4e3f14u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
    // 0x4e3f18: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x4e3f18u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
    // 0x4e3f1c: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x4e3f1cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x4e3f20: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x4e3f20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x4e3f24: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x4e3f24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x4e3f28: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e3f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x4e3f2c: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x4e3f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
    // 0x4e3f30: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x4e3f30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
    // 0x4e3f34: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x4e3f34u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x4e3f38: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x4e3f38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
    // 0x4e3f3c: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x4e3f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
    // 0x4e3f40: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x4e3f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x4e3f44: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4e3f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4e3f48: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x4e3f48u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
    // 0x4e3f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x4E3F4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E3F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3F4Cu;
            // 0x4e3f50: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E3F54u;
    // 0x4e3f54: 0x0  nop
    ctx->pc = 0x4e3f54u;
    // NOP
    // 0x4e3f58: 0x0  nop
    ctx->pc = 0x4e3f58u;
    // NOP
    // 0x4e3f5c: 0x0  nop
    ctx->pc = 0x4e3f5cu;
    // NOP
}
