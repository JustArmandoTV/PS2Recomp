#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00406F50
// Address: 0x406f50 - 0x406ff0
void sub_00406F50_0x406f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00406F50_0x406f50");
#endif

    ctx->pc = 0x406f50u;

    // 0x406f50: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x406f50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x406f54: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x406f54u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
    // 0x406f58: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x406f58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
    // 0x406f5c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x406f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x406f60: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x406f60u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x406f64: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x406f64u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
    // 0x406f68: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x406f68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x406f6c: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x406f6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
    // 0x406f70: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x406f70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x406f74: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x406f74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
    // 0x406f78: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x406f78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x406f7c: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x406f7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x406f80: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x406f80u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x406f84: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x406f84u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
    // 0x406f88: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x406f88u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
    // 0x406f8c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x406f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x406f90: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x406f90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x406f94: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x406f94u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x406f98: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x406f98u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
    // 0x406f9c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x406f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x406fa0: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x406fa0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
    // 0x406fa4: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x406fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
    // 0x406fa8: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x406fa8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
    // 0x406fac: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x406facu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x406fb0: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x406fb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x406fb4: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x406fb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x406fb8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x406fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x406fbc: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x406fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
    // 0x406fc0: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x406fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
    // 0x406fc4: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x406fc4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x406fc8: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x406fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
    // 0x406fcc: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x406fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
    // 0x406fd0: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x406fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x406fd4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x406fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x406fd8: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x406fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
    // 0x406fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x406FDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x406FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x406FDCu;
            // 0x406fe0: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x406FE4u;
    // 0x406fe4: 0x0  nop
    ctx->pc = 0x406fe4u;
    // NOP
    // 0x406fe8: 0x0  nop
    ctx->pc = 0x406fe8u;
    // NOP
    // 0x406fec: 0x0  nop
    ctx->pc = 0x406fecu;
    // NOP
}
