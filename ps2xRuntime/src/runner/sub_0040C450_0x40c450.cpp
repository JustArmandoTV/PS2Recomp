#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0040C450
// Address: 0x40c450 - 0x40c4f0
void sub_0040C450_0x40c450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040C450_0x40c450");
#endif

    ctx->pc = 0x40c450u;

    // 0x40c450: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x40c450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x40c454: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x40c454u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
    // 0x40c458: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x40c458u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
    // 0x40c45c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x40c45cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x40c460: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x40c460u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x40c464: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x40c464u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
    // 0x40c468: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x40c468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x40c46c: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x40c46cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
    // 0x40c470: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x40c470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x40c474: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x40c474u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
    // 0x40c478: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x40c478u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x40c47c: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x40c47cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x40c480: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x40c480u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x40c484: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x40c484u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
    // 0x40c488: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x40c488u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
    // 0x40c48c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x40c48cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x40c490: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x40c490u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x40c494: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x40c494u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x40c498: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x40c498u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
    // 0x40c49c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x40c49cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x40c4a0: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x40c4a0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
    // 0x40c4a4: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x40c4a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
    // 0x40c4a8: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x40c4a8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
    // 0x40c4ac: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x40c4acu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x40c4b0: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x40c4b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x40c4b4: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x40c4b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x40c4b8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x40c4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x40c4bc: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x40c4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
    // 0x40c4c0: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x40c4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
    // 0x40c4c4: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x40c4c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x40c4c8: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x40c4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
    // 0x40c4cc: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x40c4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
    // 0x40c4d0: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x40c4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x40c4d4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x40c4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x40c4d8: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x40c4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
    // 0x40c4dc: 0x3e00008  jr          $ra
    ctx->pc = 0x40C4DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40C4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40C4DCu;
            // 0x40c4e0: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40C4E4u;
    // 0x40c4e4: 0x0  nop
    ctx->pc = 0x40c4e4u;
    // NOP
    // 0x40c4e8: 0x0  nop
    ctx->pc = 0x40c4e8u;
    // NOP
    // 0x40c4ec: 0x0  nop
    ctx->pc = 0x40c4ecu;
    // NOP
}
